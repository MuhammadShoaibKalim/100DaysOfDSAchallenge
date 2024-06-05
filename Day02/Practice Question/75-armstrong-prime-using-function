#include <iostream>
using namespace std;
int isArmstrong(int num);
int isPrime(int num);
int main() {
             int n;
             cout<<" Enter value of number : ";
             cin>>n;

             int flag=n;
             if (isArmstrong(n)==1)
             {
                 cout<<" The given number is armstrong."<<endl;
             }
             else
             {
                 cout<<" The given number is not armstrong."<<endl;
             }
                if (isPrime(flag)==1)
                {
                    cout<<" The given number is prime."<<endl;
                }
                else
                {
                    cout<<" The given number is not prime."<<endl;
                }
             

    return 0;
}

int isArmstrong(int num){
       int sum=0;
       int reminder;
       int originalNum=num;

       while (originalNum>0)
       {
           reminder=originalNum%10;
           sum=sum+(reminder*reminder*reminder);
           originalNum=originalNum/10;
       }
       if(sum==originalNum)
           return 1;
       else
        return 0;
       
}
int isPrime(int num){
       
       int flag=0;
       for(int i=2;i<=num/2;i++)
       {
           if(num%i==0)
           {
               flag=1;
               break;
           }
       }
       if(flag==0)
       {
           return 1;
       }
       else
       {
           return 0;
       }
}


