#include "minitalk.h"
#include <stdio.h>

void kucukbit()
{

}

void buyukbit()
{

}

int main()
{
	int	pid;

	pid = getpid();
	printf("%d", pid);
	signal(SIGUSR1, buyukbit);
	signal(SIGUSR2, kucukbit);
}
