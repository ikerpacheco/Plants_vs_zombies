/*
** EPITECH PROJECT, 2022
** buttons
** File description:
** buttons inti function
*/

#include "../../include/my.h"

t_ammo *create_ammo(char *path, sfFloatRect rect,
t_ammo *first, t_towers *tower)
{
    t_ammo *ammo = malloc(sizeof(t_ammo));
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    ammo->ammo = sfSprite_create();
    sfSprite_setTexture(ammo->ammo, texture, sfFalse);
    ammo->damage = rect.height;
    ammo->speed = rect.left;
    ammo->pos.x = rect.top + 150;
    ammo->pos.y = rect.width + 105;
    ammo->tower_pos.x = rect.top + 150;
    ammo->tower_pos.y = rect.width + 105;
    ammo->next = first;
    ammo->tower = tower;
    sfSprite_setPosition(ammo->ammo, ammo->pos);
    return ammo;
}
