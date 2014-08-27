#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */
#include <iostream>
#include <sstream>
char *fillarr( char arr[] ) { // arr "decays" to type int *
    return arr;
}

using namespace std;


int main()
{
  char a[10] = {'0','0','0','0','0','0','0','0','0','',''};

for(int i=0;i < 10;i++)cout << a[i];
  
  //cout << a[0] << a[1] << a[5]<< endl;
}
