NAME := libft
OBJ_DIR = obj
CFLAGS := -Wall -Wextra -O
DEPS = $(wildcard ft_*.c)
MANDATORY_OBJ = $(DEPS:%.c=$(OBJ_DIR)/%.o)
HEADERS = $(NAME).h
BONUS_DEPS = _bonus_1.c _bonus_2.c
BONUS_OBJ = $(BONUS_DEPS:%.c=$(OBJ_DIR)/%.o)

# rule:
# target: prerequisites
#	recipe

# $@ = target
# $^ = all prerequisites
# $< first prerequisite

ifdef	MAKE_BONUS
	OBJ = $(MANDATORY_OBJ) $(BONUS_OBJ)
else
	OBJ = $(MANDATORY_OBJ)
endif

all: $(NAME)

$(NAME): $(NAME).a

$(NAME).a: $(OBJ)
	ar -ru $@ $^

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	rm -f $(NAME).a

re: fclean all
force: re

# I would really like to know how to do this without recursive make
# this would be a topic for the future.
bonus:
	@$(MAKE) MAKE_BONUS=1

.PHONY: clean fclean all re force $(NAME) bonus
