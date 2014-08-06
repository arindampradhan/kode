#include <iostream>
#include <math.h> 
#include <string.h>
using namespace std;

main(){
	long m,n;
	cin >> m >> n;
	bool arr[100000] = {true};
		
	for(int i=0;i*i < n ; i++){
		int k =2,num;
		while((num=i*k) <=n){
			arr[num-1-m] = false;
			++i;
			}
		}
	for(int i=m ; i<n;i++){
		if(arr[i-m]==true){
			cout << i<< endl;
			}
		}
	return 0;
	}
