#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  int T;
  cin>>T;
  string S;
  string word;
  int flag;
  string S2 = "not";
  cin>>ws;// to clear carriage enter, else getline will not take i/p
  while(T--)
   {
     flag=-1;
     getline(cin,S);
     stringstream iss(S);
     while(iss >> word)
       {
	 if (word.compare(S2)==0)
	   {
	       cout<<"Real Fancy"<<endl;
	       flag=0;
	       break;
	   }
       }
     if(flag!=0)
       {
	 cout<<"regularly fancy"<<endl;
       }
   }
  return 0;
}
