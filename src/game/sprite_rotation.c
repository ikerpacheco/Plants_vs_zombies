/*
** EPITECH PROJECT, 2022
** sprite rotation
** File description:
** sprite_rotation
*/

#include "../../include/my.h"

t_game *rotate_enemies(t_game *game)
{
    for (int i = 0; i < game->e_counter; i++) {
        sfSprite_setOrigin(game->e_array[i]->enemy, (sfVector2f){30, 30});
        sfSprite_rotate(game->e_array[i]->enemy, -2);
    }
    return game;
}

t_game *set_origins(t_game *game)
{
    sfSprite_setOrigin(game->spawners->spawner1, (sfVector2f){60, 60});
    sfSprite_setOrigin(game->spawners->spawner2, (sfVector2f){60, 60});
    sfSprite_setOrigin(game->spawners->spawner3, (sfVector2f){60, 60});
    sfSprite_setOrigin(game->spawners->spawner4, (sfVector2f){60, 60});

    return game;
}

void sprite_rotation(t_game *game)
{
    game = set_origins(game);
    game = rotate_enemies(game);

    if (game->counter1 != 1)
        sfSprite_rotate(game->spawners->spawner1, 0.5);
    if (game->counter2 != 1)
        sfSprite_rotate(game->spawners->spawner2, -0.5);
    if (game->counter3 != 1)
        sfSprite_rotate(game->spawners->spawner3, 0.5);
    if (game->counter4 != 1)
        sfSprite_rotate(game->spawners->spawner4, -0.5);
}