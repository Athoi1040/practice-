
#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=90 || c>=97 && c<=122){
      if(c=='a' || c=='e' || c=='o' || c=='u' || c=='u' || c=='A' || c=='E' || c=='E' || c=='I' || c=='O' || c=='U'){
      printf("Vowel");
      }
      else{
        printf("Consunant");
      }
    }
    else{
      printf("Not Alphabet");
} return 0;
}

