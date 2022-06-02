/*
** EPITECH PROJECT, 2022
** get_play
** File description:
** get all the game interface
*/

#include "../../include/my.h"

void get_play(t_game *game, t_buttons *buttons)
{
    sprite_movement(game);
    switch_level(game);
    map_events(game);
    if (game->t_array[0] != NULL && game->t_array[0]->type != 4)
        create_bullets(game);
    sprite_rotation(game);
    base_collision(game);
    draw_sprites(game, buttons);
    erase_bullets(game->ammo, game);
}
