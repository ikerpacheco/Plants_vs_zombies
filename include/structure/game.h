/*
** EPITECH PROJECT, 2021
** game.h
** File description:
** game.h
*/

#include "../my.h"

#ifndef GAME
    #define GAME

    typedef struct s_game {
        int status;
        sfClock *clock;
        sfRenderWindow *window;
        sfSprite *background_s;
        sfTexture *background_t;
        t_spawners *spawners;
        t_text *text;
        sfFloatRect rect;
        int HP;
        t_enemies *enemies;
        t_ammo *ammo;
        t_towers *towers;
        char *path;
        t_borders *borders;
        t_positions *positions;
        t_sound *sound;
        t_pause *pause;
        int counter1;
        int counter;
        int counter2;
        int counter3;
        int counter4;
        int tower;
        int money;
        int level;
        int round;
        t_enemies **e_array;
        int e_counter;
        t_towers **t_array;
        int line1;
        int line2;
        int line3;
        int line4;
    } t_game;

#endif /* !GAME */
