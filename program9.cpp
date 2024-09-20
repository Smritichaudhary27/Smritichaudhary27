#Write a program to create a union of salary having monthly salary and gadgets.
#include <iostream>
using namespace std;
union salary {
             int monthly.salary;
             char gadget[100];
}
              salary s;
              s.monthly_salary= 10000;
              cout<<s.monthly_salary;