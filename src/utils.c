/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:21:46 by mhaksal           #+#    #+#             */
/*   Updated: 2022/04/27 14:21:47 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (1);
		else if (*(unsigned char *)s2 > *(unsigned char *)s1)
			return (-1);
		else if (*(unsigned char *)s1 == '\0' && *(unsigned char *)s2 == '\0')
			return (0);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

int	ft_strlen(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}
