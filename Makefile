NAME := libft
OBJ_DIR = obj
CFLAGS := -Wall -Wextra -O
DEPS := $(wildcard ft_*.c)
OBJ := $(DEPS:%.c=$(OBJ_DIR)/%.o)
HEADERS := $(NAME).h

# rule:
# target: prerequisites
#	recipe

# $@ = target
# $^ = all prerequisites
# $< first prerequisite

all: $(NAME)

$(NAME): $(NAME).a

$(NAME).a: $(OBJ)
	ar -ru $(NAME).a $^

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	rm -f $(NAME).a

re: fclean all
force: re

.PHONY: clean fclean all re force
