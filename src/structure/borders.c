/*
** EPITECH PROJECT, 2022
** buttons
** File description:
** buttons inti function
*/

#include "../../include/my.h"

t_borders *set_rects(t_borders *borders)
{
    sfFloatRect dim_b1 = sfSprite_getGlobalBounds(borders->border1);
    sfFloatRect dim_b2 = sfSprite_getGlobalBounds(borders->border2);
    sfFloatRect dim_b3 = sfSprite_getGlobalBounds(borders->border3);
    sfFloatRect dim_b4 = sfSprite_getGlobalBounds(borders->border4);

    borders->rect1 = (sfIntRect)
    {696, 880, dim_b1.width * 0.95, dim_b1.height * 0.95};
    borders->rect2 = (sfIntRect)
    {835, 880, dim_b2.width * 0.95, dim_b2.height * 0.95};
    borders->rect3 = (sfIntRect)
    {970, 880, dim_b3.width * 0.95, dim_b3.height * 0.95};
    borders->rect4 = (sfIntRect)
    {1107, 883, dim_b4.width * 0.95, dim_b4.height * 0.95};
    return borders;
}

void set_borders(t_borders *borders)
{
    sfSprite_setPosition(borders->border1, (sfVector2f){696, 880});
    sfSprite_scale(borders->border1, (sfVector2f){0.95, 0.95});
    sfSprite_setPosition(borders->border2, (sfVector2f){835, 880});
    sfSprite_scale(borders->border2, (sfVector2f){0.95, 0.95});
    sfSprite_setPosition(borders->border3, (sfVector2f){970, 880});
    sfSprite_scale(borders->border3, (sfVector2f){0.95, 0.95});
    sfSprite_setPosition(borders->border4, (sfVector2f){1107, 883});
    sfSprite_scale(borders->border4, (sfVector2f){0.95, 0.95});
}

void set_border_textures(t_borders *borders)
{
    borders->border1_t = sfTexture_createFromFile("media/case.png", NULL);
    borders->border2_t = sfTexture_createFromFile("media/case.png", NULL);
    borders->border3_t = sfTexture_createFromFile("media/case.png", NULL);
    borders->border4_t = sfTexture_createFromFile("media/case.png", NULL);
    sfSprite_setTexture(borders->border1, borders->border1_t, sfTrue);
    sfSprite_setTexture(borders->border2, borders->border2_t, sfTrue);
    sfSprite_setTexture(borders->border3, borders->border3_t, sfTrue);
    sfSprite_setTexture(borders->border4, borders->border4_t, sfTrue);
}

void create_border_sprites(t_borders *borders)
{
    borders->border1 = sfSprite_create();
    borders->border2 = sfSprite_create();
    borders->border3 = sfSprite_create();
    borders->border4 = sfSprite_create();
}

t_borders *init_borders(void)
{
    t_borders *borders = malloc(sizeof(t_borders));

    create_border_sprites(borders);
    set_border_textures(borders);
    set_borders(borders);
    borders->rect1 = (sfIntRect)
    {696, 880, 114 * 0.95, 113.05 * 0.95};
    borders->rect2 = (sfIntRect)
    {835, 880, 114 * 0.95, 113.05 * 0.95};
    borders->rect3 = (sfIntRect)
    {970, 880, 114 * 0.95, 113.05 * 0.95};
    borders->rect4 = (sfIntRect)
    {1107, 883, 114 * 0.95, 113.05 * 0.95};
    borders->selected = sfTexture_createFromFile("media/selected.png", NULL);
    borders->non_selected = sfTexture_createFromFile("media/case.png", NULL);
    return borders;
}
