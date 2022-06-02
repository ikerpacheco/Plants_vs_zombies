/*
** EPITECH PROJECT, 2022
** get_handbook
** File description:
** manage the handbook menu
*/

#include "../../include/my.h"

void menu_button(t_game *game, t_handbook *handbook, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    handbook->pos_menu = sfSprite_getPosition(handbook->menu_s);
    rect = (sfIntRect){handbook->pos_menu.x,
    handbook->pos_menu.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y))
            handbook->status = 1;
    }
}

void event_handbook(t_game *game, t_handbook *handbook)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        menu_button(game, handbook, event);
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(game->window);
    }
    return;
}

void get_handbook(t_game *game, t_menu *menu)
{
    if (menu->handbook->status == 0) {
        sfRenderWindow_drawSprite(game->window, menu->handbook->back_s, NULL);
        sfRenderWindow_drawSprite(game->window, menu->handbook->menu_s, NULL);
        move_button(menu->handbook->menu_s, game, menu->handbook->rect_menu);
    } else {
        menu->status = MENU;
        menu->handbook->status = 0;
    }
}
