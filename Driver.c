#include <stdio.h>
#include <stdlib.h>
#include "Work05.h"

int main(){

	// printf("Strncpy tests:\n");
	char k[] = "hello";
	char k1[] = "hi";
	// printf("\n");

	printf("%d\n",strlen(k));
	printf("%s\n",strncpy(k,k1,2));

	char haystack[50] = "Systems Level Programming";
    char needle[] = "Programming";
   	char *ret;

   	ret = strstr(haystack, needle);

   	printf("The substring is: %s\n", ret);

    strcat(haystack,needle);
   	printf("%s\n",haystack);

   	printf("%s\n",strchr(haystack,'l'));

   	printf("%d\n", strcmp("he","hi"));
	return 0;
}