#define CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
#define gcd __gcd
using namespace std;
#define FOR(i,j,n) for(int i=(j);i<n;++i)
// function LCSLength(X[1..m], Y[1..n])
//     C = array(0..m, 0..n)
//     for i := 0..m
//        C[i,0] = 0
//     for j := 0..n
//        C[0,j] = 0
//     for i := 1..m
//         for j := 1..n
//             if X[i] = Y[j]
//                 C[i,j] := C[i-1,j-1] + 1
//             else
//                 C[i,j] := max(C[i,j-1], C[i-1,j])
//     return C[m,n]


int LCSLength(char *X, char *Y){
	int m = strlen(X);
	int n = strlen(Y);
	int C[m][n];
	
	FOR(i,0,m){C[i][0] = 0;}
	FOR(j,0,n){C[0][j] = 0;}
	

	FOR(i,1,m){
		FOR(j,1,n){
			if (X[i] == Y[j] ) C[i][j] = C[i-1][j-1] + 1;
			else{
				C[i][j] = max(C[i][j-1],C[i-1][j]);
				}
			}
		}
		
	return C[m][n];
}

int main(int argc, char const *argv[])
{
	char first[50000];
	char second[50000];

	cin.getline(first, 50000);
	cin.getline(second, 50000);
	cout << LCSLength(first,second) ;
	return 0;
}
