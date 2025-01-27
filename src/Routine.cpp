#include <Routine.hpp>

#include <iomanip>
#include <stdlib.h>
#include <Test.hpp>

void Routine::AddNewTest(Test new_test)
{
	m_tests.push_back(new_test);
}

/*
 * @brief Run all tests in the routine
 * @return number of tests passed
*/
int Routine::Run()
{
	size_t	i = 0;
	size_t	passed = 0;

	std::cout << RESET << "==== " << BOLD << m_routine_name << RESET << " ====" << std::endl;
	while (i < m_tests.size())
	{
		passed += m_tests[i].RunTest(this);
		i++;
	}
	EndRoutine(passed);
	return (passed);
}

void Routine::Clear()
{
	m_tests.clear();
}

/*
 * @brief Print the result of the routine
*/
void Routine::EndRoutine(size_t passed)
{
	std::cout << m_routine_name << " result: ";
	std::cout << "[" << passed << "/" << m_tests.size() << "]";

	std::cout << std::setfill('.') << std::setw(25 - m_routine_name.size() - 13);

	if (passed != m_tests.size())
		std::cout << "[" << RED << "FAILED" << RESET << "]" << std::endl;
	else
		std::cout << "[" << GREEN << "PASSED" << RESET << "]" << std::endl;
	std::cout << RESET << "\n";
	Clear();
}
