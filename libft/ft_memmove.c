/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wspectra <wspectra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:02:20 by wspectra          #+#    #+#             */
/*   Updated: 2020/11/01 17:35:37 by wspectra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	if (!len || dst == src)
		return (dst);
	if (src < dst)
	{
		while (len-- > 0)
			((unsigned char*)ptr1)[len] = ((unsigned char*)ptr2)[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
