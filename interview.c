#include <stdio.h>
#include <stdlib.h>
/*
#define A "ABC"
#define B "XYZ"
void fn(char s[],int i)
{
    s[i] = '0';
}
int main(void)
{
    char s[4];
    strcpy(s,A);
    fn(s,1);
    printf("%s%c\n",s,s[0]);
    strcpy(s,B);
    fn(s,0);
    printf("%s%c\n",s,s[2]);
}
*/
/*
main()
{
    char thought[2][30] = {"Don't walk in front of me..","I am not follow"};
    printf("%c%c",*(thought[0]+9),*(*(thought+0)+5));
}
*/
/*
int main (void)
{
    int i = 6;
    int *p = &i;
    free(p);
    printf("%d\n",i);
}
*/
/*
int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    int *p = a; int *q = &a[9];
    if(p>q)
        printf("%d\n", *p);
        else
            printf("%d\n", *q);
}
*/
/*
int main(void)
{
    struct xyz{
        int i;
    }; 

    struct xyz *p;
    struct xyz a;
    P=&a;
    p->i=10;
    printf("%d\n",(*p).i);
}
*/
/*
int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a; 
    int *q = &a[9];
    printf("%d",q-p+1);
}
*/
/*
char* myFunc (char *ptr)
{
    ptr += 3;
    return (ptr);
}
int main()
{
    char *x, *y;
    x = "HELLO";
    y = myFunc (x);
    printf("y = %s \n", y);
    return 0;
}
*/
/*
int main(void)
{
    struct xyz {
        int i;
    };
    struct xyz *p = (struct xyz *)malloc(sizeof(struct xyz));
    (& *p)->i=10;
    printf("%d\n",p->i);
}
*/
/*
int main(){
int x = 10, y = 20;
int*xptr = &x, *yptr = &y;
printf("the product of the x and y is %d\n",*(xptr*yptr));
}
*/
/*
int main(void)
{
int pi = (int*)500;
*pi = 250;
printf("%d\n", *pi);
}
*/
/*
int main(void)
{
struct {
int i;
} *xyz;
(*&xyz) -> i = 10;
printf("%d\n", xyz -> i);
}
*/
/*
#include <stdio.h>
void main()
{
int i = 3, *j , **k;
j = &i;
k = &j;
printf("%d%d%d",*j,**k,*(*k));
}
*/
/*
int main(void)
{
char a[] = "classes";
printf("%",&a[2]);
}
*/
/*
int main(){
unsigned char *p;
unsigned char v[5];
int i;
for(i = 0 ; i <5 ; i++)
v[i] = 5-i;
p = v+*(v+2);
i = *(p-1);
printf("i:%d\n", i);
}
*/
/*
void main()
{
int a=10,b=20;
char x=1,y=0;
if(a,b,x)
{
printf("EXAM");
}
printf("out of if");
}
*/
/*
void swap(int &x, int &y)
{
    x+=2;
    y+=3; 
}
void main(){
int a = 10, b= 20;
swap(a++,b++);
printf("\n%d\t%d\t",a,b);
}
*/
/*
void abc (char a[]);
int main(void)
{
char a[5];
abc(a);
printf("%c\n",a[2]);
}
void abc(char a[])
{
a++;
a[1] = '1';
}
*/
/*
int fn(int i , int j)
{
if(i==1) return 0;
else return (i-1)/j ;
}
int main(void)
{
int k;
k = fn(0,2)+fn(1,1)+fn(2,0);
}
*/
void main()
{
    int a = 10, b= 20;
    swap(a++,b++);
    printf("\n%d\t%d\t",a,b);
}
void swap(int &x, int &y)
{
    x+=2;
    y+=3; 
}
