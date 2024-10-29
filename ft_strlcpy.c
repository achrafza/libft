/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:22:43 by azahid            #+#    #+#             */
/*   Updated: 2024/10/22 18:11:18 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst,const char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(src);
	if(!dstsize) return len;
	while(--dstsize && *src)
		*(dst++)=*(src++);
	*dst = 0;
	return len;
}
