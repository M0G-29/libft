/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:31:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/21 19:41:24 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ld;
	size_t	s;
	size_t	ls;

	ld = 0;
	ls = 0;
	s = 0;
	while (dest[ld] != '\0' && ld < size)
		ld++;
	while (src[ls] != '\0')
		ls++;
	if (ld > size - 1)
		return (ld + ls);
	while (src[s] != '\0' && (ld + s) < (size - 1))
	{
		dest[ld + s] = src[s];
		s++;
	}
	dest[ld + s] = '\0';
	return (ld + ls);
}
