/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:18:23 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/20 12:30:57 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	found;

	i = 0;
	found = (char) c;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
