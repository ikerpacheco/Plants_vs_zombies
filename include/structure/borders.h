/*
** EPITECH PROJECT, 2022
** Enemies
** File description:
** Enemies
*/

#include "../my.h"

#ifndef BORDERS
    #define BORDERS

    typedef struct s_borders {
        sfSprite *border1;
        sfTexture *border1_t;
        sfIntRect rect1;
        sfSprite *border2;
        sfTexture *border2_t;
        sfIntRect rect2;
        sfSprite *border3;
        sfTexture *border3_t;
        sfIntRect rect3;
        sfSprite *border4;
        sfTexture *border4_t;
        sfIntRect rect4;
        sfTexture *selected;
        sfTexture *non_selected;
    } t_borders;

#endif /* !borders */
