#include <stdio.h>

main(){
	
	int celcius;
	float faren, kelvin;
	
	printf("Digite uma temperatura em celcius: ");
	scanf("%i", &celcius);
	
	faren = celcius*9.0/5.0+32.0;
	kelvin = celcius-273.15;
	
	printf("\nO resultado em faren eh: %.1f", faren);
	printf("\nO resultado em kelvin eh: %.1f", kelvin);
	
	return 0;	
}
