/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:16:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/17 13:16:21 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	const char		*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (const char *)src;
	if (dest > src)
		while (n--)
			new_dest[n] = new_src[n];
	else
		ft_memcpy(new_dest, new_src, n);
	return (dest);
}
