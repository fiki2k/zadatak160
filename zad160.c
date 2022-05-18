// Program treba ucitat i ispisat informacije o studentu pomocu pointera i strukture.

#include <stdio.h>

struct student
{
    char    ime[30];
    int     br_iksice;
    float   postotak;
};
int main()
{
    struct student  std;        //strukturna varijabla
    struct student  *ptr;       //pointer na strukturu student

    ptr= &std;                  //dodjeljujemo vrijednost strukturnoj varijabli

    printf("Unesi informacije o studentu: \n");
    printf("\nUnesi ime studenta: ");
    scanf("%s",ptr->ime);
    printf("\nUnesi broj iksice studenta: ");
    scanf("%d",&ptr->br_iksice);
    printf("\nUnesi studentov postotak: ");
    scanf("%f",&ptr->postotak);

    printf("\nUneseni informacije su: \n");
    printf("\nIme : %s \n\nBroj_iksice: %d \n\nPostotak: %.02f\n\n",ptr->ime,ptr->br_iksice,ptr->postotak);

    return 0;
}
