/*
** EPITECH PROJECT, 2021
** MY H
** File description:
** Library header
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>
    #include <string.h>
    #include <unistd.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/Sprite.h>
    #include <SFML/Graphics/RenderWindow.h>

    #include "structure/ammo.h"
    #include "structure/spawners.h"
    #include "structure/text.h"
    #include "structure/enemies.h"
    #include "structure/pause.h"
    #include "structure/sound.h"
    #include "structure/borders.h"
    #include "structure/towers.h"
    #include "structure/positions.h"
    #include "structure/game.h"
    #include "structure/menu.h"
    #include "structure/info.h"
    #include "structure/buttons.h"
    #include "structure/settings.h"
    #include "structure/handbook.h"

    #define MENU    0
    #define PLAY    1
    #define STOP   2

    #define ABOUT    1
    #define HANDBOOK    2
    #define SETTINGS    3

    int my_getnbr(char const *str);

    int my_arrstructlen(t_game *game);

    void generate_enemies(t_game *game, int num, int type);

    t_pause *init_pause(void);

    int my_atoi(char *str);

    int short_seed(void);

    void get_play(t_game *game, t_buttons *buttons);

    void pause_events(t_game *game, t_menu *menu);

    void idle_pause(t_game *game, sfEvent event);

    void get_pause(t_game *game, t_buttons *buttons);

    void move_other(sfSprite *button, t_game *game, sfIntRect rect, int move);

    void switch_level(t_game *game);

    t_enemies *create_square(sfVector2f pos, sfRenderWindow *window);

    t_enemies *create_triangle(sfVector2f pos, sfRenderWindow *window);

    t_enemies *create_round(sfVector2f pos, sfRenderWindow *window);

    int error_handling(int ac, char **av);

    int my_defender(void);

    void get_buttons(t_buttons *buttons, t_game *game);

    void draw_menu(t_game *game, t_menu *menu);

    t_towers *create_infantry(sfVector2f pos);

    void create_bullets(t_game *game);

    void erase_bullets(t_ammo *ammo, t_game *game);

    void check_collision(t_ammo **ammo, t_game *game);

    t_towers *create_snipers(sfVector2f pos);

    t_towers *create_tank(sfVector2f pos);

    t_towers *create_ice(sfVector2f pos);

    int move_button(sfSprite *button, t_game *game, sfIntRect rect);

    void get_about(t_menu *menu, t_game *game);

    void scenes(t_game *game, t_menu *menu);

    void reset_ammo(t_game *game);

    void tower_collision(t_game *game);

    void base_collision(t_game *game);

    t_positions *init_positions(void);

    void destroy(t_game *game, t_menu *menu);

    void draw_text(t_game *game);

    t_ammo *create_ammo(char *, sfFloatRect, t_ammo *, t_towers *);

    char *my_itoa(int nb);

    void events_about(t_game *game, t_info *info);

    void get_menu(t_game *game, t_menu *menu);

    t_enemies *init_enemies(void);

    void map_events(t_game *game);

    t_towers *init_towers(void);

    void get_towers(t_game *game, int z, int i, sfVector2i mouse);

    t_borders *init_borders(void);

    void idle_turrets(t_game *game);

    void sprite_rotation(t_game *game);

    void info_tower(sfVector2i mouse, t_game *game, sfEvent event);

    int check_tower(t_game *game, sfVector2i mouse);

    void place_tower(t_game *game, sfVector2i mouse);

    t_handbook *init_handbook(void);

    void event_handbook(t_game *game, t_handbook *handbook);

    void get_handbook(t_game *game, t_menu *menu);

    t_text *init_text(void);

    void settings(t_game *game, t_menu *menu, sfEvent event);

    void handbook(t_game *game, t_menu *menu, sfEvent event);

    void info(t_game *game, t_menu *menu, sfEvent event);

    void exit_game(t_game *game, t_menu *menu, sfEvent event);

    void play(t_game *game, t_menu *menu, sfEvent event);

    void fps_handle(t_settings *settings, sfVector2i mouse, t_game *game);

    t_sound *init_sounds(void);

    t_spawners *init_spawners(void);

    t_buttons *init_buttons(void);

    int my_put_nbr(int nb);

    void get_settings(t_game *game, t_menu *menu);

    void event_settings(t_game *game, t_settings *settings, t_sound *sound);

    void buttons_settings(t_game *game, t_settings *settings,
    sfEvent event, t_sound *sound);

    void music_settings(t_game *game, t_settings *settings, sfEvent event);

    t_settings *init_settings(void);

    void my_putchar(char c);

    void destroy_line(t_game *game);

    void sprite_movement(t_game *game);

    void draw_sprites(t_game *game, t_buttons *buttons);

    void events_menu(t_game *game, t_menu *menu);

    void move_rect(sfIntRect *rect, int offset, int max_value);

    void mouse_click(sfEvent event, sfRenderWindow *window);

    t_info *init_info(void);

    void exit_win(sfEvent event, sfRenderWindow *window, sfVector2i mouse);

    void my_putstr(char const *str);

    int my_numlen(long nb);

    t_game *init_game(void);

    sfRenderWindow *mywindow(int width, int height);

    int usage(int ac, char **av);

    int my_strlen(char const *str);

    void change_clock(sfClock *clock, t_menu *menu);

    t_menu *init_menu(void);

    int my_runner(void);

    void move_rect(sfIntRect *rect, int offset, int max_value);

    int my_getnbr(char const *str);

    void end_events(sfRenderWindow *window, sfEvent event);

#endif /* MY_H_ */
