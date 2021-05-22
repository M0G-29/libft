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
	t_dest = dest;//variaveis temporarias para nao mexer na memoria do original (conteudo)
	t_src = src;
	while (i < n)
	{
		c_src = t_src[i];//verificação de caracter por caracter 
		t_dest[i] = t_src[i];//copia normalmente entre as variaveis temporarias
		i++;
		if (c_src == c)//se o caracter for igual a o parametro de c entra.
		{
			ret_str = (char*)&t_dest[i];// copia o enderço de memoria ou seja o conteudo a partir da pocição atual do "i"???
			return ret_str;//retorna a partir do parametro encontrado na string adiante
		}
	}
	return (NULL);
}
