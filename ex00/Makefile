#----General----
NAME		:= megaphone

#----Sources----
SRC_DIR		:= ./
SRC			:= megaphone.cpp
VPATH		:= src:inc

#----Objects----
OBJ_DIR		:= obj
OBJS		:= $(OBJ_DIR)/$(SRC:.cpp=.0)

#----Flags----
CFLAGS		:= -Wall -Wextra -Werror

DEP			:= $(OBJ:.o=.d)

#----Rules----

####   -fsanitize=thread
all: $(NAME)

$(NAME): $(OBJS)
	g++ $(CFLAGS) $^ -o $(NAME)

$(OBJS): $(SRC)
	mkdir -p $(OBJ_DIR)
	g++ $(CFLAGS) -MMD -c $< -o $@

-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

re: fclean all