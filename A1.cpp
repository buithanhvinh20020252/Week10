#include<iostream>
using namespace std;
struct Point
{
	int x;
	int y;
};
int main()
{
	Point point1;
	cin >> point1.x;
	cin >> point1.y;
	cout << "(" << point1.x << ", " << point1.y << ")";
}
