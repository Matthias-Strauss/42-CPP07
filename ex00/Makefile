# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 13:46:59 by mstrauss          #+#    #+#              #
#    Updated: 2025/04/18 14:43:22 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
SRCS = main.cpp
INC = whatever.hpp
OBJS = $(SRCS:.cpp=.o)

TEST_NAME = awesome
TEST_SRCS = test_main.cpp
TEST_INC = Whatever.hpp \
			Awesome.hpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)
TEST_CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_NAME)

$(TEST_NAME): $(TEST_OBJS)
	$(CXX) $(TEST_OBJS) -o $(TEST_NAME) $(TEST_CXXFLAGS)

test_main.o: test_main.cpp $(TEST_INC)
	$(CXX) $(TEST_CXXFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -f $(OBJS)
	rm -f $(TEST_OBJS)

fclean:
	rm -f $(OBJS) $(NAME)
	rm -f $(TEST_OBJS) $(TEST_NAME)

.phony: all re clean fclean test