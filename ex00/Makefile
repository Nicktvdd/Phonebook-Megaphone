#----General----
NAME		:= megaphone

#----Sources----
SRC_DIR		:= ./
SRC			:= megaphone.cpp
VPATH		:= src:inc

#----Objects----
OBJ_DIR		:= obj
OBJS		:= $(OBJ_DIR)/$(SRC:.cpp=.o)

#----Flags----
CFLAGS		:= -Wall -Wextra -Werror -pedantic -std=c++98

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
	@/bin/echo
	@/bin/echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@/bin/echo
	@/bin/echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@/bin/echo
	@/bin/echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
	@/bin/echo -n "Megaphone : "
	@./$(NAME)
	@/bin/echo