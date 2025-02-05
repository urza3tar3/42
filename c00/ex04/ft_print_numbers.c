#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void){
	int num;
	for( num = 0; num < 10 ; num++){
		write(1, &num, 4);
			}
}
int main (){
	ft_print_numbers();
	return 0;
}
