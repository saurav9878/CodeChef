#include<bits/stdc++.h>

using namespace std;

int already_appeared(string* w, int N)
{

  for(int i=0; i<N; i++)
    {
      if(w[i]==w[N])
	return i;
    }

  return -1;
}

			    
int main()
{
  int T,N,tcount,icount,resultcmp,l,a,b;
  string* w = NULL;
  int*t = NULL;
  cin>>T;
  while(T--)
    {
      tcount=0; // ->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>0
      cin>>N;
      w = new string[N];
      t = new int[N];
      for(int i=0;i<N;i++)
	{
	  icount=0;  // ->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>0
	  cin>>w[i];
	  //	  if(i!=0)
    	      resultcmp = already_appeared(w,i);
	      if(resultcmp>=0)
		{
		  // half the time taken in 1st hit
		  // division = always integer as time =2/4
		  icount+=t[resultcmp]/2;
		  //cout<<"ALREADY APPEARED \n";
		}
	    
	      else
		{
	      l = w[i].length();
	      for(int j=0; j<l; j++)
		{	  
		  if(j==0)
		    {
		      // first character
		      icount+=2;
		    }
		  else
		    {
		      a = w[i][j];
		      b = w[i][j-1];
		      if ((a=='d' && b=='j') || (a=='d' && b=='k') || (a=='f' && b=='j') || (a=='f' && b=='k') || (a=='j' && b=='d') || (a=='k' && b=='d') || (a=='j' && b=='f') || (a=='k' && b=='f'))
			{
			  icount+=2;
			}
		      else
			  icount+=4;
		    }
		}
		}
	
	    
	    t[i]=icount;
	    //  cout<<icount<<endl;
	    tcount+=icount;
	    
	}
      
      cout<<tcount<<endl; 
    }
  return 0;
}
