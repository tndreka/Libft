/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:35:02 by tndreka           #+#    #+#             */
/*   Updated: 2024/03/13 19:51:20 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;
	char		*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	if ((p_dst == NULL) && (p_src == NULL))
		return (NULL);
	if (p_dst > p_src)
	{
		while (len--)
		{
			p_dst[len] = p_src[len];
		}
	}
	else
	{
		while (len--)
		{
			*p_dst = *p_src;
			p_dst++;
			p_src++;
		}
	}
	return (dst);
}
