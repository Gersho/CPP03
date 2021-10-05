SRCS		= ClapTrap.cpp ScavTrap.cpp main.cpp FragTrap.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= fragtrap
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
				$(CC) $(CFLAGS) -IClapTrap.hpp -IScavTrap.hpp -IFragTrap.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all