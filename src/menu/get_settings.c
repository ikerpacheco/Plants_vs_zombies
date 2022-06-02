/*
** EPITECH PROJECT, 2022
** get_settungs
** File description:
** func to handle the settings part
*/

#include "../../include/my.h"

void menu_settings(t_game *game, t_settings *settings, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    settings->pos_menu = sfSprite_getPosition(settings->menu_s);
    rect = (sfIntRect){settings->pos_menu.x,
    settings->pos_menu.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y))
            settings->status = 1;
    }
}

void event_settings(t_game *game, t_settings *settings, t_sound *sound)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        menu_settings(game, settings, event);
        buttons_settings(game, settings, event, sound);
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(game->window);
    }
}

void get_settings(t_game *game, t_menu *menu)
{
    if (menu->settings->status == 0) {
        sfRenderWindow_drawSprite(game->window, menu->settings->back_s, NULL);
        sfRenderWindow_drawSprite(game->window, menu->settings->menu_s, NULL);
        sfRenderWindow_drawSprite(game->window, menu->settings->fps1_s, NULL);
        sfRenderWindow_drawSprite(game->window, menu->settings->fps2_s, NULL);
        sfRenderWindow_drawSprite(game->window, menu->settings->fps3_s, NULL);
        sfRenderWindow_drawSprite
        (game->window, menu->settings->music_s, NULL);
        sfRenderWindow_drawSprite
        (game->window, menu->settings->sound_s, NULL);
        move_button(menu->settings->menu_s, game, menu->settings->rect_menu);
    } else {
        menu->status = MENU;
        menu->settings->status = 0;
    }
}
