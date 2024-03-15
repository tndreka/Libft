/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:34:23 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/13 18:19:35 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*(temp) = 0;
		n--;
		temp++;
	}
}

/*
int	main(void)
{
	char	s[] = "taulant";

	ft_bzero(s, 3);
	printf ("the result : %s\n", s);
	return (0);
}
*/