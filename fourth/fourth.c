/*In this problem you will take the size of an array and an array of structures from the file and save that information in the file. The format of structure is given below,
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

void main()
{
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile == NULL){
        printf("Sorry , No input file found \n");
    }
    FILE *outputFile = fopen("output.txt","w");

    int n;
    fscanf(inputFile,"%d",&n);
    struct Person a[n];
    for(int i=0; i<n; i++)
    {
        fscanf(inputFile,"%s %d",&a[i].name,&a[i].val);
    }

    for(int i=0; i<n; i++)
    {
        fprintf(outputFile,"%s %d\n",a[i].name,a[i].val);
    }

    fclose(inputFile);
    fclose(outputFile);

}
