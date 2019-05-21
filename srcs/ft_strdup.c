/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:31:29 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/20 14:08:00 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str);

char *ft_strdup(const char *str)
{
	int i;
	char *dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(str) + 1);
	while(str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);	
}