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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	const char	*new_src;
	size_t i;

	i = 0;
	new_dest = (unsigned char *)dest;
	new_src = (const char *)src;
	if (dest > src)
		while (n--)
			new_dest[n] = new_src[n];
	else
	{
		while (i > n)
		{
		new_dest[i] = new_src[i];
		i++;
		}
	}
	return (dest);
}

