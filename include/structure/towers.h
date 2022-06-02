/*
** EPITECH PROJECT, 2022
** Enemies
** File description:
** Enemies
*/

#include "../my.h"

#ifndef TOWERS
    #define TOWERS

    typedef struct s_towers {
        sfSprite *tower;
        sfTexture *tower_t;
        int hp;
        int damage;
        int attack_speed;
        int range;
        sfFloatRect dim;
        sfVector2f pos;
        sfClock *clock;
        int type;
        float elapsed;
    } t_towers;

#endif /* !towers */
