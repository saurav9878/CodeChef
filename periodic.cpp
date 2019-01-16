#include<iostream>
using namespace std;
int main()
{
  int T;
  long N;
  int* A=NULL;
  int flag;
  cin>>T;
  while(T--)
    {
      flag = -1;
      cin>>N;
      A = new int[N];
      for(long i=0; i<N; i++)
	{
	  cin>>A[i];
	}
      for(long j=0; j<N; j++)
	{
	  if(j<N-1)
	    {
	      if(A[j]!=A[j+1])
	        flag=0;
	    }
	}
      
      if(flag==-1)
	cout<<"inf<<endl;
      
    }
  
  return 0;
}
