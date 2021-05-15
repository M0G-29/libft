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

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static void		check_memset(void *mem, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	free(mem);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;
	int		mem_size;

	alarm(5);
	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)) || argc == 1)
		return (0);
	memset(mem, 'j', mem_size);
	if ((arg = atoi(argv[1])) == 1)
		check_memset(mem, 'c', 5, mem_size);
	else if (arg == 2)
		check_memset(mem, 'c', 14, mem_size);
	else if (arg == 3)
		check_memset(mem, '\n', 6, mem_size);
	else if (arg == 4)
		check_memset(mem, '\0', 1, mem_size);
	return (0);
}