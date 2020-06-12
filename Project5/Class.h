#pragma once
#include "Point.h"
class Triangle
{
public:
	Triangle();
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
	int Sqr();
	int Per();
	void setA(Point A);
	void setB(Point B);
	void setC(Point C);
	Point getA();
	Point getB();
	Point getC();
	

private:

	Point A, B, C;
	double Pointdist(Point a, Point b);
	
	

};
class Square
{
	Square();
	Square(int sx1, int sy1, int sx2, int sy2, int sx3, int sy3, int sx4, int sy4);
	void setA1(Point A1);
	void setB1(Point B1);
	void setC1(Point C1);
	void setD1(Point D1);
	Point getA1();
	Point getB1();
	Point getC1();
	Point getD1();
	int PlForSquare();
	int PreForSquare();


private:
	Point A1, B1, C1, D1;

};
class NonSquare
{
	NonSquare();
	NonSquare(int nsx1, int nsy1, int nsx2, int nsy2, int nsx3, int nsy3, int nsx4, int nsy4);
	void setA2(Point A2);
	void setB2(Point B2);
	void setC2(Point C2);
	Point getA2();
	Point getB2();
	Point getC2();
	Point getD2();
	int PlForNonSquare();
	int PreForNonSquare();


private:
	Point A2, B2, C2, D2;

};
