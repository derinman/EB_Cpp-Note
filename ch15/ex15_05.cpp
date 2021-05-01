#include <iostream>

using namespace std;

int main()
{
    unsigned i;
    FILE *fptr;
    struct
    {
        char H;
        char L;
    } ch;

    if((fptr = fopen("chword.txt", "w")) == NULL)
        cout<<"檔案開啟失敗";
    else
    {
        for(i = 0xA440; i < 0xFFFF; i++)
        {
            ch.H = i / 256;
            ch.L = i % 256;
            fprintf(fptr,"%X %c%c\t", i, ch.H, ch.L);
            if(!(i % 10))
                fputc('\n',fptr);
        }
        fclose(fptr);
    }

    
    return 0;
}

 
