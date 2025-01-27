#include <stdlib.h>

int	segv( void )
{
	int	*ptr = NULL;

	*ptr = 42;
	return (0);
}

int	segv_test (void)
{
	if (segv() == 0)
		return (0);
	else
		return (1);
}
