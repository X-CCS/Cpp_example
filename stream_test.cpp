#include <iostream>

using namespace std;

void test_1();
void test_2();

int main()
{
    //test_1();
    test_2();
}
void test_2()
{
    char str[] = "Unable to read ...";

    cerr << "Error message:" << str << endl;
}
void test_1()
{
    char name[50];
    cout << "please input your name:";
    cin >> name;
    cout << "your name is:" << name << endl;
}
