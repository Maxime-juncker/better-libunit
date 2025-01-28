/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_showcase.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/28 10:56:01 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Routine.hpp>
#include <Test.hpp>
#include "tests.hpp"

int test_routine( void )
{
	Libunit::Routine	routine("showcase");

	/* ================ ADD TESTS HERE ================ */
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ko", &ko_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok2", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok3", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ko2", &ko_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "segv", &segv_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "stdout", &stdout_test));
	// ==================================================

	routine.Run();
	return (routine.TestsOK());
}
