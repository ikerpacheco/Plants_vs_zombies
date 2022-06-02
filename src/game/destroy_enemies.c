/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

t_game *destroy_enemy(t_game *game)
{
    for (int i = 0; i < game->e_counter; i++) {
        if (game->e_array[i]->hp == 0) {
            game->e_counter -= 1;
            sfSprite_destroy(game->e_array[i]->enemy);
        }
    }
    return game;
}
