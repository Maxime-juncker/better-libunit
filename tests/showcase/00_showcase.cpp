/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_showcase.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/27 16:31:21 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Routine.hpp>
#include <Test.hpp>
#include "tests.hpp"

int test_routine( t_FinalResult *res )
{
	Routine	routine("showcase", res);

	/* ================ ADD TESTS HERE ================ */
	routine.AddNewTest(Test("SHOWCASE", "ok", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ko", &ko_test));
	routine.AddNewTest(Test("SHOWCASE", "ok2", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ok3", &ok_test));
	routine.AddNewTest(Test("SHOWCASE", "ko2", &ko_test));
	routine.AddNewTest(Test("SHOWCASE", "segv", &segv_test));
	// ==================================================

	routine.Run();
	return (routine.TestsOK());
}
