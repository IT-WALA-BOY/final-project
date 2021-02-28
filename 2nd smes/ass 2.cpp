#include<iostream>
using namespace std;
class petType
{
public:
virtual void print() const;
petType(string n = "");
private:
string name;
};
class dogType: public petType
{
public:
void print() const;
dogType(string n = "", string b = "");
private:
string breed;
};
void petType::print() const
{
cout << "Name: " << name;
}
petType::petType(string n)
{
name = n;
}
void dogType::print() const
{
petType::print();
cout << ", Breed: " << breed << endl;
}
dogType:: dogType(string n, string b) : petType(n)
{
breed = b;
}
void callPrint(petType& p);
int main() //Line 1
{ //Line 2
petType pet("Lucky"); //Line 3
dogType dog("Tommy", "German Shepherd"); //Line 4
pet.print(); //Line 5
cout << endl; //Line 6
dog.print(); //Line 7
cout << "*** Calling the function callPrint ***"<< endl;//Line 8
callPrint(pet); //Line 9
cout << endl; //Line 10
callPrint(dog); //Line 11cout << endl; //Line 12
}
void callPrint(petType& p)
{
p.print();
}
