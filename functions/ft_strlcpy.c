/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:39:25 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/16 17:39:25 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont1;
	unsigned int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (src[cont1] != '\0')
	{
		++cont1;
	}//check size
	if (size > 0)//size can't be less than 0
	{
		while (src[cont2++] != '\0' && cont2 < (size - 1))//size - 1 cause can't count the \0
		{
			dest[cont2] = src[cont2];//copy to dest but doesn't copy the \0 cause the -1 make it secure for don't cpy a null byte
		}
		dest[cont2] = '\0';// add \0 and return the counter1
	}
	return (cont1);
}
