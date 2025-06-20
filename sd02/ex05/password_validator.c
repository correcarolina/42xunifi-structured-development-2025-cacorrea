/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:06:29 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/18 17:02:50 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "password_validator.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isuppercase(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_islowercase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

int	ft_is_specialchar(int c)
{
	if (c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*')
		return (1);
	return (0);
}

PwStatus	validate_password(const char *new_pw, const char *curr_pw)
{
	int	i;
	Pw	new = {0};

	i = 0;
	if (!new_pw || !curr_pw)
		return (INVALID);
	if (!ft_strcmp(new_pw, curr_pw) || ft_strlen(new_pw) < 9)
		return (INVALID);
	while (new_pw[i])
	{
		if (ft_isuppercase(new_pw[i]))
			new.uppercase = 1;
		else if (ft_islowercase(new_pw[i]))
			new.lowercase = 1;
		else if (ft_isdigit(new_pw[i]))
			new.digit = 1;
		else if (ft_is_specialchar(new_pw[i]))
			new.special_char = 1;
		i++;
	}
	if (new.uppercase == 0 || new.lowercase == 0 || new.digit == 0 || new.special_char == 0)
		return (INVALID);
	return (VALID);	
}
