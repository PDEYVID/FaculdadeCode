

/* Um programa em linguagem C para transformar o
sobrenome digitado dos alunos em letras
maiúsculas e, se o usuário digitar o sobrenome do
aluno em minúsculas, o programa as transformará
automaHcamente em maiúsculas. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	
	char nome [30];
	
	int i;
	
	printf("Digite o sobrenome do aluno ou aluna:\n").
    gets(nome);
	
	for(i=0; nome[i]!=' '; i++){
	
		nome[i] = toupper(nome[i]);
		
		printf("\n\nSobrenome convertido: %s\n\n", nome);
		

	getch();
	
	return 0;
}
}