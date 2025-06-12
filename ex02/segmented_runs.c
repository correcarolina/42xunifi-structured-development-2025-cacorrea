/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmented_runs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:42:12 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/11 13:00:26 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "segmented_runs.h"

int	is_sequence_of_3(const int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		if (arr[i + 1] != arr[i] + 1)
			j = 0;
		else
			j++;
		i++;
		if (j == 2)
			break ;
	}
	if (j == 2)
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
	const int	arr[8] = {4, 0, 1, 2, 7, 78, 9, 11};
	int		result;

	result = is_sequence_of_3(arr, 8);
	if (result)
		printf ("sequence of 3 found\n");
	else
		printf ("sequence of 3 NOT found\n");
	return (0);
} */

/* int	main(void)
{
	const int	arr[] = {4, 5, 6, 2, -1, 7, 78, -1, -1, -1, 9, 11, 65, -1, 7, 8, 9, 10, -1, 3, 4, 5, -1, -5, -4, -3, -2, 0};
	int		result;

	result = count_segments(arr, 28);
	printf ("founded %d sequences of 3\n", result);
	return (0);
} */
