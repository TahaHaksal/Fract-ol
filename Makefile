CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = $(shell find src -name "*.c")

OBJ = $(SRC:.c=.o)

NAME = fract-ol

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
