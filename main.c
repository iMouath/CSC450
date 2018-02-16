//
// Created by mouath on 2/14/18.
//

#include <stdlib.h>
#include <stdio.h>
#include "main.h"


int main(int argc, char **argv) {

    char *s = (char *) malloc(50 * sizeof(char));
//    s = "Hello";
    printf("Please Enter something: ");
    scanf("%s", s);
    printf("%s\n", s);
    char c = charAt(s, 1);
    printf("indexOf: %d\n", indexOf(s, charLength(s), 'a'));
    printf("CharAt: %c\n", c);
    printf("Reversed String: %s\n", reverseString(s, charLength(s)));
    printf("No Vowels: %s\n", removeVowels(s, charLength(s)));

    char *string = (char *) malloc(50 * sizeof(char));
    string = "Hello";
    reverseStringInPlace(string, charLength(string));

    printf("Reverse in place: %s\n", string);

    return 0;
}

//returns the pos of the 1st occurrence of c in s or -1 if not found
int indexOf(char *string, int length, char c) {
    int found = 0;

    for (int i = 0; i < length; i++) {
        if (*(string + i) == c) {
            found = 1;
            return i;
        }
    }
    if (found == 0) {
        return -1;
    }

}

char charAt(char *string, int index) {
    return *(string + index);
}

char *reverseString(char *string, int length) {
    char *reversedString = (char *) malloc(length * sizeof(char));

    for (int i = length; i >= 0; i--) {
        concatStrings(reversedString, *(string + i));
    }
    return reversedString;

}

void reverseStringInPlace(char *string, int length) {
    if (string != 0 && *string != '\0') // Non-null pointer; non-empty string
    {
        char *end = string + charLength(string) - 1;

        while (string < end)
        {
            char tmp = *string;
            *string++ = *end;
            *end-- = tmp;
        }
    }
}

char *removeVowels(char *s, int length) {
    char *noVowelsString = (char *) malloc(length * sizeof(char));
    int i, j = 0;
    for(i = 0; *(s + i) != '\0'; i++) {
        if(check_vowel(*(s + i)) == 0) {
            *(noVowelsString + j) = *(s + i);
            j++;
        }
    }

    noVowelsString[j] = '\0';
    return noVowelsString;
}

void concatStrings(char* string, char c){
    int length = charLength(string);
    *(string + length) = c;
    *(string + length + 1) = '\0';
}

int charLength(char* string){
    int offset = 0;
    int length = 0;

    while(*(string + offset) != '\0'){
        length++;
        offset++;
    }

    return length;
}

int check_vowel(char c)
{
    switch(c) {
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
            return 1;
        default:
            return 0;
    }
}