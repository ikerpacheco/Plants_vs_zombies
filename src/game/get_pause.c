/*
** EPITECH PROJECT, 2022
** get_pause
** File description:
** get the pause
*/

#include "../../include/my.h"

int short_seed(void)
{
    char *ptr = malloc(sizeof(int) * 1);
    unsigned int  new = my_atoi(ptr);
    return new;
}

void get_pause(t_game *game, t_buttons *buttons)
{
    draw_sprites(game, buttons);
    sfRenderWindow_drawSprite(game->window, game->pause->black, NULL);
    sfRenderWindow_drawSprite(game->window, game->pause->exit, NULL);
    sfRenderWindow_drawSprite(game->window, game->pause->menu, NULL);
    sfRenderWindow_drawSprite(game->window, game->pause->resume, NULL);
    move_button(game->pause->exit, game,
    (sfIntRect){1790, 880, 500 * 1.3, 80 * 1.3});
    move_button(game->pause->menu, game,
    (sfIntRect){1790, 755, 500 * 1.3, 80 * 1.3});
    move_button(game->pause->resume, game,
    (sfIntRect){1790, 630, 500 * 1.3, 80 * 1.3});
}

void idle_pause(t_game *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfFloatRect rect = sfSprite_getGlobalBounds(game->pause->pause);

    if (sfFloatRect_contains(&rect, mouse.x, mouse.y))
        sfSprite_setTexture(game->pause->pause, game->pause->idle_t, sfTrue);
    else
        sfSprite_setTexture(game->pause->pause, game->pause->pause_t, sfTrue);
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfFloatRect_contains(&rect, mouse.x, mouse.y))
            game->status = STOP;
    }
}
