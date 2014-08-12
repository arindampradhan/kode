#include <iostream>
#include <sstream>
#include <string>

#include <stdio.h> 

void fuck(string a,string b);


int length(int arr[]);

using namespace std;


int main ()
{
	
}


void fuck(string a,string b){
	int sum=0,carry=0;
	if(a.size() > b.size()){
		int t = a.size() - b.size();
		string pad = "";
		while(t--){
			pad += "0";
			}
		a += pad;	
		}else{
		int t = b.size() - a.size();
		string pad = "";
		while(t--){
			pad += "0";
			}
			b += pad;	
			}
		string str;
	for(int i=a.size()-1;i >=0;i--){
		int aa = int(a[i] - '0');
		int bb = int(b[i] - '0');
		carry +=(aa+bb)/10;
		sum =(aa+bb+carry)%10;
		str += char(sum + '0');
		}
		string ans;
	for(int i=str.size()-1;i >=0;i++){
		ans +=str[i] ;
		}
		cout <<  ans;
	}
