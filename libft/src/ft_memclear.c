/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joni <joni@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/03 14:42:17 by joni          #+#    #+#                 */
/*   Updated: 2024/12/03 14:42:20 by joni          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_memclear(char *src, size_t n)
{
	while (n--)
		src[n] = 0;
}
