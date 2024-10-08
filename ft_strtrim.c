/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:01:30 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/08 19:15:14 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	d;
	char	*finalpointer;
	size_t	total_size_s1;

	if ((set == NULL || s1 == NULL))
	{
		return NULL;
	}

	i = 0;
	while ((s1[i] != '\0') && (ft_strchr(set, s1[i]) != NULL))
	{
		i++;
	}
	total_size_s1 = ft_strlen(s1);
	d = total_size_s1;
	while ((d != '\0') && (ft_strchr(set, s1[d] != NULL)))
	{
		d++;
	}
	finalpointer = ft_substr(s1, i, d, +1);
	return (finalpointer);
}

// int	main(void){
// 	char const	str1[] = "    I'm fast learner   	";
// 	char const result[] = "I'm";
// 	printf("%s\n", ft_strtrim(str1, result));
// }