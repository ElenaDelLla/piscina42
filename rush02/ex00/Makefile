NAME = rush02
FILES = *.c
FLAGS = -Werror -Wextra -Wall
all: $(NAME)
RM = /bin/rm -f
$(NAME):
	gcc $(FLAGS) $(FILES) -o $(NAME) 

clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
