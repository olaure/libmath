/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:11:06 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 14:37:47 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_VECTORS_H
# define FT_VECTORS_H
# include "ft_math.h"

typedef struct		s_vec
{
	double			*v;
	int				d;
}					t_vec;

t_vec				*ft_newvec(int d);
void				ft_delvec(t_vec **v);
t_vec				*ft_vecdup(t_vec *v);
t_vec				*ft_veccpy(t_vec *src, t_vec *dst);
t_vec				*ft_vecadd(t_vec *v1, t_vec *v2);
t_vec				*ft_vecsub(t_vec *v1, t_vec *v2);
t_vec				*ft_vecmul(t_vec *v, double c);
t_vec				*ft_vecvecmul(t_vec *v1, t_vec *v2);
double				ft_vecscp(t_vec *v1, t_vec *v2);
t_vec				*ft_veccrp(t_vec *v1, t_vec *v2);
t_vec				*ft_vecmap(t_vec *v, double (*f)(double el));
t_vec				*ft_vecmapi(t_vec *v, double (*f)(double el, int i));
double				ft_vecnorm(t_vec *v);
t_vec				*ft_vecunit(t_vec *v);
t_vec				*ft_hvec(double x, double y, double z);
void				print_vec(t_vec *v);

#endif
