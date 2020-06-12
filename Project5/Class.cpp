#include "Class.h"
#include <math.h>

Triangle::Triangle()
{
		A = Point(0, 0);
		B = Point(1, 1);
		C = Point(2, 2);
}

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
		A =  Point(x1, y1);
		B =  Point(x2, x2);
		C =  Point(x3, y3);
}

int Triangle::Sqr()
{
	double p = (((A.getX() - B.getX()) * (A.getX() - B.getX()) + (A.getY() - B.getY()) * (A.getY() - B.getY()) + (C.getX() - B.getX()) * (C.getX() - B.getX()) + (C.getY() - B.getY()) * (C.getY() - B.getY()) + (A.getX() - C.getX()) * (A.getX() - C.getX()) + (A.getY() - C.getY()) * (A.getY() - C.getY())) / 2);
	double a = ((A.getX() - B.getX()) * (A.getX() - B.getX()) + (A.getY() - B.getY()) * (A.getY() - B.getY()));
	double b = ((C.getX() - B.getX()) * (C.getX() - B.getX()) + (C.getY() - B.getY()) * (C.getY() - B.getY()));
	double c = ((A.getX() - C.getX()) * (A.getX() - C.getX()) + (A.getY() - C.getY()) * (A.getY() - C.getY()));
	return sqrt(p * (p - a) * (p - b) * (p - b));
}

int Triangle::Per() 
{
	return ((A.getX() - B.getX()) * (A.getX() - B.getX()) + (A.getY() - B.getY()) * (A.getY() - B.getY()) + (B.getX() - C.getX()) * (B.getX() - C.getX()) + (B.getY() - C.getY()) * (B.getY() - C.getY()) + (C.getX() - A.getX()) * (C.getX() - A.getX()) + (C.getY() - A.getY()) * (C.getY() - A.getY()));
 

}

void Triangle::setA(Point A)
{
	A = A;
}

void Triangle::setB(Point B)
{
	B = B;
}

void Triangle::setC(Point C)
{
	C = C;
}

Point Triangle::getA()
{
	return A;
}

Point Triangle::getB()
{
	return B;
}

Point Triangle::getC()
{
	return C;
}

double Triangle::Pointdist(Point a, Point b)
{
	double s = (a.getX() - b.getX()) * (a.getX() - b.getX()) + (a.getY() - b.getY()) * (a.getY() - b.getY());
	return s;
}

Square::Square()
{
	A1 = Point(0, 0);
	B1 = Point(1, 1);
	C1 = Point(2, 2);
	D1 = Point(3, 3);
}

Square::Square(int sx1, int sy1, int sx2, int sy2, int sx3, int sy3, int sx4, int sy4)
{
	A1 = Point(sx1, sy1);
	B1 = Point(sx2, sx2);
	C1 = Point(sx3, sy3);
	D1 = Point(sx4, sy4);
}

void Square::setA1(Point A1)
{
	A1 = A1;
}

void Square::setB1(Point B1)
{
	B1 = B1;
}

void Square::setC1(Point C1)
{
	C1 = C1;
}

void Square::setD1(Point D1)
{
}

Point Square::getA1()
{
	return A1;
};

Point Square::getB1()
{
	return B1;
};

Point Square::getC1()
{
	return C1;
}
Point Square::getD1()
{
	return D1;
}
int Square::PlForSquare()
{
	double pl = (sqrt((A1.getX() - B1.getX()) * (A1.getX() - B1.getX())) + sqrt((A1.getY() - B1.getY()) * (A1.getY() - B1.getY()))) * (sqrt((A1.getX() - B1.getX()) * (A1.getX() - B1.getX())) + sqrt((A1.getY() - B1.getY()) * (A1.getY() - B1.getY())));
	return pl;
}
int Square::PreForSquare()
{
	double per = (sqrt((A1.getX() - B1.getX()) * (A1.getX() - B1.getX())) + sqrt((A1.getY() - B1.getY()) * (A1.getY() - B1.getY()))) * 4;
	return per;
}
;

int NonSquare::PlForNonSquare()
{
	double nonsqr = sqrt((A2.getX() - B2.getX()) * (A2.getX() - B2.getX()) + (A2.getY() - B2.getY()) * (A2.getY() - B2.getY())) + sqrt((B2.getX() - C2.getX()) * (B2.getX() - C2.getX()) + (B2.getY() - C2.getY()) * (B2.getY() - C2.getY())) + sqrt((C2.getX() - D2.getX()) * (C2.getX() - D2.getX()) + (C2.getY() - D2.getY()) * (C2.getX() - D2.getX())) + sqrt((D2.getX() - A2.getX()) * (D2.getX() - A2.getX()) + (D2.getY() - A2.getY()) * (D2.getY() - A2.getY()));
	return nonsqr;
}

int NonSquare::PreForNonSquare()
{
	double Per1 = (sqrt((A2.getX() - B2.getX()) * (A2.getX() - B2.getX()) + (A2.getY() - B2.getY()) * (A2.getY() - B2.getY())) * 2) + (sqrt(B2.getX() - C2.getX() + (B2.getY() - C2.getY()) * (B2.getY() - C2.getY())) * 2);
	return Per1;
}

void NonSquare::setA2(Point A2)
{
	A2 = A2;
}

void NonSquare::setB2(Point B2)
{
	B2 = B2;
}

void NonSquare::setC2(Point C2)
{
	C2 = C2;
}
void NonSquare::setC2(Point D2)
{
	D2 = D2;
}

Point NonSquare::getA2()
{
	return A2;
}

Point NonSquare::getB2()
{
	return B2;
}

Point NonSquare::getC2()
{
	return C2;
}
Point NonSquare::getD2()
{
	return D2;
}
NonSquare::NonSquare();
{
	A2 = Point(0, 0);
	B2 = Point(1, 1);
	C2 = Point(2, 2);
	D2 = Point(3, 3);
}

NonSquare::NonSquare(int nsx1, int nsy1, int nsx2, int nsy2, int nsx3, int nsy3, int nsx4, int nsy4)
{
	A2 = Point(nsx1, nsy1);
	B2 = Point(nsx2, nsx2);
	C2 = Point(nsx3, nsy3);
	D2 = Point(nsx4, nsy4);
}
