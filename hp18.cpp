#include<iostream>
using namespace std;
int main()
{
  int T,a,b,N;
  cin>>T;
  int alice,bob, ab,foo;
  while(T--)
    {
      alice=bob=ab=0;
      cin>>N>>a>>b;
      while(N--)
	{
	  cin>>foo;
	  if(foo%a==0 && foo%b==0)
	    ab++;
	  else if (foo%a==0 && foo%b!=0)
	    bob++;
	  else if (foo%a!=0 && foo%b==0)
	    alice++;
	}
	  if(ab)
	    {
	      if(bob>=alice)
		cout<<"BOB"<<endl;
	      else
		cout<<"ALICE"<<endl;
	    }
	  else
	    {
	      if(alice>=bob)
		cout<<"ALICE"<<endl;
	      else
		cout<<"BOB"<<endl;
	    }
	
    }
  return 0;
}
