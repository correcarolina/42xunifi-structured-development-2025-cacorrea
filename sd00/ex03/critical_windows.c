/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   critical_windows.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:40:37 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/11 12:44:53 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "critical_windows.h"

int	average(const int *arr, int size)
{
	int		i;
	int		sum;
	float	average;

	i = 0;
	average = 0;
	sum = 0;
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	average = sum / size;
	return (average);
}

int	hi_reading(const int *arr, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] > value)
			return (1);
		i++;
	}
	return (0);
}

int	count_hi_readings(const int *arr, int size, int value)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (arr[i] >= value)
			count++;
		i++;
	}
	return (count);
}

int	is_critical_window(const int *readings, int size)
{
	if (hi_reading(readings, size, 150))
		return (0);
	if (count_hi_readings(readings, size, 70) < 3)
		return (0);
	if (average(readings, size) < 90)
		return (0);
	return (1);
}

int	count_critical_windows(const int *readings, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i <= (size - 5))
	{
		if (is_critical_window((readings + i), 5))
			count ++;
		i++;
	}
	return (count);
}

/*int	main(void)
{
	const int	arr[] = {180, 100, 100, 100, 100, 90, 70, 80, 140};
	int			result;

	result = count_critical_windows(arr, 9);
	printf ("founded %d critical windows\n", result);
	return (0);
}*/
