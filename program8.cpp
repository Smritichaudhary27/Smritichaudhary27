#Write a program to create a structure of Department having Dept id and Dept name.
#include <iostream>
using namespace std;
struct Department 
{
int Dept id;
char Dept name[50];
}
void main()
{
Department SOPS;
SOPS.Dept id = 252;
SOPS.Dept name= "SOPS";
cout<<SOPS.Dept id;
cout<<SOPS.Dept name;
}