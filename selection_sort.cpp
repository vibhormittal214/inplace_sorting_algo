#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int *a=new int[n];
   for(int i=0;i<n;i++){
   cin>>a[i];}
   int i,j,min;
   for(i=0;i<n-1;i++){
         min=i;
         for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
               min=j;
            }
         }
         if(i!=min){
           int temp=a[i];
           a[i]=a[min];
           a[min]=temp;
         }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";    }
    return 0;
 }
