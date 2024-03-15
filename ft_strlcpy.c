/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:35:22 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/14 17:51:38 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (dstsize == 0)
	{
		return (src_len);
	}
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
int	main(void)
{
	char	dst[20];
	char	src[] = "Hello, world!34";
	size_t	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("the dest len:%zu\n", strlen(dst));
	printf("Copied string: %s\n", dst);
		printf("Length of copied string: %zu\n", len);
	return (0);
}
*/