/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:40:27 by azahid            #+#    #+#             */
/*   Updated: 2024/10/23 17:48:26 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str;
	unsigned char *str_;

	str = (unsigned char *)src;
	str_ = (unsigned char *)dst;
	while (n--)
	{
		*str_ = *str;
		str++;
		str_++;
	}
	return (dst);
}