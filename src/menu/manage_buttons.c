/*
** EPITECH PROJECT, 2022
** manage_buttons
** File description:
** file to manage buttons
*/

#include "../../include/my.h"

void move_other(sfSprite *button, t_game *game, sfIntRect rect, int move)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f pos = sfSprite_getPosition(button);

    if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
        if (pos.x <= move)
            return;
        sfSprite_move(button, (sfVector2f){-50, 0});
    } else {
        if (pos.x > 1785)
            return;
        sfSprite_move(button, (sfVector2f){50, 0});
    }
}

int move_button(sfSprite *button, t_game *game, sfIntRect rect)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f pos = sfSprite_getPosition(button);

    if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
        if (pos.x <= 1450)
            return 0;
        sfSprite_move(button, (sfVector2f){-50, 0});
    } else {
        if (pos.x > 1785)
            return 0;
        sfSprite_move(button, (sfVector2f){50, 0});
    }
    return 1;
}

void get_buttons(t_buttons *buttons, t_game *game)
{
    sfRenderWindow_drawSprite(game->window, buttons->quit_s, NULL);
    sfRenderWindow_drawSprite(game->window, buttons->about_s, NULL);
    sfRenderWindow_drawSprite(game->window, buttons->help_s, NULL);
    sfRenderWindow_drawSprite(game->window, buttons->settings_s, NULL);
    sfRenderWindow_drawSprite(game->window, buttons->stat_s, NULL);
    sfRenderWindow_drawSprite(game->window, buttons->new_s, NULL);
    move_button(buttons->quit_s, game, buttons->rect_quit);
    move_button(buttons->about_s, game, buttons->rect_about);
    move_button(buttons->help_s, game, buttons->rect_help);
    move_button(buttons->settings_s, game, buttons->rect_settings);
    move_button(buttons->stat_s, game, buttons->rect_stat);
    move_button(buttons->new_s, game, buttons->rect_new);
}
