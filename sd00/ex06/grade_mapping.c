/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_mapping.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:22:48 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/12 14:48:33 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grade_mapping.h"

const char	*plusminus_mapper(int score)
{
	if (score >= 97 && score <= 100)
		return ("A+");
	else if (score >= 93 && score <= 96)
		return ("A");
	else if (score >= 90 && score <= 92)
		return ("A-");
	else if (score >= 87 && score <= 89)
		return ("B+");
	else if (score >= 83 && score <= 86)
		return ("B");
	else if (score >= 80 && score <= 82)
		return ("B-");
	else if (score >= 77 && score <= 79)
		return ("C+");
	else if (score >= 73 && score <= 76)
		return ("C");
	else if (score >= 70 && score <= 72)
		return ("C-");
	else if (score >= 67 && score <= 69)
		return ("D+");
	else if (score >= 63 && score <= 66)
		return ("D");
	else if (score >= 60 && score <= 62)
		return ("D-");
	else if (score >= 0 && score <= 59)
		return ("F");
	else
		return ("invalid score");
}

const char	*passfail_mapper(int score)
{
	if (score >= 90 && score <= 100)
		return ("A+");
	else if (score >= 80 && score <= 89)
		return ("B");
	else if (score >= 70 && score <= 79)
		return ("C");
	else if (score >= 60 && score <= 69)
		return ("D");
	else if (score >= 0 && score <= 59)
		return ("F");
	else
		return ("invalid score");
}

const char	*standard_mapper(int score)
{
	if (score >= 60 && score <= 100)
		return ("P");
	else if (score >= 0 && score <= 59)
		return ("F");
	else
		return ("invalid score");
}

void	map_scores(const int *scores, int size, GradeMapper mapper, const char **mapped_grades)
{
	int	i;

	i = 0;
	while (i < size)
	{
		mapped_grades[i] = mapper(scores[i]);
		i++;
	}
}

/* int	main(void)
{
	int			scores[] = {98, 87, 72, 55, 94};
	const char	*grades[5];
	int 		i = 0;

	map_scores(scores, 5, plusminus_mapper, grades);
	while (i < 5)
	{
		printf("Score: %d → Grade: %s\n", scores[i], grades[i]);
		i++;
	}
	return (0);
} */