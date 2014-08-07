#include <stack>
#include <iostream>
#include <string>
bool isOperator(char a);
int ordr(char op);
bool isChar(char a);
using namespace std;

main(){
	int t;
	cin >>t;
	while(t--){
	string exp,ans;
	cin >> exp;
	stack <char> opstack; 
	
	
	for(int i=0;i<exp.size();i++){
		if(isChar(exp[i])){
			ans+=exp[i];
			}
		if(isOperator(exp[i])){
			
			 if(opstack.empty()) {
				opstack.push(exp[i]);
				}
				
			else if(!opstack.empty()) {
				
				//for (
					if(exp[i] == '('){
						opstack.push(exp[i]);
						}
				// for )	
					else if(exp[i] == ')'){
						while(opstack.top() != '('){
							//if((opstack.top() != '(')&&(opstack.top() !=')')){
							ans+=opstack.top();	
							opstack.pop();
							}
							opstack.pop();
						}
					
										
					else if(ordr(exp[i]) >=ordr(opstack.top()) ){
						opstack.push(exp[i]);
						}
					//fucking important point to remember (A*B^C+D)
					else if(ordr(exp[i]) <ordr(opstack.top()) ){
							while(!opstack.empty()){
							if(ordr(exp[i]) < ordr(opstack.top()))ans+=opstack.top();;
							opstack.pop();
							}
						opstack.push(exp[i]);	
						}
					else {
						ans+=opstack.top();
						}	
					
				}	
				
				
			}
		
		}
		while(!opstack.empty()){
			ans+=opstack.top();
			opstack.pop();
			}
		cout << ans<<endl;
	}
	return 0;
	
	}
	
bool isChar(char a) {
a = int(a);
if (((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))
return true;
else return false;
}
	
int ordr(char op){
	switch(op){
		case '+' :return 1;
		case '-' :return 1;
		case '*' :return 2;
		case '/' :return 2;
		case '^' :return 3;
		default:return 0; 
		}
	}	
bool isOperator(char a) {
switch (a) {
case '+': return true;
case '-': return true;
case '*': return true;
case '/': return true;
case '(': return true;
case ')': return true;
case '^': return true;
default: return false;
}
}	
