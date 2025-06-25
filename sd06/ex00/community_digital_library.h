/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   community_digital_library.h                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:18:58 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/24 10:51:58 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMUNITY_DL_H
# define COMMUNITY_DL_H
# include <stdlib.h>

int			ft_isdigit(int d);
int			ft_isprint(int c);
int			ft_strlen(const char *s);
int			ft_toupper(int c);
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
