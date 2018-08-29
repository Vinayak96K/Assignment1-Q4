#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Check
//  Description: Return true if number is divisible by 5 otherwise returns false
//  Input: int[IN]
//  Output: BOOL
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNO)
{   
    if(iNO<=0)
    {
        return ERR;
    }
    else if(iNO%5==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
