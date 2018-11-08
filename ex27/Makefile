NAME = ft_display_file
SRC = main.c
FLAGS = -Wall -Wextra -Werror

all :
	gcc -c $(FLAGS) $(SRC)
	gcc $(FLAGS) -o $(NAME) main.o

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
