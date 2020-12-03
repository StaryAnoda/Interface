#include "stm32l443xx.h"

#include <stdlib.h>
#include "timer_interface.h"
#include "timer.h"
 
static struct timer_interface timer_device = 
{
	timer_init,
	timer_start,
	timer_subscribe_ovf_irq,
};
 
int main (void)
{
	periodic_task_init(&timer_device);
	
	while(1)
	{
	}
	return EXIT_SUCCESS;
}