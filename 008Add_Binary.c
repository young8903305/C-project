#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * addBinary(char * a, char * b){
    int a_length = strlen(a) - 1;   // -1 for pointer's index
    int b_length = strlen(b) - 1;
    int result_length;
    int carry = 0, sum;
    char *result;
    
    if(a_length > b_length){
        // must have one more unit for the bit carry, -1 in line 6 and line 7
        result_length = a_length + 1;
        result = (char *)malloc(sizeof(char) * (result_length));
    }else{
        result_length = b_length + 1;
        result = (char *)malloc(sizeof(char)*(result_length));
    }
    printf("%d\n", result_length);

    while(a_length >= 0 || b_length >= 0){
        sum = carry;
        if(a_length >= 0){
            sum = sum + (*(a + a_length) - '0');
            a_length--;
        }
        if(b_length >= 0){
            sum = sum + (*(b + b_length) - '0');
            b_length--;
        }
        result[result_length] = (sum % 2) + '0';
        result_length--;
        carry = sum / 2;
    }

    if(carry != 0){
        result[result_length] = carry + '0';
    }
    return result;
}

int main(int argc, char **argv){
    char *a, *b, *c;
    a = "1010";
    b = "1011";
    c = addBinary(a, b);
    printf("%s\n", c);
    return 0;
}

