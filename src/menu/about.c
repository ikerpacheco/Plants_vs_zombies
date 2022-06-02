/*
** EPITECH PROJECT, 2022
** about
** File description:
** file for the about menu
*/

#include "../../include/my.h"

void get_about(t_menu *menu, t_game *game)
{
    if (menu->info->status == 0) {
        sfRenderWindow_drawSprite(game->window, menu->info->info_s, NULL);
        sfRenderWindow_drawSprite(game->window, menu->info->menu_s, NULL);
        move_button(menu->info->menu_s, game, menu->info->rect_menu);
    } else {
        menu->status = MENU;
        menu->info->status = 0;
    }
}
