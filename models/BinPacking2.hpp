#include "../api/CVBase.hpp"

using namespace combview;

struct BinPacking2 //why struct? class
{
   Set<double>& I; //careful with reference ... if the programmer does use local variables to pass to this struct, then the program will crash with segmentation fault ... 
   double Q;

   BinPacking2(Set<double>& _I, double _Q) :
      I(_I), Q(_Q)
   {
   }
};
