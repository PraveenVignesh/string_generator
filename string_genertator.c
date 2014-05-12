#include<stdio.h>
void generate_possible(char a[], int index, int length) {
    int i,j;
    if(index == length) {
        printf("%s\n",a);
    }
    for(i=index;a[i]!='\0';i++) {
        if(a[i] == '*') {
            for(j=97; j<=122; j++) {
                a[i] = j;
                generate_possible(a,i,length);
            }
            a[i] = '*';
            break;
        }
    }
}
void main() {
    char *str;
    int i,n;
    printf("Enter Length of String:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        str[i]='*';
    str[i] = '\0';
    generate_possible(str,0,n-1);
}

