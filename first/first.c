/*Make a function named structure_sort() which takes an array of structures and the size of that array. In this function you will sort that array on the basis of val2 and you don’t need to return anything as you remember the array will be updated from where it was called.
The format of structure is given below,
struct Person
{
    char name[100];
    int val1;
    int val2;
}
*/

#include<stdio.h>

struct Person
{
    char name[100];
    int val1;
    int val2;
};

void structure_sort(int n,struct Person a[]){
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(a[i].val2 > a[j].val2){
                struct Person tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\nSorted List is => \n");
    for(int i=0;i<n;i++){
        printf("%s %d %d\n",a[i].name,a[i].val1,a[i].val2);
    }
};

void main(){
    int n;
    scanf("%d",&n);

    struct Person a[n];

    for(int i=0;i<n;i++)
        scanf("%s %d %d",&a[i].name,&a[i].val1,&a[i].val2);

    structure_sort(n,a);
}
