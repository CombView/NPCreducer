
#ifndef CVBase_HPP
#define CVBase_HPP

#include<iostream>
#include<vector>
#include<cstdarg>
#include<algorithm>

using namespace std;

namespace combview {

// basic data structure definitions

// set of $X
template<class X>
class Set {
	public:
	vector<X*> elements;

	bool in(const X& x) const{
		for(X* k : elements)
			if(x == *k)
				return true;
		return false;
	}

	int card() const {
		return elements.size();
	}
	
	~Set(){
		std::for_each(elements.begin(), elements.end(), [](X* e){ delete e; } );
	}
};

// array of $X
template<class X>
class Array
{
	public:
	vector<X*> elements;
	vector<unsigned> dimensions;

	Array(unsigned dim) {
		dimensions = vector<unsigned>(dim, 0);
	}

	X& get(const unsigned numargs, ...) const {
		va_list arguments;
        va_start( arguments, numargs );
        unsigned val = 0;
        for( int i = 0 ; i < numargs; i++ ) {
			val = va_arg( arguments, unsigned );
		}

		va_end(arguments);

		return *elements[val];
	}

};

// sequence of $X
template<class X>
class Sequence : public Array<X>
{
	public:
		Sequence() :
		   Array<X>(1)
		{
		}

		X& at(unsigned pos) const {
			return this->get(1,pos);
		}

		unsigned size() const {
			return this->dimensions[0];
		}

};

// matrix2 of $X
template<class X>
class Matrix2 : public Array<X>
{
	public:
		Matrix2() :
			Array<X>(2)
		{
		}

		X& at(unsigned i, unsigned j) const
		{
			return this->get(2,i,j);
		}

		unsigned rows() const {
			return this->dimensions[0];
		}

		unsigned cols() const {
			return this->dimensions[1];
		}

};

}

#endif
