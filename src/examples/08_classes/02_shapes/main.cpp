//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"

using std::unique_ptr; using std::make_unique;

/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	unique_ptr<Shape> circle = make_unique<Circle>();		
	//circle->draw();
	Shape* s_ptr = circle.get();
	s_ptr->draw();

	unique_ptr<Shape> line = make_unique<Line>();
	//line->draw();

	std::vector<unique_ptr<Shape>> shapes;

	shapes.push_back(std::move(circle));
	shapes.push_back(std::move(line));

	for(auto& shape: shapes)
	{
		shape->draw();
	}

	Circle c;
	Shape* shape_ptr = &c;
	shape_ptr->draw();

	Line l;
	shape_ptr = &l;
	shape_ptr->draw();


	return 0;
}