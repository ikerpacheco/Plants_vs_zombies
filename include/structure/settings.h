/*
** EPITECH PROJECT, 2022
** settings
** File description:
** settings struct declaration
*/

#include "../my.h"

#ifndef SET
    #define SET

    typedef struct s_settings {
        sfSprite *back_s;
        sfTexture *back_t;
        sfSprite *menu_s;
        sfTexture *menu_t;
        sfIntRect rect_menu;
        sfVector2f pos_menu;
        sfSprite *fps1_s;
        sfTexture *fps1_t;
        sfIntRect rect_fps1;
        sfVector2f pos_fps1;
        sfSprite *fps2_s;
        sfTexture *fps2_t;
        sfIntRect rect_fps2;
        sfVector2f pos_fps2;
        sfSprite *fps3_s;
        sfTexture *fps3_t;
        sfIntRect rect_fps3;
        sfVector2f pos_fps3;
        sfSprite *music_s;
        sfTexture *music_t;
        sfIntRect rect_music;
        sfVector2f pos_music;
        int music_status;
        sfSprite *sound_s;
        sfTexture *sound_t;
        sfIntRect rect_sound;
        sfVector2f pos_sound;
        int sound_status;
        int status;
    } t_settings;

#endif /* !SETTINGS */
