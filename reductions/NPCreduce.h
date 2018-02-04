#ifndef NPCreduce_HPP
#define NPCreduce_HPP

#include "../api/CVBase.hpp"

#include "../models/SubsetSum.hpp"
#include "../models/BinPacking2.hpp" //sugestion: do models.h with every file from ../models/ included

using namespace combview;

//PACKING & CUTTING PROBLEMS
BinPacking2* NPCreduce(SubsetSum& SS); //REDUCTION FROM SUBSETSUM

#endif //NPCreduce
