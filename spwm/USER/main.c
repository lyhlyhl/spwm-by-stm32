#include "led.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
//ALIENTEK Mini STM32开发板范例代码8
//PWM输出实验   
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司

u16 freq = 12800, Period = 0;                       //PWM????????;??????
__IO float Period_percent; 
 int main(void)
 {	
	delay_init();	    	 //延时函数初始化	  
	LED_Init();		  	//初始化与LED连接的硬件接口
    
   Period_percent = ((SystemCoreClock / freq) - 1) / 65530.0;
	TIM1_PWM_Init(12800,0);//不分频。PWM频率=72000/(899+1)=80Khz 
   TIM2_Int_Init(12800,0);
    
   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);    
    
   while(1)
	{
         ;
	} 
}


