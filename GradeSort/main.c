/*grade sort*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studentInf{
    char name[100];
    int age;
    int grade;
}StuInf;

// user define compare function
int cmp(const void* _a, const void* _b){
    StuInf* a = (StuInf*)_a;
    StuInf* b = (StuInf*)_b;
    if(a->grade != b->grade)
        return a->grade - b->grade;
    else if(strcmp(a->name, b->name)!=0)
        return strcasecmp(a->name, b->name);
    else
        return a->age - b->age;
}

int main()
{
    int n;
    while(~scanf("%d", &n)){
        if(n<0 || n>1000){
            break;
        }
        else{
            int i;
            StuInf t[n];
            for(i=0;i<n;i++){
                scanf("%s %d %d", &t[i].name, &t[i].age, &t[i].grade);
            }
            // qsort(void* base, size_t num, size_t width, int(_udecl* copmare)(const void* , const void*));
            qsort(t, n, sizeof(StuInf), cmp);
            for(i=0;i<n;i++){
                printf("%s %d %d\n", t[i].name, t[i].age, t[i].grade);
            }
        }
    }
    return 0;
}
