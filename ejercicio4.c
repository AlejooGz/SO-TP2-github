#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#define TRUE 1

int main() {
	int status;
	char* argv[] = {"ls", "-ltr", NULL};

	if (fork() != 0) /* Código del padre */
	{
		printf("\nPADRE\n");
		waitpid(-1, &status,0);
	}
	else
		/* Código del hijo */
		execv("/bin/ls", argv);
	return 0;
}
