#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
}e[10];
void read_employee(struct employee[],int);
void print_employee(struct employee[],int);

int main()
{
    int n;
    printf("enter the no of employees:\n");
    scanf("%d",&n);
    read_employee(e,n);
    print_employee(e,n);

    return 0;
}
void read_employee(struct employee e[],int n)
{
    int i;
    printf("enter employee details:\n");
    for(i=0;i<n;i++)
    {
        printf("enter the employee id and name:\n");
        scanf("%d%s",&e[i].id,e[i].name);
    }
}
void print_employee(struct employee e[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n employee name  :  %s  \n employee id :%d",e[i].name,e[i].id);
    }
}



