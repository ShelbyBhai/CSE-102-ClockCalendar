# include "iGraphics.h"
# include  "display.h"
//#include "clock.h"
#include<windows.h>
int x,y,r;
int sec,minute,hour;
/*
	function iDraw() is called again and again by the system.

	*/
	void displaySecond(int t)
{
    int digit[2];
    int x=t;
    digit[0]=x%10;
    switch(digit[0])
{
case 0:
    light36();
    light37();
    light38();
    light40();
    light41();
    light42();
    break;
case 1:
    light41();
    light38();
    break;
case 2:
    light36();
    light37();
    light39();
    light41();
    light42();
    break;
case 3:
    light36();
    light38();
    light39();
    light41();
    light42();
    break;
case 4:
    light38();
    light39();
    light40();
    light41();

    break;
case 5:
    light36();
    light38();
    light39();
    light40();
    light42();
    break;
case 6:
    light36();
    light37();
    light38();
    light39();
    light40();
    light42();
    break;
case 7:
    light38();
    light41();
    light42();
    break;
case 8:
    light36();
    light37();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case 9:
    light36();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
}
    digit[1]=x/10;
    switch(digit[1])
{
case 0:
    light29();
    light30();
    light31();
    light33();
    light34();
    light35();
    break;
case 1:
    light31();
    light34();
    break;
case 2:
    light32();
    light30();
    light29();
    light34();
    light35();
    break;
case 3:
    light29();
    light31();
    light32();
    light34();
    light35();
    break;
case 4:
    light31();
    light32();
    light33();
    light34();

    break;
case 5:
    light29();
    light31();
    light32();
    light33();
    light35();
    break;
default :
    light29();
    light30();
    light31();
    light33();
    light34();
    light35();
    break;
}

}

void displaymin(int t)
{
    int digit[2];
    int x=t;
    digit[0]=x%10;
    switch(digit[0])
{
case 0:
    light22();
    light23();
    light24();
    light26();
    light27();
    light28();
    break;
case 1:
    light27();
    light24();
    break;
case 2:
    light22();
    light23();
    light25();
    light27();
    light28();
    break;
case 3:
    light22();
    light24();
    light25();
    light27();
    light28();
    break;
case 4:
    light24();
    light25();
    light26();
    light27();

    break;
case 5:
    light22();
    light24();
    light25();
    light26();
    light28();
    break;
case 6:
    light22();
    light23();
    light24();
    light25();
    light26();
    light28();
    break;
case 7:
    light24();
    light27();
    light28();
    break;
case 8:
    light22();
    light23();
    light24();
    light25();
    light26();
    light27();
    light28();
    break;
case 9:
    light22();
    light24();
    light25();
    light26();
    light27();
    light28();
    break;
}
    digit[1]=x/10;
    switch(digit[1])
{
case 0:
    light15();
    light16();
    light17();
    light19();
    light20();
    light21();
    break;
case 1:
    light20();
    light17();
    break;
case 2:
    light15();
    light16();
    light18();
    light20();
    light21();
    break;
case 3:
    light15();
    light17();
    light18();
    light20();
    light21();
    break;
case 4:
    light17();
    light18();
    light19();
    light20();

    break;
case 5:
    light15();
    light17();
    light18();
    light19();
    light21();
    break;
default :
    light15();
    light16();
    light17();
    light19();
    light20();
    light21();
    break;
}

}
void displayhour(int t)
{
    int digit[2];
    int x=t;
    digit[0]=x%10;
    switch(digit[0])
{
case 0:
    light9();
    light10();
    light8();
    light13();
    light12();
    light14();
    break;
case 1:
    light13();
    light10();
    break;
case 2:
    light14();
    light13();
    light11();
    light9();
    light8();
    break;
case 3:
    light13();
    light14();
    light10();
    light11();
    light8();
    break;
case 4:
    light10();
    light11();
    light12();
    light13();

    break;
case 5:
    light10();
    light11();
    light12();
    light14();
    light8();
    break;
case 6:
    light8();
    light9();
    light10();
    light11();
    light12();
    light14();
    break;
case 7:
    light10();
    light13();
    light14();
    break;
case 8:
    light8();
    light9();
    light10();
    light11();
    light12();
    light13();
    light14();
    break;
case 9:
    light8();
    light10();
    light11();
    light12();
    light13();
    light14();
    break;
}
    digit[1]=x/10;
    switch(digit[1])
{
case 0:
    light1();
    light2();
    light3();
    light5();
    light6();
    light7();
    break;
case 1:
    light3();
    light6();
    break;
}

}

int format_time()
{
    int temp;
    SYSTEMTIME lt;
    GetLocalTime(&lt);
    sec= lt.wSecond;
    minute= lt.wMinute;
    temp= lt.wHour;
    if(temp==12 || temp==24) hour=12;
    else hour=temp%12;

}

char str[100], str2[100],str3[100];
int len;
int mode;
int l;
char a[2]={'0','1'};
int month=6,year=1980;
int day,d,e;
int flag=0,flag2=1;
int len2=0,len3=0;



void drawTextBox()
{
	iSetColor(150, 150, 150);
	iRectangle(1050, 600, 250, 30);
	iRectangle(1050,550,250,30);
}
int leapyear(int y)
    {
        if(y%400 == 0||((y%100!=0) && (y%4== 0)))
        {
            return 1;
        }
        else return 0;
    }
int gET_dAy(int m,int y)
    {
        int h;
        int q=1;
        if(m==1)
        {
            m=13;
            y=y-1;
        }
        if(m==2)
        {
            m=14;
            y=y-1;
        }
        h=(q+(26*(m+1)/10)+y+(y/4)+6*(y/100)+(y/400))%7;
        flag=1;
        return h;

    }




void iDraw() {
	//place your drawing codes here



	iClear();
	iSetColor(245,163,7);
    iText(50,600,"TASNIM DOHA",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(50,580,"1605108",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(50,560,"CSE 2016,BUET",GLUT_BITMAP_TIMES_ROMAN_24);
    iCircle(135,571,96);
    iSetColor(255,0,0);
    iText(365,580,"OFFLINE ASSIGNMENT FOR B2",GLUT_BITMAP_HELVETICA_18);
    iSetColor(128,0,255);
    iLine(360,577,645,577);
    iSetColor(255,255,128);
	iText(370,500,"CLOCK AND CALENDER",GLUT_BITMAP_HELVETICA_18);
	iRectangle(360,490,250,40);
	iSetColor(128,0,128);
	iText(400,400,"DIGITAL CLOCK",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,128,255);
	iText(1100,50,"CALENDER",GLUT_BITMAP_TIMES_ROMAN_24);
	iRectangle(1095,40,150,40);
	iRectangle(70,75,870,280);
	iSetColor(241, 253, 17);
	 iFilledCircle(361,173,2);
	 iFilledCircle(361,273,2);
	 iFilledCircle(644,173,2);
	 iFilledCircle(644,273,2);


    format_time();
    iSetColor(252,32,7);
    displaySecond(sec);
    iSetColor(122,218,245);
    displaymin(minute);
    iSetColor(36,57,251);
    displayhour(hour);


    iSetColor(67,243,75);
    iRectangle(950,100,385,385);
    iLine(950,155,1335,155);
    iLine(950,210,1335,210);
    iLine(950,265,1335,265);
    iLine(950,320,1335,320);
    iLine(950,375,1335,375);
    iLine(950,430,1335,430);
    iLine(950,485,1335,485);
    iLine(1005,100,1005,485);
    iLine(1060,100,1060,485);
    iLine(1115,100,1115,485);
    iLine(1170,100,1170,485);
    iLine(1225,100,1225,485);
    iLine(1280,100,1280,485);
    iText(963.75,457.5,"SAT",GLUT_BITMAP_HELVETICA_12);
    iText(1018.55,457.5,"SUN",GLUT_BITMAP_HELVETICA_12);
    iText(1073.55,457.5,"MON",GLUT_BITMAP_HELVETICA_12);
    iText(1128.55,457.5,"TUE",GLUT_BITMAP_HELVETICA_12);
    iText(1183.55,457.5,"WED",GLUT_BITMAP_HELVETICA_12);
    iText(1238.55,457.5,"THRS",GLUT_BITMAP_HELVETICA_12);
    iText(1293.55,457.5,"FRI",GLUT_BITMAP_HELVETICA_12);


	drawTextBox();
	if(mode == 1)
	{
		iSetColor(129,254,166);
		iText(1100, 610, str,GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if(mode ==2)
    {
        iSetColor(255,216,81);
        iText(1100,560,str,GLUT_BITMAP_TIMES_ROMAN_24);
    }iSetColor(128,255,0);
    iText(1000, 650, "Click to activate the box, enter to finish.");
    iSetColor(129,254,166);
	iText(770,610,"Enter your desired Month(1-12):",GLUT_BITMAP_HELVETICA_18);
	iSetColor(255,216,81);
	iText(1000,560,"Year:",GLUT_BITMAP_HELVETICA_18);


    iSetColor(129,254,166);
    iText(950,525,str2,GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(255,216,81);
    iText(1050,525,str3,GLUT_BITMAP_TIMES_ROMAN_24);

    if(len2==2&&str2[0]!='-'){
     month=(str2[0]-48)*10+str2[1]-48;

    }
    else if(len2==1) month=str2[0]-48;

    if(len3==4)
    {
        year=(str3[0]-48)*1000+(str3[1]-48)*100+(str3[2]-48)*10+str3[3]-48;
    }
    if(len3==3)
    {
        year=(str3[0]-48)*100+(str3[1]-48)*10+(str3[2]-48);
    }
    if(len3==2)
    {
        year=(str3[0]-48)*10+str3[1]-48;
    }
    if(len3==1)
    {
        year=str3[0]-48;
    }
    flag2=1;
 if(len2!=0&&len3!=0)
    {
    if(month>12|| str3[0]=='-'|| str2[0]=='-'||month<1||year<1)
    {
        iText(960,500,"PLEASE BE SMART AND GIVE VALID INPUTS!!");
        flag2=0;
        flag=0;
    }
    }
    if(len2!=0&&len3!=0&&flag2)
    day=gET_dAy(month,year);

    int i,d=965+day*55,e=405;
    if(flag){ for(i=1;i<=31;i++)
    {
        if(i<9)
        {
            a[0]='0';
        }
        if(i>9)
        {
            a[0]='1';
        }
        if(i>19)
        {
            a[0]='2';
        }
        if(i>29)
        {
            a[0]='3';
            a[1]='0'+i-30;
        }
        if(i<10)
        {
            a[1]='0'+i;
        }
        if(i>9&&i<20)
        {
            a[1]='0'+i-10;
        }
        if(i>19&&i<30)
        {
            a[1]='0'+i-20;
        }
        iSetColor(202,0,202);
        iText(d,e,a,GLUT_BITMAP_TIMES_ROMAN_24);
        d=d+55;

        if(d>1295)
        {
            d=965;
            e=e-55;
        }
        l=leapyear(year);
        if(i>28&&l==1 && month==2)
        {
            break;
        }
        if(i>27&&l==0 && month ==2)
        {
            break;
        }
        if(i>29 && (month==4 || month==6||month==8||month==9||month==11))
        {
            break;
        }
    }



    }
    }


	//iFilledCircle(x, y, r);
	//iFilledRectangle(10, 30, 20, 20);
	//iSetColor(20, 200, 0);
	//iText(40, 40, "Hi, I am iGraphics");


/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(mx >= 1050 && mx <= 1300 && my >= 600 && my <= 630 && mode == 0)
		{
			mode = 1;
			len2=0;

		}
		if(mx>=1050 && mx<=1300 && my>=550 && my<=580 && mode == 0)
        {
            mode =2;
            len3=0;
        }
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	int i;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str2, str);
			len2=len;
			printf("%s\n", str2);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
		}
		else
		{
			str[len] = key;
			len++;
		}
	}

	if(mode == 2)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str3, str);
			len3=len;
			printf("%s\n", str3);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
		}
		else
		{

			str[len] = key;
			len++;
		}
	}


	if(key == 'x')
	{
		//do something with 'x'
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	format_time();
	printf("%d",sec);
    len = 0;
	mode = 0;
	str[0]= 0;
	iInitialize(1350, 670, "calender & clock");
	return 0;
}
