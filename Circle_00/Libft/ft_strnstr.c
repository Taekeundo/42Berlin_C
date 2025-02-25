/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkwak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:47:51 by tkwak             #+#    #+#             */
/*   Updated: 2023/06/22 12:16:59 by tkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	[F]
	[ Definition ]
	Search Param(2):find from Param(3):str as much as n(index).

	[ Return ]
	Found	: string, which starts from [i] index.
	Not		: NULL	
*/
char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*find)
		return ((char *) str);
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == find[0])
		{
			j = 0;
			while ((i + j) < n && str[i + j] == find[j])
			{
				j++;
				if (!find[j])
					return ((char *)&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/*	[ Test ]
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	str1 = "abcdefghijk";
	str2 = "def";
	result = ft_strnstr(str1, str2, 3);
	if (result != (void *)0)
		printf("%s\n", result);
	else
		printf("Substring not found.\n");
	return (0);
}
*/
