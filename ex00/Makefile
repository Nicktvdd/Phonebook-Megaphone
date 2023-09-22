NAME		:= megaphone

#----Sources----
SRC_DIR		:= ./
SRC			:= megaphone.cpp
VPATH		:= src:inc

#----Objects----
OBJ_DIR		:= obj
OBJS		:= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

#----Flags----
CFLAGS		:= -Wall -Wextra -Werror

DEP			:= $(OBJ:.o=.d)

####   -fsanitize=thread
all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(OBJ_DIR)
	clang++ $(CFLAGS) -c $< -o $@

-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

re: fclean all