/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:22:58 by pamone            #+#    #+#             */
/*   Updated: 2023/07/21 18:24:57 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - *s2);
		s1 ++;
		s2 ++;
		n --;
	}
	return (0);
}
