SRC			= 	\
				main.cpp \
				ScavTrap.cpp \
				FlagTrap.cpp \
				DiamondTrap.cpp \
				ClapTrap.cpp

HEADER		=	\
				ScavTrap.hpp \
				FlagTrap.hpp \
				DiamondTrap.hpp \
				ClapTrap.hpp

OBJ			= 	$(SRC:.cpp=.o)
NAME		=	clapTrapTestor
FLAGS		=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
CC			=	clang++
RM			=	rm -f

.cpp.o:			
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)


all:		$(NAME) 

$(NAME):	${HEADER} $(OBJ)
				$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:			
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
