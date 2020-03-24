#include <iostream>
using namespace std;

int test()
{
    double* pvalue = NULL;
    pvalue = new double;

    *pvalue = 2943.99;
    cout << "Value of pvalue:" << *pvalue << endl;

    delete pvalue;

    return 0;
}

int test_1()
{
    int i,j,k;

    int ***p;
    p = new int **[2];
    for(i=0; i<2; i++)
    {
        p[i] = new int *[3];
        for(j=0; j<3; j++)
        {
            p[i][j] = new int[4];
        }
    }

        for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)
            {
                for(k=0; k<4; k++)
                {
                    p[i][j][k]=i+j+k;
                    cout << p[i][j][k] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    for(i=0; i<2; i++)
    {
        delete [] p[i];
    }
    delete [] p;
    return 0;
}

class Box 
{
    public:
            Box()
            {
                cout << "using struct function" << endl;
            }
            ~Box()
            {
                cout << "using destruct function" << endl;
            }
};
int main()
{
    Box* myBoxArray = new Box[4];

    delete [] myBoxArray;
    return 0;
}
