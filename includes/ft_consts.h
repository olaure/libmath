/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_consts.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:05:22 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/14 13:02:59 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_CONSTS_H
# define FT_CONSTS_H
# define PI 3.141592653589793238462643383279502884197169399375105820974944592308
# define PI_2 6.2831853071795864769252867665590057683943387987502116419498891845
# define EXP 2.71828182845904523536028747135266249775724709369995957496696762772
# define TT float
# define SIN_PREC 6
# define ANG_DELTA 0.1
# define ANG_DELTA_2 (ANG_DELTA / 2.0)
# define EXP_PREC 0.0000000000000000001
# define FLOOR(x) (x < 0 ? ((int)x - 1) : ((int)x))
# define ABS(x) ((x) < 0 ? -(x) : (x))
# define IS_X8664_ENDIAN ((1 << 8) > (1 >> 8))
# define DOUBLE_EXP(x) (IS_X8664_ENDIAN ? (((x) >> 48) & 0x7FF0) : ((x) & 0xFFE))

#endif
