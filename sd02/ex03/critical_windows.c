/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   critical_windows.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:40:37 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/18 16:35:14 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "critical_windows.h"

int	average(const int *arr, int size)
{
	int		sum;
	float	average;

	sum = 0;
	average = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	average = sum / size;
	return (average);
}

int	hi_reading(const int *arr, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > value)
			return (1);
	}
	return (0);
}

int	count_hi_readings(const int *arr, int size, int value)
{
	int	count;

	count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= value)
			count++;
	}
	return (count);
}

int	is_critical_window(const int *readings, int size)
{
	if (hi_reading(readings, size, 150) || (count_hi_readings(readings, size, 70) < 3) \
	|| average(readings, size) < 90)
		return (0);
	return (1);
}

int	count_critical_windows(const int *readings, int size)
{
	int	count;

	count = 0;
	for (int i = 0; i <= (size - 5); i++)
	{
		if (is_critical_window((readings + i), 5))
			count ++;
	}
	return (count);
}

int	main(void)
{
	const int	arr[] = {180, 100, 90, 90, 90, 90, 91, 80, 140};
	int			result;

	result = count_critical_windows(arr, 9);
	printf ("founded %d critical windows\n", result);
	return (0);
}
