#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int roll;
    int yr;
}s[3];
void Enter(void);
void Delete(void);
void Update(void);
void Search(void);
void List(void);
int main()
{
    int t;
    char k,Y,y,N,n;
    printf("\n*************************************STUDENTS MANAGEMENT SYSTEM*****************************************\n");
    do
    {
        printf("1.Enter data of student.\n2.Delete data of student.\n3.Update data of student.\n4.Search data of student.\n5.List of students with roll no.\n");
        printf("\nEnter the required number : ");
        scanf("%d",&t);
        switch(t)
        {
            case 1:
            Enter();
            break;

            case 2:
            Delete();
            break;

            case 3:
            Update();
            break;

            case 4:
            Search();
            break;

            case 5:
            List();
            break;

            default :
            break;
        }
        printf("\nDo you want to manage any other thing? (Y/N) : ");
        scanf(" %c",&k);
    }while(k=='y'||k=='Y');
    return 0;
}
void Enter(void)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter Name of Student : ");
        scanf(" %[^\n]",s[i].name);
        printf("\nEnter Roll no. of Student : ");
        scanf("%d",&s[i].roll);
        printf("\nEnter Year of Study of Student : ");
        scanf("%d",&s[i].yr);
        printf("---------------------------------------------------------------------------------------------");
    }
}
void List(void)
{
    int i;
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("Name : %s\t Roll no. : %d\n",s[i].name,s[i].roll);
    }
}
void Search(void)
{
    int n,i;
    printf("\nEnter the roll no. of the student : ");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        if(n==s[i].roll)
        {
            printf("Name : %s\t Roll no. : %d\t Year : %d\n",s[i].name,s[i].roll,s[i].yr);
        }
    }
}
void Update(void)
{
    int i,t,k;
    char a,y,n,Y,N;
    printf("\nEnter the roll no. whose data is to be updated : ");
    scanf("%d",&t);
    for(i=0;i<3;i++)
    {
        if(t==s[i].roll)
        {
           do
           {
              printf("\nEnter what you want to update : \n1.Name\n2.Roll.no\n3.Year\n");
             scanf("%d",&k);
              switch(k)
              {
                case 1:
                printf("\nEnter new name : ");
                scanf(" %[^\n]",s[i].name);
                break;

                case 2:
                printf("\nEnter new roll no. : ");
                scanf("%d",&s[i].roll);
                break;

                case 3:
                printf("\nEnter new year : ");
                scanf("%d",&s[i].yr);
                break;

                case 4:
                printf("\nInvalid input!!\n");
                break;
              }
              printf("\nDo you want to update any other information? (Y/N) : ");
              scanf("%s",&a);
            }while(a==y||a==Y);
            printf("\nUpdated data is :\n");
            printf("Name : %s\t Roll no. : %d\t Year : %d\n",s[i].name,s[i].roll,s[i].yr);
        }
    }
}
void Delete(void)
{
    int n,a=3,i;
    printf("\nEnter the roll no. of the student whose data is to be deleted : ");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        if(n==s[i].roll)
        {
            int pos=i;
            for(i=pos;i<a;i++)
            {
                s[i]=s[i+1];
            }
            a--;
        }
    }
}