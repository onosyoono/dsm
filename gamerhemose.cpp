
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    long long n,h,a,c=0,i;
    cin>>n>>h;
    vector <long long> v;
    for(i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    long long s=v[n-2]+v[n-1];
    if(h%s==0)
    { cout<<(h/s)*2<<"\n";

    }
    else
    {
      long long x=h%s;
      if(x<=v[n-1])
       cout<<((h/s)*2)+1<<"\n";
     else
      cout<<((h/s)*2)+2<<"\n";
    }


  }
 return 0;
}
