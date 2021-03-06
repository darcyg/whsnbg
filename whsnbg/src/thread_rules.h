/*
* Copyright (c) 2013-2014 Vladimir Alemasov
* All rights reserved
*
* This program and the accompanying materials are distributed under 
* the terms of GNU General Public License version 2 
* as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

#ifndef __THREAD_RULES_H__
#define __THREAD_RULES_H__

#include "rules.h"

void thread_rules_start(void);
void thread_rules_stop(void);
void thread_rules_add_node(uint16_t id, rf_type_t type, void *param);
void thread_rules_remove_all(void);

#endif /* __THREAD_RULES_H__ */
