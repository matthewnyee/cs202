#include "shape.h"

//Step 5 - Implement the Point class operators

Point Point::operator + (const Point& p) const
{

}

Point& Point::operator += (const Point& p)
{

}

bool Point::operator == (const Point& p) const
{

    return false;    
}

ostream& operator << (ostream& out, const Point& p)
{

}


//Step 6 - Impelment the Shape class operators

Shape& Shape::operator = (const Shape& s)
{

}

Shape& Shape::operator += (const Point& p)
{
    return *this;    
}

Shape operator + (const Point& p, const Shape& s)
{

}

Shape operator + (const Shape& s, const Point& p)
{

}

//Step 7 Implement the Circle class operators

Circle operator + (const Point& p, const Circle& c)
{

}

Circle operator + (const Circle& c, const Point& p)
{

}

Circle& Circle::operator = (const Circle& c)
{

}

ostream& operator << (ostream& out, const Shape& s)
{

}


