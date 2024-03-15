/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:36:36 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/15 17:33:39 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
//int main()
//{
//	char *str = "this is My string!!";
//	char *first_M = ft_strchr(str, 'M');
//	printf("first_M : %s\n", first_M);
//	char *first_T = ft_strchr(str, 'T');
//	printf("first_T : %s\n", first_T);
//	return(0);
//}