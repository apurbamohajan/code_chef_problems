#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;


    for(int i=0; i<T ;i++)
    {
        float A,B,C;

        cin>>A>>B>>C;



	 float avg = (A+B) /2;

	 if(avg>C)
	 {
	     cout<<"YES"<<endl;

	 }

	 else
	 {
	     cout<<"NO"<<endl;

	 }
   }

   return 0;

}
