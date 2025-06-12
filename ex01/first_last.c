/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:38:51 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/11 12:55:41 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	first_last(int arr[], int size, int target, int *first, int *last)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == target)
		{
			*first = i;
			break ;
		}
		i++;
	}
	if (i == size)
		*first = -1;
	i = size - 1;
	while (i >= 0)
	{
		if (arr[i] == target)
		{
			*last = i;
			break ;
		}
		i--;
	}
	if (i == -1)
		*last = i;
}

/* int	main(void)
{
	int	arr[10] = {3, 5, 9, 7, 2, 5, 1, 7, 4, 5};
	int	first = -1;
	int	last = -1;
	first_last(arr, 10, 5, &first, &last);
	printf("first index:	%i\nlast index:	%i\n", first, last);
	return (0);
} */
