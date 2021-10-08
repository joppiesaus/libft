NAME := ftlib.a
OBJ_DIR = obj
CFLAGS := -Wall -Wextra -O
DEPS := $(wildcard ft_*.c)
OBJ := $(DEPS:%.c=$(OBJ_DIR)/%.o)
HEADERS := libft.h

# rule:
# target: prerequisites
#	recipe

# $@ = target
# $^ = all prerequisites
# $< first prerequisite

all: $(NAME)

$(NAME): $(OBJ)
	echo $(OBJ)
	ar -r $^

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_DIR)/*.o

fclean:
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re