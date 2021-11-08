SRC		= 	\
		  	Account.cpp \
			tests.cpp

OBJ		= 	$(SRC:.cpp=.o)
NAME	=	GlobalBanksters
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	clang++
RM		=	rm -f

.c.o:		
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)


all:		$(NAME) 

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
