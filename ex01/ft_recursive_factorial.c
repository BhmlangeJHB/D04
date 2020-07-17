/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmlange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:18:50 by bhmlange          #+#    #+#             */
/*   Updated: 2020/07/17 16:27:24 by bhmlange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return 1;
	}
	else
		return nb * ft_recursive_factorial(nb -1);
}
