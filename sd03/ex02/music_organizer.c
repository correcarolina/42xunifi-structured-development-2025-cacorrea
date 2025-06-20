/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music_organizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:51:45 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/18 18:15:22 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "music_organizer.h"

void	ft_free_matrix(char **matrix)
{
	int	i;
	
	i = 0;
	while (matrix[i] != NULL)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

struct MusicLibrary *organize_music_library(const char *directory_path)
{
	struct MusicLibrary	*music_lib;
	struct MusicFile	*music_file;
	const char 			**filesname;
	int i = 0;
	
	
	filesname = scan_directory(directory_path);
	if (!filesname)
		return (NULL);
	music_lib = create_music_library();
	if (!music_lib)
	{
		ft_free_matrix((char **)filesname);
		return (NULL);	
	}
	while (filesname[i] != NULL)
	{
		music_file = process_music_file(directory_path, filesname[i]);
		if (!music_file)
		{
			ft_free_matrix((char **)filesname);
			free(music_lib);
			return (NULL);
		}
		update_music_library(music_lib, music_file);
		i++;
	}
	ft_free_matrix((char **)filesname);
	return (music_lib);
}




// Creates and returns a new music library. Returns NULL on fail
struct MusicLibrary *create_music_library();
// Scans a directory for music files. Returns a NULL terminated array of filenames.
const char **scan_directory(const char *directory_path);
// Processes a single music file. Returns a data structure representing the processed file.
struct MusicFile *process_music_file(const char *directory_path, const char *filename);
// Updates the music library with the processed music file information.
void update_music_library(struct MusicLibrary *library, struct MusicFile *song);


