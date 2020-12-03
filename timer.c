#include "timer_interface.h"
#include "timer.h"

#include <stdio.h>
#include <stdint.h>

static ovf_callback_t ovf_callback = NULL;

void timer_init(void)
{
 
}

void timer_start(void)
{
 
}

void timer_subscribe_ovf_irq(ovf_callback_t ovf_cb)
{
	ovf_callback = ovf_cb;
}

uint8_t timer_is_overflow(void)
{
	return 0;
}

void timer_irq(void)
{
	if(timer_is_overflow())
	{
		ovf_callback();
	}
}

