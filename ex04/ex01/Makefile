# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 20:47:53 by tmoret            #+#    #+#              #
#    Updated: 2023/04/21 10:49:48 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

NAME		= Polymorphisme
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror  -std=c++98
RM			= rm -rf

OBJDIR 		= .obj

FILES		= main Animal Cat Dog WrongAnimal WrongCat Brain 

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(OBJ) $(FLAGS) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
