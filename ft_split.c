/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:48:13 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/27 15:59:19 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//clermalloc --
//mallocposi --
//count words --
//??copia com dup?? ???
// TALVEZ PASAR S PARA UMA *TEMP ????

static int	ft_countword(const char *s, char c)
{
	unsigned int	crc;
	unsigned int	wrd;

	crc = 0;
	wrd = 0;
	while (s[crc] != '\0')
	{
		while (s[crc] == c) //enquanto for igual ao c. Saiu daqui quer dizer q começou a palavra
			crc++;
		if (s[crc] != c)
			wrd++;//se n for nulo quer dizer q é uma palvra incrementa um e vai contar as palavras
		while (s[crc] != '\0' && s[crc] != c)
			crc++;//continua avançando pq precisa ir ate o fim para ssaber se tem mais ao sair daqui
			//ele vai conferir dnv o primeiro while para ver se acabou a palavra e tem mais ou acabou tudo
	}
	return (wrd);//agr sei quantas palavras tem para alocar os ponteiros
}

static char	**ft_free(char **tab)
{
	unsigned int	i;
	
	i = 0;
	while (tab[i])
	{
		free(tab[i]);//limpa ponteiro por ponteiro
		i++;
	}
	free(tab);//limpa o ponteiro do ponteiro
	return (NULL);
}

char **ft_cpy(char *tab)

char **ft_split(char const *s, char c)
{
	unsigned int	c1;
	unsigned int	c2;
	unsigned int	i;
	char			**tab;

	c1 = 0;
	c2 = 0;
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1)); /*aqui aloco so espaços no tab[WRD] dps tem q alocar para
	as palavras em cada tab[WRD]*/
	while (s[c1] != '\0')
	{
		while (s[c1] == c)
			c1++;
		c2 = c1;//aqui armazeno o valor de c1 pq ai sei quando começa o palavra vou usr dps
		while (s[c1] != '\0' && s[c1] != c)//aqui ja começo ver o tamanho da palavra
			c1++;
		if (c1 > c2)//aqui garanto q é uma palvra e começo a alocar e copiar
		{
			tab[i] = (char *)malloc(sizeof(char) * (c1 - c2 + 1));//aloca espeço na matriz para a string
			if (tab[i] == NULL)
				return (ft_free(tab));//se der ruim ja faz o free
			ft_strlcpy(tab[i], s + c2, (c1 - c2 + 1));
			i++;//incrementa o i e repete o while se ainda for verdadeiro
		}
	}
	tab[i] = NULL;
	return (tab);
}
