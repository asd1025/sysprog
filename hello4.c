
#include <stdio.h>

int main()
{
	const char* str = "Hello Wolrd\n";

	FILE* fp = fopen("./hello4.txt", "w");
	fputs(str, fp); 
	fclose(fp);

	return 0;
}
