#include <string.h>

int main()
{
	char* str = "Hello Wolrd\n";
	write(1, str, strlen(str)); 
	return 0;
}
