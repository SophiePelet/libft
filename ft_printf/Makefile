###########################################
#### NAMES
NAME			= libftprintf.a
CFLAGS			= -Wall -Wextra -Werror
CC				= cc
AR				= ar
ARFLAGS			= rcs
###########################################
#### SOURCES
SRC_FILES		= ft_format.c \
				  ft_pointer.c \
				  ft_putchar.c \
				  ft_putnbr_hexl.c \
				  ft_putnbr_hexu.c \
				  ft_putnbr_unsigned.c \
				  ft_putnbr.c \
				  ft_printf.c \
				  ft_putstr.c \

OBJ_FILES		= $(SRC_FILES:.c=.o)

LIBS			= ft_printf.h
###########################################
#### RULES
all: ${NAME}

${NAME}: ${OBJ_FILES}
			${AR} ${ARFLAGS} ${NAME} ${OBJ_FILES}

%.o: %.c ${LIBS}
			${CC} ${CFLAGS} -c $< -o $@

clean:
		rm -f *.o

fclean: clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re