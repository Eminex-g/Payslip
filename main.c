#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    int id, kraPin, workedHrs;

    int payment = 1000;
    int excessHrPay = 1000 * 1.5;
    float tax = 0.3;

    printf("What is your name: ");
    scanf("%s", &name);
    printf("Name: %s\n", name);

    printf("Whats your ID: ");
    scanf("%d", &id);
    printf("Employee number: %d\n", id);

    printf("Enter your KRA pin: ");
    scanf("%d", &kraPin);
    printf("KRA pin: %d\n", kraPin);

    printf("Enter your worked hrs: ");
    scanf("%d", &workedHrs);
    printf("Worked hours: %d\n", workedHrs);
    printf("\n");

    int excessHrs;
    if(workedHrs > 40) {
        excessHrs = workedHrs - 40;
    }

    int normalPay;
    normalPay = payment * 40;
    printf("Normal pay: Kshs %d\n", normalPay);

    int overtimePay;
    overtimePay = excessHrs * excessHrPay;
    printf("Overtime payment: %d\n", overtimePay);

    int netIncome;
    netIncome = normalPay + overtimePay;
    printf("Net Income: %d\n", netIncome);

    int taxPAyment;
    taxPAyment = netIncome * tax;
    printf("TAx paid is: %d", taxPAyment);

    return 0;
}
