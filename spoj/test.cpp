#include <iostream>
#include <vector>
using namespace std;
main(){
	vector <int> num;
	int temp;
	while(cin >> temp){
	if(temp==42)break;
	num.push_back(temp);
	}
	for(int i=0; i < num.size();i++){
		cout << num[i]<< endl;
	}
	return 0; 
}
