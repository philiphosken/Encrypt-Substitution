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


FILE *in;
in = fopen("in.txt", "r");

FILE *out;
out = fopen("out.txt", "w");
    
    while (feof(in) == 0){
        fscanf(in, "%c", &m);
    for (i = 0; i < N; ++i){
        a = alphatxt[i];
        b = subtxt[i];
    if (m == a){
        fprintf(out, "%c", b);
        printf("%c", b);
    } 
       
}

}
}