#include<iostream>
using namespace std;

int fact[101][200] = {0};

//fact[i][0] is used to store the number of digits
//fact is an array in which the first element of the column represents the factorial's length
//the second element onwards represents the factorial in reverse order...
void factorial(int n)
{
     int i;
     fact[1][0] = 1;
     fact[1][1] = 1;

     //check if it's answer is already
     //this is dp technique to know the factorial of a number
     //from the previous number
     //if the number 6! IS ALREADY STORED IN 6th arry 
     //8! can b calculated by using the fact of 7 than 8 
     if (fact[n][0] == 0) {
       for (i=n-1; i > 0 ; i--) {
             if(fact[i][0] != 0)
              break;
       }
    //cout << i <<endl;
    for ( ; i<n; i++) {
        int j = 1;
        int carry = 0;
        int len = fact[i][0];
        while (len--){
            int temp = (i+1)*fact[i][j] + carry;
            fact[i+1][j] = temp%10;
            carry = temp/10;
            j++;

        }
        //cout << i << " " << carry << " " << j <<endl;
        while (carry > 0) {
            fact[i+1][j] = carry%10;
            carry /= 10;
            j++;
        }
        fact[i+1][0] = j-1;
        //cout << i <<" " << j-1<<endl;
    }

}
for ( i=fact[n][0]; i > 0; i--) {
    cout << fact[n][i] ;
}
    cout <<endl;
}

int main() {
    int t;
    cin >> t;
    int num;
    
    while(t--){
    cin >>num;
    if(num == 0)cout << 1<<endl;
    else factorial(num);
    }
    return 0;
}
