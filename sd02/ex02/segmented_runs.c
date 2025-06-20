/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmented_runs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:42:12 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/18 16:00:25 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "segmented_runs.h"

int	is_sequence_of_3(const int *arr, int size)
{
	int	j;

	j = 0;
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i + 1] <= arr[i] && j < 2)
			j = 0;
		else
			j++;
	}
	if (j >= 2)
		return (1);
	return (0);
}

int	count_segments(const int *arr, int size)
{
	int	nb_segments;
	int	i;
	int	len;
	int	start;

	nb_segments = 0;
	i = 0;
	while (i < size)
	{
		start = i;
		len = 0;
		while (i < size && arr[i] != -1)
		{
			i++;
			len++;
		}
		if (len >= 3)
			nb_segments += is_sequence_of_3((arr + start), len);
		if (arr[i] == -1)
			i++;
	}
	return (nb_segments);
}

/* int	main(void)
{
	const int	arr[8] = {4, 22, 1, 0, 0, 7, 9, 11};
	int		result;

	result = is_sequence_of_3(arr, 8);
	if (result)
		printf ("sequence of 3 found\n");
	else
		printf ("sequence of 3 NOT found\n");
	return (0);
}*/

/* int	main(void)
{
	const int	arr[] = {4, 5, 6, 2, -1, 7, 78, -1, -1, -1, 9, 11, 65, -1, 7, 8, 9, 10, -1, 3, 4, 5, -1, 15, 34, 36, 12, 6};
	int		result;

	result = count_segments(arr, 28);
	printf ("founded %d sequences of 3\n", result);
	return (0);
}
 */