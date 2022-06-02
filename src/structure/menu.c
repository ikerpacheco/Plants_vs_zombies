/*
** EPITECH PROJECT, 2022
** menu
** File description:
** initialization of menu
*/

#include "../../include/my.h"

void short_menu(t_menu *menu)
{
    menu->duck = sfSprite_create();
    menu->duck_t = sfTexture_createFromFile("media/ducks.png", NULL);
    sfSprite_setTexture(menu->duck, menu->duck_t, sfTrue);
    menu->rect = (sfIntRect){0, 0, 110, 110};
    menu->duck_two = sfSprite_create();
    menu->duck_tw = sfTexture_createFromFile("media/ducks.png", NULL);
    sfSprite_setTexture(menu->duck_two, menu->duck_tw, sfTrue);
    menu->rect_two = (sfIntRect){0, 0, 110, 110};
}

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
    short_menu(menu);
    return menu;
}
