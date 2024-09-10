#include<iostream>
using namespace std;



int main(){

  int arr[]={0,1,2,23,4,10};

  int size=sizeof(arr)/sizeof(int);
int SecondSmallest=INT32_MAX;
   int min=INT32_MAX;

   for (int i = 0; i <size ; i++)
   {
    if(arr[i]<min){
     SecondSmallest=min;
     min=arr[i];
   
    }

    else if(arr[i]>min&&arr[i]<SecondSmallest){

      
         SecondSmallest=arr[i];
    }
    
   }
   
cout<<"The smallest  element in the array  is "<< min<<endl;
cout<<"the second Smallest element in Array is "<<SecondSmallest;


    return 0;
}