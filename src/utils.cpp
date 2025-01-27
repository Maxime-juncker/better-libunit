#include "libunit.hpp"

void	PrintFinalResult(t_FinalResult res)
{
	std::cout << "======================" << std::endl;
	std::cout << "Total tests: " << res.routine_passed << std::endl;
	std::cout << "======================" << std::endl;
}