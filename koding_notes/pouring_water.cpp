#include "stack"
#include <iostream>
#include "string"
#include "cstdio"
using namespace std;

typedef long long LL;
LL gcd(LL a, LL b) {
    return b == 0 ? a : gcd(b, a % b);
}

bool solve(LL x, LL y,LL z){
  if (max(x,y) < z) return false;
  return z % gcd(x,y) == 0;
}

int main()

{

    float first,second,third,s,area;


    scanf("%f %f %f",&first,&second,&third);

    cout<<"Enter size of each sides of triangle"<<endl;

    cout<<"Enter size for First Side =";

    cin>>first;

    cout<<"Enter size for Second Side =";

    cin>>second;

    cout<<"Enter size for Third Side =";

    cin>>third;

    s = (first+second+third)/2;

    area = sqrt(s*(s-first)*(s-second)*(s-third));

    cout<<"Area of Triangle= "<<area<<endl;

    return 0;

}





int main()
{
  int T;scanf("%d",&T);
  while(T--){
    LL x,y,z; scanf("%lld %lld %lld",&x,&y,&z);
    printf("%s\n", solve(x,y,z)? "YES" : "NO");
  }
  return 0;
}