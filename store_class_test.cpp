#include <iostream>
using namespace std;

void func(void);

static int count = 10;

int main()
{
    while(count--)
    {
        func();
    }
}

void func(void)
{
    static int i = 5;
    i++;
    cout << "i is:" << i;
    cout << "count is:" << count << endl;
}
