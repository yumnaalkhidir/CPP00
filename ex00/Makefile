CXX			:= c++
CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98
FILES		:= megaphone.cpp
OBJ			:= $(FILES:.cpp=.o)
NAME		:= megaphone

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re