#include<bits/stdc++.h>
using namespace std;
void checkOnlineJudge()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output1.txt","w",stdout);
 #endif
}
void print(vector<int> v1)
{
  for(auto i:v1)
    cout<<i<<" ";
  cout<<endl;
}
int main(){
  checkOnlineJudge();
  int n;
  int m;
  cin>>n;
  cin>>m;
  vector<vector<int> > matrix(n);
  int x1=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
      cin>>x1;
     matrix[i].push_back(x1);
    }

  unordered_map<int,int> numberofrotations;
  int x=0;
  int k=1;
  int levels=n/2;
  while(levels--)
  {
    cin>>x;
    numberofrotations[k]=x;
    k++;
  }

  int numberoflayers=numberofrotations.size();
  vector<int> torotate;
      int left=0;
    int right=m;
    int top=0;
    int bottom=n;

    //First teeskovatam.
  for(int currentlayernumber=1;currentlayernumber<=numberoflayers;currentlayernumber++){
    torotate.clear();
    for(int j=left;j<right;j++)
      torotate.push_back(matrix[0][j]);
    for(int j=top+1;j<bottom;j++)
      torotate.push_back(matrix[j][right-1]);
    for(int j=right-2;j>=left;j--)
      torotate.push_back(matrix[left-1][j]);
    for(int j=bottom-2;j>top;j--)
      torotate.push_back(matrix[j][0]);

  print(torotate);
    cout<<endl;
    if(currentlayernumber%2!=0)
    rotate(torotate.begin(),torotate.begin()+numberofrotations[currentlayernumber],torotate.end());
  else
    rotate(torotate.begin(),torotate.begin()+torotate.size()-numberofrotations[currentlayernumber],torotate.end());

  //Malli place cheyatam.
  int index=0;  //Vector lo movement ki.
  for(int j=left;j<right;j++)
  {
      matrix[0][j]=torotate[index];
      index++;
  }
    for(int j=top+1;j<bottom;j++){
      matrix[j][right-1]=torotate[index];
      index++;
    }
    for(int j=right-2;j>=left;j--)
    {
       matrix[left-1][j]=torotate[index];
      index++;
    }
    for(int j=bottom-2;j>top;j--){
      matrix[j][0]=torotate[index];
      index++;
    }
      for(auto i:matrix)
  {
    for(auto j:i)
      cout<<j<<" ";
    cout<<endl;
  }
  cout<<"DONE"<<endl;
    left++;
    right--;
    top++;
    bottom--;
  }
    //Place chesi printing.
  for(auto i:matrix)
  {
    for(auto j:i)
      cout<<j<<" ";
    cout<<endl;
  }
return 0;
}
