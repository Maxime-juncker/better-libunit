#include <stdio.h>
#include <iostream>

#include "libunit.hpp"


int	stdout_test (void)
{
	Libunit::Redirect_log();
	printf("hello");
	if (Libunit::Check_output("hello") == 0)
		return (0);
	else
		return (1);
}
