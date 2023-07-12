# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 13:27:47 by aducret           #+#    #+#              #
#    Updated: 2023/02/18 10:25:28 by aducret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re