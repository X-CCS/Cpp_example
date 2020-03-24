#include <iostream>

using namespace std;

class printData
{
    public:
            void print(int i)
            {
                cout << "zhengshu is:" << i << endl;
            }

            void print(double f)
            {
                cout << "fudian is :" << f << endl;
            }

            void print(char c[])
            {
                cout << "string is :" << c << endl;
            }
};

int main()
{
    printData pd;

    pd.print(5);
    pd.print(500.263);
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}
