#include "Work05.h"

int strlen(char *s){
	int len = 0;
	while (*s){
		len++;
		s++;
	}
	return len;
}
char *strncpy(char *dest, char *source, int n){
	for (int i = 0; i < n; i++){
		dest[i]=source[i];
	}
	// for (int i = n; i < strlen(dest); i++){
	// 	dest[i]='.';
	// }
	return dest;
}
char *strcat(char *dest, char *source){
	int last = strlen(dest);
	for (int i = 0; i < strlen(source); i++){
		dest[last+i] = source[i];
	}
	return dest;
}
int min(char *s1, char *s2){
	int len0 = strlen(s1);
	int len1 = strlen(s2);
	if (len1 > len0){
		return len1;
	}
	return len0;
}
int strcmp(char *s1, char *s2){
	for (int i = 0; i < min(s1,s2); i++){
		if (s1[i] != s2[i]){
			if (s1[i] > s2[i]){
				return s1[i] - s2[i];
			}
			return s2[i]-s1[i];
		}
	}
	return 0;
}
char *strchr(char *s, char c){
	while (*s){
		if (*s == c){
			return s;
		}
		s++;
	}
	return NULL;
}

char *strstr(char *s1, char *s2){
	int len = strlen(s2);
	for (int i = 0; i <= strlen(s1)-len; i++){
		int result = 1;
		int marker = 0;
		while(marker < len){
			if (*(s2+marker) != *(s1+i+marker)){
				result = 0;
			}
			marker++;
		}
		if (result){
			char *ans = s1+i;
			// printf("returned here");
			return ans;
		}
	}
	return NULL;
}

