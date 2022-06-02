/*
** EPITECH PROJECT, 2021
** MY_STRLEN
** File description:
** Return the length of a given string.
*/

#include "../../include/my.h"

void erase_bullets(t_ammo *ammo, t_game *game)
{
    if (!ammo)
        return;
    while (ammo->next) {
        ammo->next->pos = sfSprite_getPosition(ammo->next->ammo);
        if (ammo->next->pos.x > 1920)
            ammo->next = (ammo->next->next ? ammo->next->next : NULL);
        if (!ammo->next)
            return;
        ammo = ammo->next;
    }
}

void if_bullets(t_game *game, char *path, sfFloatRect rect, int i)
{
    if (game->t_array[i]->elapsed > game->t_array[i]->attack_speed) {
        game->t_array[i]->elapsed = 0;
        rect.top = game->t_array[i]->pos.x;
        rect.width = game->t_array[i]->pos.y;
        game->ammo = create_ammo(path, rect, game->ammo, game->t_array[i]);
    }
}

void create_bullets(t_game *game)
{
    sfTime time = sfClock_restart(game->clock);
    float seconds = sfTime_asSeconds(time);

    for (int i = 0; i < game->counter; i++) {
        switch (game->t_array[i]->type) {
            case 1: game->path = "media/bullet3.png";
                game->rect.height, game->rect.left = 20, 7;
                break;
            case 2: game->path = "media/bullet2.png";
                game->rect.height, game->rect.left = 20, 8;
                break;
            case 3: game->path = "media/bullet1.png";
                game->rect.height, game->rect.left = 20, 6;
                break;
            default: continue;
                break;
        }
        game->t_array[i]->elapsed += seconds;
        if_bullets(game, game->path, game->rect, i);
    }
}
