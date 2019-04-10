#include <stdio.h>

int main()
{
char alphatxt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //Text that is to become encrypted
char subtxt[]=    "QWERTYUIOPASDFGHJKLZXCVBNM";
char rawmessage[] = "PHIL";
int y =4;

int N = 26; //Number of Values in the Array above
int i; //Counter Index
int x = 0;
printf("something went wrong");

for (i = 0 ; i < N ; ++i){

for (x=0 ; x < y ; ++x){
    while (i < 26){
        printf("something went wrong");
if (rawmessage[x] == alphatxt[i]){
   printf("%c", subtxt[x]);
  i++;
} else printf("something went wrong");
}
}
}

}