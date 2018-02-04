#include "NPCreduce.h"

BinPacking2* NPCreduce(SubsetSum& SS){
	// reduction logic
	Set<double>& I = * new Set<double>;
	double Q = 1.0;
	int sum = 0;
	for_each(SS.I.elements.begin(), SS.I.elements.end(), [&sum](int* x){ sum += *x; });
	for_each(SS.I.elements.begin(), SS.I.elements.end(), [&I, &sum](int* a){ I.elements.push_back(new double(*a * 2.0/sum)); } );
	BinPacking2* BP2 = new BinPacking2(I, Q);
	
	return BP2;
  
	// or nullptr (if any problems)
	//return nullptr;
}
