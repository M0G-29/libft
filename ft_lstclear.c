/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 01:36:04 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/06/01 17:19:12 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*index;

	if (*lst == NULL)
		return ;
	while (*lst)
	{
		index = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = index;
	}
	*lst = NULL;
}
