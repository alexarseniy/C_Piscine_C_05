/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:39:34 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:36:27 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
//
//int	main(int argc, char **argv)
//{
//	if (argc == 1)
//		return (0);
//	printf("%i\n", ft_recursive_factorial(atoi(argv[1])));
//	return (0);
//}
