#include <stdio.h>

#include "timer_interface.h"

static struct timer_interface *timer = NULL;
static void periodic_task_runner(void);

void periodic_task_init(struct timer_interface *t)
{
	timer = t;
	timer -> init();
	timer -> subscribe_ovf(periodic_task_runner);
	timer -> start();
}
static void periodic_task_runner(void)
{
	
}