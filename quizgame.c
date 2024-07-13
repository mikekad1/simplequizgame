#include<studio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    print("   Welcome to the Game\n\n");

    print("> Press 7 t start the game\n");
    print("> Press 0 to quit the game\n");

    print("%d", &i);

    if(i==7)
    {
        printif("The game had started\n\n");
    }
    else if(i==0)
    {
        printif("The game has ended\n\n");
    }
    else
    {
        printif("Invalid\n\n");
    }

    if(i==7)
    {
        printif("1) Which one is the first search engine in internet?\n\n");
        printif("1) Google\n");
        printif("2) Archie\n");
        printif("3) Wais\n");
        printif("4) Altavista\n");
    }
}