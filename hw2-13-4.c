#include <stdio.h>  // for the mallco()
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int  i = 0;
	int n;
	int m = 0;
	char *a;

/// In case of forgeting to enter the command line
	if (argc < 2 ) {
		printf("Invaild Command line arguments ");
		exit(0);
	}
	

	n = atoi(argv[1]);
	m = 1024*n;          /// 1024 bytes equal to 1 KB
	if (argc == 2) {
		a = (char*)malloc(sizeof(n*1024));  /// makes some werid crap happen
		printf("Memory is Allocated\n");
	}

///in case of a third command, then we iterate that many number of times
	if (argc == 3) {
		m = atoi(argv[3]);
	}


/// Will print indefinetly until a certain amount of time
	printf("Accessing the Array...");
	for (i = 0; i < m; i++) {
		printf("%c\t", a[i]);
	}

	//pid_t pid = getppid(); //  CLOSES THE TERMINAL ITSELF
	//printf("pid: %d\n", pid);
	
	printf("\npid: %d\n", getpid());

	free(a); ///freeing the array
	return 0;
}