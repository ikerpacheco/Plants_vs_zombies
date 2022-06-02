/*
** EPITECH PROJECT, 2022
** buttons
** File description:
** buttons of game
*/

#include "../my.h"

#ifndef BUTTONS
    #define BUTTONS

    typedef struct s_buttons {
        sfSprite *quit_s;
        sfTexture *quit_t;
        sfIntRect rect_quit;
        sfVector2f pos_quit;
        sfSprite *new_s;
        sfTexture *new_t;
        sfIntRect rect_new;
        sfVector2f pos_new;
        sfSprite *stat_s;
        sfTexture *stat_t;
        sfIntRect rect_stat;
        sfVector2f pos_stat;
        sfSprite *settings_s;
        sfTexture *settings_t;
        sfIntRect rect_settings;
        sfVector2f pos_settings;
        sfSprite *help_s;
        sfTexture *help_t;
        sfIntRect rect_help;
        sfVector2f pos_help;
        sfSprite *about_s;
        sfTexture *about_t;
        sfIntRect rect_about;
        sfVector2f pos_about;
        sfSprite *turret;
        sfTexture *turret_tx;
        sfIntRect rect_turret;
    } t_buttons;

#endif /* !BUTTONS */
