#include<stdio.h>

//this program  calculates the Total Daily Expenditure of calories using Harris Benedict formula(BMR - basal metabolic rate),//
//and give advice  about how much to eat accordingly//

// Esse programa calcula  o Total de Gasto Calórico diário usando a fórmula de Harris Benedict(TMB - Taxa metabólica basal),//
//e da conselho sobre o quando comer//



int main(){ 

//variables//

int men,women;
float men_weight_multiplier,women_weight_multiplier,men_age_multiplier,women_age_multiplier,men_height_multiplier,women_height_multiplier;
//general//
men=66;
women=655;
//multiplicadores de peso//
men_weight_multiplier=13.8;
women_weight_multiplier=9.6;
//multiplicadores de idade//
men_age_multiplier=5.0;
women_age_multiplier=1.9;
//multiplicadores de altura//
men_height_multiplier=6.8;
women_height_multiplier=4.7;

// language selector, the int language_rep is used to iniciet and end the main loop ----- seletor de linguagem, a int language_rep é usada para iniciar e acabar com//
//loop principal//

int language_rep;
char language;
language_rep=1;

while(language_rep>0){
	
// english version//	

printf("Select language: / Selecione a linguagem: \n A - English \n B - Portugues \n");
scanf("%s",&language);

   if (language=='a'||language=='A')
   {printf("This programe calculates your Total Daily Expenditure of calories using Harris Benedict formula. \n ");
    printf("For that the program needs some data about you...\n");
    
//chose exit ou continue//
int continue_rep;
char continue_;
continue_rep=1;

        while(continue_rep>0){

        printf("Do you want to knou your basal metabolic rate? \n Y - yes \n N - no (and exit)\n");
        scanf("%s",&continue_);
            if (continue_=='Y'||continue_=='y'){
//chose genere//

int genere_rep;
char genere;
genere_rep=1;
                while(genere_rep>0){
				
                printf("Are you FEMALE (F) or MALE (M)?\n");
                scanf("%s",&genere);
            
                    if(genere=='F'||genere=='f'){

// calculates for women---- bmr = basal metabolic rate//
                  	
float weight,age,height;
                    
					fflush(stdin);
                    
                    printf("How old are you?\n");
                    scanf("%f",&age);
                    
                    printf("What is your weight?(in kg)\n");
                    scanf("%f",&weight);
                    
                    printf("What is your height?(in cm))\n");
                    scanf("%f",&height);
                    
                    float bmr,bulking,cutting;
                     
                    bmr=women+(women_weight_multiplier*weight)+(women_height_multiplier*height)-(women_age_multiplier*age);
                    bulking=1.1*bmr;
                    cutting=0.9*bmr;
                    printf("Your basal metabolic rate is about %.2f calories pre day \n",bmr);
                    printf("If you are bulking you need %.2f calories per day \n",bulking);
                    printf("If you are cutting you need %.2f calories per day \n",cutting);
                    printf("\n \n Press anything to exit...");
                    getch();

                                    	

			        genere_rep=0;}
                    else if(genere=='M'||genere=='m'){
// cauculates for men//

float weight,age,height;
                    
					fflush(stdin);
                    
                    printf("How old are you?\n");
                    scanf("%f",&age);
                    
                    printf("What is your weight?(in kg)\n");
                    scanf("%f",&weight);
                    
                    printf("What is your height?(in cm))\n");
                    scanf("%f",&height);
                    
                    float bmr,bulking,cutting;
                     
                    bmr=men+(men_weight_multiplier*weight)+(men_height_multiplier*height)-(men_age_multiplier*age);
                    bulking=1.1*bmr;
                    cutting=0.9*bmr;
                    printf("Your basal metabolic rate is about %.2f calories pre day \n",bmr);
                    printf("If you are bulking you need %.2f calories per day \n",bulking);
                    printf("If you are cutting you need %.2f calories per day \n",cutting);
                    printf("\n \n Press anything to exit...");
					getch();
                    
                    
			        genere_rep=0;}
			        else{
					genere_rep=1;};
                };
        continue_rep--;}
		
		        else if(continue_=='n'||continue_=='N'){printf("\n \n Press anything to exit...");
					getch();continue_rep--;
				}
				else{continue_rep=1;
				};
		
		};  
    
	language_rep-- ;}
    
    
    else if(language=='b'||language=='B')
    {printf("Esse programa calcula seu gasto calorico diario usando a formula de Harris Benedict.\n");
    printf("Para isso o programa vai precisa de alguns dados sobre voce...\n");
    printf("Voce deseja saber sua taxa metabolica basal?\n S - Sim \n N - Nao ( e sair do programa)\n");
	
//Escolher sair ou continuar//

int continue_rep;
char continue_;
continue_rep=1;

       while(continue_rep>0){
       	
       	    fflush(stdin);
       	    scanf("%c",&continue_);
       	    if(continue_=='s'||continue_=='S'){
       	    	
 //Escolhendo o sexo//
 
 int genere_rep;
 char genere;
 genere_rep=1;
 
                while(genere_rep>0){
			   
       	    	
       	        printf("Voce e do sexo feminino(F) ou masculino(M)? \n");
       	        scanf("%s",&genere);
       	        
// Calculando para mulheres ---- bmr = taxa de metabolismo basal//

                   if(genere=='F'|| genere=='f'){
                   	
 float weight,age,height;
                    
					fflush(stdin);
                    
                    printf("Quantos anos voce tem?\n");
                    scanf("%f",&age);
                    
                    printf("Qual o seu peso?(em kg)\n");
                    scanf("%f",&weight);
                    
                    printf("Qual a sua altura?(em cm))\n");
                    scanf("%f",&height);
                    
                    float bmr,bulking,cutting;
                     
                    bmr=women+(women_weight_multiplier*weight)+(women_height_multiplier*height)-(women_age_multiplier*age);
                    bulking=1.1*bmr;
                    cutting=0.9*bmr;
                    printf("Sua taxa de metabolismo basal e aproximadamente %.2f calorias por dia \n",bmr);
                    printf("Se estiver em bulking voce precisa de %.2f calorias por dia \n",bulking);
                    printf("Se estiver em cutting voce precisa de %.2f calorias por dia \n",cutting);
                    printf("\n \n Aperte qualquer tecla para sair...");
                    getch();
                  	
				   genere_rep--;}
				      	    
       	           
                    else if(genere=='M'||genere=='m'){
 //calculando para homens//
 
 float weight,age,height;
                    
					fflush(stdin);
                    
                    printf("Quantos anos voce tem?\n");
                    scanf("%f",&age);
                    
                    printf("Qual o seu peso?(em kg)\n");
                    scanf("%f",&weight);
                    
                    printf("Qual a sua altura?(em cm))\n");
                    scanf("%f",&height);
                    
                    float bmr,bulking,cutting;
                     
                    bmr=men+(men_weight_multiplier*weight)+(men_height_multiplier*height)-(men_age_multiplier*age);
                    bulking=1.1*bmr;
                    cutting=0.9*bmr;
                    printf("Sua taxa de metabolismo basal e aproximadamente %.2f calorias por dia \n",bmr);
                    printf("Se estiver em bulking voce precisa de %.2f calorias por dia \n",bulking);
                    printf("Se estiver em cutting voce precisa de %.2f calorias por dia \n",cutting);
                    printf("\n \n Aperte qualquer tecla para sair...");
                    getch();
       	           	
					genere_rep--;}
					else{genere_rep=1;
					};
       	    
       	    
			    };
			continue_rep--;}
			else if(continue_=='n'||continue_=='N'){ printf("Aperte qualquer tecla para sair...");getch();
			continue_rep--;}
			else{
			continue_rep=1;};
       	    
	
	    };
    language_rep--;}
    else{language=1;};

};



return 0;
	
}
