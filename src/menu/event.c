/*
** EPITECH PROJECT, 2022
** event
** File description:
** handle event
*/

#include "../../include/my.h"

void events_menu(t_game *game, t_menu *menu)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        play(game, menu, event);
        exit_game(game, menu, event);
        info(game, menu, event);
        handbook(game, menu, event);
        settings(game, menu, event);
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(game->window);
    }
    return;
}
