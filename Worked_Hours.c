#include <stdio.h>

int main() {

  float workedHours;
  float hourlyRate;
  float totalWage;
  
  printf("Time x Work");
  printf("\nEnter the amount of hours worked this month: ");
  scanf(" %f", &workedHours);
  printf("\nEnter the hourly rate (per hour): R$");
  scanf(" %f", &hourlyRate);

  totalWage = (workedHours*hourlyRate);
  printf("\nYour total wage this month is: R$%.2f ", totalWage);
  
  printf("\nYour transportation allowance is equal to 0.06 of salary: R$%.2f ", (totalWage*0.06));
  totalWage = (totalWage*0.94);
  printf("\nTotal wage (%.2f) - Transportation allowance deducted (%.2f): R$%.2f", (workedHours*hourlyRate), (totalWage*0.06), totalWage);
  printf("\n\033[1mNet income: R$%.2f \033[0m", totalWage);

  printf("\n\nThanks, Lord! Merci, mon Dieu!");
}
