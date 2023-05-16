# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 11:06:26 by hboumahd          #+#    #+#              #
#    Updated: 2023/05/15 11:43:33 by hboumahd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe

CPPFLAGS = -Wall -Wextra -Werror 
CPP = c++

SRCS =	main.cpp PmergeMe.cpp

SRCOBJ = ${SRCS:.cpp=.o}

Include = PmergeMe.hpp

# -g for the debugger
%.o:%.cpp ${Include}
		${CPP} ${CPPFLAGS} -g -c $< -o $@

$(NAME): ${SRCOBJ} 
	@$(CPP) ${FLAGS} $(SRCOBJ) -o $(NAME)
	@echo "|+| make the program [${GREEN}DONE${RESET}]"
	
all: ${NAME}

clean:
	@rm -f ${SRCOBJ}

fclean: clean
	@rm -f ${NAME}
	@echo "|-| remove the programs  [${RED}DONE${RESET}]"

re: fclean all

# colors used
GREEN = \033[0;92m
RED = \033[0;91m
RESET = \033[0m