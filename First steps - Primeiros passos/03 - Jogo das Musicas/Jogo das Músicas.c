#include <stdio.h>


// O jogo das letras de musica//

int main(){
	
	//nome do jogador//
	
	printf("Como gostaria de ser chamado? \n");         
	char nome[40];
	fgets(nome, 40,stdin);
	
	//escolha do conjunto de musicas que deseja jogar, com a variavel start servindo para recomeçar o jogo ao final de ciclo//
	// a int rep serve para que o jogador precise escolhoer uma resposta disponivel além de dar inicio aos ciclos jogo, tambem marcando o fim dos mesmos //
	// a int kei está presente em todas as categorias de musica como marcador de começo do ciclo while mas tambem esta demarcada no cilo de fim de jogo, 
	//por isso aparece aqui//
	// a int start serve para dar inicio as possibilidades de escolha do jogo//
	
	int pontos;
	    pontos = 0;
	int key;
        key = 1;
	

   
    int start;
    start = 1;
    while (start>0){
    	
    	
    printf("\n Agora %s Escolha o genero musical desejado: \n A - Pagode \n B - Funk \n C - Gospel \n D - Rock \n E - axe \n", nome);
    char ritmo;
    fflush(stdin);
    scanf( "%c", &ritmo);
	int rep;
	rep = 10;
    while (rep > 1){ 
    
	
		
		
    //ao escolheur as muscas de padode o jogador entra no arco de decisões ditados por esse if //	
	// a int key serve para delimitar o ciclo ao se apertar sim ao desejo de continuar jogando ao final de toda operação	//
	
	if (ritmo == 'a'|| ritmo == 'A')
	{
	
	int key;
	key = 1;
    while (key>0)
    	{ printf ("Voce escolheu jogar com musicas de pagode!\n Aperte qualquer tecla para continuar...\n");
			
		
	// jogando com musicas de pagode //
	// a char resposta grava as respostas do jogador, as int ciclo são resposaveis por//
	// enumerar as cinco questoes e possibilitar a volta caso o jogador maque uma alternativa inexistente//
	    
	    char resposta;
	    int pontos;
	    pontos = 0;
	    int ciclo, ciclo2, ciclo3, ciclo4, ciclo5; 
	   
	    ciclo = 1;
	    getch();
	    
	    printf ("\nComplete a letra a seguir com a resposta certa!\n");
	    printf ("\n          Farol das estrelas - Belo \n \n A primeira vez que te beijei \n No ceu da Cidade de Neon \n Pulei nos teus braços, me joguei... \n");
		printf ("\n A - Amei, Amei \n B - Pulei, Pulei \n C - Voei, Voei \n D - Te abracei \n ");
	while (ciclo - 1 == 0){
		fflush(stdin);	
		scanf ("%s", &resposta);
		
		if (resposta=='c'|| resposta =='C')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo++;}
		else if (resposta =='a'|| resposta =='b'|| resposta =='d'|| resposta =='A'|| resposta =='B' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo++;}
		else { printf ("\n Responda A,B,C ou D! \n");ciclo = 1; 
		};};
		
		ciclo2 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Eu te quero so pra mim - revelacao \n \n Meu coracao esta radiante \n Bate feliz acho que e amor \n Quando te vejo chego a sonhar \n Penso em voce quase a todo instante\n");
        printf (" Seu jeito meigo me apaixonou \n");
        printf ("\n A - O que fazer pra te alcancar \n B - O que fazer pra te conquistar \n C - O que dizer pra te conquistar \n D - O que dizer pra te alcancar \n ");
    while (ciclo2 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='b'|| resposta =='B')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo2++;}
		else if (resposta =='a'|| resposta =='c'|| resposta =='d'|| resposta =='A'|| resposta =='C' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo2++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo2 = 1;
		};};
		
		ciclo3 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Inarai - katinguele \n \n Inara e minha vida \n Meu sorriso, meu sonhar\n");
        printf ("\n A - Inara meu veu de luar \n B - Como eu quero te encontrar \n C - Com voce quero brindar \n D - Inara eu vou te beijar \n ");
    while (ciclo3 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='a'|| resposta =='A')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo3++;}
		else if (resposta =='b'|| resposta =='c'|| resposta =='d'|| resposta =='B'|| resposta =='C' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo3++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo3 = 1;
		};};
		
		ciclo4 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n         Cohab City - Netinho de Paula \n \n To chegando na Cohab \n Pra curtir minha galera \n Dar um abraco nos amigos \n E um beijinho");
	    printf (" \n Em minha cinderela \n Netinho! \n Tambem to chegando \n Nao vou te deixar sozinho\n");
        printf ("\n A - To levando o Nenem ali, pra comer feijao, caudinho gostosinho \n B - To levando o Nenm, Arao, Feijao, Claudinho e o Bonitinho \n C - To levando o Nene Arao, Feijao Paulinho e o Fabinho \n D - To levando o Nene, Ari, Feijao, Claudinho e o Fabinho\n ");
    while (ciclo4 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='d'|| resposta =='D')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo4++;}
		else if (resposta =='b'|| resposta =='c'|| resposta =='a'|| resposta =='B'|| resposta =='C' || resposta == 'A')
		{ printf ("\n voce errou!\n ..."); ciclo4++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo4 = 1;
		};};
		
		ciclo5 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Shortinho Saint-tropez - Bokaloka \n \n Ela perdeu o bom costume de me dar perdao \n Agora peco pra voltar e ela diz que nao \n Ainda ri do meu ciume diz que e armacao\n");
        printf ("\n A - Nao me da bola todo tempo, tudo sem razao \n B - Nao quer saber como anda o meu coracao \n C - Nem me da tempo pra falar da minha solidao \n D - Nem deixa eu falar da minha emocao \n ");
    while (ciclo5 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='c'|| resposta =='C')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo5++;}
		else if (resposta =='b'|| resposta =='a'|| resposta =='d'|| resposta =='B'|| resposta =='A' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo5++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo5 = 1;
		};};
		
		
		// mini ciclo para fim de jogo - possibilita que o jogador sasiba quantas acertou atravez da int pontos //
		
		printf (" Aperte qualquer tecla para saber seu resultado!\n...\n");
		getch();
		printf (" %s Seu resultado foi %i pontos de um total de 5 possiveis!\n", nome, pontos);
	
	
	key = 0;};start =1; rep = 0 ; }
		
		
	else if (ritmo == 'b'|| ritmo == 'B')
	{ 
	
	int key;
	key = 1;	
    while (key > 0){
    	
    	printf ("Voce escolheu jogar com musicas de funk!\n Aperte qualquer tecla para continuar...\n");
		
    	
    // jogando com as musicas de funk //	
    // a char resposta grava as respostas do jogador, as int ciclo são resposaveis por//
	// enumerar as cinco questoes e possibilitar a volta caso o jogador marque uma alternativa inexistente//	
	
		char resposta;
	    int ciclo, ciclo2, ciclo3, ciclo4, ciclo5; 
	   
	
	    ciclo = 1;
	    getch();
	    
	    printf ("\nComplete a letra a seguir com a resposta certa!\n");
	    printf ("\n          Show das poderosas - Anitta \n \n Se nao ta mais a vontade, sai por onde entrei \n Quando começo a dançar, eu te enlouqueço, eu sei\n Meu exercito e pesado, e a gente tem poder\n");
        printf ("\n A - Ameaca coisas do tipo: Voce! Vai!\n B - Ameaca coisas do tipo: Vai! Ver! \n C - Faz coisas do tipo: Você! Vai! \n D - Faz coisas do tipo: Vai! Ver! \n ");
    while (ciclo - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='a'|| resposta =='A')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo++;}
		else if (resposta =='b'|| resposta =='c'|| resposta =='d'|| resposta =='B'|| resposta =='C' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo = 1;};};
		
		ciclo2 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Corpo nu - Mc Andinho \n\n Sua mae bolada\n Querendo me matar \n Pode deixa minha sogra\n Eu penso em me casar \n Parei na sua filha \n");
        printf ("\n A - Acho que fiquei guinado Nao sei se estou amando \n     Eu devo estar emocionado  \n B - Acho que fiquei guindado Nao sei se estou amando \n     Eu devo estar apaixonado  \n");
		printf(" C - Acho que fiquei guinado Nao sei se estou amando \n     Eu devo estar emocionado  \n D - Acho que fiquei guinado Nao sei se estou amando \n     Eu devo estar apaixonado \n ");
		
    while (ciclo2 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='d'|| resposta =='D')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo2++;}
		else if (resposta =='b'|| resposta =='c'|| resposta =='a'|| resposta =='B'|| resposta =='C' || resposta == 'A')
		{ printf ("\n voce errou!\n ..."); ciclo2++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo2 = 1;
		};};
		
		
		ciclo3 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Boneco de Olinda - Gorila e Preto \n\n Os adultos vao gostar \n As crianças vao gritar! \n O boneco de Olinda e ruim de aturar"); 
        printf ("\n Mas o boneco e coisa seria,nao pode dar risada \n Preste atencao no detalhe da cara \n \n O detalhe da careta e muito importante \n");
        printf ("\n A - A cara mais feia ganha 1 desodorante \n B - A cara mais feia ganha 1 refrigerante \n C - A cara mais feia ganha 1 beijo bem ofegante \n D - A cara mais feia ganha 1 alucinante \n ");
    while (ciclo3 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='b'|| resposta =='B')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo3++;}
		else if (resposta =='a'|| resposta =='c'|| resposta =='d'|| resposta =='A'|| resposta =='C' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo3++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo3 = 1;
		};};
		
		
		ciclo4 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Cheguei - Ludmilla \n \n Que eu cheguei com tudo \n Cheguei quebrando tudo \n Pode me olhar, apaga a luz e aumenta o som");
	    printf ("\n A recalcada pira \n Falsiane conspira\n");
        printf ("\n A - Pra despertar inveja alheia eu tenho tom \n B - Pra despertar inveja alheia eu tenho dom \n C - Pra despertar inveja alheia eu tenho som \n D - Pra despertar inveja alheia eu tento o som \n ");
    while (ciclo4 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='b'|| resposta =='B')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo4++;}
		else if (resposta =='a'|| resposta =='c'|| resposta =='d'|| resposta =='A'|| resposta =='C' || resposta == 'D')
		{ printf ("\n voce errou!\n ..."); ciclo4++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo4 = 1;
		};};
		
		
		ciclo5 = 1;
	    getch();
	    
	    printf ("\n Complete a letra a seguir!\n");
	    printf ("\n          Feira de Acari - Mc Batata \n\n Ele disse que na feira \n Pelo preco de um bujao\n");
        printf ("\n A - Eu comprava a casa inteira \n     Com as panelas e o fogao \n B - Eu comprava o cosinha \n     Mobilhada de montao \n");
		printf(" C - Eu comprava a fritadeira \n     A geleia e o pao \n D - Eu comprava a geladeira \n     As panelas e o fogao \n ");
    while (ciclo5 - 1 == 0){
        fflush(stdin);	
		scanf ("%s", &resposta);
        
        if (resposta=='d'|| resposta =='D')
		{ printf("\n Voce acertou!\n ..."); pontos++;  ciclo5++;}
		else if (resposta =='b'|| resposta =='c'|| resposta =='a'|| resposta =='B'|| resposta =='C' || resposta == 'A')
		{ printf ("\n voce errou!\n ..."); ciclo5++;}
		else { printf ("\n Responda A,B,C ou D! \n"); ciclo5 = 1;
		};};
		
		
		
// mini ciclo de fim de jogo //
		
		printf (" Aperte qualquer tecla para saber seu resultado!\n...\n");
		getch();
		printf (" %s Seu resultado foi %i pontos de um total de 5 possiveis!\n", nome, pontos);
		
	
	key = 0;} start =1; rep = 0 ;}
	
	
	    else if (ritmo =='c'|| ritmo =='C')
		{ printf ("Voce escolheu jogar com musicas gospel!"); rep = 0; }
	    else if (ritmo =='d'|| ritmo =='D')
		{printf ("Voce escolheu jogar com musicas de rock!"); rep = 0; }
        else if (ritmo =='e'|| ritmo =='E') 
		{ printf ("Voce escolheu jogar com musicas de axe!"); rep =0;}
		else { printf ("Por favor %s Escolha A, B, C, D ou E! \n",nome); rep--; fflush(stdin); scanf( "%c", &ritmo); };	
	};
	
	
// a int fim serve para possibilitar o ciclo de recomeço, fim de jogo ou retorno em caso de resposta não desejada //
		
		int fim;
		fim = 1;
		char cont;
	while (fim > 0){
	
		printf ("\n Quer continuar a jogar?\n S - sim \n N - nao \n");
	    fflush(stdin);
		scanf ("%c", &cont);
		if(cont=='s'|| cont =='S'){pontos = 0 ; fim=0; key=0;}
		else if(cont=='n'||cont =='N'){ fim = 0; printf ("Aperte qualquer tecla para sair"); getch(); return 0;}
		else { printf ("Responda S ou N!"); fim = 1;};};
		
		
	};
	
		return 0;
	}
		
	

