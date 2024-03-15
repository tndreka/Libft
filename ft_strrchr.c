/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:37:08 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/15 17:38:21 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_c;

	last_c = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			last_c = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last_c);
}
/*
int main()
{
	char *str = "this ,is My ,string!!";
	printf("the last match of the character : %s\n",ft_strrchr(str, '{'));

	return(0);
}
*/