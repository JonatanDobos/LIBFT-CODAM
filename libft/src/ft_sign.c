/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sign.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joni <joni@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/03 14:46:46 by joni          #+#    #+#                 */
/*   Updated: 2024/12/03 14:47:06 by joni          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

short	ft_sign(int value)
{
	if (value < 0)
		return (-1);
	if (value > 0)
		return (1);
	return (0);
}
