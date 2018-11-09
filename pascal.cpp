#include <iostream>

using namespace std;

long int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int pascal_t(int n)
{
    int i, k;
    for(i=0;i<n;i++)
    {
        for(k=0;k<=i;k++)
        {
            cout << factorial(i) / (factorial(i-k) * factorial(k)) <<" ";
        }
        cout << endl;
    }
    return 1;
}

int main ()
{
    cout << "Excercise : 5 - Pascal’s triangle" << endl << "\n";
    int rows;
    cout << "Please enter the number of rows for Pascal's triangle : " << endl; cin >> rows ;
    pascal_t(rows);

    return (0);
}

