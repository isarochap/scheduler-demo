#include <stdio.h>

int main() {
	int tarefas[5];
	int iteracoes;

	for (int i=0; i<5; i++) {
		scanf("%d", &tarefas[i]);
	}
	scanf("%d", &iteracoes);

	for (int i=1; i<=iteracoes; i++) {
		int fez = 0;
		
		for (int j=0; j<5; j++) {
			if (tarefas[j] != 0 && i % tarefas[j] == 0) {
				fez=1;
				printf("%d", j);
			}
		}
		
		if (!fez) printf("-");
		printf("\n");
	}

	return 0;
}