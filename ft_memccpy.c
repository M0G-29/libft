/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:06:44 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/16 13:06:44 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*s_dest;
	const unsigned char	*s_src;
	size_t				i;

	s_src = (unsigned char *)src;
	s_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{	
		s_dest[i] = s_src[i];
		if (s_src[i] == (unsigned char)c)
			return (s_dest + i + 1);
		i++;
	}
	return (NULL);
}
