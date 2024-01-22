#include<stdio.h>


//int sum(int a, int b);
void sum();
int filter();



int main() {

    char again;
    do{
        sum();
        printf("Do you want to do another calculation? (y/n)\n");
        again = getchar();
        if(again == '\n'){
            again = getchar();
        }
    } while (again == 'y');
    return 0;
}











int filter(){
    int num, limit = 0;
    do {
        printf("Enter the number you want to add : ");
        scanf("%d", &num);
        if(num < limit) {
            printf("Please enter a  number  that is not negative it must be greater then %d .\n", limit);
        }
    } while(num < limit);
    return num;
}


void sum(){
    int a,b;
    a = filter();
    b = filter();
//    result  =
    printf("The result of %d + %d = %d\n", a,b,  a + b);

}
