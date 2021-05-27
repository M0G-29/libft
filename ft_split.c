/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:48:13 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/27 19:39:54 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)//conta quantas palavras tem para dividir
{
	size_t	i;
	size_t	wrd;

	wrd = 0;
	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if (i == 0)
			wrd++;
		else if (s[i - 1] == c && s[i] != c)
			wrd++;
		i++;
	}
	return (wrd);
}

static size_t ft_lenwrd(char const *s, char c)//conta quantos caracteres tem na plavra
{
	size_t size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	return (size);
}

static char	**ft_free(char **tab ,size_t len)//limpa a alocacao se deu ruim
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		free(tab[i]);//limpa ponteiro por ponteiro
		i++;
	}
	free(tab);//limpa o ponteiro do ponteiro
	return (NULL);
}


char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wrd;
	size_t	i;
	size_t	size;

	i = 0;
	wrd = ft_countword(s, c);
	tab = (char **)malloc(sizeof(char *) * (wrd + 1));//aloca wrd ponteiros + 1
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < wrd)
	{
		while (*s != '\0' && *s == c)//confere se no começo tem o parametro c
			s++;
		size = ft_lenwrd(s, c);// tamnho da palavra o *s ja ta na posicao q queremos
		tab[i] = ft_substr(s, 0, size);//copia com o start e end e aloca
		if (!tab[i])//se deu ruim limpa geral
			return (ft_free(tab, i));
		s += (size + 1);//interatividade assim n perdemos a posicao e continuamos de onde paramos
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
