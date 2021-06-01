/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 17:18:37 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/06/01 14:04:12 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	nlen;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	nlen = ft_strlen(s + start);
	if (nlen < len)
		len = nlen;
	ns = (char *)malloc(sizeof(char) * (len + 1));
	if (ns == NULL)
		return (NULL);
	ft_strlcpy(ns, s + start, len + 1);
	return (ns);
}
