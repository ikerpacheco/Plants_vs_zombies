/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

void check_selected(sfSprite *border, t_game *game, sfIntRect rect)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f pos = sfSprite_getPosition(border);

    if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
        sfSprite_setTexture(border, game->borders->selected, sfTrue);
    } else
        sfSprite_setTexture(border, game->borders->non_selected, sfTrue);
}

void idle_turrets(t_game *game)
{
    check_selected(game->borders->border1, game, game->borders->rect1);
    check_selected(game->borders->border2, game, game->borders->rect2);
    check_selected(game->borders->border3, game, game->borders->rect3);
    check_selected(game->borders->border4, game, game->borders->rect4);
}
