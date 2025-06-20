/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_mapping.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:22:59 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/12 14:49:09 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADE_MAPPING_H
# define GRADE_MAPPING_H

//#include <stdio.h>

typedef const char	*(*GradeMapper)(int score);

void		map_scores(const int *scores, int size, GradeMapper mapper, const char **mapped_grades);
const char	*plusminus_mapper(int score);
const char	*passfail_mapper(int score);
const char	*standard_mapper(int score);

#endif
