/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_manager.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:02:42 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/20 11:56:41 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_MANAGER_H
# define CONTACT_MANAGER_H
# include <stdlib.h>

typedef struct s_contact_lst
{
	int		id;
	char	*name;
	char	*phone;
	char	*email;
	char	*city;
	char	*address;
	struct s_contact_lst	*next;
}		t_contact_lst;

int			ft_isalpha(int c);
int			ft_isdigit(int d);
int			ft_isprint(int c);
int			ft_strlen(const char *s);
int			ft_toupper(int c);
char		*ft_str_toupper(const char *s);
char		*ft_strchr(const char *s, int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_atoi(const char *nb);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
int			ft_printf(const char *str, ...);
char		*get_next_line(int fd);
void		ft_free_matrix(char **strs);
int			get_type_of_camp();
char		*get_input_str();
t_contact_lst	*ft_contact_lstnew(int id, char *name, char	*phone, char *email,\
	char *city, char *address);
void	ft_contact_insert_node(t_contact_lst **head, t_contact_lst *new_node, int id);
void	ft_contact_clear_lst(t_contact_lst **head);
void	ft_remove_contact_node(t_contact_lst **head, t_contact_lst *node);

#endif
