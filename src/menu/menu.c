/*
** EPITECH PROJECT, 2022
** menu
** File description:
** menu handling function
*/

#include "../../include/my.h"

void get_menu(t_game *game, t_menu *menu)
{
    switch (menu->status) {
        case MENU: draw_menu(game, menu);
            change_clock(game->clock, menu);
            get_buttons(menu->buttons, game);
            events_menu(game, menu);
            break;
        case ABOUT: get_about(menu, game);
            events_about(game, menu->info);
            break;
        case HANDBOOK: get_handbook(game, menu);
            event_handbook(game, menu->handbook);
            break;
        case SETTINGS: get_settings(game, menu);
            event_settings(game, menu->settings, game->sound);
            break;
        default:
            break;
    }
    return;
}
