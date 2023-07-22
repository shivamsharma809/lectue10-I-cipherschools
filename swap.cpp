#include<iostream>
using namespace std;

void printHi()  // No parameters are required 
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b)
{
    int c;

    c = a+b;
    a=500;

    return c;
}

int main()
{
    printHi(); // First calling the printHi function

    int a,b;

    a=4;
    b=6;

    int d;
    d = sum(a,b);

    cout<<"The sum is equal to "<<d<<" "<<"The value of a is" <<a; // The value of a should turn out to be 500
    
    return 0;

}
