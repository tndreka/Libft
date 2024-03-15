/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:36:21 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/14 15:09:45 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char	s = 'T';
	char	d = 't';
	char	f = '0';


	printf("the letter is : %c\n", ft_tolower(s));
	printf("the letter is : %c\n", ft_tolower(d));
	printf("the letter is : %c\n", ft_tolower(f));

	return (0);
}
*/