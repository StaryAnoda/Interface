#ifndef TIMER__H
#define TIMER__H
 
void timer_init(void);
void timer_start(void);
void timer_subscribe_ovf_irq(ovf_callback_t ovf_cb);
 
#endif 