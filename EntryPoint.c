#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    BOOL  bRet=TRUE;
    printf("Enter Numer:");
    scanf("%d",&iValue);
    
    bRet=Check(iValue);
    
    if(bRet==ERR)
    {
        printf("\nError:You entered a number which is less than or equal to 0");
    }
    else if(bRet==TRUE)
    {
        printf("\n%d is divisible by 5",iValue);
    }
    else
    {
        printf("\n%d is not divisible by 5",iValue);
    }
    return 0;
}
