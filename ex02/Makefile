# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  ikhristi <ikhristi@student.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 14:00:07 by  ikhristi         #+#    #+#              #
#    Updated: 2024/07/19 14:12:46 by  ikhristi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp 

CC_FLAGS		= -std=c++98 -Wall -Wextra -Werror
CC				=	c++
OBJS_F			= obj/


OBJS		=	$(SRCS:.cpp=.o)
OBJS_P		=	$(addprefix $(OBJS_F), $(SRCS:.cpp=.o))
NAME		= 	animal

all:$(NAME)

$(OBJS_F)%.o: %.cpp
	@mkdir -p $(OBJS_F)
	@echo "Working on: $<"
	@$(CC) $(CC_FLAGS) -O3 -c $< -o $@

$(NAME): $(OBJS_P)
	@$(CC) $(CC_FLAGS) -O3 -o $(NAME) $(OBJS_P)
	@echo "OK"

clean:
	@rm -rf $(OBJS_F)

fclean:	clean
	@rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re