/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 02:44:26 by juspende          #+#    #+#             */
/*   Updated: 2017/07/14 02:48:10 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		temp;
	int		wait;

	temp = *******c;
	*******c = ***a;
	wait = ****d;
	****d = temp;
	temp = *b;
	*b = wait;
	***a = wait;
}
