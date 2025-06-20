/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   critical_windows.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:41:23 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/11 12:45:14 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRITICAL_WINDOWS_H
# define CRITICAL_WINDOWS_H

//# include <stdio.h>

int	average(const int *arr, int size);
int	hi_reading(const int *arr, int size, int value);
int	count_hi_readings(const int *arr, int size, int value);
int	is_critical_window(const int *readings, int size);
int	count_critical_windows(const int *readings, int size);

#endif
