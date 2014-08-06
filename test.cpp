#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

main(){
	int n,t ;
	cin >> t;
	cout << endl;
	cin >>n;
	int map[n][n];
	memset(map,0,sizeof(map));
	for(int i =0;i < n;i++){
		 for(int j=0;j<n;j++){
			cin >> map[i][j];
		}
	}
	vector <pair<int,int> > ans; 
	for(int i=0;i < n;i++){
		 for(int j=0;j<n;j++){
			if (i==j)continue;
			int flag,check=1;
			for( flag=0;flag<n;flag++){
				if (map[i][flag]+map[j][flag] < map[i][j]){
				check=0;
				break;
				}
			}
			if(check!=1){
				ans.push_back(make_pair(i,j));
			}
		}
	} 
	vector<pair<int,int> >::iterator it	;
	for (it=ans.begin();it!= ans.end();it++){
		cout << it->first << " "<< it ->second <<endl;	
	}
}

