/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 09:29:17 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 15:15:30 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H
# include <stdlib.h>
# include "ft_consts.h"
# include "ft_vectors.h"
# include "ft_matrices.h"

double				ft_sqrt(double n);
TT					ft_sin(TT a);
TT					ft_cos(TT a);
double				ft_exp(double x);
double				ft_pow(double x, int n);
double				ft_sigmoid(double x);
double				ft_sigmoid_prime(double x);

#endif
