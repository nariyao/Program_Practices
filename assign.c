#include<stdio.h>

struct Date{
  int day;
  int month;
  int year;
};

int main()
{
  struct Date d;
  printf("\nEnter date(DD/MM/YYYY): ");
  scanf("%d/%d/%d",&d.day,&d.month,&d.year);
  if(d.day>=1&&d.day<=28&&d.month==2&&d.year%4!=0)
    printf("\nValid Date");
  else if(d.day>=1&&d.day<=28&&d.month==2&&d.year%4==0)
    printf("\nValid date");        
  else if(1<=d.month&&d.month<=7&&d.month%2!=0&&d.day>0&&d.day<=31)
    printf("\nValid");
  else if(8<=d.month&&d.month<=12&&d.month%2==0&&d.day>=1&&d.day<=31)
    printf("\nValid");
  else if(1<=d.month&&d.month<=12&&d.day>=1&&d.day<=30)
    printf("\nValid");
  else
    printf("\nNot valid Date");
  return 0;
}