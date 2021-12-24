#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\t\t\t\tWelcome to Bitwise Left & Right Shift Generator\n\n\n");
    int a;
    printf("Enter Any Decimal Number : ");
    scanf("%d", &a);
    printf("1st Right Shift is = %d\n", a>>1);
    printf("2nd Right Shift is = %d\n", a>>2);
    printf("3rd Right Shift is = %d\n", a>>3);
    printf("4th Right Shift is = %d\n\n", a>>4);
    printf("1st Left Shift is = %d\n", a<<1);
    printf("2nd Left Shift is = %d\n", a<<2);
    printf("3rd Left Shift is = %d\n", a<<3);
    printf("4th Left Shift is = %d\n\n", a<<4);

    getch();
    return 0;
}
