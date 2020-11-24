/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2010-2018 Intel Corporation
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

#include <rte_alarm.h>
#include <rte_cycles.h>
#include <rte_common.h>
#include <rte_errno.h>
#include <rte_interrupts.h>
#include <rte_spinlock.h>
#include <rte_eal_trace.h>

#include "eal_private.h"


int eal_alarm_get_timeout_ns(uint64_t *val);


int
rte_eal_alarm_init(void)
{
    // HACK - not implemented
	return 0;
}


int
eal_alarm_get_timeout_ns(uint64_t *val)
{
	UNREFERENCED_PARAMETER(val);

    // HACK - not implemented
	return 0;
}


int
rte_eal_alarm_set(uint64_t us, rte_eal_alarm_callback cb_fn, void *cb_arg)
{
	UNREFERENCED_PARAMETER(us);
	UNREFERENCED_PARAMETER(cb_fn);
	UNREFERENCED_PARAMETER(cb_arg);

    // HACK - not implemented
	return 0;
}

int
rte_eal_alarm_cancel(rte_eal_alarm_callback cb_fn, void *cb_arg)
{
	UNREFERENCED_PARAMETER(cb_fn);
	UNREFERENCED_PARAMETER(cb_arg);

    // HACK - not implemented
	return 0;
}
