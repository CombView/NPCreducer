#include<iostream>

#include "CVBase.hpp"

using namespace std;
using namespace combview;



int main() {

	Set<int> s;
	s.elements.push_back(new int(4));
	int t = 4;
	if (s.in(t))
	   cout << "Ok" << endl;

	Array<int> a(1);
	a.elements.push_back(new int(4));
	a.elements.push_back(new int(5));
	a.elements.push_back(new int(6));
	a.elements.push_back(new int(7));
	cout << a.get(1, 2) << endl;

	return 0;
}
