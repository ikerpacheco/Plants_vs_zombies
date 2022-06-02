/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#include "../../include/my.h"

void more_init(t_game *game)
{
    game->tower = 0;
    game->money = 400;
    game->counter1 = 0;
    game->counter2 = 0;
    game->counter3 = 0;
    game->counter4 = 0;
    game->level = 1;
    game->round = 0;
    game->e_counter = 0;
    game->counter = 0;
    game->HP = 4;
    game->path = NULL;
    game->rect = (sfFloatRect){0, 0, 0, 0};
    game->ammo = NULL;
}

t_game *init_game(void)
{
    t_game *game = malloc(sizeof(t_game));

    game->spawners = init_spawners();
    game->text = init_text();
    game->borders = init_borders();
    game->status = MENU;
    game->clock = sfClock_create();
    game->window = mywindow(1920, 1080);
    game->pause = init_pause();
    game->sound = init_sounds();
    game->background_s = sfSprite_create();
    game->background_t = sfTexture_createFromFile("media/back_game.png", NULL);
    game->e_array = malloc(sizeof(t_enemies) * 20 + 1);
    game->e_array[0] = NULL;
    game->t_array = malloc(sizeof(t_towers) * (4 * 9) + 1);
    game->t_array[0] = NULL;
    game->positions = init_positions();
    sfSprite_setTexture(game->background_s, game->background_t, sfTrue);
    more_init(game);
    return game;
}

