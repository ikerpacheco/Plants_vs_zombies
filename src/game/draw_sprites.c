/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

void draw_ammo(t_ammo *ammo, sfRenderWindow *window)
{
    if (!ammo)
        return;
    while (ammo->next) {
        sfRenderWindow_drawSprite(window, ammo->ammo, NULL);
        sfSprite_move(ammo->ammo, (sfVector2f){ammo->speed, 0});
        ammo = ammo->next;
    }
    if (ammo) {
        sfRenderWindow_drawSprite(window, ammo->ammo, NULL);
        sfSprite_move(ammo->ammo, (sfVector2f){ammo->speed, 0});
    }
}

void draw_enemies(t_game *game)
{
    int i = 0;

    while (i < game->e_counter) {
        if (game->e_array[i]->status == 0) {
            sfRenderWindow_drawSprite
            (game->window, game->e_array[i]->enemy, NULL);
        }
        i++;
    }
}

void draw_towers(t_game *game)
{
    int i = 0;

    while (i < game->counter) {
        sfRenderWindow_drawSprite(game->window, game->t_array[i]->tower, NULL);
        i += 1;
    }
}

void get_text(t_game *game)
{
    sfText_setString(game->text->rounds, "1");
    sfText_setString(game->text->HP, my_itoa(game->HP));
    if (game->money > 0)
        sfText_setString(game->text->gold, my_itoa(game->money));
    else
        sfText_setString(game->text->gold, "0");
    sfRenderWindow_drawText(game->window, game->text->gold, NULL);
    sfRenderWindow_drawText(game->window, game->text->HP, NULL);
    sfRenderWindow_drawText(game->window, game->text->rounds, NULL);
}

void draw_sprites(t_game *game, t_buttons *buttons)
{
    sfRenderWindow_drawSprite(game->window, game->background_s, NULL);
    sfRenderWindow_drawSprite(game->window, game->spawners->spawner1, NULL);
    sfRenderWindow_drawSprite(game->window, game->spawners->spawner2, NULL);
    sfRenderWindow_drawSprite(game->window, game->spawners->spawner3, NULL);
    sfRenderWindow_drawSprite(game->window, game->spawners->spawner4, NULL);
    sfRenderWindow_drawSprite(game->window, game->borders->border1, NULL);
    sfRenderWindow_drawSprite(game->window, game->borders->border2, NULL);
    sfRenderWindow_drawSprite(game->window, game->borders->border3, NULL);
    sfRenderWindow_drawSprite(game->window, game->borders->border4, NULL);
    sfRenderWindow_drawSprite(game->window, game->pause->pause, NULL);
    get_text(game);
    draw_towers(game);
    draw_enemies(game);
    draw_ammo(game->ammo, game->window);
    sfRenderWindow_drawSprite(game->window, buttons->turret, NULL);
    move_other(buttons->turret, game, buttons->rect_turret, 1370);
}
