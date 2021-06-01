/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 00:13:27 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/06/01 14:04:31 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newNode;

	newNode = malloc(sizeof(t_list));
	if (newNode == NULL)
		return (NULL);
	newNode->content = content;
	newNode->next = NULL;
	return (newNode);
}
