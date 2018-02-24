#include "NPCreduce.h"

BinPacking* NPCreduce(SubsetSum& SS){
	// reduction logic
	Set<double>* I = new Set<double>;
	double Q = 1.0;
	int sum = 0;
	for_each(SS.I.elements.begin(), SS.I.elements.end(), [&sum](int* x){ sum += *x; });
	for_each(SS.I.elements.begin(), SS.I.elements.end(), [I, &sum](int* a){ I->elements.push_back(new double(*a * 2.0/sum)); } );
	BinPacking* BP2 = new BinPacking(I, Q, 2); // K = 2 bins

	return BP2;

	// or nullptr (if any problems)
	//return nullptr;
}
