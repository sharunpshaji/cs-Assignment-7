#include <iostream>
using namespace std;

class rectangle {
public:
	double length;   // Length of a box
	double bredth;  // Breadth of a box
	double area(void)
	{
		return (length*bredth);
	}
	double perimeter(void)
	{
		return(2*(length+bredth));
	}
};

int main() {
	rectangle rectangle1;
	rectangle rectangle2;
	cout << "Enter length and bredth of 1st rectangle\n";
	cin >> rectangle1.length >> rectangle1.bredth;
	cout << "Enter length and bredth of 2nd rectangle\n";
	cin >> rectangle2.length >> rectangle2.bredth;
	double area1 = rectangle1.area();
	double perimeter1 = rectangle1.perimeter();
	double area2 = rectangle2.area();
	double perimeter2 = rectangle2.perimeter();
	cout << area1 << perimeter1 << area2 << perimeter2;
	return 0;
}
