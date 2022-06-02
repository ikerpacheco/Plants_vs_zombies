/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

t_game *generate_enemy3(t_game *game,
int third_spawny, int third_spawnx, int type)
{
    if (type == 3) {
        game->e_array[game->e_counter] = create_round((sfVector2f)
        {game->positions->map[third_spawny][8].left + third_spawnx,
        game->positions->map[third_spawny][8].top + 110}, game->window);
        game->e_counter += 1;
    }
    return game;
}

t_game *generate_enemy2(t_game *game,
int second_spawny, int second_spawnx, int type)
{
    if (type == 2) {
        game->e_array[game->e_counter] = create_triangle((sfVector2f)
        {game->positions->map[second_spawny][8].left + second_spawnx,
        game->positions->map[second_spawny][8].top + 110}, game->window);
        game->e_counter += 1;
    }
    return game;
}

t_game *generate_enemy1(t_game *game,
int first_spawny, int first_spawnx, int type)
{
    if (type == 1) {
        game->e_array[game->e_counter] = create_square((sfVector2f)
        {game->positions->map[first_spawny][8].left + first_spawnx,
        game->positions->map[first_spawny][8].top + 110}, game->window);
        game->e_counter += 1;
    }
    return game;
}

t_game *generating(t_game *game, sfIntRect first, sfIntRect second, int type)
{
    game = generate_enemy1(game, second.height, first.height, type);
    game = generate_enemy2(game, second.left, first.left, type);
    game = generate_enemy3(game, second.top, first.top, type);
}

void generate_enemies(t_game *game, int num, int type)
{
    int new = short_seed();
    srand(new);
    int first_spawny = rand() % 4;
    int second_spawny = rand() % 4;
    int third_spawny = rand() % 4;
    int first_spawnx = rand() % 1000 + 330;
    int second_spawnx = rand() % 1000 + 330;
    int third_spawnx = rand() % 1000 + 330;
    sfIntRect first = {first_spawnx, second_spawnx, third_spawnx, 0};
    sfIntRect second = {first_spawny, second_spawny, third_spawny, 0};

    for (int i = 0; i < num; i++) {
        second.height = rand() % 4;
        second.left = rand() % 4;
        second.top = rand() % 4;
        first.height = rand() % 1000 + 330;
        first.left = rand() % 1000 + 330;
        first.top = rand() % 1000 + 330;
        generating(game, first, second, type);
    }
}