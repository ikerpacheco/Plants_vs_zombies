/*
** EPITECH PROJECT, 2022
** handbook
** File description:
** handbook init
*/

#include "../../include/my.h"

t_handbook *init_handbook(void)
{
    t_handbook *handbook = malloc(sizeof(t_handbook));

    handbook->back_s = sfSprite_create();
    handbook->back_t = sfTexture_createFromFile("media/handbook.png", NULL);
    sfSprite_setTexture(handbook->back_s, handbook->back_t, sfTrue);
    handbook->menu_s = sfSprite_create();
    handbook->menu_t = sfTexture_createFromFile
    ("media/buttons/main_menu.png", NULL);
    sfSprite_setTexture(handbook->menu_s, handbook->menu_t, sfTrue);
    sfSprite_setPosition(handbook->menu_s, (sfVector2f){1800, 900});
    sfSprite_setScale(handbook->menu_s, (sfVector2f){1.3, 1.3});
    handbook->rect_menu = (sfIntRect){1800, 900, 500 * 1.3, 80 * 1.3};
    handbook->status = 0;
    return handbook;
}
