/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_index_ins.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: joni <joni@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/03 14:36:02 by joni          #+#    #+#                 */
/*   Updated: 2024/12/03 14:36:04 by joni          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_array_index_ins(char **array, char *insert, size_t index)
{
	size_t	size;
	size_t	i;
	char	**new_array;

	size = 0;
	size = ft_array_size(array);
	new_array = (char **)malloc(sizeof(char *) * (++size + 1));
	if (!new_array)
		return (NULL);
	new_array[size] = NULL;
	i = size - 1;
	while (size--)
	{
		if (size == index)
			new_array[index] = insert;
		else
			new_array[size] = array[--i];
	}
	free(array);
	return (new_array);
}
