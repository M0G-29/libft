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
	size_t		i;
	char		*t_dest;
	const char	*t_src;
	char		*ret_str;
	char		c_src;

	i = 0;
	t_dest = dest;
	t_src = src;
	while (i < n)
	{
		c_src = t_src[i];
		t_dest[i] = t_src[i];
		i++;
		if (c_src == c)
		{
			ret_str = (char *)&t_dest[i];
			return (ret_str);
		}
	}
	return (NULL);
}
