#include<bits/stdc++.h> 
using namespace std;

bool coprime(int a, int b) { 
      
    if ( __gcd(a, b) == 1) 
      return true;  
    else
      return false;         
} 

bool Connect(int* G[][N], int N)
{
  for(int i= 0; i<N; i++)
    {
      for(int j=0; j<N; j++)
	{
	  if(G[i][j]!=1)
	    return False
	}
    }
  return True;
}

int main()
{
  int T,N,a,flag;
  cin>>T;
  while(T--)
    {
      flag=0;
      a=-1;
      cin>>N;
      int G[N][N] = {-1};
      int A[N]={0};
      int B[N]={0};
      for(int i=0; i<N; i++)
	{
	  // A sequence
	  cin>>A[i];
	}
      for(int l=2; l<=50; l++)
	{
	  for(int m=2; m<=50; m++)
	    {
	      
	      for(int j=0; j<N; j++)
		{
		  if (flag==1)
		    break;
		  for(int k=0; k<N; k++)
		    {
		      if(coprime(B[j],B[k]))
			{
			  G[j][k]=1; // edge
			}
		      if(Connect(G,N))
			{
			  flag=1;
			  break;
			}
		    }
		}
	    }
	}
         
	 if(flag==1)
	   {
	     // connected G obtained
	   }

    }
  return 0;
}

