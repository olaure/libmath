# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/10 09:46:10 by olaurent          #+#    #+#              #
#    Updated: 2016/12/01 17:46:23 by olaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmath.a

CC = clang

CFLAGS = -O2 -Wall -Wextra -Werror -I./includes/

SRC = ft_newmat.c ft_delmat.c ft_matdup.c ft_matcpy.c \
	  ft_matid.c ft_matprod.c ft_matmap.c ft_matmapi.c ft_mattrans.c \
	  ft_matadd.c ft_matsub.c ft_matmul.c ft_matsubm.c ft_matdet.c \
	  ft_matmatmul.c print_mat.c \
	  ft_newvec.c ft_delvec.c ft_vecdup.c ft_veccpy.c \
	  ft_vecadd.c ft_vecsub.c ft_vecmul.c ft_vecvecmul.c \
	  ft_vecmap.c ft_vecmapi.c \
	  ft_vecscp.c ft_veccrp.c ft_matvec.c ft_vecmat.c \
	  ft_vectprod.c ft_veccmat.c \
	  ft_sqrt.c ft_pow.c ft_sin.c ft_exp.c ft_sigmoid.c \
	  ft_vecnorm.c ft_vecunit.c \
	  ft_hvec.c ft_tmat.c ft_smat.c ft_rmat.c ft_rmat3d.c \
	  print_vec.c

SRCDIR = src

OBJDIR = obj

OBJ = $(SRC:%.c=$(OBJDIR)/%.o)

all :  dirs $(NAME)

$(NAME) : $(OBJ)
	@echo "== Building the libmath =="
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

dirs :
	@if [ ! -d $(OBJDIR) ]; then mkdir $(OBJDIR); fi

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@echo "== Cleaning the libmath =="
	@rm -fr $(OBJDIR)

fclean : clean
	@rm -f $(NAME)

re : fclean all
