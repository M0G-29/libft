/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:48:18 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/21 14:54:07 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	cont2 = 0;
	if (*little == '\0') // Tratamento se little for string vazia retorna ponteiro para big
		return ((char *)big);
	while (cont1 < len && big[cont1])
	{
		/*ele entra na condição pq o cont2 ta zerado entao o valor de cont1 é ele mesmo ainda sem mudanças assim q entra e as condições sao verdaderias ai sim ele soma
		o cont1 fica estavel enquanto o cont2 aumenta e é isto q faz o cont1 ver se as prox posições sao iguais a little sem perder o valor de cont1 para se caso der errado
		o cont1 + cont2 é a medida de segurança para q saiba quando acabou a string para retornar NULL já o little != \0 é para saber quando little chegou ao fim pois sem ele
		sempre retorna NULL pq não é informado q ele ja chegou ao fim de little apenas para e sai do while com little na ultima casa da string mas n na ultima casa q determina q a string acabou q é o \0 */
		while (big[cont1 + cont2] == little[cont2] && cont1 + cont2 < len && little[cont2] != '\0')
			cont2++;
		if (little[cont2] == '\0')
			return ((char *)big + cont1);
		cont1++;
		cont2 = 0;
	}
	return (NULL);
}
