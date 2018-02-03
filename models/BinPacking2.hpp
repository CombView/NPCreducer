#include "../api/CVBase.hpp"

using namespace combview;

struct BinPacking2
{
   Set<double>& I;
   double Q;

   BinPacking2(Set<double>& _I, double _Q) :
      I(_I), Q(_Q)
   {
   }
};
