/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:35:56 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/23 16:48:05 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;

	if (!s) // si es s 0 ret null
		return (NULL);
	i = 0;
	s_len = ft_strlen (s); // calculamos cuantos val hay en s
	if (start >= s_len) // si el start es mayor que s no se puede tomar car
	{
		res = (char *)malloc(1);
		if (res)
			res [0] = '\0';
		return (res); // se devuelve res como una cad vacia
	}
	if (len > s_len - start) // ajustar len si es nec
		len = s_len - start;
	res = (char *)malloc (len + 1); //new mem cade new + 1 terminador nulo
	if (res == NULL)
		return (NULL);
	while (i++ <= len)
		res [i - 1] = s[start + i - 1];
	res [i - 2] = '\0';
	return (res);
}
