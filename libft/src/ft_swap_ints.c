/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap_ints.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: joni <joni@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/03 14:50:35 by joni          #+#    #+#                 */
/*   Updated: 2024/12/03 14:50:41 by joni          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_ints(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
