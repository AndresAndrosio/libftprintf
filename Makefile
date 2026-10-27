NAME = libftprintf.a
NAME_PROG = libft_test

CC = cc
CFLAGS = -g -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_H= $(LIBFT_DIR)/libft.h 
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

MAIN_LOCATION = test/main.c

all: $(NAME)

$(NAME): build_libft $(OBJS) 
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS) 

%.o: %.c $(LIBFT_H)
	$(CC) $(CFLAGS) -c $< -o $@

build_libft:
	$(MAKE) -C $(LIBFT_DIR)

$(NAME_PROG): $(MAIN_LOCATION) $(NAME)
	$(CC) $(CFLAGS) -I. $(MAIN_LOCATION) $(NAME) -o $(NAME_PROG)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME) $(NAME_PROG)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

run: all $(NAME_PROG) 
	./$(NAME_PROG)

.PHONY: all clean fclean re run build_libft