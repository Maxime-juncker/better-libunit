#include <Routine.hpp>
#include <Test.hpp>

#include <iomanip>
#include <stdlib.h>

/* -------------------------------------------------------------------------- */
/*                                   getters                                  */
/* -------------------------------------------------------------------------- */

int Routine::GetNbTests()
{
	return (m_tests.size());
}

int Routine::GetNbPassed()
{
	return (m_passed);
}

int Routine::TestsOK()
{
	return (m_passed == m_tests.size());
}

/* -------------------------------------------------------------------------- */

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
	m_passed = 0;

	std::cout << RESET << "==== " << BOLD << m_routine_name << RESET << " ====" << std::endl;
	while (i < m_tests.size())
	{
		m_passed += m_tests[i].RunTest(this);
		i++;
	}
	EndRoutine();
	return (m_passed);
}

void Routine::Clear()
{
	m_tests.clear();
}

void	Routine::PrintRes(void)
{
	std::cout << m_routine_name << " result: ";
	std::cout << "[" << m_passed << "/" << m_tests.size() << "]";

	std::cout << std::setfill('.') << std::setw(25 - m_routine_name.size() - 13);

	if (m_passed != m_tests.size())
		std::cout << "[" << RED << "FAILED" << RESET << "]" << std::endl;
	else
		std::cout << "[" << GREEN << "PASSED" << RESET << "]" << std::endl;
	std::cout << RESET << "\n";
}

/*
 * @brief Print the result of the routine
*/
void Routine::EndRoutine()
{
	if (m_res)
	{
		m_res->total_tests += GetNbTests();
		m_res->tests_passed += GetNbPassed();
		if (TestsOK())
			m_res->routine_passed++;
		m_res->total_routine++;

	}
	PrintRes();
	Clear();
}
