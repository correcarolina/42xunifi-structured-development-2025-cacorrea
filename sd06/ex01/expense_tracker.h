/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expense_tracker.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 10:41:21 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/20 11:01:28 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPENSE_TRACKER_H
# define EXPENSE_TRACKER_H
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_isdigit(int d);
int			ft_isprint(int c);
int			ft_strlen(const char *s);
int			ft_toupper(int c);
int			ft_sum(const int *arr, int size);
float		ft_average(int sum, int size);
char		*ft_str_toupper(const char *s);
char		*ft_strnstr(const char *pagliaio, const char *ago, size_t len);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
int			ft_printf(const char *str, ...);
char		*get_next_line(int fd);
void		ft_free_matrix(char **strs);
void		ft_putstr_fd(char *s, int fd);
int			get_type_of_camp();
char		*get_input_str();

#endif
