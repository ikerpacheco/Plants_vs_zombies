/*
** EPITECH PROJECT, 2022
** menu
** File description:
** menu handling function
*/

#include "../../include/my.h"

void sprite_destroy(t_game *game, t_menu *menu)
{
    sfSprite_destroy(menu->background_s);
    sfSprite_destroy(menu->buttons->about_s);
    sfSprite_destroy(menu->buttons->help_s);
    sfSprite_destroy(menu->buttons->new_s);
    sfSprite_destroy(menu->buttons->quit_s);
    sfSprite_destroy(menu->buttons->settings_s);
    sfSprite_destroy(menu->buttons->stat_s);
    sfSprite_destroy(menu->handbook->back_s);
    sfSprite_destroy(menu->handbook->menu_s);
    sfSprite_destroy(menu->info->info_s);
    sfSprite_destroy(menu->info->menu_s);
    sfSprite_destroy(menu->settings->back_s);
    sfSprite_destroy(menu->settings->fps1_s);
    sfSprite_destroy(menu->settings->fps2_s);
    sfSprite_destroy(menu->settings->fps3_s);
    sfSprite_destroy(menu->settings->menu_s);
    sfSprite_destroy(menu->settings->music_s);
    sfSprite_destroy(menu->settings->sound_s);
}

void destroy(t_game *game, t_menu *menu)
{
    sfTexture_destroy(menu->background_t);
    sfTexture_destroy(menu->buttons->about_t);
    sfTexture_destroy(menu->buttons->help_t);
    sfTexture_destroy(menu->buttons->new_t);
    sfTexture_destroy(menu->buttons->settings_t);
    sfTexture_destroy(menu->buttons->quit_t);
    sfTexture_destroy(menu->buttons->stat_t);
    sfTexture_destroy(menu->handbook->back_t);
    sfTexture_destroy(menu->handbook->menu_t);
    sfTexture_destroy(menu->info->info_t);
    sfTexture_destroy(menu->info->menu_t);
    sfTexture_destroy(menu->settings->back_t);
    sfTexture_destroy(menu->settings->fps1_t);
    sfTexture_destroy(menu->settings->fps2_t);
    sfTexture_destroy(menu->settings->fps3_t);
    sfTexture_destroy(menu->settings->music_t);
    sfTexture_destroy(menu->settings->sound_t);
    sfTexture_destroy(menu->settings->menu_t);
    sfMusic_pause(game->sound->menu_music);
    sprite_destroy(game, menu);
}

void get_menu(t_game *game, t_menu *menu)
{
    switch (menu->status) {
        case MENU: draw_menu(game, menu);
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
