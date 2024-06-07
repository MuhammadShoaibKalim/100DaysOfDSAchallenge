#include <iostream>
using namespace std;
int isPrime(int n);
int PrintPrime(int lower, int upper)
{      
        
        while (lower<= upper )
        {
          if(isPrime(lower))
          {
            cout<<lower<<endl;
          }
          lower++;
        }
        return 0;
}

int main() {
    
    int n1, n2;
    cout<<" Enter the number1, number2 :";
    cin>>n1>>n2;

    PrintPrime(n1,n2);

    return 0;
}

int  isPrime(int num)
{
  int isPrime=true;
  for (size_t i = 2; i < num/2; i++)
  {
    if(num%i==0)
    {
      isPrime=false;
      break;
    }

  }
    if(isPrime==true)
    {
      cout<<num<<endl;
    }
    return 0;
}

 
