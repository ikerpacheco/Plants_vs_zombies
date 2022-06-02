/*
** EPITECH PROJECT, 2022
** buttons
** File description:
** buttons inti function
*/

#include "../../include/my.h"

void create_sprites(t_buttons *buttons)
{
    buttons->quit_s = sfSprite_create();
    buttons->about_s = sfSprite_create();
    buttons->help_s = sfSprite_create();
    buttons->settings_s = sfSprite_create();
    buttons->stat_s = sfSprite_create();
    buttons->new_s = sfSprite_create();
    buttons->turret = sfSprite_create();
}

void get_textures(t_buttons *buttons)
{
    buttons->quit_t = sfTexture_createFromFile
    ("media/buttons/quit.png", NULL);
    sfSprite_setTexture(buttons->quit_s, buttons->quit_t, sfTrue);
    buttons->about_t = sfTexture_createFromFile
    ("media/buttons/about.png", NULL);
    sfSprite_setTexture(buttons->about_s, buttons->about_t, sfTrue);
    buttons->help_t = sfTexture_createFromFile
    ("media/buttons/handbook.png", NULL);
    sfSprite_setTexture(buttons->help_s, buttons->help_t, sfTrue);
    buttons->settings_t = sfTexture_createFromFile
    ("media/buttons/settings.png", NULL);
    sfSprite_setTexture(buttons->settings_s, buttons->settings_t, sfTrue);
    buttons->stat_t = sfTexture_createFromFile
    ("media/buttons/statistics.png", NULL);
    sfSprite_setTexture(buttons->stat_s, buttons->stat_t, sfTrue);
    buttons->new_t = sfTexture_createFromFile
    ("media/buttons/new_game.png", NULL);
    sfSprite_setTexture(buttons->new_s, buttons->new_t, sfTrue);
    buttons->turret_tx = sfTexture_createFromFile("media/stats.png", NULL);
    sfSprite_setTexture(buttons->turret, buttons->turret_tx, sfTrue);
}

void get_characteristics(t_buttons *buttons)
{
    sfSprite_setPosition(buttons->quit_s, (sfVector2f){1800, 800});
    sfSprite_setScale(buttons->quit_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(buttons->about_s, (sfVector2f){1800, 670});
    sfSprite_setScale(buttons->about_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(buttons->help_s, (sfVector2f){1800, 540});
    sfSprite_setScale(buttons->help_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(buttons->settings_s, (sfVector2f){1800, 410});
    sfSprite_setScale(buttons->settings_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(buttons->stat_s, (sfVector2f){1800, 280});
    sfSprite_setScale(buttons->stat_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(buttons->new_s, (sfVector2f){1800, 150});
    sfSprite_setScale(buttons->new_s, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(buttons->turret, (sfVector2f){1787, 0});
}

t_buttons *init_buttons(void)
{
    t_buttons *buttons = malloc(sizeof(t_buttons));

    create_sprites(buttons);
    get_textures(buttons);
    get_characteristics(buttons);
    buttons->rect_quit = (sfIntRect){1800, 800, 500 * 1.3, 80 * 1.3};
    buttons->rect_about = (sfIntRect){1800, 670, 500 * 1.3, 80 * 1.3};
    buttons->rect_help = (sfIntRect){1800, 540, 500 * 1.3, 80 * 1.3};
    buttons->rect_settings = (sfIntRect){1800, 410, 500 * 1.3, 80 * 1.3};
    buttons->rect_stat = (sfIntRect){1800, 280, 500 * 1.3, 80 * 1.3};
    buttons->rect_new = (sfIntRect){1800, 150, 500 * 1.3, 80 * 1.3};
    buttons->rect_turret = (sfIntRect){1787, 900, 300, 400};
    return buttons;
}
