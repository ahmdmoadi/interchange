#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void) {

    //char allchars[64];

    //int ctr = -1;

    char ch = 'a';

    while (ch != '\r') {


        printf("\nType a character:");
        ch=getche();
        if(ch==(('\n' || '\r') || '\x0D')) {
        printf("\nhex=%x\nch=ENTER\ndeci=%d",ch,ch);
        } else if(ch=='\t') {
        printf("\nhex=%x\nch=TAB\ndeci=%d",ch,ch);
        } else if(ch=='\b') {
        printf("\nhex=%x\nch=BACKSPACE\ndeci=%d",ch,ch);
        } else if(ch=='\x20') {
        printf("\nhex=%x\nch=SPACE\ndeci=%d",ch,ch);
        } else {
        printf("\nhex=%x\nch=%c\ndeci=%d",ch,ch,ch);
        }
        //ctr++;
        //allchars[ctr] += (ch+10);
    }
    printf("\n\n\n^That is fake\n\n\nhex=%x\nch=ENTER\ndeci=%d",ch,ch);
    char terminate = 'a';
    //ctr++;
    //allchars[ctr] = NULL;
    //printf("\nAll what you typed: %x-%lx",allchars,allchars,allchars,allchars);

    printf("\nPress any key to continue:");
    terminate=getche();

    if(getche()=='\n'){
        exit(0);
    } else {do nothing(); while(NULL!=NULL);};


}
void nothing(void) {
printf("");
}
