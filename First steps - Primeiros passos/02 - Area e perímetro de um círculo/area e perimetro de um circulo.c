# include <stdio.h>
# define pi 3.1415

// programa para medir o diametro e a �rea de um c�rculo//
 
 int main(){
			  
 	printf(" \n Esse programa calculara a area e o perimetro de um circulo qualquer.");         // apresenta��o//
 	
 	float raio;
 	int rept;
 	rept = 1;
 	while( rept - 1 == 0){                                                         // repeti��o da opera��o //
 	printf( "\n Por favor digite o raio do circulo desejado: \n ");	              // pedido do raio desejado //
 	scanf("%f", &raio);
 	
 	float area; 
	area = pi* raio * raio ;
 	float perimetro; 
	perimetro = 2 * pi * raio ;
 	
 	printf("\n Area: %.2f \n Perimetro: %.2f \n", area, perimetro);              // resultado da opera��o //
 	
 	int rept2;
 	rept2 = 1;
 	while( rept2 - 1 == 0){                                                       // repeti��o do questionamento sobre opera��o //
 	printf("\n Gostaria de repetir a operacao?\n S - sim \n N - nao\n");         // para repetir a opera��o //
 	
	fflush(stdin);
 	int cicle;
 	scanf("%c", &cicle);
 	
 	if (cicle =='S'||cicle =='s'){rept = 1; rept2=0;}
 	else if (cicle =='N'|| cicle == 'n'){rept = 0; rept2=0;}
 	else {printf("\n Responda usando as letras: S ou N!\n"); rept2 = 1;
	 };};};
	 
	 
 	printf("\nAperte qualquer tecla para sair.");                             // escape //
 	getch();
 	
 	return 0;
 	
 	
 	
 }

