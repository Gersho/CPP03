SRCS		= ClapTrap.cpp ScavTrap.cpp main.cpp FragTrap.cpp DiamondTrap.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= diamondtrap
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
				$(CC) $(CFLAGS) -IClapTrap.hpp -IScavTrap.hpp -IFragTrap.hpp -IDiamondTrap.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all