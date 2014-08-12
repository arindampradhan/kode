#include <iostream>
#include <sstream>
int length(long q);
int *to_array(int q);
int AreAll9s( int* num, int n );
long to_num(int a[],int len);

void generateNextPalindromeUtil (int num[], int n );


using namespace std;


main(){
	
	
	int t;
	cin >> t;
	while(t--){
	long q;
	cin >> q;
	
	
	int count = length(q);
	int arr[count];
	//cout << count<<endl;
	for(int k = count-1;k >=0 ;k--){
		arr[k] = q%10;
		q/=10;
		}	
		
		
		
	int ans1[count+1];	
			
	if(AreAll9s(arr,count)){
		for(int c = 1; c <count;c++){
			ans1[c] = 0;
			}	
		ans1[0]=1;
		ans1[count]=1;
		
		cout << to_num(ans1,count+1);
		cout <<endl;
		
		continue;	
		}	
		
		
		
		generateNextPalindromeUtil (arr, count );
		
		
		//answer
		
		
			cout << to_num(arr,count);
			cout << endl;
		}
		
	return 0;
		
	}
	
		
		
		
void generateNextPalindromeUtil (int num[], int n )
{
    // find the index of mid digit
    int mid = n/2;
 
    // A bool variable to check if copy of left side to right is sufficient or not
    bool leftsmaller = false;
 
    // end of left side is always 'mid -1'
    int i = mid - 1;
 
    // Begining of right side depends if n is odd or even
    int j = (n % 2)? mid + 1 : mid;
 
   // Initially, ignore the middle same digits
    while (i >= 0 && num[i] == num[j])
        i--,j++;
 
    // Find if the middle digit(s) need to be incremented or not (or copying left
    // side is not sufficient)
    if ( i < 0 || num[i] < num[j])
        leftsmaller = true;
 
    // Copy the mirror of left to tight
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
 
    // Handle the case where middle digit(s) must be incremented.
    // This part of code is for CASE 1 and CASE 2.2
    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;
 
        // If there are odd digits, then increment
        // the middle digit and store the carry
        if (n%2 == 1)
        {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
 
        // Add 1 to the rightmost digit of the left side, propagate the carry
        // towards MSB digit and simultaneously copying mirror of the left side
        // to the right side.
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; // copy mirror to right
        }
    }
}		
		




int AreAll9s( int* num, int n ){
    int k;
    for( k = 0; k < n; ++k )
        if( num[k] != 9 )
            return 0;
    return 1;
}





int length(long q){
	int count=0;
	while(q > 0){
		count++;
		q/=10;
		}
	return count;	
	}

long to_num(int a[],int len){
	stringstream ss;
	char c;
	string s;
	for(int i=0;i< len;i++){
		c = '0' + a[i];
		s+=c;
		}
	ss << s;
	long fuck;
	ss >> fuck;
	return fuck;
	}	
