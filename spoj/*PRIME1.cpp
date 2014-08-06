#include <iostream>
#include <math.h> 
using namespace std;

main(){
	int t;
	long m,n,temp;
	cin >> t;
	while(t-- >0){
		cin >> m>>n;
	
		temp = m;
		if (m % 2 == 0){temp = m+1;}
		 
		 while(temp <= n){
			 
			 int i;
			 bool flag=true;
			 
			 for( i=2 ;i*i<=temp;i++){
				 if(temp%i == 0){
					 flag = false;
					 break;
					}
				 }
			 if(flag)cout<<temp<<endl;
			 
			 
			 temp++;
			}
		}
	}
