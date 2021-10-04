SRCS		= ClapTrap.cpp main.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= claptrap
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	ClapTrap.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) ClapTrap.hpp
				$(CC) $(CFLAGS) -IClapTrap.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all