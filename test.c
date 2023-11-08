#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int min(int x,int y){
    return x-y;
}
int re(int x,int y){
    return x%y;
}
main(){
    int a,b,c;
    printf("숫자를 입력하시오.");
    scanf("%d %d", &a, &b);
    printf("1.더하기 2. 빼기 3. 나머지 구하기");
    scanf("%d", &c);
    if(c == 1)
     printf("%d", add(a,b));
    else if(c == 2)
     printf("%d", min(a,b));
    else if(c == 3)
     printf("%d", re(a,b));
}