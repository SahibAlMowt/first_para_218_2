#include <cstdio>

int main()
{
	if(FILE *fin = fopen("input.txt", "r"); fin != nullptr)
	{
		char buf[100];
		fscanf(fin, "%99s", buf);
		
		fclose(fin);
	}
	else
	{
		printf("file not opened");
	}
	
	
	return 0;
}
