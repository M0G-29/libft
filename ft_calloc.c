/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:47:31 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/22 22:51:20 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (p[i] < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
