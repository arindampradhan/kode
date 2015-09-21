#define CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
#define gcd __gcd
using namespace std;

double traingle_area(double base,double height){
	return double (0.5*base*height);
}
// HO ² = 9R ² - (a² + b² + c²)

int main(){
	int T;
	double A,B,C,a,b,c;
	double Radius,GH;
	cin >> T;
	while(T--){
	// cin >> A>>a>>b>>c;
	scanf("%lf %lf %lf %lf",&A,&a,&b,&c);
	double area = traingle_area(A,a);
	B = 2*double((area)/b);
	C = 2*double((area)/c);
	double AREA = double(3*area);
	Radius = (A*B*C)/(4*AREA);
	GH = sqrt(4*Radius*Radius-(A*A+B*B+C*C)*4/9);
	printf("%.3lf %.3lf\n",double(3*area),GH);
	}
}
