#include <errno.h>
#include <stdio.h>

#define BUFFSIZE 4096
	
int 
main(void)
{
	int n;
	char buf[BUFFSIZE];

	while ((n = read(0, buf, BUFFSIZE)) > 0)
		if (write(1, buf, n) != n )
			printf("write error");

	if (n < 0)
		printf("read error");

	exit(0);
}
