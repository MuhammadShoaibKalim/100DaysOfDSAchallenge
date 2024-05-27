#include <iostream>
using namespace std;

int main() {
    // Check a Leap Year
    
    int year ;
    cout<<"Enter a year :";
    cin>>year;

    if(year%400==0 && year%4==0 && year%100==0)
    {
     cout<<" is a leap year ";
    }
    else if(year%400!=0 && year%4==0 && year%100==0)
    {
      cout<<" Not is a leap year ";
    }
    else if(year%400!=0 && year%4==0 && year%100!=0)
    {
        cout<<"It is a leap year ";
    }
    else
   {
    cout<<"It is not a leap year";
   }
    return 0;
}
//Adding more easy and short code
/*
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year to check if it is a leap year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

*/
