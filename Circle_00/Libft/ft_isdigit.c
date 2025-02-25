/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkwak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:09:10 by tkwak             #+#    #+#             */
/*   Updated: 2023/06/22 12:08:41 by tkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	[F]
	[ Definition ]
	check whether it's digit.
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
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
		printf("%d\n", ft_isdigit(str[i]));
		i++;
	}
	return (0);
}
*/
