#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;

    // MAKING 'A'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j ==7 || i ==1 || i == 4)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'B'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i ==1 || i == 4 || i == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'C'.
   for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 ||i == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'D'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 2 || i ==1 || i == 7 || j == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'E'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 7 || (i == 4 && j <= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'F'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || (i == 4 && j <= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'G'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 7 || (i == 4 && j >=4) || (j == 7 && i >= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'H'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i == 4)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'I'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7 || j == 4)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'J'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || (i == 7 && j <= 4) || j == 4 || (j == 1 && i >= 5))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

    // MAKING 'K'.
    int qk=7;
    printf("\n");
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 3 || j == qk)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        if(i <= 3)
        {
            qk--;
        }
        else
        {
            qk++;
        }
        
    }
    printf("\n\n\n");

// MAKING 'L'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 7)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");

// MAKING 'M'.
    int qm=1;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || j == qm)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        if(qm <= 4)
        {
            qm++;
        }
        else
        {
            qm--;
        }
        
        printf("\n");
        
    }
    printf("\n\n\n");

// MAKING 'N'.
    int qn=1;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || j == qn)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }           
        }
        qn++;    
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'O'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((j == 1 || i ==1 || i == 7 || j == 7))//&&((i!=1 && j!=1) || (i!=7 && j!=1) || (i!=1 && j!=7) || (i!=7 && j!=7))
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'P'.
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 4 || (j == 7 && i <= 4))
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }           
        }
        printf("\n");
        
    }
    printf("\n\n\n");
    
    // MAKING 'Q'.
    int qq=4;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 7 || j == 7 || j == qq)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }       
        }
        printf("\n");
        if (i >= 4 && j >= 4)
        {
            qq++;
        }       
    }
    printf("\n\n\n");

    // MAKING 'R'.
    int qr=4;
    for(i=1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || i ==1 || i == 4 || (j == 7 && i <= 4) || i == qr)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }       
        }
        printf("\n");
        if (i >= 4)
        {
            qq++;
        }       
    }
    printf("\n\n\n");
}