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

#include <stdint.h>

#include "py/bc.h"
#include "py/binary.h"
#include "py/gc.h"
#include "py/obj.h"
#include "py/objarray.h"
#include "py/objfun.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/objtype.h"
#include "py/runtime.h"

#include "shared-bindings/dapio/__init__.h"

uint32_t shared_module_dapio_info(void) {
        return 42;
}

uint32_t shared_module_dapio_host_status(void) {
        return 42;
}

uint32_t shared_module_dapio_connect(void) {
        return 42;
}

uint32_t shared_module_dapio_disconnect(void) {
        return 42;
}

uint32_t shared_module_dapio_write_abort(void) {
        return 42;
}

uint32_t shared_module_dapio_delay(void) {
        return 42;
}

uint32_t shared_module_dapio_reset_target(void) {
        return 42;
}

uint32_t shared_module_dapio_swj_pins(void) {
        return 42;
}

uint32_t shared_module_dapio_swj_clock(void) {
        return 42;
}

uint32_t shared_module_dapio_swj_sequence(void) {
        return 42;
}

uint32_t shared_module_dapio_swd_configure(void) {
        return 42;
}

uint32_t shared_module_dapio_swd_sequence(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_transport(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_mode(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_baudrate(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_control(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_status(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_extended_status(void) {
        return 42;
}

uint32_t shared_module_dapio_swo_data(void) {
        return 42;
}

uint32_t shared_module_dapio_jtag_sequence(void) {
        return 42;
}

uint32_t shared_module_dapio_jtag_configure(void) {
        return 42;
}

uint32_t shared_module_dapio_jtag_idcode(void) {
        return 42;
}

uint32_t shared_module_dapio_transfer_configure(void) {
        return 42;
}

uint32_t shared_module_dapio_transfer(void) {
        return 42;
}

uint32_t shared_module_dapio_transfer_block(void) {
        return 42;
}

uint32_t shared_module_dapio_transfer_abort(void) {
        return 42;
}

uint32_t shared_module_dapio_execute_commands(void) {
        return 42;
}

uint32_t shared_module_dapio_queue_commands(void) {
        return 42;
}
