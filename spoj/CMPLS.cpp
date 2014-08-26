#include "iostream"
#include "string.h"
using namespace std;

main(){
	int S,C;
	cin >>S>>C;
	double series[S];
	double arr[S][S];
	
	//while t
	memset(arr,0,sizeof(arr));
	for (int i = 0; i < S; ++i){
		cin >> series[i];
		arr[0][i] = series[i]; 
	}

	for (int i = 1; i < S; ++i){
		for (int j = 0; j < S-i; ++j)
		{
			arr[i][j] = (arr[i-1][j+1] - arr[i-1][j])/i;

			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	
	
	for(int i=0;i<C;i++){
	
	//using the newtons form 
	double var; //var =x
	
	var = S+i;
	double ans = series[0];
	for(int i = 0;i<S;i++){
		
		double mul = 1;
		
		for(int j=0;j<i;j++){
			mul*=(var-(j+1)); // mul =term2 =f0f1f2*(x-x1)(x-x2)(x-x3)
			}
			ans+=mul*arr[i][0];	//f0f1*(x-x1)(x-x2) + term2+... = ans
		}
		cout << ans << " ";
	}
		
}
