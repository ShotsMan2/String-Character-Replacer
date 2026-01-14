#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void degistirme(char dizi[],char degistirilen,char yerinegelecek){
    int i=0;

    while(dizi[i]!='\0'){
        if(dizi[i]==degistirilen){
            dizi[i]=yerinegelecek;
        }
        i++;
    }
}

int main()
{
    char metin[]="SELIM";

    degistirme(metin,'S','e');

    printf("%s",metin);
}
