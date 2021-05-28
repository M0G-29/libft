/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 23:15:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/27 22:02:03 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*alloc;
	int		start;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	start = ft_strlen(s1);
	while (start && ft_strchr(set, s1[start]))
		start--;
	alloc = (char *)malloc(sizeof(char) * start + 1);
	if (alloc == NULL)
		return (NULL);
	return (ft_substr(s1, 0, start + 1));
}

