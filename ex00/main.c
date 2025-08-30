#include <unistd.h>

int main(int ac, char** av)
{
	(void)av;
	if (ac != 2)
	{	
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
