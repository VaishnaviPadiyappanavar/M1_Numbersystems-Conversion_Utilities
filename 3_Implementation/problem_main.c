#include "problem.h"
int main()
{
    printf("Are you ready to learn Number systems and conversion\n");
    printf("We will study three types of number systems and its conversion they are Decimal,Binary and Hexadecimal\n");
    printf("All of these number systems have a base\n");
    printf("Decimal has base 10,Binary has base 2,Hexadecimal has base 16\n");
    printf("Select which conversion\n\n");
    printf("1:Binary to Decimal\n2:Hexadecimal to Decimal\n3:Decimal to Binary\n4:Hexadecimal to Binary\n5:Decimal to Hexadecimal\n6:Binary to Hexadecimal\n");
    int ch,n=1;
    long int binary,decimal;
    char hex[100];
    while(n=1)
    { printf("Enter the option from 1 to 6 to get started: \n");
        scanf("%d",&ch);
    switch(ch)
        {
            case 1:
                printf("TECHNIQUE for binary to decimal- multiply each bit by 2^𝑛, where n is the weight of the bit and add the results\n");
                printf("enter binary number in 0's and 1's only: ");
                scanf("%ld",&binary);
                BinarytoDecimal(binary);
                break;
            case 2:
                printf("TECHNIQUE for hex to decimal- multiply each bit by 16^𝑛, where n is the weight of the bit and add the results\n");
                printf("enter Hexa-Decimal number you can enter only numbers from 0 to 9 and alphabets from A to F only: ");
                scanf("%s",hex);
                HextoDecimal(hex); 
                break;
            case 3:
                printf("TECHNIQUE for decimal to binary-Divide by 2 and keep track of the remainder\n");
                printf("Enter the decimal number from 0 to 9: ");
                scanf("%ld",&decimal);
                DecimaltoBinary(decimal);
                break;
            case 4:
                printf("TECHNIQUE for hex to binary-Convert Each Hexadecimal digit to four bit binary Representation\n");
                printf("enter Hexa-Decimal number you can enter only numbers from 0 to 9 and alphabets from A to F only:");
                scanf("%s",hex);
                HextoBinary(hex);
                break;
            case 5:
                printf("TECHNIQUE for decimal to hexa-Divide by 16 and keep track of the remainder\n");
                printf("enter the decimal number from 0 to 9: ");
                scanf("%ld",&decimal);
                DecimaltoHex(decimal);
                break;
            case 6:
                printf("TECHNIQUE for binary to hex-Group the binary digits starting from right and write the corresponding hex for grouped four digits\n");
                printf("enter binary number in 0's and 1's only: ");
                scanf("%ld",&binary);
                BinarytoHex(binary); 
                break;
            default:
                printf("\nNot a valid number\n");
                break;                                          
        }
        printf("\nIf you want to continue learning press 1 else press 0: \n");
        scanf("%d",&n);
 
    }
 
         
return 0;
}
