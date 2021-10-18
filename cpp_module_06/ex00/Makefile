NAME = convert
SRCS = main.cpp \
		Convert.cpp

		
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

$(NAME) : $(OBJS)
	$(CC) -c $(FLAGS) $(SRCS)
	$(CC) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all
