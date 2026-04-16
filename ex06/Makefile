.PHONY: all clean fclean re

NAME = harlFilter

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)
	rm -f *.gch
fclean : clean
	rm -f $(NAME)

re : fclean all
