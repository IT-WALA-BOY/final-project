#include <iostream>
using namespace std;
int main()
{
int int1 = 26;
int int2 = 45;
int *int1Ptr = &int1;
int *int2Ptr = &int2;
*int1Ptr = 89;
*int2Ptr = 62;
int2Ptr = int1Ptr;
*int1Ptr = 80;
int1 = 57;
cout << *int1Ptr << " " << int2Ptr << endl;
}
