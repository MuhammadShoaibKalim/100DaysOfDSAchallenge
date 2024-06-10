#include <iostream>
int sumArray(int arr[], int end ) {
  int sum =0;
  for (size_t i = 0; i < end; i++)
  {
      sum = sum + arr[i];
  }
      return sum;
}

int main() {
   
    int arr[5] ;
    std::cout<<" Enter the value of arr :";
    for (size_t i = 0; i < 5; i++)
    {
        
        std::cin >> arr[i];
    }
 
   int sum;
   sum=sumArray(arr,5);
  
   std::cout<<" The sum of array elements are :";
   std::cout<<sum<<std::endl;
   
    

    return 0;
}
