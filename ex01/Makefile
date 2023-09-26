#----General----
NAME		:= phonebook

#----Sources----
SRC_DIR		:= src
SRC			:= phonebook.cpp contact.cpp main.cpp
VPATH		:= src:inc

#----Objects----
OBJ_DIR		:= obj
OBJS		:= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

#----Flags----
CFLAGS		:= -Wall -Wextra -Werror -pedantic -std=c++98

DEP			:= $(OBJ_DIR)/$(SRC:.cpp=.d)

#----Rules----
all: $(NAME)

$(NAME): $(OBJS)
	@g++ $(CFLAGS) $^ -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<"
	@g++ $(CFLAGS) -MMD -c $< -o $@

-include $(DEP)

clean:
	@echo "Cleaning $(OBJ_DIR)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Cleaning $(NAME)"
	@rm -rf $(OBJ_DIR)
	@rm -f $(NAME)

re: fclean all
