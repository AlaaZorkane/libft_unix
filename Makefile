# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 15:30:39 by azorkane          #+#    #+#              #
#    Updated: 2019/11/02 05:50:43 by azorkane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=			libft.a
FLAGS=			-Wall -Werror -Wextra
CC=				gcc
INCLUDE_DIR=	./includes
SRC_DIR=		./src
INCLUDES=		libft.h
SRCS_EXTRA=		$(SRC_DIR)/extra/ft_split.c \
				$(SRC_DIR)/extra/ft_strtrim.c \
				$(SRC_DIR)/extra/ft_strupcase.c \
				$(SRC_DIR)/extra/ft_substr.c \
				$(SRC_DIR)/extra/ft_tolower.c \
				$(SRC_DIR)/extra/ft_toupper.c
SRCS_FILES=		$(SRC_DIR)/files/ft_putchar_fd.c \
				$(SRC_DIR)/files/ft_putendl_fd.c \
				$(SRC_DIR)/files/ft_puthex_fd.c \
				$(SRC_DIR)/files/ft_putnbr_fd.c \
				$(SRC_DIR)/files/ft_putstr_fd.c \
				$(SRC_DIR)/files/ft_putunsigned_fd.c
SRCS_LISTS=		$(SRC_DIR)/lists/ft_lstadd_bac.ck \
				$(SRC_DIR)/lists/ft_lstadd_front.c \
				$(SRC_DIR)/lists/ft_lstclear.c \
				$(SRC_DIR)/lists/ft_lstdelone.c \
				$(SRC_DIR)/lists/ft_lstiter.c \
				$(SRC_DIR)/lists/ft_lstlast.c \
				$(SRC_DIR)/lists/ft_lstmap.c \
				$(SRC_DIR)/lists/ft_lstnew.c \
				$(SRC_DIR)/lists/ft_lstsize.c
SRCS_STANDARD=	$(SRC_DIR)/standard/ft_atoi.c \
				$(SRC_DIR)/standard/ft_bzero.c \
				$(SRC_DIR)/standard/ft_calloc.c \
				$(SRC_DIR)/standard/ft_charcount.c \
				$(SRC_DIR)/standard/ft_count_base.c \
				$(SRC_DIR)/standard/ft_itoa.c
SRCS_STRINGS=	$(SRC_DIR)/strings/ft_memccpy.c \
				$(SRC_DIR)/strings/ft_memchr.c \
				$(SRC_DIR)/strings/ft_memcmp.c \
				$(SRC_DIR)/strings/ft_memcpy.c \
				$(SRC_DIR)/strings/ft_memmove.c \
				$(SRC_DIR)/strings/ft_memset.c \
				$(SRC_DIR)/strings/ft_strcapitalize.c \
				$(SRC_DIR)/strings/ft_strcat.c \
				$(SRC_DIR)/strings/ft_strchr.c \
				$(SRC_DIR)/strings/ft_strcmp.c \
				$(SRC_DIR)/strings/ft_strcpy.c \
				$(SRC_DIR)/strings/ft_strdup.c \
				$(SRC_DIR)/strings/ft_strjoin.c \
				$(SRC_DIR)/strings/ft_strlcat.c \
				$(SRC_DIR)/strings/ft_strlcpy.c \
				$(SRC_DIR)/strings/ft_strlen.c \
				$(SRC_DIR)/strings/ft_strlowcase.c \
				$(SRC_DIR)/strings/ft_strmapi.c \
				$(SRC_DIR)/strings/ft_strncat.c \
				$(SRC_DIR)/strings/ft_strncmp.c \
				$(SRC_DIR)/strings/ft_strncpy.c \
				$(SRC_DIR)/strings/ft_strnstr.c \
				$(SRC_DIR)/strings/ft_strrchr.c \
				$(SRC_DIR)/strings/ft_strrev.c \
				$(SRC_DIR)/strings/ft_strstr.c \
				$(SRC_DIR)/strings/ft_strtrim.c \
				$(SRC_DIR)/strings/ft_strupcase.c \
				$(SRC_DIR)/strings/ft_substr.c
SRCS_TYPE=		$(SRC_DIR)/type/ft_isalnum.c \
				$(SRC_DIR)/type/ft_isalpha.c \
				$(SRC_DIR)/type/ft_isascii.c \
				$(SRC_DIR)/type/ft_isdigit.c \
				$(SRC_DIR)/type/ft_islower.c \
				$(SRC_DIR)/type/ft_isprint.c \
				$(SRC_DIR)/type/ft_isspace.c \
				$(SRC_DIR)/type/ft_isupper.c
OBJ_EXTRA=		$(SRCS_EXTRA:.c=.o)
OBJ_FILES=		$(SRCS_FILES:.c=.o)
OBJ_LISTS=		$(SRCS_LISTS:.c=.o)
OBJ_STANDARD=	$(SRCS_STANDARD:.c=.o)
OBJ_STRINGS=	$(SRCS_STRINGS:.c=.o)
OBJ_TYPE=		$(SRCS_TYPE:.c=.o)


all: $(NAME)

$(NAME): $(OBJ_EXTRA) $(OBJ_FILES) $(OBJ_LISTS) $(OBJ_STANDARD) $(OBJ_STRINGS) $(OBJ_TYPE)
	ar rcs $(NAME) $(OBJ_EXTRA) $(OBJ_FILES) $(OBJ_LISTS) $(OBJ_STANDARD) $(OBJ_STRINGS) $(OBJ_TYPE)

%.o : %.c
	$(CC) $(FLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: clean fclean all re
