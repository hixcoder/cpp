# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:10:47 by hboumahd          #+#    #+#              #
#    Updated: 2022/12/08 10:44:04 by hboumahd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = clang++

SRCS =	megaphone.cpp 

SRCOBJ = ${SRCS:.cpp=.o}

%.o:%.cpp 
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