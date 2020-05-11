/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Mark Olsson <mark@markolsson.se>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_DAPIO___INIT___H
#define MICROPY_INCLUDED_SHARED_BINDINGS_DAPIO___INIT___H

#include "py/obj.h"

extern uint32_t shared_module_dapio_info(void);
extern uint32_t shared_module_dapio_host_status(void);
extern uint32_t shared_module_dapio_connect(void);
extern uint32_t shared_module_dapio_disconnect(void);
extern uint32_t shared_module_dapio_write_abort(void);
extern uint32_t shared_module_dapio_delay(void);
extern uint32_t shared_module_dapio_reset_target(void);
extern uint32_t shared_module_dapio_swj_pins(void);
extern uint32_t shared_module_dapio_swj_clock(void);
extern uint32_t shared_module_dapio_swj_sequence(void);
extern uint32_t shared_module_dapio_swd_configure(void);
extern uint32_t shared_module_dapio_swd_sequence(void);
extern uint32_t shared_module_dapio_swo_transport(void);
extern uint32_t shared_module_dapio_swo_mode(void);
extern uint32_t shared_module_dapio_swo_baudrate(void);
extern uint32_t shared_module_dapio_swo_control(void);
extern uint32_t shared_module_dapio_swo_status(void);
extern uint32_t shared_module_dapio_swo_extended_status(void);
extern uint32_t shared_module_dapio_swo_data(void);
extern uint32_t shared_module_dapio_jtag_sequence(void);
extern uint32_t shared_module_dapio_jtag_configure(void);
extern uint32_t shared_module_dapio_jtag_idcode(void);
extern uint32_t shared_module_dapio_transfer_configure(void);
extern uint32_t shared_module_dapio_transfer(void);
extern uint32_t shared_module_dapio_transfer_block(void);
extern uint32_t shared_module_dapio_transfer_abort(void);
extern uint32_t shared_module_dapio_execute_commands(void);
extern uint32_t shared_module_dapio_queue_commands(void);

#endif  // MICROPY_INCLUDED_SHARED_BINDINGS_DAPIO___INIT___H