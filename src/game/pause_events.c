/*
** EPITECH PROJECT, 2022
** pause_events
** File description:
** get the events in the pause menu
*/

#include "../../include/my.h"

void resume(t_game *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f pos = sfSprite_getPosition(game->pause->resume);
    sfIntRect rect = (sfIntRect){pos.x, pos.y, 500 * 1.3, 80 * 1.3};

    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfSound_play(game->sound->button);
            game->status = PLAY;
        }
    }
}

void draw_text(t_game *game)
{
    sfColor color = sfColor_fromRGBA(255, 255, 255, 0);
    int seconds;
    int result;

    game->pause->time = sfClock_getElapsedTime(game->pause->clock);
    seconds = sfTime_asSeconds(game->pause->time);
    sfText_setPosition(game->pause->text, (sfVector2f){800, 200});
    sfText_setScale(game->pause->text, (sfVector2f){6, 6});
    if (seconds % 2 == 0) {
        color = sfColor_fromRGBA(255, 255, 255, 255);
        sfText_setColor(game->pause->text, color);
        sfRenderWindow_drawText(game->window, game->pause->text, NULL);
    } else {
        sfText_setColor(game->pause->text, color);
        sfRenderWindow_drawText(game->window, game->pause->text, NULL);
    }
}

void main_menu(t_game *game, sfEvent event, t_menu *menu)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f pos = sfSprite_getPosition(game->pause->menu);
    sfIntRect rect = (sfIntRect){pos.x, pos.y, 500 * 1.3, 80 * 1.3};

    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfSound_play(game->sound->button);
            sfMusic_stop(game->sound->game_music);
            sfMusic_play(game->sound->menu_music);
            game->status = MENU;
        }
    }
}

void pause_exit(t_game *game, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f pos = sfSprite_getPosition(game->pause->exit);
    sfIntRect rect = (sfIntRect){pos.x, pos.y, 500 * 1.3, 80 * 1.3};

    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfMusic_stop(game->sound->game_music);
            sfSound_play(game->sound->button);
            sfRenderWindow_close(game->window);
        }
    }
}

void pause_events(t_game *game, t_menu *menu)
{
    float seconds = sfTime_asSeconds(game->pause->time);
    sfEvent event;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        resume(game, event);
        idle_pause(game, event);
        pause_exit(game , event);
        main_menu(game, event, menu);
        if (event.type == sfEvtKeyPressed &&
        event.key.code == sfKeyEscape)
            game->status = PLAY;
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
    }
}
