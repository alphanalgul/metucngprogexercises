
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct Data{
    int id;
    char name[50];
    char surname[50];
    char gender[50];
    int smoking;
    char cancer[50];
}Data;
int populateData(char *filename,Data *records,int maxSize)
{
    FILE *file= fopen(filename,"r");
    if(file==NULL)
    {
        printf("\nError opening the file! Please try again!");
        return 0;
    }
    int size=0;
    //Temporary variables
    int id;
    char name[50];
    char surname[50];
    char gender[50];
    int smoking;
    char cancer[50];
    if(size<maxSize)
    {
        while (fscanf(file, "%d %s %s %s %d %s", &id, name, surname, gender, &smoking, cancer) != EOF) {

            records[size].id = id;
            strcpy(records[size].name, name);
            strcpy(records[size].surname, surname);
            strcpy(records[size].gender, gender);
            records[size].smoking = smoking;
            strcpy(records[size].cancer, cancer);
            size++;
        }
    }
    fclose(file);
    return size;
}
void displayData(Data  *records,int numRecords)
{
    int i;
    printf("\nID  Name  Surname  Gender  Smoking  Lung_Cancer\n");
    for(i=0;i<numRecords;i++)
    {
        printf("%d   %s   %s   %s   %d   %s",records[i].id,records[i].name,records[i].surname,records[i].gender,records[i].smoking
        ,records[i].cancer);
        printf("\n");
    }
}
void statData(Data *records, int numRecords)
{
    int i,j;
    int cancer=0,no_cancer=0,male=0,female=0;
    for(i=0;i<numRecords;i++)
    {
       for(j=0;j<numRecords;j++)
       {
           if(records[i].gender[j]=='M')
           {
               male++;
           }
           if(records[i].gender[j]=='F')
           {
               female++;
           }
           if(records[i].cancer[j]=='Y')
           {
               cancer++;
           }
           if(records[i].cancer[j]=='N')
           {
               no_cancer++;
           }
       }

    }
    printf("\n%d patients with cancer and %d patients without cancer",cancer,no_cancer);
    printf("\n%d Male patients and %d Female patients",male,female);
}
void splitData(Data *records,int numPatients)
{
    int i,j;
    FILE *cancer,*non_cancer;
    for(i=0;i<numPatients;i++)
    {
      for(j=0;j<numPatients;j++)
      {
          if(records[i].cancer[j]=='Y') {

              cancer = fopen("cancer.txt", "w");
              fprintf(cancer,"%d %s %s %s %d %s",records[i].id,records[i].name,records[i].surname,records[i].gender
                      ,records[i].smoking,records[i].cancer);

          }
      }
        for(j=0;j<numPatients;j++)
        {
            if(records[i].cancer[j]=='N') {

                non_cancer = fopen("non_cancer.txt", "w");
                fprintf(cancer,"%d %s %s %s %d %s",records[i].id,records[i].name,records[i].surname,records[i].gender
                        ,records[i].smoking,records[i].cancer);

            }
        }
    }
    printf("\nTwo files are created for you: cancer.txt and noncancer.txt! ");
}
int main(int argc,char *argv[]) {
    if(argc!=3)
    {
        printf("\nYou need to have at least two parameters,bye.....");
        return 0;
    }
    char *filename=argv[1];
    char *size=argv[2];
    int N;
    N= atoi(size);

    int numPatients;
    Data *records=(Data *) malloc(N*sizeof(Data));
    numPatients= populateData(filename,records,N);
    displayData(records,numPatients);
    statData(records,numPatients);
    splitData(records,numPatients);
}
