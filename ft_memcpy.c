/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalliot <jgalliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 14:07:48 by jgalliot          #+#    #+#             */
/*   Updated: 2015/05/18 14:30:24 by jgalliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	if (!src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		(*((unsigned char *)dst  + i)) = (*((unsigned char *)src + i));
		i++;
	}
	return (dst);
}

int		main()
{
	char	str[50] = "Arthur fait du bruit";;
	char	str2[50];

	printf("%s", ft_memcpy(str2, str, 6));
	return (0);
}
