/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music_organizer.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:51:37 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/13 11:28:37 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUSIC_ORGANIZER_H
# define MUSIC_ORGANIZER_H

#include <stdlib.h>

struct MusicLibrary;
struct MusicFile;

struct MusicLibrary	*organize_music_library(const char *directory_path);
struct MusicLibrary	*create_music_library();
const char			**scan_directory(const char *directory_path);
struct MusicFile	*process_music_file(const char *directory_path, const char *filename);
void				update_music_library(struct MusicLibrary *library, struct MusicFile *song);

#endif
