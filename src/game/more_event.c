/*
** EPITECH PROJECT, 2022
** more_event
** File description:
** more event for game
*/

#include "../../include/my.h"

void base_collision(t_game *game)
{
    for (int i = 0; i < game->e_counter; i++) {
        game->e_array[i]->pos = sfSprite_getPosition(game->e_array[i]->enemy);
        if (game->e_array[i]->pos.x == 200) {
            game->e_counter -= 1;
            game->HP -= 2;
        }
    }
    if (game->HP == 0)
        sfRenderWindow_close(game->window);
}

void info_tower(sfVector2i mouse, t_game *game, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        mouse = sfMouse_getPositionRenderWindow(game->window);
        game->tower = check_tower(game, mouse);
    }
    if (event.type == sfEvtMouseButtonReleased &&
    event.mouseButton.button == sfMouseLeft) {
        mouse = sfMouse_getPositionRenderWindow(game->window);
        place_tower(game, mouse);
    }
}

void create_first(t_game *game, int z, int i)
{
    if (game->tower == 1 && game->money >= 100) {
        sfSound_play(game->sound->build);
        game->t_array[game->counter] = create_infantry
        ((sfVector2f){game->positions->map[i][z].left - 15,
        game->positions->map[i][z].top - 17});
        game->counter += 1;
        game->money -= 100;
    }
    if (game->tower == 2 && game->money >= 200) {
        sfSound_play(game->sound->build);
        game->t_array[game->counter] =
        create_snipers((sfVector2f){game->positions->map[i][z].left - 15,
        game->positions->map[i][z].top - 14});
        game->counter += 1;
        game->money -= 200;
    }
}

void create_two(t_game *game, int z, int i)
{
    if (game->tower == 3 && game->money >= 300) {
        sfSound_play(game->sound->build);
        game->t_array[game->counter] =
        create_tank((sfVector2f){game->positions->map[i][z].left - 15,
        game->positions->map[i][z].top - 17});
        game->counter += 1;
        game->money -= 300;
    }
    if (game->tower == 4 && game->money >= 200) {
        sfSound_play(game->sound->build);
        game->t_array[game->counter] =
        create_ice((sfVector2f){game->positions->map[i][z].left - 15,
        game->positions->map[i][z].top - 17});
        game->counter += 1;
        game->money -= 200;
    }
}

void get_towers(t_game *game, int z, int i, sfVector2i mouse)
{
    if (sfIntRect_contains(&game->positions->map[i][z],
    mouse.x, mouse.y)) {
        create_first(game, z, i);
        create_two(game, z, i);
    }
}
