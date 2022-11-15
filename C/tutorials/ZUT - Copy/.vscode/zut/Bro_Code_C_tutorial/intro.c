# include <stdio.h>

int main(void){

    float_main();

    // char, int short
    char result_message1[] = "Here are some operationson such numbers";
    char result_message2[] = "";
    char result_message3[] = "Who is joe?\n";
    int number1 = 5;
    int number2 = 2;


    short sum = number1+number2;
    short substraction = number1 - number2;
    int division = number1/number2;
    int multiplication = number1*number2;

    if (number1 = 5){
        printf(result_message3);
        printf("not  a comment");
    }
    printf("joe mama");
    printf("\n%s%s\n%d+%d = %d\nSubstraction:%d\nDivision:%d\nMultiplication:%d\n", 
    result_message1, result_message2, number1, number2, number1+number2, substraction,division,multiplication);
    return 0;

}
// float
int float_main(){
    
    float f_number1 = 0.87124;
    int f_number2 = 9;
    float f_multiplication = f_number1*f_number2;
    printf("%d\n",f_multiplication);
    return 0;
}

// single line comment

/*
multiline
comment
*/
