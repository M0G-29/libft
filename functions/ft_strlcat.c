/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:31:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/21 18:52:44 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t ld;
	size_t s;
	size_t ls;
	
	ld = 0;
	ls = 0;
	s = 0;
	while (dest[ld] != '\0' && ld < size)
		ld++;
	while (src[ls] != '\0')
		ls++;
	if (ld > size)//desconsidera o \0
		return (size + ls);
	while (src[s] != '\0' && (ld + s) < (size - 1))
	{
		dest[ld + s] = src[s];//ld estatico enquanto s++ muda a array de lugar 
		s++;
	}
	dest[ld + s] = '\0';
	return (ld + ls);
}

int	main()
{
	char dest[] = "largatixa";
	char src[] = "malasiatica";
	int retorno = strlcat(dest, src, 20);

	printf("dest: %s ... retorno: %d\n", dest, retorno);
}
