#include<iostream>
using namespace std;
int main(){
int n;
int sum=0;
cout<<"please enter a natural number";
cin>>n;
for(int i=1;i<=n;i++)
{
    sum=sum+i;
    cout<<sum<<endl;
}
return 0;
}


