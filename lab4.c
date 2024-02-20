#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


char nth_in_upper(int n) {

    return ((char) ((int)"A" + n-1));
}
char upper_to_lower (char ch) {

    return ((char) ((int) ch + ((int) 'a' - (int) 'A')));
}
void nth_letter(int n, char *a, char *A) {

    *A = (char) ((int) "A" +n -1);
    *a = (char) ((int) "a" + n-1);
}
void whats_what(char a) {

    if(islower(a))
    {
        printf("This is lower");
    }
    else if(isupper(a))
    {
        printf("This is higher");
    }
    else
    {
        printf("This is not a char");
    }
}

int main() {

    int num;
    srand(time(NULL));
    num =rand() %100;
    printf("The random number is: %d\n\n", num);
    return 0;

}