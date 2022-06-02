/*
** EPITECH PROJECT, 2022
** draw_menu
** File description:
** draw the menu
*/

#include "../../include/my.h"

void draw_menu(t_game *game, t_menu *menu)
{
    sfRenderWindow_drawSprite(game->window, menu->background_s, NULL);
}
