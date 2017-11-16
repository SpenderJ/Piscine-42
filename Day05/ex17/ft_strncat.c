/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:35:34 by juspende          #+#    #+#             */
/*   Updated: 2017/07/08 22:04:08 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
		a = a + 1;
	while (src[i] != '\0' && i < nb)
	{
		dest[a] = src[i];
		a = a + 1;
		i = i + 1;
	}
	dest[a] = '\0';
	return (dest);
}
