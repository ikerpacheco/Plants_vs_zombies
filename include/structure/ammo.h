/*
** EPITECH PROJECT, 2022
** Enemies
** File description:
** Enemies
*/

#include "../my.h"
#include "./towers.h"

#ifndef AMMO
    #define AMMO

    typedef struct s_ammo {
        int speed;
        int damage;
        sfSprite *ammo;
        sfVector2f pos;
        sfVector2f tower_pos;
        t_towers *tower;
        struct s_ammo *next;
    } t_ammo;

#endif /* !ammo */
