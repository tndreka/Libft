/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:37:27 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/15 17:17:30 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (!s1[0] && !s2[0])
		return (0);
	if (!s1[0])
		return (-1);
	if (!s2[0])
		return (1);
	while (s1[i] && s2[i] && n > i)
	{
		if ((char)s1[i] != (char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (s1[i] != s2[i] && i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/* 
 line 20 : check if n is 0 
 line 22 : check if the two strings are empty
 line 24 : check if s1 is empty and return -1 // bc s1 - s2 is negative // 
 line 26 : check if s2 is empty and return 1 // bc s1 (which contains value) -s2   
*/