/*
** EPITECH PROJECT, 2022
** Enemies
** File description:
** Enemies
*/

#include "../my.h"

#ifndef ENEMIES
    #define ENEMIES

    typedef struct s_enemies {
        sfSprite *enemy;
        sfTexture *enemy_t;
        int hp;
        int damage;
        int attack_speed;
        int range;
        sfFloatRect dim;
        sfVector2f pos;
        int status;
    } t_enemies;

#endif /* !enemies */
