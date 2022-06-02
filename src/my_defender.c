/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_defender main function
*/

#include "../include/my.h"

void scenes(t_game *game, t_menu *menu)
{
    switch (game->status) {
        case MENU:
            get_menu(game, menu);
            break;
        case PLAY:
            get_play(game, menu->buttons);
            break;
        case STOP:
            get_pause(game, menu->buttons);
            pause_events(game, menu);
            draw_text(game);
            break;
        default:
            break;
    }
}

int my_defender(void)
{
    t_game *game = init_game();
    t_menu *menu = init_menu();

    sfRenderWindow_setFramerateLimit(game->window, 60);
    while (sfRenderWindow_isOpen(game->window)) {
        scenes(game, menu);
        sfRenderWindow_display(game->window);
    }
    return 0;
}
