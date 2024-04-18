/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:11:42 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/17 13:10:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*fstr;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	fstr = (char *)malloc((len + 1) * sizeof(char));
	if (fstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}