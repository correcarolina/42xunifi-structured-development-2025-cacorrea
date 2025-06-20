/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_validator.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:06:39 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/18 17:01:02 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PASSWORD_VALIDATOR_H
# define PASSWORD_VALIDATOR_H

//# include <stdio.h>

typedef struct Pw
{
	int	uppercase;
	int	lowercase;
	int	digit;
	int	special_char;
}		Pw;

typedef enum
{
	VALID,
	INVALID
}		PwStatus;

PwStatus	validate_password(const char *new_pw, const char *curr_pw);
int			ft_strlen(const char *s);
int			ft_isdigit(int c);
int			ft_isuppercase(int c);
int			ft_islowercase(int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_is_specialchar(int c);

# endif
