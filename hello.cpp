#include <iostream>
using namespace std;
class student{
    public:
char name[50];
int rollno;
float marks;
void getinfo()
{
    cin >> name >> rollno >> marks ;
};
void dispinfo()
{
cout << name << rollno << marks ;
};
};


int main()
{
    student stud1;
    stud1.getinfo();
    stud1.dispinfo();
    return 0;
}
