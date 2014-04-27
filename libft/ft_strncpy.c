/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:49:24 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:49:26 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*save;

	save = s1;
	while (*s2 && n != 0)
	{
		*s1++ = *s2++;
		n--;
	}
	while (n != 0)
	{
		*s1++ = '\0';
		n--;
	}
	return (save);
}