/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:51:39 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 12:02:59 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (i < length)
	{
		if (tab[i] > res)
			res = tab[i];
		++i;
	}
	return (res);
}