#ifndef ROUTINE_HPP
# define ROUTINE_HPP

#include <vector>
#include <string>
#include "libunit.hpp"
class Test;

class Routine
{
private:
	std::string 		m_routine_name = "default";
	t_FinalResult*		m_res = nullptr;
	std::vector<Test>	m_tests;
	size_t 				m_passed;

public:
	Routine(std::string name, t_FinalResult *res) : m_routine_name{name}, m_res{res} {}
	~Routine() {}

	void	AddNewTest(Test new_test);
	int		Run();
	void	Clear();
	void 	PrintRes(void);

	int		GetNbTests();
	int		GetNbPassed();
	int		TestsOK();

private:
	void	EndRoutine();
};

#endif