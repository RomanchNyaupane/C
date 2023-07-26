#include <stdio.h>

struct person
{
  char name[50];
  int birth_year;
  int birth_month;
  int birth_date;
};


void
calculateAge (struct person *user)
{
  int year = 2021;
  int month = 8;
  int date = 11;


  if ((user->birth_date) > date)
    {
      date = date + 30;
      month = month - 1;
    }

  if ((user->birth_month) > month)
    {
      year = year - 1;
      month = month + 12;
    }

  int yearsOld = year - (user->birth_year);

  // print the present age
  printf ("%s is %d years old.\n", (user->name), yearsOld);

}


int
main ()
{

  int num;

  printf ("How many users? ");
  scanf ("%d", &num);

  struct person user[num];
  int i;
  for (i = 0; i < num; ++i)
    {
      printf ("\nEnter the detail of user %d: \n", i + 1);

      printf ("Name: ");
      scanf ("%s", user[i].name);
      printf ("Date of birth (year-month-day): ");
      scanf ("%d-%d-%d", &user[i].birth_year, &user[i].birth_month,
	     &user[i].birth_date);

    }

  printf ("\n***********************************\n");
  printf ("Today is 2021-8-11");
  printf ("\n***********************************\n\n");

  for (i = 0; i < num; ++i)
    {
      calculateAge (&user[i]);
    }

}
