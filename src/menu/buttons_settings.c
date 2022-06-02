/*
** EPITECH PROJECT, 2022
** music_settings
** File description:
** music and sound settings
*/

#include "../../include/my.h"

void music_handle(t_settings *settings, sfVector2i mouse, t_sound *sound)
{
    if (sfIntRect_contains(&settings->rect_music,
    mouse.x, mouse.y) && settings->music_status == 0) {
        settings->music_status = 1;
        settings->music_t =
        sfTexture_createFromFile("media/buttons/off.png", NULL);
        sfSprite_setTexture
        (settings->music_s, settings->music_t, sfTrue);
        sfMusic_pause(sound->menu_music);
    } else if (sfIntRect_contains(&settings->rect_music,
    mouse.x, mouse.y) && settings->music_status == 1) {
        settings->music_status = 0;
        settings->music_t =
        sfTexture_createFromFile("media/buttons/on.png", NULL);
        sfSprite_setTexture
        (settings->music_s, settings->music_t, sfTrue);
        sfMusic_play(sound->menu_music);
    }
}

void sound_handle(t_settings *settings, sfVector2i mouse)
{
    if (sfIntRect_contains(&settings->rect_sound,
    mouse.x, mouse.y) && settings->sound_status == 0) {
        settings->sound_status = 1;
        settings->sound_t =
        sfTexture_createFromFile("media/buttons/off.png", NULL);
        sfSprite_setTexture
        (settings->sound_s, settings->sound_t, sfTrue);
    } else if (sfIntRect_contains(&settings->rect_sound,
    mouse.x, mouse.y) && settings->sound_status == 1) {
        settings->sound_status = 0;
        settings->sound_t =
        sfTexture_createFromFile("media/buttons/on.png", NULL);
        sfSprite_setTexture
        (settings->sound_s, settings->sound_t, sfTrue);
    }
}

void buttons_settings(t_game *game, t_settings *settings,
sfEvent event, t_sound *sound)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);

    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        music_handle(settings, mouse, sound);
        sound_handle(settings, mouse);
        fps_handle(settings, mouse, game);
    }
}
