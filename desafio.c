#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pass "S3cr3t"


int comparing(void){
	char password[144];
	printf("Informe a senha: ");
	gets(password);
	
	if (strcmp(password, pass) == 0)
		passok();
	else
		printf("Senha incorreta!\n");
	return 0;
}


int passok(void){
	printf("A senha informada está correta!\n");
	printf("Obrigado por passar a senha %s!\n",pass);
	return 0;
}


int main(int argc, char *argv[]){
	comparing();
	return 0;
}
