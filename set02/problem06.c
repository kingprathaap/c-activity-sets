// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100] = "string";
//     printf("Original String: %s\n", str);
//     char *reversed = strrev(str);
//     printf("Reversed String: %s", reversed);
//     return 0;
// }
// the above code is using the strrev library which are available only in few compilers and text editors like visual studio code and might not work on codeblocks to compile the programme
//chatgpt code

// Problem06--->

#include <stdio.h>
#include <string.h>

void reverse(char *str, int len) {
    for (int i = 0, m = len - 1; i < m; i++, m--) {    //m-- represents iteration condition -1 to reverse the string
        char c = str[i];
        str[i] = str[m];
        str[m] = c;  //m mentioned here is a random variable assigned here to get the str len and the characters contained in the string
    }
}

int main() {
    char str[100] = "string";
    printf("Original String: %s\n", str);
    int len = strlen(str);  //strlen is a function from the string.h file where we find the length of the string to be found
    reverse(str, len);
    printf("Reversed String: %s", str);
    return 0;
}