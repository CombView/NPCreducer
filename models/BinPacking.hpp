#include "../api/CVBase.hpp"

using namespace combview;

class BinPacking
{
public:
   Set<double>* I;
   double Q;
   int K;

   BinPacking(Set<double>* _I, double _Q, int _K) :
      I(_I), Q(_Q), K(_K)
   {
   }
};
