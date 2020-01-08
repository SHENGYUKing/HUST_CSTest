/*youngest staff*/
#include <stdio.h>
#include <stdlib.h>\
#include <string.h>

typedef struct Staff{
    int num;
    char name[10];
    int age;
}Staff;

int cmp(const void* _a, const void* _b){
    Staff* a = (Staff*)_a;
    Staff* b = (Staff*)_b;
    if(a->age!=b->age) return a->age - b->age;
    else if(a->num!=b->num) return a->num - b->num;
    else strcmp(a->name, b->name);
}

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<1 || n>30){break;}
        else{
            int i;
            Staff s[n];
            for(i=0;i<n;i++){
                scanf("%d %s %d", &s[i].num, &s[i].name, &s[i].age);
            }
            qsort(s, n, sizeof(Staff), cmp);
            for(i=0;i<3;i++){
                printf("%d %s %d\n", s[i].num, s[i].name, s[i].age);
            }
        }
    }
    return 0;
}
