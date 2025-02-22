/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cpy.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: joni <joni@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/03 14:37:28 by joni          #+#    #+#                 */
/*   Updated: 2024/12/03 14:37:30 by joni          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_cpy(char *out, const char *add, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		out[i] = add[i];
		i++;
	}
	return (n);
}
