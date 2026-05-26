# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asando <asando@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/10 16:24:23 by asando            #+#    #+#              #
#    Updated: 2026/05/26 16:49:07 by asando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := g++
CPP_STD := c++17
CFLAGS := -Wall -Wextra -Werror -std=$(CPP_STD)
INCLUDE := ./include

SRC_DIR := ./src
OBJ_DIR := ./obj

SRC_FILE := ContactGet.cpp ContactSet.cpp main.cpp PhoneBook.cpp
SRCS := $(addprefix $(SRC_DIR)/, $(SRC_FILE))

OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME := phonebook

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -I$(INCLUDE) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
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

.PHONY: all clean fclean re
