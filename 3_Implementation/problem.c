#include "problem.h"


long int BinarytoDecimal(long int binary)
{
    int r,sum=0,i=0;
    while(binary!=0)
    {
        r=binary%10;
        binary=binary/10;
        sum+=r*pow(2,i);
        i++;
    }
     
    printf("\nEquivalent Decimal Number : %d",sum);
    return sum;
}
 
long int HextoDecimal(char hex[])
{
    int i,r=0,j=0,sum=0;
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            r=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            r=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            r=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            r=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            r=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            r=15;
        }
        else
        {
            r=hex[i]-48;
        }
         
        sum+=r*pow(16,j);
        j++;
    }
    printf("\nEquivalent Decimal Number : %d",sum);
    return sum;
 
}
long int DecimaltoBinary(long int decimal)
{
    int r[100],i=0,len=0;
    while(decimal!=0)
    {
        r[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
     
    printf("\nEquivalent Binary Number : ");
    for(int j=len-1;j>=0;j--)
    {
        printf("%d",r[j]);
    }
}
void HextoBinary(char hex[])
{
    int i=0;
    printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':   
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':   
            printf("1100"); break;
        case 'D':
        case 'd':   
            printf("1101"); break;
        case 'E':
        case 'e':   
            printf("1110"); break;
        case 'F':
        case 'f':   
            printf("1111"); break;
         
        default:
            printf("\n Invalid hexa digit %c ", hex[i]);            
        }
    }
 
}
 
long int DecimaltoHex(long int decimal)
{
    int rem[50],i=0,len=0,j;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
     
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(j=len-1;j>=0;j--)
    {
        switch(rem[j])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",rem[j]);
        }
         
    }
}
 
long int BinarytoHex(long int bin)
{
    int rem,i=0,sum=0,remain[100],len=0;
     
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",remain[i]);
        }
         
    }
}
