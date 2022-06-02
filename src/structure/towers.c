/*
** EPITECH PROJECT, 2022
** create_towers
** File description:
** create the different towers
*/

#include "../../include/my.h"

t_towers *create_infantry(sfVector2f pos)
{
    t_towers *towers = malloc(sizeof(t_towers));

    towers->hp = 100;
    towers->damage = 20;
    towers->attack_speed = 1;
    towers->range = 70;
    towers->pos = pos;
    towers->tower = sfSprite_create();
    towers->tower_t = sfTexture_createFromFile
    ("media/infantry.png", NULL);
    sfSprite_setTexture(towers->tower, towers->tower_t, sfTrue);
    sfSprite_setPosition(towers->tower, pos);
    sfSprite_setScale(towers->tower, (sfVector2f){2, 2});
    towers->clock = sfClock_create();
    towers->type = 1;
    towers->elapsed = 0;
    return towers;
}

t_towers *create_snipers(sfVector2f pos)
{
    t_towers *towers = malloc(sizeof(t_towers));

    towers->hp = 50;
    towers->damage = 100;
    towers->attack_speed = 5;
    towers->range = 100;
    towers->pos = pos;
    towers->tower = sfSprite_create();
    towers->tower_t = sfTexture_createFromFile("media/sniper.png", NULL);
    sfSprite_setTexture(towers->tower, towers->tower_t, sfTrue);
    sfSprite_setPosition(towers->tower, pos);
    sfSprite_setScale(towers->tower, (sfVector2f){2, 2});
    towers->clock = sfClock_create();
    towers->type = 2;
    towers->elapsed = 0;
    return towers;
}

t_towers *create_tank(sfVector2f pos)
{
    t_towers *towers = malloc(sizeof(t_towers));

    towers->hp = 200;
    towers->damage = 80;
    towers->attack_speed = 3;
    towers->range = 50;
    towers->pos = pos;
    towers->tower = sfSprite_create();
    towers->tower_t = sfTexture_createFromFile("media/tank.png", NULL);
    sfSprite_setTexture(towers->tower, towers->tower_t, sfTrue);
    sfSprite_setScale(towers->tower, (sfVector2f){2, 2});
    sfSprite_setPosition(towers->tower, pos);
    towers->clock = sfClock_create();
    towers->type = 3;
    towers->elapsed = 0;
    return towers;
}

t_towers *create_ice(sfVector2f pos)
{
    t_towers *towers = malloc(sizeof(t_towers));

    towers->hp = 100;
    towers->damage = 0;
    towers->attack_speed = 3;
    towers->range = 60;
    towers->pos = pos;
    towers->tower = sfSprite_create();
    towers->tower_t = sfTexture_createFromFile("media/ice.png", NULL);
    sfSprite_setTexture(towers->tower, towers->tower_t, sfTrue);
    sfSprite_setPosition(towers->tower, pos);
    sfSprite_setScale(towers->tower, (sfVector2f){2, 2});
    towers->clock = sfClock_create();
    towers->type = 4;
    towers->elapsed = 0;
    return towers;
}
