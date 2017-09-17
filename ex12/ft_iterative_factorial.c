/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtonizzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:00:25 by vtonizzo          #+#    #+#             */
/*   Updated: 2016/11/04 04:41:14 by vtonizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb >= 2)
	{
		i = 0;
		f = nb;
		while (++i < nb)
			f = f * (nb - i);
		return (f);
	}
	else
		return (1);
}
