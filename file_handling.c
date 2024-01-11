#include<stdio.h>
int main()
{
    FILE *file;
    char data[100];
    file= fopen("example.txt","w");
    if(file==NULL)
    {
        printf("Error opening the file for writing.\n");
        return 1;
    }
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data),stdin);
    fprintf(file,"%s",data);
    fclose(file);
    file = fopen("example.txt","r");
    if(file==NULL)
    {
        printf("Error opening the file for reading.\n");
        return 1;
    }
    printf("\nContent of the file: \n");
    while(fgets(data, sizeof(data),file)!=NULL)
    {
        printf("%s",data);
    }
    fclose(file);
    return 0;
}