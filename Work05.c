#include "Work05.h"

int my_strlen(char *s){
	int len = 0;
	while (*s){
		len++;
		s++;
	}
	return len;
}
char *my_strncpy(char *dest, char *source, int n){
	for (int i = 0; i < n; i++){
		dest[i]=source[i];
	}
	// for (int i = n; i < my_strlen(dest); i++){
	// 	dest[i]='.';
	// }
	return dest;
}
char *my_strcat(char *dest, char *source){
	int last = my_strlen(dest);
	for (int i = 0; i < my_strlen(source); i++){
		dest[last+i] = source[i];
	}
	return dest;
}
// int min(char *s1, char *s2){
// 	int len0 = my_strlen(s1);
// 	int len1 = my_strlen(s2);
// 	if (len1 > len0){
// 		return len1;
// 	}
// 	return len0;
// }
int my_strcmp(char *s1, char *s2){
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < my_strlen(s1); i++){
		sum1 += (int)s1[i];
	}
	for (int j = 0; j < my_strlen(s2); j++){
		sum2 += (int)s2[j];
	}
	return sum1 - sum2;
	// for (int i = 0; i < min(s1,s2); i++){
	// 	if (s1[i] != s2[i]){
	// 		if (s1[i] > s2[i]){
	// 			return s1[i] - s2[i];
	// 		}
	// 		return s2[i]-s1[i];
	// 	}
	// }
	// return 0;
}
char *my_strchr(char *s, char c){
	if (c == 0){
		return s+my_strlen(s);
	}
	while (*s){
		if (*s == c){
			return s;
		}
		s++;
	}
	return NULL;
}

char *my_strstr(char *s1, char *s2){
	int len = my_strlen(s2);
	for (int i = 0; i <= my_strlen(s1)-len; i++){
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
char *my_strncat(char *dest, char *source, int n){
	int last = my_strlen(dest);
	for (int i = 0; i < n; i++){
		dest[last+i] = source[i];
	}
	dest[last+n]=0;
	return dest;
}
char *my_strcpy(char *dest, char *source){
	for (int i = 0; i < my_strlen(source); i++){
		dest[i]=source[i];
	}
	return dest;
}







