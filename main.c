#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
void store();
void out();
void in();
//未实现功能：数据更新，需要通过导入文件数据更新；
//			  数据输出形成txt储存； 
//未优化：    用数字代替名称或指令以提高效率。 

typedef struct {
    int number;
} Goods;
Goods apple={0};
Goods legend={0};
Goods sony={0};

int main()
{
	system("CLS");
//	freopen(OUT.txt,stdout);
    char type[10];
    printf("please input your wanting: input, output, store\n");
    while(1){
    scanf("%s",type);
    if(strcmp(type,"input")==0) {in();}
    else if(strcmp(type,"output")==0) {out();}
    else if(strcmp(type,"store")==0) {store();}
    else printf("Invalid!");
	}
    return 0;
}

void in(){
	system("CLS");
    int a;
    char types[10];
    printf("please input the type of computer:");
    scanf("%s",types);
    printf("please input the number of input:");
    scanf("%d",&a);
    if(strcmp(types,"apple")==0) apple.number+=a;
    if(strcmp(types,"legend")==0) legend.number+=a;
    if(strcmp(types,"sony")==0) sony.number+=a;
    printf("input again:a  go back:b  quit:q\n");
    while(1){
    	char ch=_getch();
    	if(ch=='a') in();
    	else if(ch=='b') main();
    	else if(ch=='q') break;
		else printf("Invalid!");
	};
}

void out(){
	system("CLS");
    int a;
    char types[10];
    printf("please input the type of computer:");
    scanf("%s",types);
    printf("please input the number of output:");
    scanf("%d",&a);
    if(strcmp(types,"apple")==0) apple.number-=a;
    if(strcmp(types,"legend")==0) legend.number-=a;
    if(strcmp(types,"sony")==0) sony.number-=a;
    printf("input again:a  go back:b  quit:q\n");
    while(1){
    	char ch=_getch();
    	if(ch=='a') out();
    	else if(ch=='b') main();
    	else if(ch=='q') break;
		else printf("Invalid!");
	};
}

void store(){
	system("CLS");
    printf("the store of apple computers is %d\n",apple.number);
    printf("the store of legend computers is %d\n",legend.number);
    printf("the store of sony computers is %d\n",sony.number);
    printf("go back:b  quit:q\n");
    while(1){
    	char ch=_getch();
    	if(ch=='b') main();
    	else if(ch=='q') break;
		else printf("Invalid!");
	};
}
