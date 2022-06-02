/*
** EPITECH PROJECT, 2022
** settings
** File description:
** settings init func
*/

#include "../../include/my.h"

void settings_sprites(t_settings *settings)
{
    settings->back_s = sfSprite_create();
    sfSprite_setTexture(settings->back_s, settings->back_t, sfTrue);
    settings->fps1_s = sfSprite_create();
    sfSprite_setTexture(settings->fps1_s, settings->fps1_t, sfTrue);
    settings->fps2_s = sfSprite_create();
    sfSprite_setTexture(settings->fps2_s, settings->fps2_t, sfTrue);
    settings->fps3_s = sfSprite_create();
    sfSprite_setTexture(settings->fps3_s, settings->fps3_t, sfTrue);
    settings->menu_s = sfSprite_create();
    sfSprite_setTexture(settings->menu_s, settings->menu_t, sfTrue);
    settings->music_s = sfSprite_create();
    sfSprite_setTexture(settings->music_s, settings->music_t, sfTrue);
    settings->sound_s = sfSprite_create();
    sfSprite_setTexture(settings->sound_s, settings->sound_t, sfTrue);
}

void set_textures(t_settings *settings)
{
    settings->back_t = sfTexture_createFromFile("media/settings.png", NULL);
    settings->fps1_t = sfTexture_createFromFile
    ("media/buttons/not_ok.png", NULL);
    settings->fps2_t = sfTexture_createFromFile("media/buttons/ok.png", NULL);
    settings->fps3_t = sfTexture_createFromFile
    ("media/buttons/not_ok.png", NULL);
    settings->menu_t = sfTexture_createFromFile
    ("media/buttons/main_menu.png", NULL);
    settings->music_t = sfTexture_createFromFile
    ("media/buttons/on.png", NULL);
    settings->sound_t = sfTexture_createFromFile
    ("media/buttons/on.png", NULL);
}

void set_characteristics(t_settings *settings)
{
    sfSprite_setPosition(settings->menu_s, (sfVector2f){1800, 900});
    sfSprite_setScale(settings->menu_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(settings->fps1_s, (sfVector2f){150, 830});
    settings->rect_fps1 = (sfIntRect){150, 830, 70, 55};
    sfSprite_setPosition(settings->fps2_s, (sfVector2f){295, 830});
    settings->rect_fps2 = (sfIntRect){295, 830, 70, 55};
    sfSprite_setPosition(settings->fps3_s, (sfVector2f){439, 830});
    settings->rect_fps3 = (sfIntRect){439, 830, 70, 55};
    sfSprite_setPosition(settings->music_s, (sfVector2f){1100, 560});
    settings->rect_music = (sfIntRect){1100, 560, 70 * 1.3, 55 * 1.3};
    sfSprite_setScale(settings->music_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(settings->sound_s, (sfVector2f){1100, 695});
    settings->rect_sound = (sfIntRect){1100, 695, 70 * 1.3, 55 * 1.3};
    sfSprite_setScale(settings->sound_s, (sfVector2f){1.3, 1.3});
}

t_settings *init_settings(void)
{
    t_settings *settings = malloc(sizeof(t_settings));

    set_textures(settings);
    settings_sprites(settings);
    set_characteristics(settings);
    settings->music_status = 0;
    settings->status = 0;
    settings->sound_status = 0;
    settings->rect_menu = (sfIntRect){1800, 900, 500 * 1.3, 80 * 1.3};
    return settings;
}
