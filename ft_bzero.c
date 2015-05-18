/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalliot <jgalliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 13:27:12 by jgalliot          #+#    #+#             */
/*   Updated: 2015/05/18 14:19:07 by jgalliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (s)
		ft_memset(s, 0, n);
}

int		main()
{
	char  str[50] = "Damien est un schlag";
	
	printf("%s", str);
	ft_bzero(str, 4);
	printf("%s", str);
	return (0);
}
