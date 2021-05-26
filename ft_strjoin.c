/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:50:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/23 19:56:09 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*cc;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	cc = (char *)malloc(sizeof(char) * (i1 + i2 + 1));
	if (cc == NULL)
		return (NULL);
	ft_strlcpy(cc, s1, i1 + 1);
	ft_strlcat(cc + i1, s2, i2 + 1);
	return (cc);
}
