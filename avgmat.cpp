#include<iostream>
#include<cmath>
using namespace std;

int mandist(int a, int b, int c, int d)
{
  return abs(a-c)+abs(b-d);
}

struct House
{
  int i,j;
};

int main()
{
  int T,N,M,count;
  //House H[2501];
  House* H =NULL;
  cin>>T;
  int c;
  //int result[2501]={0};
  int* result = NULL;
  // int I[50][50];
  int** I = NULL;
  // int d[2501]={0};
  int* d = NULL;
  string s;
  int temp=0;
  while(T--)
    {
      // for(int p=0; p<2501; p++)
      // 	{
      // 	  H[p].i=0;
      // 	  H[p].j=0;
      // 	  d[p]=0;
      // 	  // if(p<101)
      // 	  //  {
      // 	      result[p]=0;
      // 	      //  }
      // 	}
      // // H[2501]={0,0};
     
      // // result[101]={0};
      // // I[301][301]={0};
      // // d[2501]={0};
      c = -1; // Array House index each test case
      count = -1;
      cin>>N>>M;
      temp = N*M+1;
      ///// New addition
      H = new House [temp];
      d = new int[temp];
      result = new int[temp];
      I = new int*[N];
      for(int alpha=0; alpha<N; alpha++)
	{
	  I[alpha] = new int[M];
	}
      
      /////
      
      for(int i=0; i<N; i++)
	{
	  cin>>s;
	  for(int j=0; j<M; j++)
	    {
	      // cout<<"ITS COLUMN "<<j<<endl;
	      I[i][j] = int(s[j])-48; // ascii of 0 is 48
	      // cout<<I[i][j];
	      if(I[i][j]==1 && c+1>=0)
		{
		  
		  // This is a house
		  c++; // H[0] to H[c] -> c+1 no. of houses
		  H[c].i=i;
		  H[c].j=j;
		}
	    }
	}
      if(c>=0)
	{
	  // house traversal
	  for(int k=0; k<c+1; k++)
	    {
	      for(int a=k; a<c+1; a++)
		{
		  // paths from key elem to all the next elem to it
		  count++;
		  d[count] = mandist(H[k].i, H[k].j, H[a].i, H[a].j);
		  // d array has man dist for all house
		}
	    }
	  for(int b=1; b<=count; b++)
	    {
	      //    cout<<d[b-1]<<" ";
	      	      if(d[b-1]>0)
			{
			   result[d[b-1]]++;
			  // max d[b-1]=100 for N,M = 50
			}
	    }
	  if(N+M>=2)
	    {
	   for(int x=1; x<=N+M-2; x++)
	     {
	       if(result[x]!=0)
	   	cout<<result[x]<<" ";
	       else
	   	cout<<0<<" ";
	      }
	    }
	}
        cout<<endl;

    }
  return 0;
}
