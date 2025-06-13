/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movie_planner.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:07:23 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/13 09:55:13 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVIE_PLANNER_H
# define MOVIE_PLANNER_H

#include <stdlib.h>

struct Preferences;
struct Plan;
struct MovieList;

struct Plan *create_movie_night_plan(void);
struct Preferences *get_user_preferences(void);
struct MovieList *find_movies(struct Preferences *prefs);
struct Plan *build_plan(struct MovieList *list);

#endif
