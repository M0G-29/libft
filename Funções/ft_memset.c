/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:04:02 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/15 14:04:02 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset (void *str, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *) str;
	while (n-- > 0)
		dest[n] = (unsigned char) c;
	return (dest);
}
