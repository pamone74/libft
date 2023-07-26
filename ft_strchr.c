/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:21:41 by pamone            #+#    #+#             */
/*   Updated: 2023/07/21 18:24:11 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ch;

	ch = (char *) str;
	while (*ch || *ch == (char)c)
	{
		if (*ch == c)
			return (ch);
		ch ++;
	}
	return (NULL);
}
