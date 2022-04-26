//2. Write a program to reverse a number.
#include <iostream>
using namespace std;

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num;
    cin>>num;
    cout << "Reverse of "<<num<<" is " << reversDigits(num);
    return 0;
}

