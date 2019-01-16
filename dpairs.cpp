#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int N,M,foo;
  int count=0;
  int flag=0;
  std::vector<int>::iterator it;
  std::vector<int> A, B, S;
  cin>>N>>M;
  for (size_t i = 0; i < N; i++) {
    cin>>foo;
    A.push_back(foo);
  }
  for (size_t i = 0; i < M; i++) {
    cin>>foo;
    B.push_back(foo);
  }
  for (size_t i = 0; i < A.size(); i++) {
    for (size_t j = 0; j < B.size(); j++) {
        if (count>N+M-1) {
          flag=-1;
          break;
        }
      foo=A[i]+B[j];
      it =std::find(S.begin(), S.end(),foo);
      if (it!=S.end()) {
        // found
        continue;
      }
      else
      {
        //not found
        S.push_back(foo);
        count++;
        if (count>N+M-1) {
          flag=-1;
          break;
        }
        cout<<i<<" "<<j<<endl;
      }
    }
      if (flag==-1) {
        break;
      }

  }
  return 0;
}
