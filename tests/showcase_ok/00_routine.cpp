/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_routine.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/27 16:40:18 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Routine.hpp>
#include <Test.hpp>
#include "tests.hpp"

int	ok_routine( t_FinalResult* res )
{
	Routine	routine("ok tests", res);

	/* ================ ADD TESTS HERE ================ */
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	// ==================================================

	routine.Run();
	return (routine.TestsOK());
}
