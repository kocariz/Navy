##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	src/connection/connection_players.c \
			src/connection/handler.c \
			src/connection/player_one_connection.c \
			src/connection/player_two_connection.c \
			src/connection/send_recieve.c \
			src/connection/start_game.c \
			src/map/add_boats.c \
			src/map/generate_map.c \
			src/map/change_map.c \
			src/map/print_map.c \
			src/players/attack.c \
			src/players/end_game.c \
			src/players/hit_or_miss.c \
			src/players/sep_game.c \
			src/struct/map.c \
			src/transformations/det_letter.c \
			src/transformations/det_num_two.c \
			src/transformations/con_det_numb.c \
			src/transformations/detect_number.c \
			src/transformations/change_to_int.c \
			src/main/error_handling.c \
			src/main/get_pos.c \
			src/main/main.c

OBJ		=	$(SRC:.c=.o)

NAME 	=	navy

CFLAGS  =       -I include -L lib/my/ -lmy

all:		$(NAME)

$(NAME):	$(OBJ)
			cd lib/my/ ; $(MAKE) -f Makefile
			gcc -g -o $(NAME) $(OBJ) $(CFLAGS)

clean:
			rm -rf $(OBJ)
			cd lib/my/ ; $(MAKE) -f Makefile clean

fclean:		clean
			rm -f $(NAME)
			cd lib/my/ ; $(MAKE) -f Makefile fclean

re:			fclean all
			cd lib/my/ ; $(MAKE) -f Makefile re