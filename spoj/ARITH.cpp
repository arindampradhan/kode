//Karatsuba
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void multiply(int fuck[],int suck[]);
void substract(int fuck[],int suck[]);
void add(int fuck[],int suck[]);

main(){
	string s;
	cin >> s;
	//cout << s;
	int i;
	for(i=0;i< s.size();i++){
		if((s[i] =='+' )||(s[i] == '-' )||(s[i] == '*')){break;}
		
		}
		//cout <<  int(s[6] - '0')<<"poop";
	int fuck[i],suck[s.size()-i-1];	
	//cout << i << " poop " << i+1;
	
	for(int k =0 ; k<i;k++ )fuck[k] = int(s[k] - '0');
	int temp=0;
	for(int k =i+1 ; k<s.size();k++ ){
		int poop =  int(s[k] - '0');
		suck[temp] = poop;
		//cout <<suck[temp];
		temp++;
		// << suck[temp];
		}
		
	for(i=0;i< s.size();i++){
		if(s[i] =='+' ) add(fuck,suck);
		else if (s[i] == '-' )substract(fuck,suck);
		else (s[i] == '*')multiply(fuck,suck);
		
		}
		
		
		return 0;
	}


void multiply(int fuck[],int suck[]){
	arr[10][10];
	int len =sizeof(suck)/sizeof(int);
	int gen =sizeof(fuck)/sizeof(int);
	
	for(int j=0; j <len;j++){
		for(int i=0;i < gen; i++){
			int in = fuck[gen-i]*suck[len-1]%10;
			int carry = fuck[gen-i]*suck[len-1]/10;
			arr[i][j] += carry; 
			}
		}
	
	}
void substract(int fuck[],int suck[]);
void add(int fuck[],int suck[]);


