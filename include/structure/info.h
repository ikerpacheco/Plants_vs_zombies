/*
** EPITECH PROJECT, 2022
** info
** File description:
** info menu
*/

#include "../my.h"

#ifndef INFO
    #define INFO

    typedef struct s_info {
        sfSprite *info_s;
        sfTexture *info_t;
        sfSprite *menu_s;
        sfTexture *menu_t;
        sfIntRect rect_menu;
        sfVector2f pos_menu;
        int status;
    } t_info;

#endif /* !INFO */
