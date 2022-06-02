/*
** EPITECH PROJECT, 2022
** puase
** File description:
** pause
*/

#include "../my.h"

#ifndef PAUSE
    #define PAUSE

    typedef struct s_pause {
        int status;
        sfSprite *pause;
        sfTexture *pause_t;
        sfSprite *resume;
        sfTexture *resume_t;
        sfSprite *exit;
        sfTexture *exit_t;
        sfSprite *menu;
        sfTexture *menu_t;
        sfSprite *black;
        sfTexture *black_t;
        sfTexture *idle_t;
        sfColor color;
        sfText *text;
        sfClock *clock;
        sfTime time;
        sfFont *font;
    } t_pause;

#endif /* !PAUSE */
