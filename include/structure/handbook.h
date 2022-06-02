/*
** EPITECH PROJECT, 2022
** handbook
** File description:
** handbook struct
*/

#include "../my.h"

#ifndef HANDB
    #define HANDB

    typedef struct s_handbook {
        sfSprite *back_s;
        sfTexture *back_t;
        sfSprite *menu_s;
        sfTexture *menu_t;
        sfVector2f pos_menu;
        sfIntRect rect_menu;
        int status;
    } t_handbook;

#endif /* !HANDB */
