/*
** EPITECH PROJECT, 2022
** info
** File description:
** c file of the info.h
*/

#include "../../include/my.h"

t_info *init_info(void)
{
    t_info *info = malloc(sizeof(t_info));

    info->info_s = sfSprite_create();
    info->info_t = sfTexture_createFromFile("media/info.png", NULL);
    sfSprite_setTexture(info->info_s, info->info_t, sfTrue);
    info->menu_s = sfSprite_create();
    info->menu_t = sfTexture_createFromFile
    ("media/buttons/main_menu.png", NULL);
    sfSprite_setTexture(info->menu_s, info->menu_t, sfTrue);
    sfSprite_setPosition(info->menu_s, (sfVector2f){1800, 800});
    sfSprite_setScale(info->menu_s, (sfVector2f){1.3, 1.3});
    info->rect_menu = (sfIntRect){1800, 800, 500 * 1.3, 80 * 1.3};
    info->status = 0;
    return info;
}
