#include <stdio.h>
#include <stdlib.h>
#include "Work05.h"
#include <string.h>

int main(){

	char s1[50];
	char s2[] = "hello";
	char s3[] = "goodbye";

	char s11[50];
	char s22[] = "hello";
	char s33[] = "goodbye";

	printf("%s\n","s1: [50]");
	printf("%s\n","s2: [hello]");
	printf("%s\n","s2: [goodbye]");
	printf("\n");

	printf("Testing strlen(s2):\n");
	printf("[standard]: %lu\n",strlen(s2));
	printf("[mine]: %d\n",my_strlen(s22));
	printf("\n");

	printf("Testing strcpy(s1, s2):\n");
	printf("[standard]: [%s]\n",strcpy(s1,s2));
	printf("[mine]: [%s]\n",my_strcpy(s11,s22));
	printf("\n");

	printf("Testing strncpy(s1, s3, 3):\n");
	printf("[standard]: [%s]\n", strncpy(s1,s3,3));
	printf("[mine]: [%s]\n", my_strncpy(s11,s33,3));
	printf("\n");

	printf("Testing strcat(s1, s3):\n");
	printf("[standard]: [%s]\n",strcat(s1,s3));
	printf("[mine]: [%s]\n",my_strcat(s11,s33));
	printf("\n");

	printf("Testing strncat(s1, s2, 3):\n");
	printf("[standard]: [%s]\n", strncat(s1,s2,3));
	printf("[mine]: [%s]\n", my_strncat(s11,s22,3));
	printf("\n");

	printf("Testing strchr(s1, 'l'):\n");
	printf("[standard]: [%p]\n",strchr(s1,'l'));
	printf("[mine]: [%p]\n",my_strchr(s1,'l'));
	printf("\n");

	printf("Testing strchr(s1, 0):\n");
	printf("[standard]: [%p]\n",strchr(s1,0));
	printf("[mine]: [%p]\n",my_strchr(s1,0));
	printf("\n");

	printf("Testing strchr(s1, 'z'):\n");
	printf("[standard]: [%p]\n",strchr(s1,'z'));
	printf("[mine]: [%p]\n",my_strchr(s1,'z'));
	printf("\n");

	printf("Testing strcmp\n");
	printf("Comparing ab to abc:\n");
	printf("[standard]: [%d]\n",strcmp("ab","abc"));
	printf("[mine]: [%d]\n",my_strcmp("ab","abc"));
	printf("\n");
	
	printf("Comparing abc to ab:\n");
	printf("[standard]: [%d]\n",strcmp("abc","ab"));
	printf("[mine]: [%d]\n",my_strcmp("abc","ab"));
	printf("\n");

	printf("Comparing abc to abc:\n");
	printf("[standard]: [%d]\n",strcmp("abc","abc"));
	printf("[mine]: [%d]\n",my_strcmp("abc","abc"));

	// printf("Strncpy tests:\n");
	// char k[] = "hello";
	// char k1[] = "hi";
	// // printf("\n");

	// printf("%d\n",strlen(k));
	// printf("%s\n",strncpy(k,k1,2));

	// char haystack[50] = "Systems Level Programming";
 //    char needle[] = "Programming";
 //   	char *ret;

 //   	ret = strstr(haystack, needle);

 //   	printf("The substring is: %s\n", ret);

 //    strcat(haystack,needle);
 //   	printf("%s\n",haystack);

 //   	printf("%s\n",strchr(haystack,'l'));

 //   	printf("%d\n", strcmp("he","hi"));
	// return 0;
}