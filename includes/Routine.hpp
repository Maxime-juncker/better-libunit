#pragma once

#include "libunit.hpp"
#include <vector>

class Test;

class Routine
{
private:
	std::vector<Test> m_tests;
	std::string m_routine_name;

public:
	Routine(std::string name) : m_routine_name{name} {}
	~Routine() {}

	void	AddNewTest(Test new_test);
	int		Run();
	void	Clear();

private:
	void	EndRoutine(size_t passed);
};
