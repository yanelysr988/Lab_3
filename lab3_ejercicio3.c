#include<stdio.h>


int main(){
	
	char Letra;
	printf("Digite la letra a analizar:");
	scanf("%c",&Letra ); //usuario ingresa char a analizar
	
	if(isalpha(Letra)==0){ //evaluo si lo ingresado es una letra 
		printf("Lo ingresado no corresponde a una letra");
		
	}else{
		switch(Letra){ //aca se evalua si es una vocal
		case 'a':
		case 'A': 
		case 'e':
		case 'E': 
		case 'i':
		case 'I': 
		case 'o':
		case 'O': 
		case 'u':
		case 'U': printf("Es una vocal");break;
		
		default:printf("Es una consonante"); 
	}
	
	}
	
	return 0;
}

