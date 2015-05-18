/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalliot <jgalliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 11:32:39 by jgalliot          #+#    #+#             */
/*   Updated: 2015/05/18 14:19:52 by jgalliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
		int		i;

		if (!b)
			return (NULL);
		i = 0;
		while (i <= len)
		{
			(*((unsigned char *)b + i))= (unsigned char)c;
			i++;
		}
		return (b);
}
