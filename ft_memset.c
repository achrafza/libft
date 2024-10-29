/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:23:27 by azahid            #+#    #+#             */
/*   Updated: 2024/10/22 16:01:40 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void 	*ft_memset(void *b, int c, size_t len){
	unsigned char *str;

	str = (unsigned char *)b;
	while (len--)
		*(str++)=(unsigned char)c;
	return (b);
}
