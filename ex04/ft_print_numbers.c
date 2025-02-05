#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void){
	char num;
	for( num = 48 ; num <= 57 ; num++){
		write(1, &num, 1);
			}
}
int main (){
	ft_print_numbers();
	return 0;
}
