// This program loads football team data from a file, displays it,
// calculates average points, counts how many teams played 33 or 34 games,
// and lists teams with 3 consecutive wins based on recent form.

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct teams//defining the structure
{
    int played;
    int points;
    char name[20];
    char form[6];
};
typedef struct teams *team;
team load_data(char*,int*);
void display_data(team,int *);
void process_data(team,int *,char*);
int main(int argc,char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    int size;
    team teams = load_data(argv[1], &size);
    display_data(teams, &size);
    process_data(teams, &size, argv[1]);
    free(teams);
    return 0;
}
team load_data(char *file,int *size)//load_data function
{
    FILE *infile;
    int length = 0,i=0;
    char c;
    team team_info;
    infile=fopen(file,"r");
    if(infile==NULL)//checking if the file is empty or not.
    {
        printf("A problem occured when processing the file");
        exit(1);
    }
    while((c=fgetc(infile))!=EOF)//reading until the end of the file
    {
        if(c=='\n')
        {
            length++;//calculating the length of the file
        }
    }
    rewind(infile);
    *size=length;
    team_info=(team)malloc(sizeof(struct teams)*length);//dynamically allocating the array
    for(i=0;i<*size;i++)//loop to assign values to the elements of the structure
    {
        fscanf(infile,"%d %d %s %s",&team_info[i].played,&team_info[i].points,team_info[i].name,team_info[i].form);
    }
    fclose(infile);//closing the file
    return team_info;//returning the array of structure
}
void display_data(team team_info,int *size)//function to display data
{
    int i=0;
    printf("Your data is successfully processed and looks as follows:");
    printf("Team\tPlayed\tPoints\tForm\n");
    for(i=0;i<*size;i++)//printing the contents of the array of structure
    {
        printf("%s\t%d\t%d\t%s\n",team_info[i].name,team_info[i].played,team_info[i].points,team_info[i].form);
    }
}
void process_data(team teams_info,int *size,char * file)//function to process data
{
    int i;
    float avg_points=0, total=0;
    for(i=0;i<*size;i++)
    {
        total=total+teams_info[i].points;//calculating the total number of points
    }
    avg_points=(total)/(*size);//calculating the average points
    printf("\nAverage points:%f",avg_points);
    int j;
    int games_played;
    int check33=0;
    int check34=0;
    for(j=0;j<*size;j++)
    {
        games_played=teams_info[j].played;
        if(games_played==33)//checking if the team played 33 games
        {
            check33++;
        }
        if(games_played==34)//checking if the team played 34 games
        {
            check34++;
        }
    }
    printf("\n%d teams played 33 games and %d teams played 34 games",check33,check34);
    int k;
    int num_of_wins;
    printf("\nThese teams have three consecutive wins: ");
    for(k=0;k<*size;k++)
    {
        if(strstr(teams_info[k].form, "WWW") != NULL)//checking for wins
        {
            printf("\n%s",teams_info[k].name);//name of the team will be printed
        }
    }
}
