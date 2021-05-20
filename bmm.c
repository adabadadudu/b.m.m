// see the bmm.py file
/* translated of bmm.py file 
both of bmm.py and bmm.c developed by Pooia Ferdowsi 
<pooia.ferdowsi.is.developer@gmail.com> or the 
<pooiaferdowsiisdeveloper@gmail.com> email
on an Ubuntu LTS ( 20.4 ) Gnu/Linux device on the 
Gnu generel editor */

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(){

int num1;
int num2;

printf("Enter The number 1 and number 1 ( (number 1 , number 2 )): ");
scanf("%d %d" , &num1 , &num2);

int result = 0;

for ( int counter = max(num1 , num2); counter >= 1; counter--){
	if ( ((num1 % counter) == 0 ) 
	    && ((num2 % counter) == 0 ) ){
		if ( result == 0)
			result = counter;
	}
}
 
if (result == 0)
 	printf("The b.m.m is number <1>");
else
 	printf("The b.m.m is number <%d>", result);
 	
 return 0;
 }
