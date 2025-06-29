/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:29:53 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/12 15:12:20 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "average.h"

float	average(const int *arr, int size)
{
	int		i;
	int		validated;
	int		sum;
	float	average;

	i = 0;
	validated = 0;
	average = 0;
	sum = 0;
	while (i < size)
	{
		if (arr[i] >= 0 && arr[i] <= 100)
		{
			validated++;
			sum += arr[i];
		}
		i++;
	}
	if (validated > 0)
		average = (float)sum / validated;
	return (average);
}

/*int	main(void)
{
	const int	arr[7] = {4, 9, 190, -5, 10, 7, 88};
	float		result;

	result = average(arr, 7);
	printf ("the average is: %f\n", result);
	return (0);
}*/
