/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:00:09 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/27 16:40:25 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "showcase/tests.hpp"

int	main(void)
{
	t_FinalResult	res = {0, 0, 0, 0};

	test_routine(&res);
	ok_routine(&res);
}
