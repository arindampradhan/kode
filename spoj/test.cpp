#include <iostream>
#include <stdio.h>
#include <string>
#define x getchar()
char *revr(char buf[],int count);
using namespace std;
int length;
main(){
int t;
scanf(" %d",&t);
char buf [10] = " ";
char dig;
fflush(stdin);
dig = x;
int i;
for(i=0; dig != ' ';i++){
buf[i] = dig;
dig=x;
}
//int count1 = i;
buf[i]='\0';

//input2
char luf[10] = " ";
char big = x;
for(i=0; big != '\n';i++){
luf[i] = big;
big=x;
}
//int count2 = i;
luf[i]='\0';
char ans[10]="";
int count=0;
int temp=0,carry=0;
for(int i =0 ;;i++){
int a = int(luf[i]-'0');
if(luf[i] == '\0')a=0;
int b = int(buf[i]-'0');
if(buf[i] == '\0')b=0;
temp = a+b+carry;
//cout << "a+b+carry " << temp<<endl;
if((temp)==0)break;
if((luf[i] == '\0 ')&&(buf[i]=='\0'))break;

//cout <<"a: " <<a << " " << "b: "<<b<< " c: "<<c<<endl;
ans[i]= (char)(((int)'0')+(temp%10));
carry = temp/10;
//cout << "carry: "<<carry<< " ans: "<< ans[i] <<endl ;
count ++;
}
if(ans[count+1]!='0')count++;
//cout <<endl<< count ;
int flag=0;
if(ans[0]=='0'){
flag +=1;
while(ans[flag]=='0'){flag +=1;}
}
for(int i=flag;i < count;i++)cout << ans[i];



}
