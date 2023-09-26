#----General----
NAME		:= phonebook

#----Sources----
SRC_DIR		:= ./
SRC			:= phonebook.cpp
VPATH		:= src:inc

#----Objects----
OBJ_DIR		:= obj
OBJS		:= $(OBJ_DIR)/$(SRC:.cpp=.0)

#----Flags----
CFLAGS		:= -Wall -Wextra -Werror

DEP			:= $(OBJ_DIR)/$(SRC:.cpp=.d)

#----Rules----

####   -fsanitize=thread
all: $(NAME)

$(NAME): $(OBJS)
	@g++ $(CFLAGS) $^ -o $(NAME)

$(OBJS): $(SRC)
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

#----Tests----
test: $(NAME)
	