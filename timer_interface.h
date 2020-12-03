#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H
 
typedef void (*ovf_callback_t) (void);

typedef void (*init_fun_t)(void);
typedef void (*start_fun_t)(void);
typedef void (*subscribe_ovf_fun_t)(ovf_callback_t ovf_cb);

struct timer_interface
{
	init_fun_t init;
	start_fun_t start;
	subscribe_ovf_fun_t subscribe_ovf;
};

void periodic_task_init(struct timer_interface *t);

#endif