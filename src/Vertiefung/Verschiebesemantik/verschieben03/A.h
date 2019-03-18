#pragma once
#include <vector>
#include <iostream>

struct A {
	std::vector<int> v;
	A(std::initializer_list<int> l) : v(l) {}
	A(const A& a);
	//A(A&& a);
	A& operator=(const A& a);
	//A& operator=(A&& a);
	static void tauschePerKopie(A&, A&); 
	static void tauschePerVerschiebung(A&, A&); 
};

std::ostream& operator<<(std::ostream& os, const A& a);
