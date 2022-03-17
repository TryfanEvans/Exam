#include <iostream>

using namespace std;

extern  int binary_to_number(int binary_digits[], int number_of_digits);

int main()
{
    int array[2] = {0,1};
    cout<<binary_to_number(array, 2);
    
    return 0;
}
