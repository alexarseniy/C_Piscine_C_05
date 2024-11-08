/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:45:58 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:36:33 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power-- > 0)
		result = result * nb;
	return (result);
}
//
//int	main(int argc, char **argv)
//{
//	if (argc <= 2)
//		return (0);
//	printf("%i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
//	return (0);
//}
