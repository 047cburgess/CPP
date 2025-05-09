NAME = phonebook

SRCS = main.cpp \
       Contact.cpp \
       PhoneBook.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
