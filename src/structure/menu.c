/*
** EPITECH PROJECT, 2022
** menu
** File description:
** initialization of menu
*/

#include "../../include/my.h"

t_menu *init_menu(void)
{
    t_menu *menu = malloc(sizeof(t_menu));

    menu->status = MENU;
    menu->background_s = sfSprite_create();
    menu->background_t = sfTexture_createFromFile
    ("media/background.png", NULL);
    sfSprite_setTexture(menu->background_s, menu->background_t, sfTrue);
    menu->clock = sfClock_create();
    menu->buttons = init_buttons();
    menu->info = init_info();
    menu->handbook = init_handbook();
    menu->settings = init_settings();
    return menu;
}
