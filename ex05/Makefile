# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 20:54:12 by abenamar          #+#    #+#              #
#    Updated: 2023/12/20 23:10:00 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harl_v2

INCLUDES := -I $(CURDIR)

SRCS := Harl.cpp
SRCS += main.cpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CFLAGS := -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -std=c++98

RM := rm -f

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all