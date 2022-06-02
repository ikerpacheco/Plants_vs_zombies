/*
** EPITECH PROJECT, 2022
** event_about
** File description:
** event_about
*/

#include "../../include/my.h"

void manage_menu(t_game *game, t_info *info, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    info->pos_menu = sfSprite_getPosition(info->menu_s);
    rect = (sfIntRect){info->pos_menu.x,
    info->pos_menu.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y))
            info->status = 1;
    }
}

void events_about(t_game *game, t_info *info)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        manage_menu(game, info, event);
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(game->window);
    }
    return;
}
