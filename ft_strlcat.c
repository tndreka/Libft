/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:35:41 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/15 16:51:18 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>	

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_l;
	size_t	src_l;
	size_t	i;

	dest_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (dest_l >= dstsize)
		dest_l = dstsize;
	if (dest_l == dstsize)
		return (src_l + dstsize);
	i = 0;
	if (src_l < dstsize - dest_l)
	{
		while (i < src_l + 1)
		{
			dst[i + dest_l] = src[i];
			i++;
		}
	}
	else
	{
		while (i < dstsize - dest_l - 1)
		{
			dst[i + dest_l] = src[i];
			i++;
		}
		dst[dstsize - 1] = '\0';
	}
	return (dest_l + src_l);
}
