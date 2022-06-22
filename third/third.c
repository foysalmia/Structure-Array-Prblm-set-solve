/*Make a function named get_min() which takes an array of structures and the size of that array. In this function you will find the minimum val from the array of structures and return that value. The format of structure is given below,
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

struct Person get_min(int n,struct Person a[])
{
    struct Person min;
    int low = a[0].val;

    for(int i=0; i<n; i++)
    {
        if(low > a[i].val)
        {
            low = a[i].val;
            min = a[i];
        }
    }

    return min;

};

void main()
{
    int n;
    scanf("%d",&n);
    struct Person a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %d",&a[i].name,&a[i].val);
    }

    struct Person min = get_min(n,a);

    printf("\nMin valued Person is =>\n");
    printf("%s %d\n",min.name,min.val);
}

