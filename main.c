#include <stdio.h>

int main() {



    /// 9. task
    int input, output = 1;
    printf("Please give me a number: ");
    scanf("%d",&input);
    for (int i = 1; i <= input ; ++i) {
        output *= i;
    }
    printf("The final number was: %d\n", output );

    /// 10. task
    int inputTwo;
    printf("Please give me Two numbers: ");
    scanf("%d %d", &input, &inputTwo);
    for (int i = 1; i <= input; ++i) {
        if(i%inputTwo == 0){
            printf(" --");
        }
        else if(i%inputTwo != 0){
            printf("  %d", i);
        }
    }
    printf("\n");


    /// 11. task
    int counter = 0;
    while (counter < 10){
        printf("%d. \n", counter+1);
        counter++;
    }


    /// ennyi ezekbol eleg ebbol a szarbol, lusta voltam a file olvasasokkal dolgozni

    return 0;
}
