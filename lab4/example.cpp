#include<iostream>
using namespace std;

void printname(string name );
main()
{ 
string name="afeera";
printname(name);
printname("ayesha");
string secondname;
cout << " Enter name : " ;
cin >> secondname;
printname(secondname);

}

void printname(string name)
{
cout << " MY name is "  << name << endl;
}