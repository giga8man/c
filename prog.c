#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define mxchar 73
#define  lnum 21/* Max Line Numbers*/



char ** strlins  ;/* all text store here */
int k=0;int j=0;/*Using in Iteration */
int lineCounter=1/* Store Number of lines work as counter*/;
int saveF=1;/* Save Saving state of file*/
int lineState[lnum]={0}/* position stats to save end of lines*/;
char ch ;/* store char from user*/
int charPtr=0;/* number of cur char in a line*/
int linePtr=0;/* number of cur line */
int sel=1,tapF=0;int bgc;txtc;
FILE *file;/* Pointer To File In Memory*/
HANDLE hConsole;/* Like A pointer To Output Console Used in Colors And etc..*/
char filePath[300];/* Store File Path */
COORD coordinate = {0,0}; /* initialization x y To use in Gotoxy Fun*/

void setBGC()
        {
            int index;int flage=1;
            while(flage)
            {
        scanf("%d",&index);
        switch(index)
            {

         case 1:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 2:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 3:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }

        case 4:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 5:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 6:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 7:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 8:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 9:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 10:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 11:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 12:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 13:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 14:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 15:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 16:
                {
                bgc=(index-1)*16;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }

            }
            }

        }
void helpInBGC(int index)
        {
            SetConsoleTextAttribute(hConsole,0x07);
            printf("%d- ",(index/16)+1);
            switch(index)
            {

         case 0x00:
                {
                printf("Black \t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x10:
                {
                printf("Blue  \t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x20:
                {
                printf("Green \t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }

        case 0x30:
                {
                printf("Aqua  \t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x40:
                {
                printf("Red   \t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x50:
                {
                printf("Purple\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x60:
                {
                printf("Yellow\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x70:
                {
                printf("White\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x80:
                {
                printf("Gray  \t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0x90:
                {
                printf("LBlue\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0xa0:
                {
                printf("LGreen\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0xb0:
                {
                printf("LAqua\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0xc0:
                {
                printf("LRed\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0xd0:
                {
                printf("LPurple\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0xe0:
                {
                printf("LYellow\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }
        case 0xf0:
                {
                printf("LWhite\t\t");
                SetConsoleTextAttribute(hConsole,(index)+0x7);
                printf("Just Sample Text\n");
                break;
                }



            }

        }
void setTxTC()
        {
            int index;int flage=1;
            while(flage)
            {
        scanf("%d",&index);
        switch(index)
            {

         case 1:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 2:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 3:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }

        case 4:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 5:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 6:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 7:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 8:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 9:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 10:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 11:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 12:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 13:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 14:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 15:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }
        case 16:
                {
                txtc=index-1;
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                flage=0;
                break;
                }

            }
            }

        }
void helpInFC(int index)
        {
            SetConsoleTextAttribute(hConsole,0x07);
            printf("%d- ",index+1);
            switch(index)
            {

         case 0x0:
                {
                printf("Black \t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x1:
                {
                printf("Blue  \t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x2:
                {
                printf("Green \t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }

        case 0x3:
                {
                printf("Aqua  \t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x4:
                {
                printf("Red   \t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x5:
                {
                printf("Purple\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x6:
                {
                printf("Yellow\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x7:
                {
                printf("White\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x8:
                {
                printf("Gray  \t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0x9:
                {
                printf("LBlue\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0xa:
                {
                printf("LGreen\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0xb:
                {
                printf("LAqua\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0xc:
                {
                printf("LRed\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0xd:
                {
                printf("LPurple\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0xe:
                {
                printf("LYellow\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }
        case 0xf:
                {
                printf("LWhite\t\t");
                SetConsoleTextAttribute(hConsole,0x00+(index));
                printf("Just Sample Text\n");
                break;
                }



            }

        }
void selectColor()
        {
            char temp;int flage=1;

            printf("1- Set Text-Color\n2- Set Text-Background-Color\n3- Back\n");
            while(flage)
            {
                temp=getchar();
                switch(temp)
                {

                case '1':
                    {
                        for(k=0x0;k<=0xf;k+=0x1)
                            {
                                helpInFC(k);
                            }
                            setTxTC();
                            SetConsoleTextAttribute(hConsole,0x07);
                            system("cls");
                            printf("\t\t\t\t\t");
                            SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                            printf("Your Text Style Now Like Me\n");
                            SetConsoleTextAttribute(hConsole,0x07);
                            printf("1- Set Text-Color\n2- Set Text-Background-Color\n3- Back\n");

                        break;
                    }
                case '2':
                    {
                        for(k=0x00;k<=0xf0;k+=0x10)
                            {
                                helpInBGC(k);
                            }
                        SetConsoleTextAttribute(hConsole,0x07);
                        setBGC();
                        SetConsoleTextAttribute(hConsole,0x07);
                        system("cls");
                        printf("\t\t\t\t\t");
                        SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                        printf("Your Text Style Now Like Me\n");
                        SetConsoleTextAttribute(hConsole,0x07);
                        printf("1- Set Text-Color\n2- Set Text-Background-Color\n3- Back\n");
                        break;
                    }
                case '3':
                    {
                        printall();
                        flage=0;
                        break;
                    }
                default:
                    {


                    }

                }
            }


        }
void paint(int i)
    {
        write_txt_in_mu();
      switch(i)
      {
      case 1:
        {
            gotoxy(2,1);
            bluconsole();
            printf("New");
            blackconsole();
            break;
        }
      case 2:
        {
             gotoxy(10,1);
             bluconsole();
             printf("Load");
             blackconsole();
             break;

        }
      case 3:
        {
             gotoxy(18,1);
             bluconsole();
             printf("Save");
             break;
        }
      case 4 :
        {
             gotoxy(26,1);
             bluconsole();
             printf("Print");
             blackconsole();
             break;
        }
      case 5 :
        {
             gotoxy(35,1);
             bluconsole();
             printf("ColorS");
             blackconsole();
             break;
        }
      case 6 :
        {
             gotoxy(45,1);
             bluconsole();
             printf("About");
             blackconsole();
             break;
        }
    case 7 :
        {
             gotoxy(53,1);
             bluconsole();
             printf("Exit");
             blackconsole();
             break;
        }

        }
    }

void action(int i)
    {
      switch(i)
    {
      case 1:
        {
            newfile();
            break;
        }
      case 2:
        {
            load();
            break;
        }
      case 3:
        {
            savefile();
            break;
        }
      case 4 :
        {
            system("cls");
            for(k=0;k<lineCounter;k++)
            {   gotoxy(0,k);
                if(lineCounter-1==k&&lineState[k]==0)
                {
                }
                else{
                        printf("%s",strlins[k]);
                    }

            }
            printf("\n=====================\nTo Back Plz Tap ");
            while(1){
            ch=getch();
            if(ch==9)
            {
                printall();
                paint(4);
                break;
            }
            }
        break;
        }
      case 5 :
        {
            system("cls");
            selectColor();
            paint(5);
            break;
        }
      case 6:
        {

            MessageBox(NULL,"Simple Text Editor in C\nWritten by :T0p~C0dEr\nContact Me :giga8man@gmail.com\n\n  ^_^     ITI - Assiut Intake 37    ^_^ ","About Me",MB_OK|MB_ICONINFORMATION|MB_TASKMODAL|MB_SETFOREGROUND);
            break;
        }

     case 7:
        {
            Exit();
            break;
        }

    }
}

void Exit()
    {
        if(!saveF)
                {
                    system("cls");
                    printf("Are You sure ? you do not save your work yet !  y/n ");
                    while(1)
                        {
                        ch=getch();
                        if(ch=='y'||ch=='Y')
                        {
                            system("cls");
                            exit(1);
                            break;
                            }
                        else if(ch=='n'||ch=='N')
                            {
                                printall();
                                tapF=0;
                                break;
                            }
                    }
                }
            else
                {
                    system("cls");
                    exit(1);
                }
    }
void initial()
    {
        charPtr=0;
        linePtr=0;
        lineCounter=1;
        for(k=0;k<lnum;k++)
            {
                strlins[k][0]=13;
                lineState[k]=0;
            }
        saveF=1;
        //filePath[0]=0;
    }
void printall()
    {

                blackconsole();
                system("cls");
                Draw();
                write_txt_in_mu();
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                gotoxy(6,3);
                for(k=0;k<lnum;k++)
                {
                    gotoxy(6,k+3);
                    printf("\t\t\t\t\t\t\t\t\t\t");

                }
                for(k=0;k<lineCounter;k++)
                {
                    gotoxy(6,k+3);
                    if(lineCounter-1==k&&lineState[k]==0)
                    {

                    }
                    else
                    {
                        printf("%s",strlins[k]);
                    }

                }
                gotoxy(charPtr+6,linePtr+3);

    }

void load()
    {
            int c;

              if(!saveF)
                {

                    system("cls");
                    printf("Are You sure ? you do not save your work yet !  y/n ");
                    while(1)
                        {
                        ch=getch();
                        if(ch=='y'||ch=='Y')
                        {
                            printf("\nPlz Enter full file Path like c:/folder/file.txt\n");
                            printf("!Note That Max lines Can Be Read Is 21 and Max Char 73 Is Per Line\n");
                            scanf("%s",filePath);
                            file = fopen(filePath, "r");
                             if (file)
                             {
                                 initial();
                                 j=0;k=0;lineCounter=0;
                                   while((c = getc(file)) != EOF&&j<lnum)
                                    {
                                        if(c==10)
                                            {
                                                lineState[j]=k;
                                                strlins[j][k]=0;
                                                lineCounter++;
                                                k=0;
                                                j++;
                                            }
                                       else if(k <mxchar)
                                       {
                                           lineState[j]++;
                                            strlins[j][k]=c;
                                            k++;
                                       }
                                    else
                                        {
                                            lineCounter++;
                                            lineState[j]=k-1;
                                            strlins[j][k]=0;
                                            k=0;j++;
                                        }
                                }
                                if(j<lnum)
                                    {
                                        strlins[j][k]=0;
                                    }
                                printall();
                               fclose(file);
                             }
                             else
                                {
                                    printf("\n!! Error in opening file ! check file path \npress any key to back......");
                                    getch();
                                     printall();
                                }
                            gotoxy(6,3);
                            break;

                        }
                        else if(ch=='N'||ch=='n')
                            {
                                printall();
                                break;
                            }
                    }

                }
                else{
                            system("cls");
                            printf("\nPlz Enter full file Path like c:/folder/file.txt\n");
                            printf("!Note That Max lines Can Be Read Is 21 and Max Char 73 Is Per Line\n");
                            scanf("%s",filePath);
                            file = fopen(filePath, "r");
                             if (file)
                             {
                                 initial();
                                 j=0;k=0;lineCounter=0;
                                   while((c = getc(file)) != EOF&&j<lnum)
                                    {
                                        if(c==10)
                                            {
                                                lineState[j]=k;
                                                strlins[j][k]=0;
                                                lineCounter++;
                                                k=0;
                                                j++;
                                            }
                                       else if(k < mxchar)
                                       {
                                           lineState[j]++;
                                            strlins[j][k]=c;
                                            k++;
                                       }
                                    else
                                        {
                                            lineCounter++;
                                            lineState[j]=k-1;
                                            strlins[j][k]=0;
                                            k=0;j++;
                                        }
                                }
                                if(j<lnum)
                                    {
                                        strlins[j][k]=0;
                                    }
                                printall();
                                fclose(file);
                             }
                            else
                                {
                                    printf("\n!! Error in opening file ! check file path \npress any key to back......");
                                    getch();
                                     printall();
                                }
                                fclose(file);
                        }
        tapF=1;
        paint(2);
    }

void newfile()
        {

            if(!saveF)
                {
                    system("cls");
                    printf("Are You sure ? you do not save your work yet !  y/n ");
                    while(1)
                        {
                        ch=getch();
                        if(ch=='y'||ch=='Y')
                        {
                            initial();
                            printall();
                            filePath[0]=0;
                            saveF=1;
                            break;

                            }
                        else if(ch=='n'||ch=='N')
                            {
                                printall();
                                break;
                            }
                    }
                }
            else
                {
                    initial();
                    printall();
                    filePath[0]=0;
                    saveF=1;
                }
        paint(1);
        tapF=1;
        }
void Draw(){
         SetConsoleTextAttribute(hConsole,0x0f);
            int i =0;int x=0;
            for(x=0;x<2;x++)
                {
                    for(i=0;i<80;i++)
                        {
                            printf("=");
                        }
                    if(x==0){printf("\n");}
                }
            for(x=0;x<1;x++)
                {
                    for(i=0;i<21;i++)
                        {
                            printf("| %d",i+1);
                            if(i<9)
                            {
                                printf("  |");
                            }
                            else{printf(" |");}
                            printf("\n");
                        }
                }
                for(i=0;i<80;i++)
                {
                    printf("=");
                }
                gotoxy(0,0);
                blackconsole();

        }
void write_txt_in_mu()
                    {

                        SetConsoleTextAttribute(hConsole,0x27);
                        gotoxy(0,1);
                        printf("  New\t  Load\t  Save\t  Print\t   ColorS    About   Exit\t\t\t");

                    }

void blackconsole()
        {
            SetConsoleTextAttribute(hConsole,0x07);
        }
void bluconsole()
        {
            SetConsoleTextAttribute(hConsole,0x9f);
        }


/* Gotoxy function is not supported in GCC compiler */
void gotoxy(int x, int y){ //function definition

   coordinate.X = x; coordinate.Y =  y;

   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);

}

void files()
    {
        printf("\nPlease Enter Full Path Like This c:\\folder\\file_name \nor type file name and saving  will be in the same APP's folder \n");
        scanf("%s",filePath);
        strcat(filePath,".txt");
        file = fopen( filePath, "w" );
        if(file)
        {
            for(j=0;j<lineCounter;j++)
            {
                fprintf(file,strlins[j]);
                fprintf(file,"\n");
            }
            printf("Saved ^_^ \nany key to back.....");
            getch();
            printall();
            fclose(file);
        }
        else
        {
            printf("\n!! Error in Saving file ! check file path \npress any key to back......");
            getch();
            printall();
        }

    }
void savefile()
        {
            char c;
            blackconsole();
            system("cls");
            printf("1- Save\n2- Save as\n3- Back\nplease Enter 1 , 2 or 3\n");
            while(c!='3'&&c!='2'&&c!='1')
            {
                c=getch();
                if(c=='3')
                {
                    printall();
                }
                else if(c=='1')
                {
                if(filePath[0]!=0)
                {
                    file = fopen( filePath, "w" );
                    if(file)
                    {
                            for(j=0;j<lineCounter;j++)
                            {
                                fprintf(file,strlins[j]);
                                fprintf(file,"\n");
                            }
                            fclose(file);
                            printf("Saved ^_^ \nany key to back.....");
                            getch();

                        printall();

                    }
                    else
                    {
                        printf("\n!! Error in Saving file ! check file path \npress any key to back......");
                        getch();
                        printall();
                    }
                }
                    else
                    {
                        printf("File Not Found You Must Save File Before\nTo Save press Enter To Cancel Press c");
                        while(c!='c'&&c!=13)
                        {
                            c=getch();
                            if(c==13)
                                {
                                    files();
                                }
                            else if(c=='c')
                            {
                                printall();
                            }
                        }
                    }
                    c='1';
                }
                else if(c=='2')
                {
                    files();
                    c='1';
                }
            }
        paint(3);
        tapF=1;
        }
int main()
{
COORD dwSize={80,300};
bgc=0x00;txtc=0x7;
int i=0,x=0;/* use in loop */
int flage=0;/* To decrease flash screen if not use every char clrscr() and then loop to print all text cause flashing*/

/* set Console title With win32 APIs*/
SetConsoleTitleA("Simple Text Editor");


hConsole=GetStdHandle(-11);
SetConsoleScreenBufferSize(hConsole,dwSize);
Draw();

write_txt_in_mu();

/* allocate size in memory for lineS*/
strlins= malloc(lnum*sizeof(char *));

/* allocate size in memory for chars per line  */
    for(i=0;i<lnum;i++){
        strlins[i]=(char *)malloc(mxchar*sizeof(char));
        }

/* first writable place*/
    gotoxy(6,3);

/* Entering data from user*/
    while(1)
        {
        SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
       // SetConsoleTextAttribute(hConsole,0x16);
        /* get char form user */
        ch= getch();


        tapF=0;/* set tap key with zero*/

        /* Check if extends key or not */
        if(ch<1)
        {
            /* get next BYt form buffer as extends key= 2 byts */
            ch=getch();
            switch(ch)
            {
                //if Up Arrow
            case 72:
                {
                    if(linePtr>0)
                    {
                        --linePtr;
                        /* Save position of charPtr like notepad */
                        if(lineState[linePtr]>charPtr)
                        {
                            gotoxy(charPtr+6,linePtr+3);
                        }
                        else
                        {
                            gotoxy(lineState[linePtr]+6,linePtr+3);
                            charPtr=lineState[linePtr];
                        }

                    }
                    break;

                }//end



                // if Down Arrow
            case 80:
                {
                    if(linePtr<lineCounter-1)
                    {
                        linePtr++;
                         /* Save position of charPtr like notepad */
                        if(lineState[linePtr]>charPtr)
                        {
                            gotoxy(charPtr+6,linePtr+3);
                        }
                        else
                        {
                            gotoxy(lineState[linePtr]+6,linePtr+3);
                            charPtr=lineState[linePtr];
                        }
                    }
                    break;

                }//end



                //if Left Arrow
            case 75:
                {
                    if(charPtr>0)
                    {
                        gotoxy(--charPtr+6,linePtr+3);

                    }
                    break;
                }//end



                //if Right Arrow
            case 77:
                {
                    if(charPtr<lineState[linePtr])
                    {
                        gotoxy(++charPtr+6,linePtr+3);
                    }
                    break;

                }//end


            case 71:
                {
                    gotoxy(0+6,linePtr+3);charPtr=0;
                    break;
                }//Home


            case 79:
                {   gotoxy(lineState[linePtr]+6,linePtr+3);
                    charPtr=lineState[linePtr];
                    break;
                }//End


                //page Down
            case 81:
                {
                    charPtr=lineState[lineCounter-1];
                    linePtr=lineCounter-1;
                    gotoxy(charPtr+6,linePtr+3);
                    break;
                }

            //Page Up
            case 73:
                {
                    charPtr=0;
                    linePtr=0;
                    gotoxy(charPtr+6,linePtr+3);
                    break;

                }


            //del key
            case 83:
                {
                    if(charPtr<lineState[linePtr])
                    {
                        strcpy((char *)&strlins[linePtr][charPtr],(char *)&strlins[linePtr][charPtr+1]);
                        gotoxy(charPtr+6,linePtr+3);
                        printf("%s",(char *)&strlins[linePtr][charPtr]);
                        gotoxy(lineState[linePtr]+5,linePtr+3);printf(" ");
                        gotoxy(charPtr+6,linePtr+3);
                        lineState[linePtr]--;
                        saveF=0;

                    }
                    break;
                }
            /* F1 Key*/
            case 59:
                {
                    if(txtc<0xf)
                    {
                        txtc+=0x1;
                    }
                    else
                    {
                        txtc=0x0;
                    }
                SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                    printall();
                  break;
                }
            /* F2 Key*/
            case 60:
                {
                    if(bgc<0xff)
                    {
                        bgc+=0x10;
                    }
                    else
                    {
                        bgc=0x10;
                    }
                    SetConsoleTextAttribute(hConsole,(bgc)+(txtc));
                    printall();
                   break;
                }
            default :
                    {

                    }
            }//end Switch
        }

        //If Normal Key
        else
        {
            /* check normal keys if backspace or del and etc.. */
            switch(ch)
            {


            //backspace
            case 8:
                {

                    if(charPtr>0)
                    {
                        strcpy((char *)&strlins[linePtr][charPtr-1],(char *)&strlins[linePtr][charPtr]);
                        gotoxy(charPtr+5,linePtr+3);
                        printf("%s",(char *)&strlins[linePtr][charPtr-1]);
                        gotoxy(lineState[linePtr]+5,linePtr+3);printf(" ");
                        gotoxy(charPtr+5,linePtr+3);
                        charPtr--;
                        lineState[linePtr]--;
                        saveF=0;
                    }
                    break;

                }

                //Escape
            case 27:
                {

                    break;

                }


            // Enter key
            case 13:
                {
                    /* Check if new Line is in rang*/
                    if(lineCounter<lnum)
                        {
                            /* Check if Enter key was in end of line  and if their are line after it to shift lines after it */
                        if(charPtr<lineState[linePtr]||linePtr!=lineCounter-1)
                            {
                                /*  shifting strings in memory  */
                                for(i=lineCounter-1;i+1<lnum&&i>linePtr-1;i--)
                                {
                                    strcpy(strlins[i+1],strlins[i]);
                                    lineState[i+1]=lineState[i];
                                }
                                strcpy(strlins[linePtr+1],(char *)&strlins[linePtr][charPtr]);
                                strncpy(strlins[linePtr],strlins[linePtr],charPtr);
                                lineCounter++;
                                strlins[linePtr][charPtr]=0;

                                /* shifting strings in Console*/
                                for(i=linePtr;i<lineCounter+1;i++)
                                    {
                                        for(x=0;i+1<lnum&&x<lineState[i+1];x++)
                                        {
                                                gotoxy(6+x,i+3);
                                                printf(" ");
                                        }
                                    }


                                for(i=linePtr;i<lineCounter;i++)
                                {
                                   gotoxy(6,i+3);
                                   if(i==lineCounter-1&&lineState[i]==0)
                                    {
                                   }
                                   else{
                                   printf("%s",strlins[i]);}
                                }
                                lineState[linePtr+1]=strlen(strlins[linePtr+1]);
                                charPtr=0;
                                lineState[linePtr]=strlen(strlins[linePtr]);
                                linePtr++;
                                gotoxy(6,linePtr+3);
                                saveF=0;/*edit happened */


                            }
                        else{
                         strlins[linePtr][charPtr]=0;
                         linePtr++;
                         charPtr=0;
                         gotoxy(charPtr+6,linePtr+3);
                         lineCounter++;
                         saveF=0;
                         }
                        }
                        break;

                }

                /* Tap key to select any option*/
            case 9:
                    {
                        paint(sel);
                        tapF=1;
                        while(tapF)
                                {
                                    ch = getch();
                                    switch(ch)
                                                {
                                                    //if Right Arrow
                                                   case 77:
                                                        {
                                                             if(sel<7)
                                                            {
                                                                sel++;
                                                            }
                                                            paint(sel);
                                                            break;
                                                        }

                                                    //if Left Arrow
                                                   case 75:
                                                        {
                                                             if(sel>1)
                                                            {
                                                                sel--;
                                                            }
                                                            paint(sel);
                                                            break;
                                                        }
                                                    case 84:

                                                        {
                                                            gotoxy(2,1);
                                                            printf("New");
                                                            ch=getch();
                                                            if(ch==13)
                                                                {
                                                                    if(!saveF)
                                                                            {

                                                                                SetConsoleTextAttribute(hConsole, 0xf7);
                                                                                system("cls");
                                                                                printf("Are You sure you do not save your work yet y/n ");
                                                                                ch=getch();
                                                                                if(ch=='y')
                                                                                    {
                                                                                        system("cls");
                                                                                        gotoxy(0,0);
                                                                                        Draw();
                                                                                        write_txt_in_mu();
                                                                                        gotoxy(6,3);
                                                                                        tapF=0;


                                                                                    }
                                                                                else{savefile();}

                                                                            }

                                                                }
                                                            break;
                                                        }
                                                     /* Enter key */
                                                    case 13:
                                                        {
                                                            action(sel);

                                                            break;

                                                        }
                                                        /*Tap key */
                                                    case 9 :
                                                        {
                                                            write_txt_in_mu();
                                                            gotoxy(charPtr+6,linePtr+3);
                                                            tapF=0;
                                                            break;
                                                        }

                                                }
                                }
                                break;
                    }

              //if Normal Text

            default :
                {

                    if(charPtr==mxchar&&lineCounter<lnum)
                        {
                            strlins[linePtr][charPtr]=0;
                            linePtr++;
                            lineCounter++;
                            charPtr=0;
                            gotoxy(6,linePtr+3);
                           saveF=1;

                        }
                    // check if editing in line or last of line
                    if(charPtr!=lineState[linePtr])
                        {
                            strlins[linePtr][charPtr]=ch;
                            //strlins[linePtr][lineState[linePtr]]=0;
                            gotoxy(6+charPtr,3+linePtr);
                            printf("%c",ch);
                            charPtr++;
                             saveF=1;
                            }
                    else if(charPtr<mxchar)
                        {
                            printf("%c",ch);
                            strlins[linePtr][charPtr]=ch;
                            charPtr++;
                            strlins[linePtr][charPtr]=0;
                            lineState[linePtr]++;
                            saveF=0;
                        }






                break;
                }
            }//end Switch
        }

    }//end while






        return 0;
}

