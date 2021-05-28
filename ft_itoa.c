/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:33:19 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/28 19:33:37 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			sign;
	int			size;
	char		*conv;
	long int	nn;
	
	sign = n < 0;//operacao logica de comparacao,se for retorna 1 se n 0 (true or false), armazena em sign.
	nn = n;//para n mexer diretamente no n, é um bckp
	if (sign > 0)
		nn = -nn;//tiro o sinal
	size = 1;//pq o n tem o sinal de negativo entao meio q pularia e no while embaixo ele n pega o primeiro digito ele sai antes
	while (n / 10 != 0 && size++)
		n /= 10;//estou pegando q quantidade de caracteres, tirando numero por numero ate dar 0 e sair do while
	conv = malloc(sizeof(char) * (size + sign + 1));//aqui aloco memoria para o tamanho de digitos e para o sinal negativo e o \0 no fim
	if (!conv)
		return (NULL);
	conv[size + sign] = '\0';// coloco o \0 antes de decrementar pq vou fazer correr o caminho inverso <--
	while (size-- != 0)
	{
		conv[size + sign] = nn % 10 + '0';
		nn /= 10;
	}
	if (sign > 0)
		conv[0] = '-';
	return (conv);
}
