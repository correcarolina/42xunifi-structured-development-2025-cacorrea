/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:38:51 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/18 15:40:46 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	first_last(int arr[], int size, int target, int *first, int *last)
{
	*first = -1;
	*last = -1;
	int	is_first;

	is_first = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == target)
		{
			if (!is_first)
			{
				*first = i;
				is_first = 1;
			}
			*last = i;
		}
	}
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
