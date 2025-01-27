/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_routine.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/27 14:10:45 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Routine.hpp>
#include <Test.hpp>
#include "tests.hpp"

int	tests_launch( void )
{
	Routine	launcher("showcase");

	/* ================ ADD TESTS HERE ================ */
	launcher.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	launcher.AddNewTest(Test("SHOWCASE", "ko", &ko_test));
	launcher.AddNewTest(Test("SHOWCASE", "segv", &segv_test));
	// ==================================================

	launcher.Run();
	return (0);
}
