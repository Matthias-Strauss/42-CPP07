# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 13:46:59 by mstrauss          #+#    #+#              #
#    Updated: 2025/04/03 11:49:32 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
SRCS = main.cpp
INC = array.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

.phony: all re clean fclean