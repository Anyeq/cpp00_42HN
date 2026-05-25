# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asando <asando@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/17 21:04:05 by asando            #+#    #+#              #
#    Updated: 2026/05/25 22:19:40 by asando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := g++
CFLAGS := -Werror -Wextra -Wall -std=c++98
INCLUDE := .

OBJ_DIR := ./obj

SRCS := Account.cpp tests.cpp
OBJS := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

NAME := account_test

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -I$(INCLUDE) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: re clean fclean all
