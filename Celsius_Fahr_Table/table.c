#include <stdio.h>

//this program will display a table of celsius to fahr//

int main() {
        //let's define the variable that will be used//
        float celsius, fahr;
        float upper, lower, next_temp;

    lower = 0; /*this is the starting temp of the celsius*/
    upper = 100; /*this is the last temp*/
    next_temp = 5; /*next temp will be obtained by adding 5*/

    //this will be the header or the title//

    printf("Temperatures\n");
    printf("-------------\n");
    printf("celsius\t\tfahr\n");
    printf("--------------------\n"); /*this will be a line of dashes
     to separete the title and the table*/

    //let's equalize the starting temp with our variable//

celsius = lower;
    
    //this will check and print if the condition is true
    while(celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f\t\t%2.0f\n", celsius, fahr);
        celsius = celsius + next_temp;

    }

    return 0;

}