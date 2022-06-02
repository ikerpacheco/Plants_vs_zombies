##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	src/my_defender.c	\
		main.c	\
		src/structure/game.c	\
		src/structure/buttons.c	\
		src/structure/menu.c	\
		src/structure/spawners.c \
		src/structure/towers.c \
		src/structure/enemies.c \
		src/structure/info.c	\
		src/structure/ammo.c \
		src/structure/pause.c	\
		src/structure/sound.c	\
		src/structure/borders.c \
		src/structure/text.c \
		src/game/switch_level.c \
		src/game/bullet_handle.c \
		src/game/generate_enemies.c \
		src/structure/positions.c \
		src/structure/handbook.c	\
		src/structure/settings.c	\
		src/menu/about.c	\
		src/menu/button_cases.c	\
		src/menu/buttons_settings.c	\
		src/menu/draw_menu.c	\
		src/menu/error_handling.c \
		src/menu/event_about.c	\
		src/menu/event.c	\
		src/menu/fps_handle.c	\
		src/menu/get_handbook.c	\
		src/menu/move_rect.c	\
		src/menu/get_settings.c	\
		src/menu/manage_buttons.c	\
		src/menu/menu.c	\
		src/menu/open_window.c	\
		src/game/sprite_rotation.c \
		src/game/get_pause.c	\
		src/game/pause_events.c	\
		src/game/draw_sprites.c \
		src/game/more_event.c	\
		src/game/highlight.c \
		src/game/get_play.c	\
		src/game/sprite_movement.c \
		src/game/map_events.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my && make
	gcc -g3 -o $(NAME) $(OBJ) -L lib/my/ \
	-lmy -lcsfml-graphics -lcsfml-system -lcsfml-audio

clean:
	rm -f $(OBJ)

fclean:	clean
	cd lib/my/ && make fclean
	rm -f $(NAME)

re:	fclean all
