/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_routine.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/28 09:39:32 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Routine.hpp>
#include <Test.hpp>
#include "tests_ok.hpp"

int	ok_routine( void )
{
	Libunit::Routine	routine("ok tests");

	/* ================ ADD TESTS HERE ================ */
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Libunit::Test("SHOWCASE", "ok", &ok_test));
	// ==================================================

	routine.Run();
	return (routine.TestsOK());
}
