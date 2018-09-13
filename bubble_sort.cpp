#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int *a=new int[n];
   int i,j,temp,exchanges;
   for(i=0;i<n;i++)
    cin>>a[i];
   for(i=0;i<n-1;i++){
        exchanges=0;
    for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            exchanges++;
        }
    }
    if(exchanges==0)
        break;//list is already sorted
   }
   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
   return 0;
}
