/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:34:42 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/13 18:30:48 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;
	size_t		i;

	p_dst = (char *)dst;
	p_src = (char *)src;
	i = 0;
	if ((p_dst == NULL) && (p_src == NULL))
		return (NULL);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return ((void *)dst);
}

/*
int	main(void)
{
	char	dest[100];
	char	src[] = "This is the function memcpy";
	printf("this is the source : %s\n", src);
	printf("this is te test of dest with memcpy : %s\n", ft_memcpy(dest, src, 27));
	return (0);
}
*/