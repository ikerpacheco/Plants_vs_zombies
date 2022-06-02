/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

void place_tower(t_game *game, sfVector2i mouse)
{
    int i = 0;

    for (i; i < 4; i++) {
        for (int z = 1; z < 7; z++) {
            get_towers(game, z, i, mouse);
        }
    }
}

int check_tower(t_game *game, sfVector2i mouse)
{
    if (sfIntRect_contains(&game->borders->rect1, mouse.x, mouse.y))
        return 1;
    if (sfIntRect_contains(&game->borders->rect2, mouse.x, mouse.y))
        return 2;
    if (sfIntRect_contains(&game->borders->rect3, mouse.x, mouse.y))
        return 3;
    if (sfIntRect_contains(&game->borders->rect4, mouse.x, mouse.y))
        return 4;
}

void map_events(t_game *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        idle_turrets(game);
        idle_pause(game, event);
        info_tower(mouse, game, event);
        if (event.type == sfEvtKeyPressed &&
        event.key.code == sfKeyEscape)
            game->status = STOP;
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
    }
}
