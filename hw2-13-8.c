#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//without free()
int main(int argc, char *argv[]) {
	// pid_t pid = getpid();
 //  	printf("pid: %d\n", pid);

	// printf("location of code : %p\n", main);
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
	m = 1024*n;
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

// Trying to get the PID of memory-user can not use getpid for the pmap
	pid_t pid = getppid();                 // returns the process ID of the parent of the calling process.
  	printf("\nPPid: %d\n", pid);

	printf("location of code : %p\n", main);
	return 0;
}


//with free()
// int main(int argc, char *argv[]) {
// 	int  i = 0;
// 	int n;
// 	int m = 0;
// 	char *a;

// /// In case of forgeting to enter the command line
// 	if (argc < 2 ) {
// 		printf("Invaild Command line arguments ");
// 		exit(0);
// 	}
	

// 	n = atoi(argv[1]);
// 	m = 1024*n;
// 	if (argc == 2) {
// 		//a = (char*)malloc(n*1024);  ////ALWAYS HAVE SIZEOF()
// 		a = (char*)malloc(sizeof(n*1024));  /// makes some werid crap happen
// 		printf("Memory is Allocated\n");
// 	}

// ///in case of a third command, then we iterate that many number of times
// 	if (argc == 3) {
// 		m = atoi(argv[3]);
// 	}


// /// Will print indefinetly until a certain amount of time
// 	printf("Accessing the Array...");
// 	for (i = 0; i < m; i++) {
// 		printf("%c\t", a[i]);
// 	}

// 	pid_t pid = getppid();  /// returns the process ID of the parent of the calling process.
// 	printf("Pid: %d\n", pid);

// 	printf("location of code : %p\n", main);

// 	free(a); ///freeing the array
// 	return 0;
// }