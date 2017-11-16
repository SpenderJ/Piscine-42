/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:49:46 by juspende          #+#    #+#             */
/*   Updated: 2017/07/05 17:30:09 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	c;

	i = *a / *b;
	c = *a % *b;
	*a = i;
	*b = c;
}
