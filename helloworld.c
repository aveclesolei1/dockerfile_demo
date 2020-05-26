#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char buf[100];
	FILE *fp;
	int len;
	printf("helloworld\n2018051319_yixiancao\n");
	if((fp = fopen("src/helloworld.txt","r")) == NULL)
	{
		printf("fail to read\n");
		return 0;
	}
	while(fgets(buf,100,fp) != NULL)
	{
		len = strlen(buf);
		buf[len-1] = '\0';
		printf("%s\n",buf);
	}
	return 0;
}
