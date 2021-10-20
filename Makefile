NAME := libft
OBJ_DIR = obj
CFLAGS := -Wall -Wextra -Werror -O
#MANDATORY_DEPS = $(wildcard ft_*.c)
MANDATORY_DEPS = ft_atoi.c ft_itoa.c ft_memset.c ft_strdup.c ft_strlen.c \
	ft_strtrim.c ft_bzero.c ft_memcmp.c ft_put_fd.c ft_strjoin.c \
	ft_strmapi.c ft_substr.c ft_calloc.c ft_memcpy.c ft_split.c \
	ft_strlcat.c ft_strncmp.c ft_to_x.c ft_is_x.c ft_memmove.c \
	ft_strchr.c ft_strlcpy.c ft_strnstr.c
MANDATORY_OBJ = $(MANDATORY_DEPS:%.c=$(OBJ_DIR)/%.o)
HEADERS = $(NAME).h
BONUS_DEPS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
	ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
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
