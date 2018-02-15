//
// Created by mouath on 2/14/18.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

    char *s = (char *) malloc(50 * sizeof(char));
//    s = "Hello";
    printf("Please Enter something: ");
    scanf("%s", s);
    printf("%s\n", s);

    return 0;
}

//returns the pos of the 1st occurrence of c in s or -1 if not found
int indexOf(char *s, int length, char c) {

}

int charAt(char *s, int length, int index) {

}

char *reverseString(char *s, int length) {

}

void reverseStringInPlace(char *s, int length) {

}

char *removeVowels(char *s, int length) {

}