NAME = account

SRCS = Account.cpp \
       tests.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
