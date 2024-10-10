#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := libft.a
CC          := gcc
FLAGS       := -Wall -Wextra -Werror
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      ft_strnstr.c \
                          ft_isdigit.c \
                          ft_putstr_fd.c \
                          ft_putperc.c \
                          ft_strlcpy.c \
                          ft_strlen.c \
                          ft_memcmp.c \
                          ft_putnbr_fd.c \
                          ft_strchr.c \
                          ft_striteri.c \
                          ft_bzero.c \
                          ft_strjoin.c \
                          ft_isascii.c \
                          ft_memcpy.c \
                          ft_isprint.c \
                          ft_putendl_fd.c \
                          ft_toupper.c \
                          ft_split.c \
                          ft_strrchr.c \
                          ft_isalpha.c \
                          ft_memchr.c \
                          ft_putchar_fd.c \
                          ft_memset.c \
                          ft_substr.c \
                          ft_strncmp.c \
                          ft_strmapi.c \
                          ft_strtrim.c \
                          ft_memmove.c \
                          ft_strlcat.c \
                          ft_calloc.c \
                          ft_strdup.c \
                          ft_atoi.c \
                          ft_isalnum.c \
                          ft_itoa.c \
                          ft_tolower.c \

OBJS        := $(SRCS:.c=.o)

################################################################################
#                                 COLORS & ANIMATION                           #
################################################################################

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

# Animation and compilation rule for .c to .o
.c.o:
	@echo "$(BLUE)Compiling $<...$(CLR_RMV)"
	@$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
	@sleep 0.1 # Simulates animation effect

################################################################################
#                                  Makefile  objs                              #
################################################################################

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation de $(YELLOW)$(NAME)$(GREEN) en cours...$(CLR_RMV)"
			ar rcs ${NAME} ${OBJS}
			@echo "$(GREEN)Compilation de $(YELLOW)$(NAME)$(GREEN) finie ✔️$(CLR_RMV)"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re
