/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:50:17 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/20 12:04:55 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	found;

	found = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;;
	}
	if (s[i] == found)
		return ((char *)s + i);
	return (NULL);
}

int main()
{
	char str1[] = "largatixa";
	char *retorno1 = strchr(str1, 'V');
	char str2[] = "largatixa";
	char *retorno2 = ft_strchr(str2, 'V');
	printf("Esperado: %s ...... Recebido: %s\n",retorno1, retorno2);
	
	char str3[] = "largatixa";
	char *retorno3 = strchr(str3, 'NULL');
	char str4[] = "largatixa";
	char *retorno4 = ft_strchr(str4, 'NULL');
	printf("Esperado: %s ...... Recebido: %s\n",retorno3, retorno4);

	char str5[] = "largatixa";
	char *retorno5 = strchr(str5, '\0');
	char str6[] = "largatixa";
	char *retorno6 = ft_strchr(str6, '\0');
	printf("Esperado: %s ...... Recebido: %s\n",retorno5, retorno6);
	
	char str7[] = "largatixa";
	char *retorno7 = strchr(str7, 'g');
	char str8[] = "largatixa";
	char *retorno8 = ft_strchr(str8, 'g');
	printf("Esperado: %s ...... Recebido: %s\n",retorno7, retorno8);
}