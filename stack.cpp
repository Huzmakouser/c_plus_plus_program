//stack using class and object
#include<iostream>
#include<string>
using namespace std;
    void push(int *top,int a[]){
      int item;
      int n=5;
      if(*top==n-1){
         cout<<"stack is full"<<endl;
         exit(0);
      }
      else{
         *top=*top+1;
         cout<<"enter the item to push"<<endl;
         cin>>item;
         a[*top]=item;
      }
   }
   void pop(int *top,int a[]){
      if(*top==-1){
         cout<<"stack is underflow:"<<endl;
         exit(0);
 }
      else{
          cout<<"the deleted item from the stack is:"<<a[*top]<<endl;
          *top=*top-1;
      }
      }
      void palindrone(int a[],int top){
         int i=0,j=top,flag=0;
         if(top==-1){
            cout<<"stack is empty:"<<endl;
            
         }
   else{
         for(int i=0;i<top;i++){
         if(a[i]==a[j])
         {
         flag=1;
         j--;
         }
         else{
            flag=0;
           break;
         }
         }
       if(flag==1)
       cout<<"stack is palindrone:"<<endl;
       else
       cout<<"stack is not a palindrone:"<<endl;
         }
      }
     void display(int a[],int top){
        
         cout<<"the items pushed:"<<endl;
         for(int i=top;i>=0;i--)
         cout<<a[i]<<endl;
      }
int main(){
   int ch,top=-1,a[5];
   cout<<"1------->push:"<<endl;
   cout<<"2------->pop:"<<endl;
   cout<<"3------->palindrone:"<<endl;
   cout<<"4------->display:"<<endl;
   cout<<"5------->exit:"<<endl;
   while(1){
   cout<<"enter the choice:"<<endl;
   cin>>ch;
   switch(ch){
         case 1: push(&top,a);
         break;
         case 2:pop(&top,a);
         break;
         case 3: 
                 palindrone(a,top);
                  break;
         case 4:   if(top==-1)
         cout<<"stack is empty:"<<endl;
         else{
          
                  display(a,top);
         }
                   break;
         case 5:exit(0);
         default :cout<<"enter the valid choice"<<endl;
      }
}
  return 0;
}
