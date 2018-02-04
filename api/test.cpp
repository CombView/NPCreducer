#include<iostream>
#include<algorithm>


#include "CVBase.hpp"
#include "../reductions/NPCreduce.h"
//sugestion: do a models.h file

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
	
	for(int i = 1; i < 4; ++i) 	s.elements.push_back(new int(i));
	struct SubsetSum SS(s);
	struct BinPacking2* BP2 = NPCreduce(SS);
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Bin capacity: " << BP2->Q << endl;
	cout << "Itens: ";
	for_each(BP2->I.elements.begin(), BP2->I.elements.end(), [](double* w){ cout << *w << " "; });
	cout << endl;
	
	delete& BP2->I;
	delete BP2;
	
	return 0;
}
