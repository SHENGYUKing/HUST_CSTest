/*print date*/
#include <stdio.h>
#include <stdlib.h>

int m_n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int m_r[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int y, n;
    while(~scanf("%d %d", &y, &n)){
        int year, month, day;

        year = y;
        month = 0;
        day = n;
        // is leap year?
        if((year%400==0)||(year%100!=0&&year%4==0)){
            while(day>0){
                day -= m_r[month];
                month++;
            }
            day += m_r[month-1];
        }
        else{
            while(day>0){
                day -= m_n[month];
                month++;
            }
            day += m_n[month-1];
        }

        printf("%4d-%02d-%02d\n", year, month, day);
    }
    return 0;
}
