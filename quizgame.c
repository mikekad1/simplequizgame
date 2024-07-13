#include<studio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    printf("   Welcome to the Game\n\n");

    printf("> Press 7 t start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if(i==7)
    {
        printf("The game had started\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }

    if(i==7)
    {
        printf("1) Which one is the first search engine in internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");

        printf("Enter Your Answer: ");
        scanf("%d",& ans1);
        if(ans1==2)
        {
            printf("Correct AAnswer\n");
            point1 = 5;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("Wrong Answer\n");
            point01 = 0;
            printf("You have scored %d point\n", point01);
        }

        printif("2) Which one is the first web browser invented in 1990?\n\n");
        printif("1) Internet Explorer\n");
        printif("2) Mosaic\n");
        printif("3) Mozilla\n");
        printif("4) Nexus\n");

        printif("Enter Your Answer : ");
        scanf("%d", &ans2);

        if(ans2==4)
        {
            printf("Correct Answer\n");
            point2 = 5
            printif("You have scored %d point\n", point2);
        }
        else
        {
            print("Wrong Answer\n");
            point02 = 0;
            printf("You have scored %d point\n", point02);
        }

        printif("3) First computer virus is known as?\n\n");
        printif("1) Rabbit\n");
        printif("2) Creeper Virus\n");
        printif("3) Elk Cloner\n");
        printif("4) SCA Virus\n");

        printif("Enter Your Answer : ");
        scanf("%d", &ans3);

        if(ans3==2)
        {
            printf("Correct Answer\n");
            point3 = 5
            printif("You have scored %d point\n", point3);
        }
        else
        {
            print("Wrong Answer\n");
            point03 = 0;
            printf("You have scored %d point\n", point03);
        }

        printif("4) Firewall in computer is used for?\n\n");
        printif("1) Security\n");
        printif("2) Data Transmission\n");
        printif("3) Monitoring\n");
        printif("4) Authentication\n");

        printif("Enter Your Answer : ");
        scanf("%d", &ans4);

        if(ans4==1)
        {
            printf("Correct Answer\n");
            point4 = 5
            printif("You have scored %d point\n", point4);
        }
        else
        {
            print("Wrong Answer\n");
            point04 = 0;
            printf("You have scored %d point\n", point04);
        }

        printif("5) Which of the following is not a database managmeent software?\n\n");
        printif("1) Mysql\n");
        printif("2) Oracle\n");
        printif("3) cobal\n");
        printif("4) Sybase\n");

        printif("Enter Your Answer : ");
        scanf("%d", &ans5);

        if(ans5==3)
        {
            printf("Correct Answer\n");
            point5 = 5
            printif("You have scored %d point\n", point5);
        }
        else
        {
            print("Wrong Answer\n");
            point05 = 0;
            printf("You have scored %d point\n", point05);
        }
    }
    return 0;
}