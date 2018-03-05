
#ifndef INTEGER_H
#define INTEGER_H

#include <BaseObject.h>
#include <string>

class Integer : public BaseObject{
	public:
		int val = 0;
		Integer(int val = 0);
		virtual BaseObject * __add__(BaseObject * other);
		virtual BaseObject * __sub__(BaseObject * other);
		virtual BaseObject * __mul__(BaseObject * other);
		virtual BaseObject * __div__(BaseObject * other);
		virtual BaseObject * __pow__(BaseObject * other);
		virtual BaseObject * __mod__(BaseObject * other);

		virtual std::string __type__();

};

#endif