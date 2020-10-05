#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   long long int sum=0, num, x, y, p=pow(10,9)+7, result = 0, answer = 0;
   stack <int> sta;
   cin>>num;
   cin>>x>>y;
   int arr[num];
   for(int i=0;i<num;i++){
       cin>>arr[i];
       sum=sum+arr[i];
   }
   for(int i=0;i<num;i++){
       while(sta.empty()==false and arr[i]<=arr[sta.top()]){
           long long int tp=sta.top();
           sta.pop();
           result= arr[tp]* (sta.empty()?i:(i-sta.top()-1));
           answer=max(answer%p,result);
       }
       sta.push(i);
   }
   while(sta.empty()==false){
       long long int tp=sta.top();
       sta.pop();
       result=arr[tp]*(sta.empty()? num:(num-sta.top()-1));
       answer=max(answer%p,result);
   }
   cout<<((sum%p-answer%p)%p*x%p*y%p)%p;
}
