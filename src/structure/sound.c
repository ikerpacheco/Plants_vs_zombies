/*
** EPITECH PROJECT, 2022
** sound
** File description:
** init sound
*/

#include "../../include/my.h"

t_sound *init_sounds(void)
{
    t_sound *sound = malloc(sizeof(t_sound));

    sound->menu_music = sfMusic_createFromFile("media/background.ogg");
    sfMusic_setLoop(sound->menu_music, sfTrue);
    sfMusic_setVolume(sound->menu_music, 70);
    sfMusic_play(sound->menu_music);
    sound->game_music = sfMusic_createFromFile("media/back.ogg");
    sfMusic_setLoop(sound->game_music, sfTrue);
    sfMusic_setVolume(sound->game_music, 100);
    sound->butt_buf = sfSoundBuffer_createFromFile("media/button.ogg");
    sound->button = sfSound_create();
    sfSound_setBuffer(sound->button, sound->butt_buf);
    sfSound_setVolume(sound->button, 100);
    sound->build_buff = sfSoundBuffer_createFromFile("media/build.ogg");
    sound->build = sfSound_create();
    sfSound_setBuffer(sound->build, sound->build_buff);
    sfSound_setVolume(sound->build, 100);
    return sound;
}
