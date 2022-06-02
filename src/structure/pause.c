/*
** EPITECH PROJECT, 2022
** pause
** File description:
** init pause struct
*/

#include "../../include/my.h"

void shorter_info(t_pause *pause)
{
    sfSprite_setScale(pause->resume, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(pause->resume, (sfVector2f){1790, 630});
}

void shorter_char(t_pause *pause)
{
    pause->black = sfSprite_create();
    pause->black_t = sfTexture_createFromFile
    ("media/black.png", NULL);
    sfSprite_setTexture(pause->black, pause->black_t, sfTrue);
    pause->color = sfColor_fromRGBA(255, 255, 255, 80);
    sfSprite_setColor(pause->black, pause->color);
    pause->exit = sfSprite_create();
    pause->exit_t = sfTexture_createFromFile
    ("media/buttons/quit.png", NULL);
    sfSprite_setTexture(pause->exit, pause->exit_t, sfTrue);
    sfSprite_setScale(pause->exit, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(pause->exit, (sfVector2f){1790, 880});
    pause->clock = sfClock_create();
    pause->font = sfFont_createFromFile("media/monogram.ttf");
    sfText_setFont(pause->text, pause->font);
    pause->resume = sfSprite_create();
    pause->resume_t = sfTexture_createFromFile
    ("media/buttons/continue.png", NULL);
    sfSprite_setTexture(pause->resume, pause->resume_t, sfTrue);
    shorter_info(pause);
}

t_pause *init_pause(void)
{
    t_pause *pause = malloc(sizeof(t_pause));

    pause->pause = sfSprite_create();
    pause->idle_t = sfTexture_createFromFile
    ("media/buttons/pause2.png", NULL);
    pause->pause_t = sfTexture_createFromFile
    ("media/buttons/pause.png", NULL);
    sfSprite_setPosition(pause->pause, (sfVector2f){50, 930});
    pause->menu = sfSprite_create();
    pause->menu_t = sfTexture_createFromFile
    ("media/buttons/main_menu.png", NULL);
    sfSprite_setTexture(pause->menu, pause->menu_t, sfTrue);
    sfSprite_setScale(pause->menu, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(pause->menu, (sfVector2f){1790, 755});
    pause->text = sfText_create();
    sfText_setString(pause->text, "PAUSE");
    sfText_setStyle(pause->text, sfTextBold);
    shorter_char(pause);
    return pause;
}
