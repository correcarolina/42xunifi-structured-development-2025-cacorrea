/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesystem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:42:58 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/13 09:12:19 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filesystem.h"

FSNode	*create_file(const char *name, int size)
{
	FSNode	*new_file;
	char	*filename;

	new_file = (FSNode *)malloc(sizeof(FSNode));
	filename = strdup(name);
	if (!new_file || !filename)
		return (NULL);
	new_file->name = filename;
	new_file->size = size;
	new_file->parent = NULL;
	new_file->child = NULL;
	new_file->next_child = NULL;
	return (new_file);
}

FSNode	*create_folder(const char *name)
{
	FSNode	*new_folder;
	char	*foldername;

	new_folder = (FSNode *)malloc(sizeof(FSNode));
	foldername = strdup(name);
	if (!new_folder || !foldername)
		return (NULL);
	new_folder->name = foldername;
	new_folder->size = 0;
	new_folder->parent = NULL;
	new_folder->child = NULL;
	new_folder->next_child = NULL;
	return (new_folder);
}

void	add_child(FSNode *parent, FSNode *child)
{
	FSNode	*last_sibling;

	if (!parent || !child)
		return ;
	child->parent = parent;
	if (parent->size == 0)
	{
		if (parent->child == NULL)
		{
			parent->child = child;
			parent->next_child = child;
		}
		else
		{
			last_sibling = parent->next_child;
			while (last_sibling->next_child != NULL)
				last_sibling = last_sibling->next_child;
			last_sibling->next_child = child;
		}
	}
}

FSNode	*get_children(const FSNode *parent)
{
	FSNode	*children;

	children = NULL;
	if (parent)
		children = parent->child;//head of next_children list
	return (children);
}

FSNode	*get_sibling(const FSNode *node)
{
	FSNode	*sibling;

	sibling = NULL;
	if (!node || !node->parent)
		return (NULL);
	sibling = get_children(node->parent);
	return (sibling);
}
