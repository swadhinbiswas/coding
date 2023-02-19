#include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 int FindFrequency(char* str, char* word) 
{ int len = 0; 
int wlen = 0; 
int cnt = 0;
 int flg = 0;
 int i = 0;
 int j = 0;
 len = strlen(str);
 wlen = strlen(word); 
for (i = 0; i <= len - wlen; i++) 
{ flg = 1; 
for (j = 0; j < wlen; j++) 
{ if (str[i + j] != word[j])
 { flg = 0; 
break; 
} 
} 
if (flg == 1) 
cnt++; } 
return cnt; 
} 
int main() 
{ char str[64]; 
char word[16]="ok"; 
int count = 0; 
fgets(str, sizeof(str), stdin);

count = FindFrequency(str, word); 
printf("Frequency of the word '%s' is: %d\n", word, count);
 return 0; 
}