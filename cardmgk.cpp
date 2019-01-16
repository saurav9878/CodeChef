#include<iostream>
using namespace std;
int main()
{
  int T,x,flag=-1;
  long N;
  long* A = NULL;
  cin>>T;
  while(T--)
    {
      x = 0;
      flag = -1;
      cin>>N;
      A = new long[N];
      for(long i=0; i<N; i++)
	{
	  cin>>A[i];
	}
      for(long j=0; j<N; j++)
	{
	  if(j!=0)
	    {
	     
	      if(A[j-1]>A[j])
		{
		   // current no. is less than prev one
		  x=j; // store current no. index
		  break;
		}
	    }
	}
      if(x==N-1)
	{
	  //x = last element
	  if(A[0]<A[N-1])
	   
	    // tackle the case 1 2 3 4 2
	    cout<<"NO"<<endl;
	  else
	    // tackle the case: 5 7 or 7 5
	     // tackle the case 1 2 3 4 1
	    cout<<"YES"<<endl;
	}
      else if (x!=0)
	{
	  // x = not a last element
	  for(long k=x; k<N-1; k++)
	    {
	      // start iterating from the x element
	      // case 3 4 5 1 2 7
	      if(A[k]>A[k+1]||A[k+1]>A[0])
		{
		cout<<"NO"<<endl;
		flag=0;
		break;
		}
	    }
	  if(flag!=0)
	    cout<<"YES"<<endl;
	}
      else
	cout<<"YES"<<endl;
    }
  return 0;
    }
