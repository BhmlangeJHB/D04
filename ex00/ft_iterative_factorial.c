/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmlange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:42:06 by bhmlange          #+#    #+#             */
/*   Updated: 2020/07/17 16:28:56 by bhmlange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	i = 1;
	fact = 1;
	if (nb <= i)
	{
		return 0;
	}
	else
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}

}
