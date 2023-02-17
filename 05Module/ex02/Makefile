# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 09:03:29 by alevasse          #+#    #+#              #
#    Updated: 2023/02/13 11:52:28 by alevasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= bureaucrat

SRC				= 	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
					PresidentialPardonForm.cpp

OBJ				= ${SRC:.cpp=.o}
			
CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

RM				= rm -rf

GREEN			:= "\033[0;32m"
CYAN			:= "\033[0;36m"
RESET			:= "\033[0m"

%.o:			%.cpp
				@${CC} ${CFLAGS} -o $@ -c $<

all:			${NAME}

${NAME}:		${OBJ}
				@${CC} ${CFLAGS} -o ${NAME} ${OBJ}
				@echo ${GREEN}"Compiled '${NAME}' with success" ${RESET}

clean:
				@${RM} ${OBJ}
				@echo ${CYAN}"Cleaned '${NAME}' objects with success"${RESET}
				
fclean:			clean
				@${RM} ${NAME}
				@echo ${CYAN}"Removed '${NAME}' with success"${RESET}

re:				fclean all

.PHONY:			all clean fclean re
