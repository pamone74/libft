/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:30:10 by pamone            #+#    #+#             */
/*   Updated: 2023/07/21 18:19:07 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alum)
{
	if ((ft_isalpha(alum) == 1) || (alum >= '0' && alum <= '9'))
		return (1);
	else
		return (0);
}
