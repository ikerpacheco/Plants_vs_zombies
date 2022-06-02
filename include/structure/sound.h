/*
** EPITECH PROJECT, 2022
** sound
** File description:
** sound
*/

#include "../my.h"

#ifndef SOUND
    #define SOUND

    typedef struct s_sound {
        sfMusic *menu_music;
        sfSound *button;
        sfSoundBuffer *butt_buf;
        sfSound *build;
        sfSoundBuffer *build_buff;
        sfMusic *game_music;
    } t_sound;

#endif /* !SOUND */
