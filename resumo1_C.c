#include <stdio.h> //este � a biblioteca � onde vc vai introduzir o tipo de "ferramentas" que vai usar no seu programa,o <stdio.h> � a biblioteca para n�meros


int main(){//int main() � o comando para demonstrar ao computador que ele deve iniciar o programa

	int a1,c,i;// int � o termo para designar as vari�veis para n�meros inteiras,n�s definimos as var�aveis para q o programa entender q elas existem quando formos aplicar um valor 
	
	float a,b;//float � o termo para designar as vari�veis para n�meros reais,n�s definimos as var�aveis para q o programa entender q elas existem quando formos aplicar um valor 
	
	char r;//char � o termo para designar as vari�veis para caracteres(Ex:c,#,...),n�s definimos as var�aveis para q o programa entender q elas existem quando formos aplicar um valor 
	
	printf("\n Voce eh demais");//� o comando para apresentar na tela a informa��o que estiver entre parenteses
	
	printf("\n \n diga quantos anos voce tem?");//
	scanf("%d",&a1);//scanf � o comando para escanear um valor dado pelo usu�rio/%d � vari�vel universal para os n�meros interios,um "manequim"/& simboliza que uma vari�vel,que voc� deva definir,vai receber o valor que o usu�rio vai aplicar(escrever e aperetar enter)
	
	if(a1<16){//if � comando que implica a realiza��o do que est� entre chaves caso sua condi��o seja atendida/()� onde voc� deve colocar a condi��o que dever� colocar a condi��o desejada
		
		printf("\n \n voce nao pode votar,pois voce tem %d",a1);//colocar %d/%f/%c para mostrar a existencia de uma vari�vel desejada/colocamos fora das aspas a vari�vel que desejamos mostrar 
	
	}
	
	else if(a1>=18 && a1<=69) {//else if e usado quando queres relacionar tr�s ou mais situa��es de condi��es realizadas e � o comando que implica a realiza��o do que est� entre chaves caso sua condi��o seja atendida/()� onde voc� deve colocar a condi��o desejada//>(o da esquerda � maior que o da direita),<(o da direita � maior que o da esquerda),<=(maior igual),>=,!=(um diferente do outro):s�o operadores relacionais//&&(um E outro),||(um OU outro),==(um igual ao outro):operadores de compara��o
	
		printf("\n \n seu voto eh obrigatorio,pois voce tem %d",a1);
		
	}
	
	else{//else � usado quando nenhuma das situa��es de condi��es anteriores foi realizada
		
		printf("\n \n seu voto nao eh obrigatorio!pois voce tem %d",a1);
		
	}
		printf("\n \n quanto voce tem de altura?");//na hora de digitar voce deve usar . em vez de , EX:1,85(errado)/1.85(certo)
		scanf("%f",&a);
	
		printf("\n \n voce tem %.2f",a);//o uso de %.2f � para limitar o n�mero de casas decimais ao n�mero colocado entre o % e o f 
	
	printf("\n \n o que voce acha da aula?\n (1)Boa \t (2)Pode melhorar \t(3)Ruim \t(4)Quero Ticole \n R:");
	scanf("%d",&c);
	
	switch (c){//switch � o comando que  compara  um valor constante determinado no case, e caso a compara��o seja atemdodp, um determinado comando � executado.
		case 1://case � quem determina o valor para que aquela a��o seja executada,e o valor constante aqui determinado � o 1 
			printf("\n \nValeuuuuu!");
		break;//comando para encerrar a a��o e ir para o pr�ximo comando,fora das chaves, no programa
		
		case 2:
			printf("\n \nEntendido,me passa o que voc� gostaria que fosse melhorado");
		break;
		
		case 3:
			printf("\n\nMe desculpa!Prometo que irei melhorar");
		break;
		
		case 4:
			printf("\n\nAjuda a turma toda a tirar 8,que ele e teu");
		break;
		default://caso nenhum dos valores constantes determinados nos cases seja atendido,o default ter� seu comando realizado 
			printf("essa op��o n�o existe");
	}
		fflush(stdin);//para ordenar o buffer do programa,buffer � o armazenamento de vari�veis do programa(usei ele neste programa que por conta do grande uso de vari�veis neste programa,quando fui realziar o comando abaixo o computador n�o entendeu que devia ler o %c,caso queira saber oq iria ocorrer � s� colocar esse comando como coment�rio)./para fazer um coment�rio � s� usar o comando // a frente daquilo que queres fazer se tornar coment�rio 
		
		printf("\n \nvoce gostou desse resumo?\t's' / 'n' \tR: ");
        scanf("%c",&r);
        
        if(r== 's'||r== 'S'){//para que seja comparado as letras "s" � necess�rio colocar o '' para que o programa entenda q aquela letra deve ser lida pelo seu valor em vez de ser considerada uma vari�vel,como foi feito com o r
            printf("\n\nEspero ter ajudado!!!\n");
        }
        else
         printf("\n\n \nprometo melhorar no proximo\n");

		
	
	
		
		
	
	system("pause");//comando para pausar o programa caso voc� esteja tendo problemas na hora de executar o programa e ele estar fechando do nada
	return 0;//comando para que o programa entenda que deve se finalizar e come�ar a executar o programa 
}//as chaves s�o usadas para determinar o que deve ser executado naquele momento por isso caso voc� n�o feche o seu programa,possivelmente ele n�o vai funcionar 
