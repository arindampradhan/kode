//you can not return array from function

//return char literals


char  *foo(){
	return "Returned string";
}


// some time string literals are stored in readonly memory.




//you can also return 
char global_arr[100];

char *func(){
	char global_arr[i] = ...;
	return global_arr;
}
//everybody can modify it


//
char *func(){
	static char global_arr[i] = ...;
	return global_arr;
}

//only callers can modify it





//some pure fucking examples


#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */
#include <iostream>
#include <sstream>
int *fillarr( int arr[] ) { // arr "decays" to type int *
    return arr;
}

using namespace std;


int main()
{
  int y[10];
  y[0]=69;
  int *a = fillarr(y);
  cout << a[0] << endl;
}
