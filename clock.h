#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include<windows.h>
/*void format_time(int t[]){
    time_t rawtime;
    struct tm * current;

    time ( &rawtime );
    current = localtime ( &rawtime );

    //sprintf(output, "[%d %d %d %d:%d:%d]",timeinfo->tm_mday, timeinfo->tm_mon + 1, timeinfo->tm_year + 1900, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
    t[2]=current->tm_sec;


}*/
void format_time(int t[])
{
    SYSTEMTIME lt;
    GetLocalTime(&lt);
    t[2]=lt.wSecond;
}
void displaySecond(int t[])
{
    int digit[2];
    int x=t[2];
    digit[0]=x%10;
    switch(digit[0])
{
case '0':
    light36();
    light37();
    light38();
    light40();
    light41();
    light42();
    break;
case '1':
    light41();
    light38();
    break;
case '2':
    light36();
    light37();
    light39();
    light41();
    light42();
    break;
case '3':
    light36();
    light38();
    light39();
    light41();
    light42();
    break;
case '4':
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case '5':
    light36();
    light38();
    light39();
    light40();
    light42();
    break;
case '6':
    light36();
    light37();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case '7':
    light38();
    light41();
    light42();
    break;
case '8':
    light36();
    light37();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case '9':
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
case '0':
    light29();
    light30();
    light31();
    light33();
    light34();
    light35();
    break;
case '1':
    light31();
    light34();
    break;
case '2':
    light32();
    light30();
    light29();
    light34();
    light35();
    break;
case '3':
    light29();
    light31();
    light32();
    light34();
    light35();
    break;
case '4':
    light31();
    light32();
    light33();
    light34();
    light35();
    break;
case '5':
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

/*switch()
{
case '0':
    light36();
    light37();
    light38();
    light40();
    light41();
    light42();
    break;
case '1':
    light41();
    light38();
    break;
case '2':
    light36();
    light37();
    light39();
    light41();
    light42();
    break;
case '3':
    light36();
    light38();
    light39();
    light41();
    light42();
    break;
case '4':
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case '5':
    light36();
    light38();
    light39();
    light40();
    light42();
    break;
case '6':
    light36();
    light37();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case '7':
    light38();
    light41();
    light42();
    break;
case '8':
    light36();
    light37();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
case '9':
    light36();
    light38();
    light39();
    light40();
    light41();
    light42();
    break;
}
switch()
{
case '0':
    light29();
    light30();
    light31();
    light33();
    light34();
    light35();
    break;
case '1':
    light31();
    light34();
    break;
case '2':
    light32();
    light30();
    light29();
    light34();
    light35();
    break;
case '3':
    light29();
    light31();
    light32();
    light34();
    light35();
    break;
case '4':
    light31();
    light32();
    light33();
    light34();
    light35();
    break;
case '5':
    light29();
    light31();
    light32();
    light33();
    light45();
    break;
default :
    light29();
    light30();
    light31();
    light33();
    light34();
    light35();
    break;
}*/
#endif // CLOCK_H_INCLUDED
