#include<stdio.h>
#include<math.h>
int main()
{
float radi, dia, circ, area;
printf("Enter The Value Of Radius In cms radi");
scanf("%f",&radi);
dia=2*radi;
circ=2*M_PI*radi;
area=M_PI*pow(radi,2);
printf("The Diameter Of The Circle is %f cms\n",dia);
printf("The Circumference Of The Circle us %f cms\n",circ);
printf("The Area Of The Circle is %f sq. cms\n",area);
return 0;
}