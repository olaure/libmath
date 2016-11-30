/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrices.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:13:18 by olaurent          #+#    #+#             */
/*   Updated: 2016/11/30 19:29:37 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_MATRICES_H
# define FT_MATRICES_H
# include "ft_math.h"
# include "ft_vectors.h"

typedef struct		s_mat
{
	double			**m;
	int				l;
	int				c;
}					t_mat;

t_mat				*ft_newmat(int l, int c);
void				ft_delmat(t_mat **m);
t_mat				*ft_matid(int d, t_mat *dest);
t_mat				*ft_matdup(t_mat *m);
t_mat				*ft_matcpy(t_mat *src, t_mat *dst);
t_mat				*ft_matprod(t_mat *m1, t_mat *m2, t_mat *dest);
t_mat				*ft_mattrans(t_mat *m, t_mat *dest);
t_mat				*ft_matmap(t_mat *m, double (*f)(double el), t_mat *dest);
t_mat				*ft_matmapi(t_mat *m, double (*f)(double el, int c, int l),
					t_mat *d);
t_mat				*ft_matadd(t_mat *m1, t_mat *m2, t_mat *dest);
t_mat				*ft_matsub(t_mat *m1, t_mat *m2, t_mat *dest);
t_mat				*ft_matmul(t_mat *m, double c, t_mat *dest);
t_mat				*ft_matmatmul(t_mat *m1, t_mat *m2, t_mat *dest);
t_mat				*ft_matsubm(t_mat *m, int l, int c, t_mat *dest);
double				ft_matdet(t_mat *m);
t_vec				*ft_matvec(t_mat *m, t_vec *v);
t_vec				*ft_vecmat(t_vec *v, t_mat *m);
t_mat				*ft_vectprod(t_vec *v1, t_vec *v2, t_mat *dest);
t_mat				*ft_veccmat(t_vec *v);

/*
 * Transformation matrices
 */

t_mat				*ft_tmat(t_vec *v);
t_mat				*ft_smat(t_vec *v);
t_mat				*ft_rmatx(double a);
t_mat				*ft_rmaty(double a);
t_mat				*ft_rmatz(double a);
t_mat				*ft_rmat2d(double a);
t_mat				*ft_rmat3d(t_vec *v, double a);

#endif
