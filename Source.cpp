#include <iostream>
#include <vector>
#include <string>

using namespace std;

class point
{
	int x;
	int y;
public:
	point()
	{
		x = 0;
		y = 0;
	}
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void print()
	{
		cout << "X: " << x << "\n";
		cout << "Y: " << y << "\n";
	}
};

class figure 
{
protected:
	vector<point> polygons;
public:
	figure(int size)
	{
		int x{ 0 };
		int y{ 0 };
		for (int i = 0; i < size; i++)
		{
			cin >> x;
			cin >> y;
			polygons.push_back(point(x, y));
		}
	}
	virtual void print() = 0;
};

class Point : public figure
{
public:
	Point() : figure(1)
	{
		cout << "Point\n" << string(50, '=') << "\n";
	}
	void print() override
	{
		cout << "Point:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++)
		{
			it->print();
		}
	}
};

class line : public figure
{
public:
	line() : figure(2)
	{
		cout << "Line\n" << string(50, '=') << "\n";
	}
	void print() override
	{
		cout << "Line:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++)
		{
			it->print();
		}
	}
};

class triangle : public figure
{
public:
	triangle() : figure(3)
	{
		cout << "Triangle\n" << string(50, '=') << "\n";;
	}
	void print() override
	{
		cout << "Triangle:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++)
		{
			it->print();
		}
	}
};

class quadrate : public figure
{
public:
	quadrate() : figure(4)
	{
		cout << "Quadrate\n" << string(50, '=') << "\n";;
	}
	void print() override
	{
		cout << "Quadrate:\n";
		for (auto it = polygons.begin(); it != polygons.end(); it++)
		{
			it->print();
		}
	}
};

int main()
{
	point p;
	line l;
	triangle t;
	quadrate q;
	p.print();
	l.print();
	t.print();
	q.print();

	return 0;
}