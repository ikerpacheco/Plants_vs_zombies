/*
** EPITECH PROJECT, 2021
** open_window
** File description:
** open_window
*/

#include "../../include/my.h"

sfRenderWindow *mywindow(int width, int height)
{
    sfRenderWindow* window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode,
    "My_Window", sfDefaultStyle, NULL);
    return (window);
}
