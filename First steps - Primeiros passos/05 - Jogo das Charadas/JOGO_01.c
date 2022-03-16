# include <stdio.h>
# include <string.h>

const good = 1;

    //apresentação do jogo//
int main(){
	printf ("Bem-vindo a Republica de Lisarb! Nosso parlamento convidou os maiores sabios do mundo para fazerem parte de nosso conselho e nos ajudar nas mais \n");
	printf ("dificeis e variadas questoes! \n Por favor, me diga como gostaria de ser chamado: \n");
	char nome[40];
    fgets(nome, 40, stdin);
	printf("Sim, %s no entando, para fazer parte de nosso conselho voce tera que responder charadas especialmente preparadas pelas maiores mentes de nossa \n", nome);
	printf(" Republica! \n Pronto para o teste?");	
	printf ("\n A = sim \n B = nao \n");
	
	// aceitar ou não o desafio //
	char resposta;
	resposta = 1;
	while(good - resposta == 0){
	
	
	scanf ("%c", &resposta);
	if (resposta =='A'|| resposta =='a')
	{printf ("\n Entao vamos comecar!");}
	else if (resposta =='B' || resposta =='b')
	{printf ("\n Entao o jogo acaba aqui..."); return 0;}
	else
    {(resposta !='B' || resposta !='b'|| resposta != 'A' || resposta != 'a');
	printf ("\n Escolha A ou B. \n"); resposta = 1;}
};

    // charada numero 1 //
    int vidas;
    vidas = 1;
    int pontos= 0;
    
    
    while (vidas >= 0){
    fflush(stdin);
    char c1[8];
    char c1_resposta[8]= "relogio";
    
    printf ("Me diga %s \n O que e, o que e? \n Que da muitas voltas mas nao sai do lugar? \n (obs: responda com apenas uma palavra e sem acentos)\n", nome);
    fgets(c1, 8, stdin);
        
    int go;
	strcmp(c1, c1_resposta);
    
    go=strcmp(c1, c1_resposta);
    
    
    if(go==0)
	{printf("\n Parabens voce acertou e esta pronto para continuar \n");vidas=-1;pontos++;}
    else{ vidas--;
	if (vidas==0){printf("Voce nao acertou mas vou te dar mais uma chance!");
	}else{
	printf("\n A resposta certa era - relogio - , voce nao conseguiu responder nossa primeira charada de forma correta! \n");vidas=-1;}
	}
	};
	
	
//charada numero 2//

vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c2[5];
    char c2_resposta[5]= "nada";
    
    printf ("Vamos la me  diga \n O que e, o que e? \n Que o nadador faz para bater recordes? \n ");
    fgets(c2, 5, stdin);
          
    int go;
	strcmp(c2, c2_resposta);
    
    go=strcmp(c2, c2_resposta);
    
    if(go==0)
	{printf("\n Parabens!!! %s  voce acertou.....\n",nome);vidas=-1, pontos++;}
    else{ vidas--;if (vidas==0){
	printf("Voce errou e tera mais uma chance...  isso pela ultima vez \n apartir de agora todos os erros serao considerados!!!\n");} 
	else ("A resposta certa era - nada -, voce nao conseguiu responder nossa segunda charada de forma correta!\n");vidas=-1;
	}
	};
	
	//charada 3//
	
	vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c3[6];
    char c3_resposta[6]= "nuvem";
    
    printf ("Agora quero saber \n O que e, o que e? \n Que voa mas nao tem asa e chora sendo que olhos tambem nao tem? \n ");
    fgets(c3, 6, stdin);
          
    int go;
	strcmp(c3, c3_resposta);
    
    go=strcmp(c3, c3_resposta);
    
    if(go==0)
	{printf("\n Voce acertou, esta ficando bom \n");vidas=-1, pontos++;}
    else{ printf ("\n %s voce errou e tem que melhorar para conseguir a nossa vaga... \n A reposta era - nuvem - vamos para proxima \n",nome);vidas=-1;
	}
	};
	
	// charada 4 //
	
	vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c4[5];
    char c4_resposta[5]= "foto";
    
    printf ("\n O que e, o que e? \n Que quanto mais voce tira mais voce tem?! \n ");
    fgets(c4, 5, stdin);
          
    int go;
	strcmp(c4, c4_resposta);
    
    go=strcmp(c4, c4_resposta);
    
    if(go==0)
	{printf("\n Voce acertou!!! \n");vidas=-1, pontos++;}
    else{ printf ("\n Voce infelizmente errou ... \n A reposta era - foto - vamos la \n");vidas=-1;
	}
	};	
	
	
	// charada 5 //
	
	vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c5[8];
    char c5_resposta[8]= "cadeira";
    
    printf (" \n O que e, o que e? \n Que tem pernas mas nao anda? \n ");
    fgets(c5, 8, stdin);
          
    int go;
	strcmp(c5, c5_resposta);
    
    go=strcmp(c5, c5_resposta);
    
    if(go==0)
	{printf("\n Caramba!!! voce esta certo!  \n");vidas=-1, pontos++;}
    else{ printf ("\n voce errou =( ... \n A reposta era - cadeira -... \n");vidas=-1;
	}
	};
	
	// charada 6 //

	vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c6[6];
    char c6_resposta[6]= "chuva";
    
    printf ("%s \n O que e, o que e? \n Que cai de pe e corre deitado? \n ",nome);
    fgets(c6, 6, stdin);
          
    int go;
	strcmp(c6, c6_resposta);
    
    go=strcmp(c6, c6_resposta);
    
    if(go==0)
	{printf("\n Voce acertou, todos os seus pontos estao sendo anotados \n");vidas=-1, pontos++;}
    else{ printf ("\n %s voce errou... \n A reposta certa e - chuva - vamos para proxima \n",nome);vidas=-1;
	}
	};
	
		if (pontos>4){printf("%s voce fez %d pontos ate agora e esta indo bem na busca por uma vaga no conselho de Lisarb!",nome,pontos);
				  }
        else{printf("Voce nao esta indo tao bem assim... tente acertas as proximas para ter uma chance, a resposta sobre a vaga no conselho esta chegando!");
	};
	
	// charada 7 //
	
		vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c7[6];
    char c7_resposta[6]= "dente";
    
    printf ("Agora, %s \n O que e, o que e? \n Tem cora e nao e rei, tem raiz e nao e planta? \n ",nome);
    fgets(c7, 6, stdin);
          
    int go;
	strcmp(c7, c7_resposta);
    
    go=strcmp(c7, c7_resposta);
    
    if(go==0)
	{printf("\n Voce acertou!!!!!!! \n");vidas=-1, pontos++;}
    else{ printf ("\n %s voce errou... \n A reposta era - dente - \n",nome);vidas=-1;
	}
	};
	
	
	// charada 8 //
	
		vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c8[4];
    char c8_resposta[4]= "pao";
    
    printf (" \n O que e, o que e? \n Que quanto mais fresquinho mais quente ele e? \n ");
    fgets(c8, 4, stdin);
          
    int go;
	strcmp(c8, c8_resposta);
    
    go=strcmp(c8, c8_resposta);
    
    if(go==0)
	{printf("\n Certo, vamos la!!! \n");vidas=-1, pontos++;}
    else{ printf ("\n Errou... \n A reposta  certa era - pao - \n");vidas=-1;
	}
	};
	
	//charada 9//
	
		vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c9 [5];
    char c9_resposta[5]= "alho";
    
    printf ("Essa e a penultima... \n O que e, o que e? \n Nao e animal nem gente mas tem sim cabeca e dente? \n ");
    fgets(c9, 5, stdin);
          
    int go;
	strcmp(c9, c9_resposta);
    
    go=strcmp(c9, c9_resposta);
    
    if(go==0)
	{printf("\n Voce acertou! So falta mais uma! \n");vidas=-1, pontos++;}
    else{ printf ("\n %s voce errou... se prepare para ultima \n A reposta era - alho - \n",nome);vidas=-1;
	}
	};
	
	// charada 10 //	
	
		vidas=1;
while (vidas >= 0){
    fflush(stdin);
    char c10[8];
    char c10_resposta[8]= "segredo";
    
    printf ("Finalmente!!! %s essa e A ULTIMA QUETAO!!! \n O que e, o que e? Que voce quebra quando conta? \n  \n ",nome);
    fgets(c10, 8, stdin);
          
    int go;
	strcmp(c10, c10_resposta);
    
    go=strcmp(c10, c10_resposta);
    
    if(go==0)
	{printf("\n Voce acertou!!!!!!! Vamos para o resultado \n");vidas=-1, pontos++;}
    else{ printf ("\n Errou... \n A reposta era - segredo - vamos ao resultado...\n");vidas=-1;
	}
	};
	
		printf("\n \n \n \n aperte qualquer tecla para continuar e saber seu resultado \n \n....");
	
	getch();
	
	
	if (pontos<7){printf("%s voce fez %d pontos, e isso infelizmente nao e o suficiente para fazer parte do conselho de Lisarb!",nome,pontos);
	              printf("\n Espero que da proxima vez tenha mais sorte...");
				  }
    else{printf("Parabens!!! Voce conseguiu... agora finalmete e um conselheiro de Lisarb, \n voce mostrou grande inteligencia e astucia! \n >>>>>>>> %s O CONSELHEIRO!!!!",nome);
	};
	
	printf("\n \n \n \n aperte qualquer tecla para sair....");
	
	getch();
	return 0;
	}
	
	
	

	
	 
	
	
 
