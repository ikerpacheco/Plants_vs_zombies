/*
** EPITECH PROJECT, 2022
** menu
** File description:
** menu structure
*/

#include "../my.h"
#include "./buttons.h"
#include "./info.h"
#include "./handbook.h"
#include "./settings.h"
#include "./sound.h"

#ifndef MENU_STRUCT
    #define MENU_STRUCT

    typedef struct s_menu {
        sfSprite *background_s;
        sfTexture *background_t;
        sfClock *clock;
        t_buttons *buttons;
        t_info *info;
        t_handbook *handbook;
        t_settings *settings;
        sfSprite *duck;
        sfTexture *duck_t;
        sfIntRect rect;
        sfSprite *duck_two;
        sfTexture *duck_tw;
        sfIntRect rect_two;
        int status;
    } t_menu;

#endif /* !MENU_STRUCT */
