/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

void switch_level(t_game *game)
{
    char *ptr = malloc(10);
    unsigned int new = my_atoi(ptr);
    int enemy_nb = 0;
    int i = 2;

    srand(new);
    if (game->level < 21) {
        if (game->e_counter == 0) {
            enemy_nb = rand() % i + 1;
            generate_enemies(game, enemy_nb, 1);
            generate_enemies(game, enemy_nb, 2);
            generate_enemies(game, enemy_nb, 3);
            i += 2;
            game->level += 1;
            game->round += 1;
            game->money += 300;
            return;
        }
    }
}