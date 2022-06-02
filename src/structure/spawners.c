/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#include "../../include/my.h"

void set_spawners(t_spawners *spawners)
{
    sfSprite_scale(spawners->spawner1, (sfVector2f){1.8, 1.8});
    sfSprite_scale(spawners->spawner2, (sfVector2f){1.8, 1.8});
    sfSprite_scale(spawners->spawner3, (sfVector2f){1.8, 1.8});
    sfSprite_scale(spawners->spawner4, (sfVector2f){1.8, 1.8});
    sfSprite_setPosition(spawners->spawner1, (sfVector2f){100, 100});
    sfSprite_setPosition(spawners->spawner2, (sfVector2f){100, 315});
    sfSprite_setPosition(spawners->spawner3, (sfVector2f){100, 530});
    sfSprite_setPosition(spawners->spawner4, (sfVector2f){100, 745});
}

t_spawners *init_spawners(void)
{
    t_spawners *spawners = malloc(sizeof(t_spawners));

    spawners->spawner1 = sfSprite_create();
    spawners->spawner2 = sfSprite_create();
    spawners->spawner3 = sfSprite_create();
    spawners->spawner4 = sfSprite_create();
    spawners->spawner_t = sfTexture_createFromFile("media/spawner.png", NULL);
    sfSprite_setTexture(spawners->spawner1, spawners->spawner_t, sfTrue);
    sfSprite_setTexture(spawners->spawner2, spawners->spawner_t, sfTrue);
    sfSprite_setTexture(spawners->spawner3, spawners->spawner_t, sfTrue);
    sfSprite_setTexture(spawners->spawner4, spawners->spawner_t, sfTrue);
    set_spawners(spawners);
    return spawners;
}
