#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;

  cin>>T;

  for(int i=0;i<T;i++)
  {
      int X;
      double N;

      cin>> N>>X;

       int number_of_subcription = ceil(N / 6) ;

       int total_cost = number_of_subcription*X;

       cout<< total_cost<<endl ;

  }

  return 0;
}

