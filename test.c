#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>
int  main()
{
float cnt ==1.0;



    if(cnt==0) {
        printf("SUCCESS\n");
        char file_name_s[256] = "pass.o";
        FILE *fp_s=fopen(file_name_s,"ab+");
        if(fp_s==NULL) printf("can't create file!");
    }
    else {
        printf("FAIL\n");
        printf("%d\n", cnt);
        char file_name_f[256] = "fail.o";
        FILE *fp_f=fopen(file_name_f,"ab+");
        if(fp_f==NULL) printf("can't create file!");
    }

return cnt;

}
