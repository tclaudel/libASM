# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/01/22 17:11:32 by coscialp     #+#   ##    ##    #+#        #
#    Updated: 2020/01/31 11:41:16 by coscialp    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRC			=	./srcs_s/ft_strlen.s ./srcs_s/ft_strcpy.s ./srcs_s/ft_write.s \
				./srcs_s/ft_read.s ./srcs_s/ft_strcmp.s ./srcs_s/ft_strdup.s

OBJ			=	$(SRC:.s=.o)

NAME		=	libasm.a

HEADER		=	libasm.h

FLAGS		=	-f macho64

RM			=	rm -rf

TEST		= test

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.s $(HEADER)
	nasm $(FLAGS) $< -o $@

$(TEST):
	gcc -Wall -Werror -Wextra main.c libasm.a -o $(TEST)

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} ${TEST}
	
re: fclean all