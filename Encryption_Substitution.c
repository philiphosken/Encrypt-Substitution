#include <stdio.h>

int main()
{
char alphatxt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
char subtxt[]=    "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
char N = 27;
char m;
char i;
char a;
char b;


FILE *rawmessage;
rawmessage = fopen("rawmessage.txt", "r");

FILE *encry;
encry = fopen("encry.txt", "w");
    
    while (feof(rawmessage) == 0){
        fscanf(rawmessage, "%c", &m);
    for (i = 0; i < N; ++i){
        a = alphatxt[i];
        b = subtxt[i];
    if (m == a){
        fprintf(encry, "%c", b);
        printf("%c", b);
    } 
       
}

}
}