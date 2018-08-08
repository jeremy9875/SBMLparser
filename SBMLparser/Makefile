##
## Makefile for Makefile in /home/jeremy.elkaim/SBMLparser
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Mon Jun 12 09:14:34 2017 jeremy elkaim
## Last update Mon Jun 12 09:40:56 2017 jeremy elkaim
##

CC		=       gcc

SRC		=	src/main.c		\
			src/str/write.c		\
			src/parser.c		\
			src/help.c

OBJS		=	$(SRC:.c=.o)

TMP		=	$(SRC:.c=.c~)

RM		=	rm -rf

OBJ		=	$(SRC_LIB:.c=.o)

#CFLAGS		+=	-Wall -Wextra -Werror

CPPFLAGS	+=	-I ./include/

NAME		=	SBMLparser

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean		:
			$(RM) $(OBJS)
			$(RM) $(OBJ)
			$(RM) $(TMP)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
