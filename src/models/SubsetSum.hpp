#include "../api/CVBase.hpp"

using namespace combview;

struct SubsetSum //why struct?
{
   Set<int>& I;

   SubsetSum(Set<int>& _I) :
      I(_I)
   {
   }
};
