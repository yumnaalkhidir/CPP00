CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
NAME		:= phonebook
FILES		:= 	Phonebook.cpp \
				Contact.cpp \
				main.cpp
OBJ			:= $(FILES:.cpp=.o)
HEADERS		:= 	Phonebook.hpp \
				Contact.hpp
all: $(NAME)
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

