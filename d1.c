									 #include<lpc214x.h>
									   int j,k;
									 void delay(int i)
									 {
									 	for(j=0;j<i;j++);
											for(k=0;k<1000;k++);
									 }
									 
									 int main()
									 {
									  IO0DIR=1<<4;
									  IO0CLR=1<<4;
									  while(1)
									  {
									  		delay(1000);
											IO0SET=1<<4;
											delay(1000);
											IO0CLR=1<<4;
									 }
									 }