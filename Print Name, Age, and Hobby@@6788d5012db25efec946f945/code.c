#include <stdio.h>
int main() {
    char name[100];
    
    int age;
    char hobby[100];
    scanf("%c %c", &name,&hobby);
    scanf("%d",&age);
    printf("Name: %s\n Age: %d\n Hobby: %s",name,age,hobby );
    return 0;
}