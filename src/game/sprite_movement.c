/*
** EPITECH PROJECT, 2022
** sprite_movement
** File description:
** sprite_movement
*/

#include "../../include/my.h"

void sprite_movement(t_game *game)
{
    for (int i = 0; i < game->e_counter; i++)
        sfSprite_move(game->e_array[i]->enemy, (sfVector2f){-1, 0});
}