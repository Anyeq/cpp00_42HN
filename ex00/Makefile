# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asando <asando@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/10 14:35:19 by asando            #+#    #+#              #
#    Updated: 2026/05/27 19:14:48 by asando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_STD := c++98
CFLAGS := -Wall -Wextra -Werror -std=$(CPP_STD)
SRC_DIR := .
OBJ_DIR := ./obj

# GREEN := \033[1;32m
# RED := \033[1;31m
# BLUE := \033[1;34m
# RESET := \033[0m

# OK := ✔
# FAIL := ✖
# ARROW := ➜

SRCS := $(SRC_DIR)/megaphone.cpp
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME := megaphone

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	
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
