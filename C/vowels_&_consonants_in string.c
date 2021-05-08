#include<stdio.h>
#include <string.h>
int main() {
    char n[100];
    int i, j, vowel = 0, con = 0, len;
    int vowArr[100], conArr[100];
    scanf("%s", &n);
    len = strlen(n);
    for(i=0;i<len;i++) {
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' ||
           n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U') {
            vowel++;
           } else {
               con++;
           }
    }
    printf("Vowel: %d\n", vowel);
    printf("Consonants: %d\n", con);
}
