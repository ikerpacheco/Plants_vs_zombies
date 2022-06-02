/*
** EPITECH PROJECT, 2022
** buttons
** File description:
** buttons inti function
*/

#include "../../include/my.h"

t_positions *allocate_mem(t_positions *positions)
{
    for (int i = 0; i < 4; i++)
        positions->map[i] = malloc(sizeof(sfIntRect) * 10);
    return positions;
}

void set_d_rects(t_positions *positions)
{
    positions->map[3][0] = (sfIntRect){0, 650, 220, 220};
    positions->map[3][1] = (sfIntRect){220, 650, 220, 220};
    positions->map[3][2] = (sfIntRect){436, 650, 220, 220};
    positions->map[3][3] = (sfIntRect){655, 650, 220, 220};
    positions->map[3][4] = (sfIntRect){872, 650, 220, 220};
    positions->map[3][5] = (sfIntRect){1088, 650, 220, 220};
    positions->map[3][6] = (sfIntRect){1305, 650, 220, 220};
    positions->map[3][7] = (sfIntRect){1521, 650, 220, 220};
    positions->map[3][8] = (sfIntRect){1721, 650, 220, 220};
}

void set_c_rects(t_positions *positions)
{
    positions->map[2][0] = (sfIntRect){0, 435, 220, 220};
    positions->map[2][1] = (sfIntRect){220, 435, 220, 220};
    positions->map[2][2] = (sfIntRect){436, 435, 220, 220};
    positions->map[2][3] = (sfIntRect){655, 435, 220, 220};
    positions->map[2][4] = (sfIntRect){872, 435, 220, 220};
    positions->map[2][5] = (sfIntRect){1088, 435, 220, 220};
    positions->map[2][6] = (sfIntRect){1305, 435, 220, 220};
    positions->map[2][7] = (sfIntRect){1521, 435, 220, 220};
    positions->map[2][8] = (sfIntRect){1721, 435, 220, 220};
}

void set_b_rects(t_positions *positions)
{
    positions->map[1][0] = (sfIntRect){0, 220, 220, 220};
    positions->map[1][1] = (sfIntRect){220, 220, 220, 220};
    positions->map[1][2] = (sfIntRect){436, 220, 220, 220};
    positions->map[1][3] = (sfIntRect){655, 220, 220, 220};
    positions->map[1][4] = (sfIntRect){872, 220, 220, 220};
    positions->map[1][5] = (sfIntRect){1088, 220, 220, 220};
    positions->map[1][6] = (sfIntRect){1305, 220, 220, 220};
    positions->map[1][7] = (sfIntRect){1521, 220, 220, 220};
    positions->map[1][8] = (sfIntRect){1721, 220, 220, 220};
}

t_positions *init_positions(void)
{
    t_positions *positions = malloc(sizeof(t_positions));
    positions->map = malloc(sizeof(sfIntRect *) * 5);
    positions = allocate_mem(positions);

    positions->map[0][0] = (sfIntRect){0, 5, 220, 220};
    positions->map[0][1] = (sfIntRect){220, 5, 220, 220};
    positions->map[0][2] = (sfIntRect){436, 5, 220, 220};
    positions->map[0][3] = (sfIntRect){655, 5, 220, 220};
    positions->map[0][4] = (sfIntRect){872, 5, 220, 220};
    positions->map[0][5] = (sfIntRect){1088, 5, 220, 220};
    positions->map[0][6] = (sfIntRect){1305, 5, 220, 220};
    positions->map[0][7] = (sfIntRect){1521, 5, 220, 220};
    positions->map[0][8] = (sfIntRect){1721, 5, 220, 220};

    set_b_rects(positions);
    set_c_rects(positions);
    set_d_rects(positions);
    return positions;
}
