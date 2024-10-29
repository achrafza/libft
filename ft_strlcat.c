/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:14:18 by azahid            #+#    #+#             */
/*   Updated: 2024/10/22 19:31:10 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char * dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	else if (size < destlen)
		return (size + srclen);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (destlen + srclen);
}
