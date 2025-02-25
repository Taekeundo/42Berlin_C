/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkwak <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:49:46 by tkwak             #+#    #+#             */
/*   Updated: 2023/06/22 12:18:30 by tkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	[F]
	[ Definition ]
	Conver upper case to lower case.
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*	[ Test ]
int	main(void)
{
	int	a;

	a = 'B';
	printf("%d\n", ft_tolower(a));
	return (0);
}
*/
