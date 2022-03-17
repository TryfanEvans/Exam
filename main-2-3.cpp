#include <iostream>

using namespace std;

extern  int sum_if_a_palindrome(int integers[], int length);

int main()
{
    int array[2] = {3,3};
    cout<<sum_if_a_palindrome(array, 2);
    
    return 0;
}
