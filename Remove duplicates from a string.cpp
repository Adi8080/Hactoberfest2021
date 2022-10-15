#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
string removeAllDups(string str1)
{
int n=str1.length();
  int flag=0,k=0,i,j;
string s="";
  for(  i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(str1[i]==str1[j])
      {
        str1[j]='0';
      }
    }
    if(str1[i]!='0')
    {
  s=s+str1[i];
    }
  }
 return s;
}
int main()
{
  int t,i,j=0;
  string a, b;
  cin>>t;
  while(t--)
  {
    getline(cin,a);
    while(a.length()==0)
        getline(cin, a);
    cout<<removeAllDups(a)<<endl;
  }
  return 0;
}
