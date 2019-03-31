#include <stdio.h> //este é a biblioteca é onde vc vai introduzir o tipo de "ferramentas" que vai usar no seu programa,o <stdio.h> é a biblioteca para números


int main(){//int main() é o comando para demonstrar ao computador que ele deve iniciar o programa

	int a1,c,i;// int é o termo para designar as variáveis para números inteiras,nós definimos as varíaveis para q o programa entender q elas existem quando formos aplicar um valor 
	
	float a,b;//float é o termo para designar as variáveis para números reais,nós definimos as varíaveis para q o programa entender q elas existem quando formos aplicar um valor 
	
	char r;//char é o termo para designar as variáveis para caracteres(Ex:c,#,...),nós definimos as varíaveis para q o programa entender q elas existem quando formos aplicar um valor 
	
	printf("\n Voce eh demais");//é o comando para apresentar na tela a informação que estiver entre parenteses
	
	printf("\n \n diga quantos anos voce tem?");//
	scanf("%d",&a1);//scanf é o comando para escanear um valor dado pelo usuário/%d é variável universal para os números interios,um "manequim"/& simboliza que uma variável,que vocÊ deva definir,vai receber o valor que o usuário vai aplicar(escrever e aperetar enter)
	
	if(a1<16){//if é comando que implica a realização do que está entre chaves caso sua condição seja atendida/()é onde você deve colocar a condição que deverá colocar a condição desejada
		
		printf("\n \n voce nao pode votar,pois voce tem %d",a1);//colocar %d/%f/%c para mostrar a existencia de uma variável desejada/colocamos fora das aspas a variável que desejamos mostrar 
	
	}
	
	else if(a1>=18 && a1<=69) {//else if e usado quando queres relacionar três ou mais situações de condições realizadas e é o comando que implica a realização do que está entre chaves caso sua condição seja atendida/()é onde você deve colocar a condição desejada//>(o da esquerda é maior que o da direita),<(o da direita é maior que o da esquerda),<=(maior igual),>=,!=(um diferente do outro):são operadores relacionais//&&(um E outro),||(um OU outro),==(um igual ao outro):operadores de comparação
	
		printf("\n \n seu voto eh obrigatorio,pois voce tem %d",a1);
		
	}
	
	else{//else é usado quando nenhuma das situações de condições anteriores foi realizada
		
		printf("\n \n seu voto nao eh obrigatorio!pois voce tem %d",a1);
		
	}
		printf("\n \n quanto voce tem de altura?");//na hora de digitar voce deve usar . em vez de , EX:1,85(errado)/1.85(certo)
		scanf("%f",&a);
	
		printf("\n \n voce tem %.2f",a);//o uso de %.2f é para limitar o número de casas decimais ao número colocado entre o % e o f 
	
	printf("\n \n o que voce acha da aula?\n (1)Boa \t (2)Pode melhorar \t(3)Ruim \t(4)Quero Ticole \n R:");
	scanf("%d",&c);
	
	switch (c){//switch é o comando que  compara  um valor constante determinado no case, e caso a comparação seja atemdodp, um determinado comando é executado.
		case 1://case é quem determina o valor para que aquela ação seja executada,e o valor constante aqui determinado é o 1 
			printf("\n \nValeuuuuu!");
		break;//comando para encerrar a ação e ir para o próximo comando,fora das chaves, no programa
		
		case 2:
			printf("\n \nEntendido,me passa o que você gostaria que fosse melhorado");
		break;
		
		case 3:
			printf("\n\nMe desculpa!Prometo que irei melhorar");
		break;
		
		case 4:
			printf("\n\nAjuda a turma toda a tirar 8,que ele e teu");
		break;
		default://caso nenhum dos valores constantes determinados nos cases seja atendido,o default terá seu comando realizado 
			printf("essa opção não existe");
	}
		fflush(stdin);//para ordenar o buffer do programa,buffer é o armazenamento de variáveis do programa(usei ele neste programa que por conta do grande uso de variáveis neste programa,quando fui realziar o comando abaixo o computador não entendeu que devia ler o %c,caso queira saber oq iria ocorrer é só colocar esse comando como comentário)./para fazer um comentário é só usar o comando // a frente daquilo que queres fazer se tornar comentário 
		
		printf("\n \nvoce gostou desse resumo?\t's' / 'n' \tR: ");
        scanf("%c",&r);
        
        if(r== 's'||r== 'S'){//para que seja comparado as letras "s" é necessário colocar o '' para que o programa entenda q aquela letra deve ser lida pelo seu valor em vez de ser considerada uma variável,como foi feito com o r
            printf("\n\nEspero ter ajudado!!!\n");
        }
        else
         printf("\n\n \nprometo melhorar no proximo\n");

		
	
	
		
		
	
	system("pause");//comando para pausar o programa caso você esteja tendo problemas na hora de executar o programa e ele estar fechando do nada
	return 0;//comando para que o programa entenda que deve se finalizar e começar a executar o programa 
}//as chaves são usadas para determinar o que deve ser executado naquele momento por isso caso você não feche o seu programa,possivelmente ele não vai funcionar 
