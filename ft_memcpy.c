/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 10:59:19 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/16 10:59:19 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*n_dest;
	const char	*n_src;
	size_t		i;

	i = 0;
	n_dest = dest;
	n_src = src;
	while (n-- > 0)
	{
		n_dest[i] = n_src[i];
		i++;
	}
	return (dest);
}
