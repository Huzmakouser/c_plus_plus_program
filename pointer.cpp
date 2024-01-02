//using pointer add the two numbers
#include<iostream>
using namespace std;
void  add(int arr[],int n,int *sum){
    for(int i=0;i<n;i++)
    *sum=*sum+arr[i];
   
    
}
int main(){
    int arr[10],n,sum=0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"enter the element:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    add(arr,n,&sum);
    cout<<"sum:"<<sum<<endl;
    return 0;
}
