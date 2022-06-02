/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#include "../../include/my.h"

void set_texts(t_text *text)
{
    sfText_setPosition(text->gold, (sfVector2f){470, 950});
    sfText_setPosition(text->HP, (sfVector2f){470, 1010});
    sfText_setPosition(text->rounds, (sfVector2f){470, 900});
}

t_text *init_text(void)
{
    t_text *text = malloc(sizeof(t_text));
    sfFont *font = sfFont_createFromFile("media/txt/aAkhirTahun.ttf");

    text->gold = sfText_create();
    text->HP = sfText_create();
    text->rounds = sfText_create();
    sfText_setFont(text->HP, font);
    sfText_setFont(text->gold, font);
    sfText_setFont(text->rounds, font);
    sfText_setScale(text->HP, (sfVector2f){1.2, 1.2});
    sfText_setScale(text->gold, (sfVector2f){1.2, 1.2});
    sfText_setScale(text->rounds, (sfVector2f){1.2, 1.2});
    set_texts(text);
    return text;
}
