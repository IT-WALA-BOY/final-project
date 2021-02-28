#include <iostream>
using namespace std;
int main()
{
int int1 = 26;
int int2 = 45;
int *int1Ptr = &int1;
int *int2Ptr = &int2;
 int1ptr=int2ptr;
*int1ptr=80;
cout << int1 << " " << int2 << endl;
}

