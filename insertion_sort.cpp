#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int *a=new int[n];
   int i,j,temp;
   for(i=0;i<n;i++)
    cin>>a[i];
   for(i=1;i<n;i++){
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
   }
   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
   return 0;
}
