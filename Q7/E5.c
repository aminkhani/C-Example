#include <stdio.h>
#include <string.h>

int chrTOint(char );

int main(){

    char input;
    printf("Enter Char 0-9 : ");
    scanf("%c", &input);
    input = chrTOint(input);
    printf("Your Integer Number Is : %d\n", input);

}
int chrTOint(char input){
    input = (input >= '0' && input <= '9') ? input - 48: -1;
    return input;
}