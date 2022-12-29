#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[100];
    float num;
}tree;


int main(){
    int in,a=0;
    scanf("%d",&in);
    getchar();
    for(int l=0;l<in;l++){
        getchar();
        int sum=0,n=0;
        a++;
        tree namenum[1000];
        char c[1000];
        while(c[0]=getchar()&&c[0]!='\n'){
            char input[1000];
            scanf("%s",input);
            strcat(c,input);
            if(sum==0){
                strcpy(namenum[0].name,c);
                namenum[0].num=1.0;
                sum++;
                n++;
            }
            else{
                int common=0;
                for(int j=0;j<sum;j++){
                    if(strcmp(namenum[j].name,c)==0){
                        common=1;
                        namenum[j].num++;
                    }
                        
                }
            if(common==0){
                strcpy(namenum[n].name,c);
                namenum[n].num+=1.0;
                n++;
            }
            
            
            }
        for(int i=0;i<n;i++){
            namenum[i].num=namenum[i].num/(float)sum;
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(strcmp(namenum[j].name,namenum[j+1].name)<0){
                    char tmpn[1000];
                    float tmpnum;
                    strcpy(tmpn,namenum[j].name);
                    tmpnum=namenum[j].num;
                    strcpy(namenum[j].name,namenum[j+1].name);
                    namenum[j].num=namenum[j+1].num;
                    namenum[j+1].num=tmpnum;
                    strcpy(namenum[j+1].name,tmpn);
                    
                }
            }
        }
        
        }
        
        for(int i=0;i<n;i++){
            if(l!=0)
                puts("");
            printf("%s %.4f\n",namenum[i].name,namenum[i].num);
        }

    }
}