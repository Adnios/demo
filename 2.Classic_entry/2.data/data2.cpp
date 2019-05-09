//
// Created by adnois on 19-4-28.
//
/**
题目描述:
We now use the Gregorian style of dating in Russia. The leap years are years
with number divisible by 4 but not divisible by 100, or divisible by 400.
For example, years 2004, 2180 and 2400 are leap. Years 2004, 2181 and 2300 are not
leap.
Your task is to write a program which will compute the day of week
corresponding to a given date in the nearest past or in the future using today’sagreement about dating.
输入:
There is one single line contains the day number d, month name M and year
number y(1000≤y≤3000). The month name is the corresponding English name
starting from the capital letter.
输出:
Output a single line with the English name of the day of week corresponding to
the date, starting from the capital letter. All other letters must be in lower case.
样例输入:
9 October 2001
14 October 2001
样例输出:
Tuesday
Sunday*/
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
#define ISLEAP(x) x % 100 != 0 && x % 4 == 0 || x % 400 == 0 ? 1 : 0
// 定义宏判断是否是闰年,方便计算每月天数
int dayOfMonth[13][2] = {
        0,0,
        31,31,
        28,29,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31
}; //预存每月的天数,注意二月配合宏定义作特殊处理
struct Date { //日期类,方便日期的推移
    int Day;
    int Month;
    int Year;
    void nextDay() { //计算下一天的日期
        Day ++;
        if (Day > dayOfMonth[Month][ ISLEAP(Year) ]) { //若日数超过了当月最大日数
            Day = 1;
            Month ++; //进入下一月
            if (Month > 12) { //月数超过12
                Month = 1;
                Year ++;//进入下一年
            }
        }
    }
};
int buf[3001][13][32]; //保存预处理的天数
char monthName[13][20]={
        " ",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
};
char weekName[7][20]={
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
};
int Abs(int x) { //求绝对值
    return x < 0 ? -x : x;
}
int main(){
    Date tmp;
    int cnt=0;
    tmp.Day=1;
    tmp.Month=1;
    tmp.Year=0;
    while(tmp.Year!=3001){
        buf[tmp.Year][tmp.Month][tmp.Day]=cnt;
        tmp.nextDay();
        cnt++;
    }
    int d,m,y;
    char s[20];
    while(scanf("%d%s%d",&d,s,&y)!=EOF){
        for(m=1;m<=12;m++){
            if(strcmp(s,monthName[m])==0){
                break;
            }
        }
        int days=buf[y][m][d]-buf[2012][7][16];
        days+=1;
        puts(weekName[(days%7+7)%7]);
    }
    return 0;
}
