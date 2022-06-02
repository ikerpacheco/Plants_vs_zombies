/*
** EPITECH PROJECT, 2022
** move_rect
** File description:
** rect
*/

#include "../../include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left != max_value)
        rect->left += offset;
    else
        rect->left = 0;
}

void change_clock(sfClock *clock, t_menu *menu)
{
    sfTime time;
    float seconds;

    sfSprite_setTextureRect(menu->duck, menu->rect);
    sfSprite_setPosition(menu->duck, (sfVector2f){120, 970});
    sfSprite_setTextureRect(menu->duck_two, menu->rect_two);
    sfSprite_setPosition(menu->duck_two, (sfVector2f){1000, 970});
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.1) {
        move_rect(&menu->rect, 110, 220);
        move_rect(&menu->rect_two, 110, 220);
        sfClock_restart(clock);
    }
}

