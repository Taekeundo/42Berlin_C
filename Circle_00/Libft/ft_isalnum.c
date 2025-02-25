/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkwak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:59:13 by tkwak             #+#    #+#             */
/*   Updated: 2023/06/22 12:32:39 by tkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	[F]
	[ Definition ]
	check whether it's number.
*/
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*	[ Test ]
int main(void)
{
	int i;
	char str[] = "abcde1234}";
	i = 0;
	while (i < 10)
	{
		printf("%d\n", ft_isalnum(str[i]));
		i++;
	}
	return (0);
}
*/
