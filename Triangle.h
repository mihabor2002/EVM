#pragma once
#include "point.h"
#include <fstream>
//211-Borovikov-Mikhail-2021

class Triangle
{
private:
	Point A, B, C;
	int id;
	int neighbouring_triangle_id;
public:
	Triangle();
	Triangle(Point a, Point b, Point c);
	Triangle(const Triangle& T);
	~Triangle() = default;
	const Triangle& operator=(const Triangle& T);
	Point get_A();
	Point get_B();
	Point get_C();
	int get_id();
	int get_neighbouring_triangle_id();
	void assign_A(Point a);
	void assign_B(Point b);
	void assign_C(Point c);
	void assign_id(int k);
	void assing_neighbouring_triangle_id(int k);
	void print_triangle(std::ofstream& file);
};