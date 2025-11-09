#include<iostream>
using namespace std;

void callByReferece(int **px,int **py)
{
    int *temp = *px;
    *px = *py;
    *py = temp;
}
int main(){
    int x = 10, y=20;
    int *px = &x;
    int *py = &y;
    
    cout << "value of x is " << *px << " " << *py << endl;
    callByReferece(&px,&py);
    cout << "value of x is " << *px << " " << *py << endl;
    return 0;
}
