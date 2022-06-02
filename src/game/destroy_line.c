/*
** EPITECH PROJECT, 2022
** destroy_line
** File description:
** destroy_line
*/

#include "../../include/my.h"

t_game *destroy_line4(t_game *game, sfVector2f enemy_pos, int i)
{
    if (sfIntRect_contains
    (&game->positions->map[3][0], enemy_pos.x, enemy_pos.y) &&
    game->counter4 == 0) {
        game->counter4 = 1;
        game->HP -= 1;
        game->e_array[i]->hp = 0;
    }
    return game;
}

t_game *destroy_line3(t_game *game, sfVector2f enemy_pos, int i)
{
    if (sfIntRect_contains
    (&game->positions->map[2][0], enemy_pos.x, enemy_pos.y) &&
    game->counter3 == 0) {
        game->counter3 = 1;
        game->HP -= 1;
        game->e_array[i]->hp = 0;
    }
    return game;
}

t_game *destroy_line2(t_game *game, sfVector2f enemy_pos, int i)
{
    if (sfIntRect_contains
    (&game->positions->map[1][0], enemy_pos.x, enemy_pos.y) &&
    game->counter2 == 0) {
        game->counter2 = 1;
        game->HP -= 1;
        game->e_array[i]->hp = 0;
    }
    return game;
}

t_game *destroy_line1(t_game *game, sfVector2f enemy_pos, int i)
{
    if (sfIntRect_contains
    (&game->positions->map[0][0], enemy_pos.x, enemy_pos.y) &&
    game->counter1 == 0) {
        game->counter1 = 1;
        game->HP -= 1;
        game->e_array[i]->hp = 0;
    }
    return game;
}

void destroy_line(t_game *game)
{
    sfVector2f enemy_pos = {0, 0};

    for (int i = 0; i < game->e_counter; i++) {
        enemy_pos = sfSprite_getPosition(game->e_array[i]->enemy);
        game = destroy_line1(game, enemy_pos, i);
        game = destroy_line2(game, enemy_pos, i);
        game = destroy_line3(game, enemy_pos, i);
        game = destroy_line4(game, enemy_pos, i);
    }
}
