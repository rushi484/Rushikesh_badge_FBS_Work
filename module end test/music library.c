#include <stdio.h>

struct Song
{
    int songID;
    char title[50];
    char artist[50];
    float duration;
};

struct Song songs[100];
int count = 0;

void addSong()
{
    printf("\nEnter Song ID: ");
    scanf("%d", &songs[count].songID);

    printf("Enter Song Title: ");
    scanf(" %[^\n]", songs[count].title);

    printf("Enter Artist Name: ");
    scanf(" %[^\n]", songs[count].artist);

    printf("Enter Duration in minutes: ");
    scanf("%f", &songs[count].duration);

    count++;

    printf("\nSong added successfully!\n");
}

void displaySongs()
{
    int i;

    if(count == 0)
    {
        printf("\nNo songs in the library.\n");
        return;
    }

    printf("\n----- Music Library -----\n");

    for(i = 0; i < count; i++)
    {
        printf("\nSong ID   : %d", songs[i].songID);
        printf("\nTitle     : %s", songs[i].title);
        printf("\nArtist    : %s", songs[i].artist);
        printf("\nDuration  : %.2f minutes\n", songs[i].duration);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n\n===== MUSIC LIBRARY =====");
        printf("\n1. Add Song");
        printf("\n2. Display Songs");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addSong();
                break;

            case 2:
                displaySongs();
                break;

            case 3:
                printf("\nExiting program...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 3);

    return 0;
}