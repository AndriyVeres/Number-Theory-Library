#ifndef NumberTheory_h
#define NumberTheory_h
#include <cmath>
#endif

namespace NumberTheory
{
	bool if_perfect (int number);
	bool if_friendly (int number_a, int number_b);
	bool if_in_sufficient (int number);
	bool if_relatively_prime (int number_a, int number_b);
	bool if_Armstrong (int number);
	bool if_palindrom (int number);

	//functions-templates
	template <typename T>
	#include "NumberTheoryTemplates.h"
}