#include<iostream>

using namespace std;

struct Point{
    int x;
    int y;
};

int main()
{
    Point p1 = {20,20};
    Point *ptr = &p1;

    cout << "x = "<<ptr->x << ", y = " << ptr->y << endl;

    return 0;
}