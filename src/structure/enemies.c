/*
** EPITECH PROJECT, 2022
** buttons
** File description:
** buttons inti function
*/

#include "../../include/my.h"

t_enemies *create_square(sfVector2f pos, sfRenderWindow *window)
{
    t_enemies *enemies = malloc(sizeof(t_enemies));

    enemies->hp = 50;
    enemies->damage = 20;
    enemies->attack_speed = 0;
    enemies->range = 1;
    enemies->enemy = sfSprite_create();
    enemies->enemy_t = sfTexture_createFromFile
    ("media/square.png", NULL);
    sfSprite_setTexture(enemies->enemy, enemies->enemy_t, sfTrue);
    sfSprite_setPosition(enemies->enemy, pos);
    sfSprite_setOrigin(enemies->enemy, (sfVector2f){30, 30});
    sfSprite_rotate(enemies->enemy, -2);
    sfSprite_move(enemies->enemy, (sfVector2f){-2, 0});
    enemies->status = 0;
    return enemies;
}

t_enemies *create_triangle(sfVector2f pos, sfRenderWindow *window)
{
    t_enemies *enemies = malloc(sizeof(t_enemies));

    enemies->hp = 30;
    enemies->damage = 40;
    enemies->attack_speed = 0;
    enemies->range = 1;
    enemies->enemy = sfSprite_create();
    enemies->enemy_t = sfTexture_createFromFile
    ("media/triangle.png", NULL);
    sfSprite_setTexture(enemies->enemy, enemies->enemy_t, sfTrue);
    sfSprite_setPosition(enemies->enemy, pos);
    sfSprite_setOrigin(enemies->enemy, (sfVector2f){30, 30});
    sfSprite_rotate(enemies->enemy, -2);
    sfSprite_move(enemies->enemy, (sfVector2f){-2, 0});
    enemies->status = 0;
    return enemies;
}

t_enemies *create_round(sfVector2f pos, sfRenderWindow *window)
{
    t_enemies *enemies = malloc(sizeof(t_enemies));

    enemies->hp = 20;
    enemies->damage = 10;
    enemies->attack_speed = 0;
    enemies->range = 1;
    enemies->enemy = sfSprite_create();
    enemies->enemy_t = sfTexture_createFromFile
    ("media/round.png", NULL);
    sfSprite_setTexture(enemies->enemy, enemies->enemy_t, sfTrue);
    sfSprite_setPosition(enemies->enemy, pos);
    sfSprite_setOrigin(enemies->enemy, (sfVector2f){30, 30});
    sfSprite_rotate(enemies->enemy, -2);
    sfSprite_move(enemies->enemy, (sfVector2f){-2, 0});
    enemies->status = 0;
    return enemies;
}