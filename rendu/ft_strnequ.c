/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:49:32 by adoat             #+#    #+#             */
/*   Updated: 2018/07/28 17:58:07 by adoat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < (int)n && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == (int)n || (*s1 == '\0' && *s2 == '\0'))
		return (1);
	return (0);
}