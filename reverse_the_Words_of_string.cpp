#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
void revWordsString(string str){
 char temp;
  int i,j,start,end;
int n=str.length();
for(i=0;i<n;i++)
{
  start=i;
 for(j=i;str[j]!=' '&&j<n;j++)
 {
   i++;
 }
  end=i-1;
  while(start<end)
  {
    temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
  }
}
  cout<<str;
}
int main()
{
  int t,i,j=0;
  cin>>t;
  string str;
  while(t-- >= 0)
  {
    getline(cin, str);
    revWordsString(str);
    cout<<endl;
  }
}
