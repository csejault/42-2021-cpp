SRC			= megaphone.cpp	
OBJ			= $(SRC:.cpp=.o)
NAME		= megaphone
FLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= clang++
RM			= rm -f

.cpp.o:			
				$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)


all:		$(NAME) 

$(NAME):	$(OBJ)
				$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:			
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
