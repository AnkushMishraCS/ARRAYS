#include<iostream>
using namespace std;



int main(){

  int arr[]={1,2,23,40,0};
int secondLargest=0;

  int size=sizeof(arr)/sizeof(int);

   int max=-555;

   for (int i = 0; i <size ; i++)
   {
    if(arr[i]>max){
  secondLargest=max;

max=arr[i];

    }
    

else if(arr[i]<max && arr[i]>secondLargest )
   {

      secondLargest=arr[i];
   } 
   
   
   }
   


cout<<"the Largest element in Array is "<<max <<endl;
cout<<"The Second largest element in the array  is "<<secondLargest;



    return 0;
}