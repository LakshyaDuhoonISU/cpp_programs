//c++ program to check whether a given number is odd or even and print it
#include <iostream>
using namespace std;
int main()
{
    int n; //declaring a variable with data type int
    cout<<"Enter a number to check whether it is odd or even: "; //asking the user for a number
    cin>>n;
    if (n%2==0) //checking whether the number is divisible by 2
    {
        cout<<n<<" is even"; //if number is divisible by 2 print that it is even
    } 
    else if (n<=0) //if number is a negative number print to enter a valid number
    {
        cout<<"Enter a valid number";
    }
    else
    {
        cout<<n<<" is odd"; //if number is not divisible by 2 print that it is odd
    }
    return 0;
}