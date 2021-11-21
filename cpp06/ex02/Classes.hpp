#ifndef CLASSES_HPP
#define CLASSES_HPP

class Base
{
public:
	virtual ~Base(void) {}; // ! Base need to be polymorphic
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
