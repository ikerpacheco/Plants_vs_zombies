/*
** EPITECH PROJECT, 2022
** button_cases
** File description:
** all the buttons
*/


#include "../../include/my.h"

void settings(t_game *game, t_menu *menu, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    menu->buttons->pos_settings =
    sfSprite_getPosition(menu->buttons->settings_s);
    rect = (sfIntRect){menu->buttons->pos_settings.x,
    menu->buttons->pos_settings.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfSound_play(game->sound->button);
            menu->status = SETTINGS;
        }
    }
}

void handbook(t_game *game, t_menu *menu, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    menu->buttons->pos_help = sfSprite_getPosition(menu->buttons->help_s);
    rect = (sfIntRect){menu->buttons->pos_help.x,
    menu->buttons->pos_help.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfSound_play(game->sound->button);
            menu->status = HANDBOOK;
        }
    }
}

void info(t_game *game, t_menu *menu, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    menu->buttons->pos_about = sfSprite_getPosition(menu->buttons->about_s);
    rect = (sfIntRect){menu->buttons->pos_about.x,
    menu->buttons->pos_about.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfSound_play(game->sound->button);
            menu->status = ABOUT;
        }
    }
}

void exit_game(t_game *game, t_menu *menu, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    menu->buttons->pos_quit = sfSprite_getPosition(menu->buttons->quit_s);
    rect = (sfIntRect)
    {menu->buttons->pos_quit.x,
    menu->buttons->pos_quit.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            sfSound_play(game->sound->button);
            sfMusic_destroy(game->sound->menu_music);
            sfRenderWindow_close(game->window);
        }
    }
}

void play(t_game *game, t_menu *menu, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfIntRect rect;

    menu->buttons->pos_new = sfSprite_getPosition(menu->buttons->new_s);
    rect = (sfIntRect){menu->buttons->pos_new.x,
    menu->buttons->pos_new.y, 500 * 1.3, 80 * 1.3};
    if (event.type == sfEvtMouseButtonPressed &&
    event.mouseButton.button == sfMouseLeft) {
        if (sfIntRect_contains(&rect, mouse.x, mouse.y)) {
            menu->buttons->new_t = sfTexture_createFromFile
            ("media/buttons/continue.png", NULL);
            sfSprite_setTexture(menu->buttons->new_s,
            menu->buttons->new_t, sfTrue);
            sfMusic_stop(game->sound->menu_music);
            sfMusic_play(game->sound->game_music);
            game->status = PLAY;
        }
    }
}
