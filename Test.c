#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	// printf("Strncpy tests:\n");
	char k[] = "hello";
	char k1[] = "hi";
	// printf("\n");

	printf("%lu\n",strlen(k));
	printf("%s\n",strncpy(k,k1,2));

	char haystack[20] = "Tobeornottobe";
    char needle[10] = "tob";
   	char *ret;

   	ret = strstr(haystack, needle);

   	printf("The substring is: %s\n", ret);

   	char src[20], dest[25];

   	strcpy(src,  "This is source");
   	strcpy(dest, "This is destination");
   	// printf("run up to here");
   	strcat(dest, src);

   	printf("Final destination string : |%s|", dest);
	return 0;
}