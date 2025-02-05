#include <stdio.h>
int main() {
    char name[100];
    char hobby[100];
    int age;
    scanf("%s %s", &name,&hobby);
    scanf("%d",&age);
    printf(" Name: %s\n Age: %d\n Hobby: %s",name,age,hobby );
    return 0;
}