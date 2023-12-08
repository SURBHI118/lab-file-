#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int health_data(){
    int ch;

    printf("\n1.to Store Health Data\n");
	printf("\n2.to Check Health Data\n");

    printf("\nEnter Your Choice Here: ");
    scanf("%d",&ch);

    if(ch==1){
        FILE* hfile = fopen("health_data.csv", "a");

        int age,bp,pr;
        char name[50],gender,city[10];

        if (!hfile)
        {
            printf("\n****Can't open file****\n"); // for file opening Error
        }

        // Asking user input
        printf("\nEnter your full Name: ");
        scanf(" %49[^\n]", &name);
        printf("\nEnter your age:");
        scanf("%d", &age);
        printf("\nEnter your gender(M/F): ");
        scanf(" %c", &gender);
        printf("\nEnter the Name of city: ");
        scanf("%s", &city);
        printf("\nEnter your BP: ");
        scanf("%d", &bp);
        printf("\nEnter your Pluse rate: ");
        scanf("%d", &pr);
        printf("\n\n%s %d %c %s %d %d",name,age,gender,city,bp,pr);

        char ch;
        printf("\nEnter Y/N to continue..");
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y'){
            //Saving data in CSV file
            fprintf(hfile, "%s %d %c %s %d %d",name,age,gender,city,bp,pr);
            printf("\nNew Account added to record");
            fclose(hfile);
        }
        else if(ch=='N'||ch=='n'){
            printf("Stopping");
        }
        return 0;
    }

    else if(ch==2){
        int bp,pr,ecg;
        printf("\nEnter your BP:");
        scanf("%d", &bp);
        printf("\nEnter your Pluse rate:");
        scanf("%d", &pr);
        printf("\nEnter your ECG (in MS):");
        scanf("%d", &ecg);

        if (bp<80 || bp>120)
        {
            printf("\n\n***********************************Your Blood Pressure is not normal check in to your nearest hospital***********************************\n\n");
        }
        else
        {
            printf("\nYour Blood Pressure is normal.\n");
        }

        if(pr<65 || pr>75)
        {
            printf("\n\n***********************************Your Pulse Rate is not normal check in to your nearest hospital***********************************\n\n");
        }
        else
        {
            printf("\nYour Pulse Rate is normal.\n");
        }

        if (ecg<120 || ecg>200)
        {
            printf("\n\n***********************************Your ECG is not normal check in to your nearest hospital***********************************\n\n");
            for(int i=0;i<=10;i++)
            {
                Beep(600,550);
            }
        }
        else
        {
            printf("\nYour ECG is normal.\n");
        }
    }

    else {
        printf("\n\n***please select correct options from given***\n\n");
        health_data();
    }
}

int disasters_rec(){
    int ch;

    printf("\n1.To ENTER House Fire Data\n");
	printf("\n2.To ENTER Flood Data\n");
    printf("\n3.To ENTER Earthquake Data\n");

    printf("\nEnter Your Choice Here: ");
    scanf("%d",&ch);

    if(ch==1){
        struct datetime {
            int day;
            int month;
            int year;
            int hour;
            int minute;
            };

        FILE* hfile = fopen("flood_data.csv", "a");

        float level;
        struct datetime dt;
        char name[50],add[50],city[10];

        if (!hfile)
        {
            printf("\n****Can't open file****\n"); // for file opening Error
        }
        // Asking user input
        printf("\nEnter your Name: ");
        scanf(" %49[^\n]*c", &name);
        printf("\nEnter the Name of city: ");
        scanf("%s", &city);
        printf("\nEnter time of fire (hh:mm):");
        scanf("%d:%d", &dt.hour, &dt.minute);
        printf("\nEnter date of fire (dd-mm-yyyy):");
        scanf("%d-%d-%d", &dt.day, &dt.month, &dt.year);
        printf("\nEnter your Address: ");
        scanf(" %100[^\n]*c", &add);
        printf("\n\n%s %s %d:%d %02d-%02d-%04d %s",name,city,dt.hour,dt.minute,dt.day,dt.month,dt.year,add);

        char ch;
        printf("\nEnter Y/N to continue..");
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y'){
            //Saving data in CSV file
            fprintf(hfile, "%s %s %d:%d %02d-%02d-%04d %s",name,city,dt.hour,dt.minute,dt.day,dt.month,dt.year,add);
            printf("\nNew Account added to record");
            fclose(hfile);
        }

        else if(ch=='N'||ch=='n'){
            printf("Stopping");
        }
        return 0;
    }

    else if(ch==2){
        struct datetime{
            int day;
            int month;
            int year;
            };
        FILE* hfile = fopen("flood_data.csv", "a");

        float level;
        struct datetime dt;
        char name[50],add[50],city[10];

        if (!hfile)
        {
            printf("\n****Can't open file****\n"); // for file opening Error
        }
        // Asking user input
        printf("\nEnter your Name: ");
        scanf(" %49[^\n]*c", &name);
        printf("\nEnter the Name of city: ");
        scanf("%s", &city);
        printf("\nEnter Water level(in cm): ");
        scanf("%f", &level);
        printf("\nEnter date (dd-mm-yyyy):");
        scanf("%d-%d-%d", &dt.day, &dt.month, &dt.year);
        printf("\nEnter your Address: ");
        scanf(" %100[^\n]*c", &add);
        printf("\n\n%s %s %.2f %02d-%02d-%04d %s",name,city,level,dt.day,dt.month,dt.year,add);

        if(level>=250){
            printf("\n\n***********************************Water level is high near your Household please find nearest highest place and contact to emergency services***********************************\n\n");
            for(int i = 0; i < 10; i++){
                Beep(600,500);
            }
        }
        else{
            printf("\nWater level is normal near your Household.\n");
        }

        char ch;
        printf("\nEnter Y/N to continue..");
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y'){
            //Saving data in CSV file
            fprintf(hfile, "%s,%s,%.2f,%02d-%02d-%04d,%s\n",name,city,level,dt.day,dt.month,dt.year,add);
            printf("\nNew Account added to record");
            fclose(hfile);
        }

        else if(ch=='N'||ch=='n'){
            printf("Stopping");
        }
        return 0;
    }

    else if(ch==3){
        struct datetime {
            int day;
            int month;
            int year;
            int hour;
            int minute;
        };
        FILE* hfile = fopen("earthquake_data.csv", "a");

        float scale;
        char city[10];

        struct datetime dt; // Declare a variable of the struct type
        if (!hfile)
        {
            printf("\n****Can't open file****\n"); // for file opening Error
        }

        // Asking user input
        printf("\nEnter the Name of city:");
        scanf("%s", city);
        printf("\nEnter date (dd-mm-yyyy):");
        scanf("%d-%d-%d", &dt.day, &dt.month, &dt.year);
        printf("\nEnter time (hh:mm):");
        scanf("%d:%d", &dt.hour, &dt.minute);
        printf("\nEnter scale:");
        scanf("%f", &scale);
        printf("\n\n%s %02d-%02d-%04d %02d:%02d %.2f",city,dt.day,dt.month,dt.year,dt.hour,dt.minute,scale);

        char ch;
        printf("\nEnter Y/N to continue..");
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y'){
            //Saving data in CSV file
            fprintf(hfile, "%s, %02d-%02d-%04d, %02d:%02d, %.2f\n",city,dt.day,dt.month,dt.year,dt.hour,dt.minute,scale);
            printf("\nNew Account added to record");
            fclose(hfile);
        }

        else if(ch=='N'||ch=='n'){
            printf("Stopping");
        }
        return 0;
    }
}

int main(){

    int ch;
    printf("\n\n\t\t\t\t\t\t:: Welcome Disaster Management System ::\n\n");

    printf("\n1.Health Sensor Data\n");
	printf("\n2.Disaster data\n");
    printf("\n3.For real time disaster update\n");
    printf("\n4.Government of India advisory on disaster precautions\n");
    printf("\n5.EXIT\n");

    printf("\nEnter Your Choice Here: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        health_data();
    }
    else if(ch==2)
    {
        disasters_rec();
    }
    else if(ch==3)
    {
        printf("\n\n\n\nOpening link...............\n\n\n");
        system("start https://sachet.ndma.gov.in/");
        return 0;
    }
    else if(ch==4)
    {
        printf("\n\n\n\nOpening link...............\n\n\n");
        system("start https://ndma.gov.in/");
        return 0;
    }
    else if(ch==5)
    {
        printf("Stopping........");
        exit(0);
    }
    else
    {
        printf("***please select correct options from given***");
        main();
    }
}
