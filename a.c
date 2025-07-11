#include <stdio.h>

void main(){
	for(int i = 0;i <= 30;i++){
		if(i % 3 == 0 && i % 5 == 0){
			puts("FizzBuzz");
		}
		else if(i % 3 == 0){
			puts("Fizz");
		}
		else if(i % 5 == 0){
			puts("Buzz");
		}
		else{
			printf("%d\n",i);
		}
	}
}
