#include <stdio.h>

struct covid{

int firstDoseDate,secondDoseDate, boosterDoseDate;
 } moderna, astraZeneca;

int main() {

struct covid moderna;
struct covid astraZeneca;

moderna.firstDoseDate= 10;
 moderna.secondDoseDate= 19;

moderna.boosterDoseDate = 31;

astraZeneca = moderna;

astraZeneca ={10,11,12};

printf("I have taken First Dose on %d March, 2022.\n", astraZeneca.firstDoseDate); 
printf("Then the 2nd Doge ou %d March, 2022.\n", astraZeneca.secondDoseDate); 
printf("And the Booster Dose on %d March, 2022.\n", astraZeneca.boosterDoseDate);
 return 0;
}