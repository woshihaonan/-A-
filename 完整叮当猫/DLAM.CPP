#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#define Width 640
#define Height 600
void drawhead();//画头
void drawbody();
void drawleg();
int main()
{
initgraph(Width,Height);
//设置背景颜色，颜色值可以是RGB颜色也可以是颜色名称，
setbkcolor(RGB(250,250,210));
cleardevice();
drawhead();
_getch();
//关闭画布
closegraph();
return 0;
}
void drawhead()
{//设置原点
 setorigin(Width/2,Height/2);
 //画头部轮廓，带圆角的矩形
 //设置填充颜色
 setfillcolor(BLUE);
 fillroundrect(-120,-200,120,0,220,300);
 //画脸
 setfillcolor(WHITE);
 fillellipse(-90,-130,90,-10);
 //画眼睛
 setcolor(BLACK);
 setfillcolor(WHITE);
 fillroundrect(-50,-160,-10,-100,30,50);
 fillroundrect(0,-160,40,-100,30,50);
 //画眼球
 setfillcolor(BLACK);
 fillcircle(-25,-110,5);
 fillcircle(20,-110,5);
 //画胡子
 setlinecolor(BLACK);
 line(-80,-100,-30,-80);
 line(-80,-70,-30,-70);
 line(-80,-40,-30,-60);

 line(80,-100,30,-80);
 line(80,-70,30,-70);
 line(80,-40,30,-60);
 //画人中
 setfillcolor(RED);
 fillcircle(-5,-100,13);
 line(-5,-89,-5,-40);
 //画嘴巴
 arc(-65,-77,57,-27,230,100);

 //画手臂
/*setcolor(BLACK);
line(-85,6,-120,15);
line(-85,20,-100,25);
*/ 
 //body
setfillcolor(BLUE);
fillrectangle(-85,-1,82,115);
//清空矩形区域
clearrectangle(-85,-1,82,35);
/*setfillcolor(BLUE);
  floodfill(-85,20,BLUE);
  floodfill(-85,20,WHITE);
  floodfill(-85,20,RED);
  floodfill(-85,20,YELLOW);
*/



  //身体
setfillcolor(WHITE);
fillcircle(-5,45,57);
setfillcolor(WHITE);
	clearcircle(0,40,65);
	line(-50,40,50,40);
	arc(-50,0,50,90,3.05,0.1);
	arc(-65,-25,65,105,-4,1);
 //画铃铛

setfillcolor(RED);
fillroundrect(-85,-13,82,3,170,5);
  setfillcolor(YELLOW);
 fillcircle(-5,3,11);
 setfillcolor(YELLOW);
 fillrectangle(-15,-1,7,1);
setfillcolor(BLACK);
 fillcircle(-5,5,2);
 setfillcolor(YELLOW);
  fillrectangle(-5,5,-4,5);
fillrectangle(-5,5,-4,15);
//arms
setlinecolor(BLACK);
line(-85,-1,-115 ,35);
line(-85,40,-100,50);
line(82,-1,112,35);
line(82,40,97,50);
setfillcolor(WHITE);
 fillcircle(-110, 50,18);
 fillcircle(107,50,18);
   fillcircle(-5,112,8);
   setfillcolor(BLUE);
floodfill(-86,30,BLACK);
floodfill(83,30,BLACK);
 //Leg
 setfillcolor(WHITE);
 fillroundrect(-95,112,-9,132,100,7);
 fillroundrect(-1,112,92,132,100,7);
 
}
