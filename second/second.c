/*Make a function named get_max() which takes an array of structures and the size of that array. In this function you will find the maximum val from the array of structures and return that value. The format of structure is given below,
struct Person
{
	    char name[100];
	    int val;
	}
*/
#include<stdio.h>

struct Person
{
    char name[100];
    int val;
};

struct Person get_max(int n,struct Person a[]){
    struct Person max;
    int high = a[0].val;

    for(int i=0;i<n;i++){
        if(high < a[i].val){
            high = a[i].val;
            max = a[i];
        }
    }

    return max;

};

void main(){
    int n;
    scanf("%d",&n);
    struct Person a[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",&a[i].name,&a[i].val);
    }

    struct Person max = get_max(n,a);

    printf("\nMax valued Person is =>\n");
    printf("%s %d\n",max.name,max.val);
}
