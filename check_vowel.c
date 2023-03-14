#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    switch (ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

        printf("Character is vowel");
        break;
        default:
        printf("The character is not vowel");
        break;
    }
    return 0;
}