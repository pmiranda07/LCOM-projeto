#ifndef __TIMER_H
#define __TIMER_H

#include <minix/syslib.h>
#include <minix/drivers.h>
#include "i8254.h"

/**
 * @brief Subscribes and enables Timer 0 interrupts
 *
 * @return Returns bit order in interrupt mask; negative value on failure
 */
int timer_subscribe_int(void );

/**
 * @brief Unsubscribes Timer 0 interrupts
 *
 * @return Return 0 upon success and non-zero otherwise
 */
int timer_unsubscribe_int();

#endif /* __TIMER_H */
