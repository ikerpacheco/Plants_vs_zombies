/*
** EPITECH PROJECT, 2022
** fps_handle
** File description:
** handling of the three buttons
*/

#include "../../include/my.h"

void low_fps(t_settings *settings, sfVector2i mouse, t_game *game)
{
    if (sfIntRect_contains(&settings->rect_fps1, mouse.x, mouse.y)) {
        settings->fps1_t = sfTexture_createFromFile
        ("media/buttons/ok.png", NULL);
        sfSprite_setTexture(settings->fps1_s, settings->fps1_t, sfTrue);
        settings->fps2_t = sfTexture_createFromFile
        ("media/buttons/not_ok.png", NULL);
        sfSprite_setTexture(settings->fps2_s, settings->fps2_t, sfTrue);
        settings->fps3_t = sfTexture_createFromFile
        ("media/buttons/not_ok.png", NULL);
        sfSprite_setTexture(settings->fps3_s, settings->fps3_t, sfTrue);
        sfRenderWindow_setFramerateLimit(game->window, 30);
    }
}

void medium_fps(t_settings *settings, sfVector2i mouse, t_game *game)
{
    if (sfIntRect_contains(&settings->rect_fps2, mouse.x, mouse.y)) {
        settings->fps2_t = sfTexture_createFromFile
        ("media/buttons/ok.png", NULL);
        sfSprite_setTexture(settings->fps2_s, settings->fps2_t, sfTrue);
        settings->fps1_t = sfTexture_createFromFile
        ("media/buttons/not_ok.png", NULL);
        sfSprite_setTexture(settings->fps1_s, settings->fps1_t, sfTrue);
        settings->fps3_t = sfTexture_createFromFile
        ("media/buttons/not_ok.png", NULL);
        sfSprite_setTexture(settings->fps3_s, settings->fps3_t, sfTrue);
        sfRenderWindow_setFramerateLimit(game->window, 60);
    }
}

void high_fps(t_settings *settings, sfVector2i mouse, t_game *game)
{
    if (sfIntRect_contains(&settings->rect_fps3, mouse.x, mouse.y)) {
        settings->fps3_t = sfTexture_createFromFile
        ("media/buttons/ok.png", NULL);
        sfSprite_setTexture(settings->fps3_s, settings->fps3_t, sfTrue);
        settings->fps1_t = sfTexture_createFromFile
        ("media/buttons/not_ok.png", NULL);
        sfSprite_setTexture(settings->fps1_s, settings->fps1_t, sfTrue);
        settings->fps2_t = sfTexture_createFromFile
        ("media/buttons/not_ok.png", NULL);
        sfSprite_setTexture(settings->fps2_s, settings->fps2_t, sfTrue);
        sfRenderWindow_setFramerateLimit(game->window, 120);
    }
}

void fps_handle(t_settings *settings, sfVector2i mouse, t_game *game)
{
    low_fps(settings, mouse, game);
    medium_fps(settings, mouse, game);
    high_fps(settings, mouse, game);
}
