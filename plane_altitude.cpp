//c++ program to get plane's altitude from user and print relevant message to the user
#include <iostream>
using namespace std;
int main()
{
    int alt; //declaring a variable alt with data type int
    cout<<"Your altitude was 33000"<<endl<<"Enter your altitude now: "<<endl; //asking the user for a number
    cin>>alt;
    if (alt>=10000) //if value of alt variable is greater than 10000 then print to go around
    {
        cout<<"Go around";
    }
    else if (alt>=2000 && alt<10000) //if value of alt variable is greater than 2000 and is less than 10000 then print to open landing gear
    {
        cout<<"Open landing gear";
    }
    else if (alt<2000 && alt>=1000) //if value of alt variable is less than 2000 and greater than or equal to 1000 then print to open flaps
    {
        cout<<"Open flaps";
    }
    else //if value of alt variable is less than 1000 then print to land the plane and apply reverse thrust
    {
        cout<<"Land the plane and apply reverse thrust";
    }
    return 0;
}