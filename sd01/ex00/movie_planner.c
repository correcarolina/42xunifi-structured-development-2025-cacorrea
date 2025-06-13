/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movie_planner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:07:14 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/13 10:13:56 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movie_planner.h"

struct Plan *create_movie_night_plan(void)
{
	struct Preferences	*prefers = NULL;
	struct MovieList	*lst = NULL;
	struct Plan			*plan = NULL;
	
	prefers = get_user_preferences();
	if (!prefers)
		return (NULL);
	lst = find_movies(prefers);
	if (!lst)
	{
		free(prefers);
		return (NULL);
	}
	plan = build_plan(lst);
	free(prefers);
	free(lst);
	return (plan);
}