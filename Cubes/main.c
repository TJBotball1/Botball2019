#include <kipr/botball.h>
int claw(double d, int c){ //c = 1 for close and -1 for open
	int t = d;
    motor(0, c*100);
    msleep(t);
    ao();
    return 0;
}
int turn(double d, int r){ //r = 1 for right and -1 for left
   	int t = d*50.0/9.0;
	motor(2,r*100);
    motor(3,r*100);
    msleep(t);
    ao();
    return 0;
}
int straight(double in,int f){ //f = 1 for forward and -1 for backward
    int t = in*1000.0/8.0
    motor(2, f*-100);
    motor(3, f*100);
    msleep(t);
    ao();
    return 0;
}
int main()
{
   straight(1000,1);
   //turn(90);
   return 0;
}
