#include<stdio.h>
char s[2];
void main()
{
    enum m1{
        JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
        };
    int m;
    printf("Enter any month\n");
    scanf("%d",&m);
    switch(m)
    {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
        {
            printf("31 days");
        }
        break;
        case FEB:
        {
            printf("28 or 29 days");
        }break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
        {
            printf("30 days");
        }break;
        default:
        printf("Invalid input");
    }
}
