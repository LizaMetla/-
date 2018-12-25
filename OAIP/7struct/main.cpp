#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#define N 10

//си сосёт
struct STUDENT {
    char f[30];
    char io[30];
    int gr_number;
    const static int len_res = 5;
    int res[len_res];
}; struct STUDENT st[N];

void vivod(struct STUDENT stud[N]);
int main() {

    int i;
    for (i = 0; i < N; i++) {
        printf("Данные для %d студента: \n", i + 1);
        printf("Введите фамилию студента : ");
        scanf("%s", &st[i].f);


        printf("Введите инициалы студента : ");
        scanf("%s", &st[i].io);

        printf("Введите номер группы студента : ");
        scanf("%d", &st[i].gr_number);

        printf("Введите успеваемость студента : ");

        for (int g = 0; g < st[i].len_res; g++)
            scanf("%d", &st[i].res[g]);

    }
    vivod(st);
    return 0;
}
void vivod(struct STUDENT stud[N]) {
    int structsize = N, i, j;
    bool flag;
    for (i = 0; i < structsize; i++) {
        flag = true;
        for (j = 0; j < 5; j++) {
            if (stud[i].res[j] < 9) {
                flag = false;
            }
        }
        if (flag) {
            printf("Студент #%d\n%s %s\nОценки: %d %d %d %d %d\n\n", i + 1, stud[i].f, stud[i].io, stud[i].res[0],
                   stud[i].res[1], stud[i].res[2], stud[i].res[3], stud[i].res[4]);
        }
    }


}



