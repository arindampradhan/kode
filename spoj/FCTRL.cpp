#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{

	long int num,count,t;
	cin >> t;
	
	while(t--){
	count=0;
	cin >>num;
	// finding the factor of 5 ,25 ,125 and so on...
	while(num){
		count+=num/5;
		num/=5;
	}
	cout << count <<endl;
	
	}
	
	return 0;
}
