#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int A[n] = {-2, 1, 4, 7 , 2, 6, -8, 2};
    int  sum = 0;
    for ( int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    sum = sum/2;
    for ( int i = 0; i < n; i++)
    {
      if (A[i] == sum)
        {
            cout << "Index " << i << " has the sum" << endl;
            return(0);
        }

    }
}
