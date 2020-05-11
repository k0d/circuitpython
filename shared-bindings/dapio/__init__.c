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

#include "py/obj.h"
#include "py/runtime.h"

#include "shared-bindings/dapio/__init__.h"

//| :mod:`dapio` --- TODO(mark)
//| ================================================================
//|
//| .. module:: dapio
//|   :synopsis: TODO(mark)
//|

//| .. function:: info(array)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_info(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_info();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_info_obj, dapio_info);

//| .. function:: host_status(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_host_status(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_host_status();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_host_status_obj, dapio_host_status);

//| .. function:: connect(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_connect(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_connect();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_connect_obj, dapio_connect);

//| .. function:: disconnect(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_disconnect(void) {
    uint32_t size = shared_module_dapio_disconnect();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_disconnect_obj, dapio_disconnect);

//| .. function:: write_abort(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_write_abort(void) {
    uint32_t size = shared_module_dapio_write_abort();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_write_abort_obj, dapio_write_abort);

//| .. function:: delay(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_delay(void) {
    uint32_t size = shared_module_dapio_delay();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_delay_obj, dapio_delay);

//| .. function:: reset_target(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_reset_target(void) {
    uint32_t size = shared_module_dapio_reset_target();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_reset_target_obj, dapio_reset_target);

//| .. function:: swj_pins(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swj_pins(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_swj_pins();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_swj_pins_obj, dapio_swj_pins);

//| .. function:: swj_clock(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swj_clock(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_swj_clock();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_swj_clock_obj, dapio_swj_clock);

//| .. function:: swj_sequence(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swj_sequence(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_swj_sequence();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_swj_sequence_obj, dapio_swj_sequence);

//| .. function:: swd_configure(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swd_configure(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_swd_configure();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_swd_configure_obj, dapio_swd_configure);

//| .. function:: swd_sequence(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swd_sequence(void) {
    uint32_t size = shared_module_dapio_swd_sequence();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swd_sequence_obj, dapio_swd_sequence);

//| .. function:: swo_transport(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_transport(void) {
    uint32_t size = shared_module_dapio_swo_transport();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_transport_obj, dapio_swo_transport);

//| .. function:: swo_mode(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_mode(void) {
    uint32_t size = shared_module_dapio_swo_mode();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_mode_obj, dapio_swo_mode);

//| .. function:: swo_baudrate(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_baudrate(void) {
    uint32_t size = shared_module_dapio_swo_baudrate();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_baudrate_obj, dapio_swo_baudrate);

//| .. function:: swo_control(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_control(void) {
    uint32_t size = shared_module_dapio_swo_control();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_control_obj, dapio_swo_control);

//| .. function:: swo_status(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_status(void) {
    uint32_t size = shared_module_dapio_swo_status();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_status_obj, dapio_swo_status);

//| .. function:: swo_extended_status(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_extended_status(void) {
    uint32_t size = shared_module_dapio_swo_extended_status();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_extended_status_obj, dapio_swo_extended_status);

//| .. function:: swo_data(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_swo_data(void) {
    uint32_t size = shared_module_dapio_swo_data();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_swo_data_obj, dapio_swo_data);

//| .. function:: jtag_sequence(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_jtag_sequence(void) {
    uint32_t size = shared_module_dapio_jtag_sequence();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_jtag_sequence_obj, dapio_jtag_sequence);

//| .. function:: jtag_configure(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_jtag_configure(void) {
    uint32_t size = shared_module_dapio_jtag_configure();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_jtag_configure_obj, dapio_jtag_configure);

//| .. function:: jtag_idcode(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_jtag_idcode(void) {
    uint32_t size = shared_module_dapio_jtag_idcode();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_jtag_idcode_obj, dapio_jtag_idcode);

//| .. function:: transfer_configure(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_transfer_configure(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_transfer_configure();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_transfer_configure_obj, dapio_transfer_configure);

//| .. function:: transfer(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_transfer(mp_obj_t foo) {
    uint32_t size = shared_module_dapio_transfer();
    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(dapio_transfer_obj, dapio_transfer);

//| .. function:: transfer_block(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_transfer_block(void) {
    uint32_t size = shared_module_dapio_transfer_block();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_transfer_block_obj, dapio_transfer_block);

//| .. function:: transfer_abort(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_transfer_abort(void) {
    uint32_t size = shared_module_dapio_transfer_abort();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_transfer_abort_obj, dapio_transfer_abort);

//| .. function:: execute_commands(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_execute_commands(void) {
    uint32_t size = shared_module_dapio_execute_commands();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_execute_commands_obj, dapio_execute_commands);

//| .. function:: queue_commands(object)
//|
//|   TODO(mark)
//|
STATIC mp_obj_t dapio_queue_commands(void) {
    uint32_t size = shared_module_dapio_queue_commands();
    mp_raise_NotImplementedError(translate("Function not implemented yet"));

    return MP_OBJ_NEW_SMALL_INT(size);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(dapio_queue_commands_obj, dapio_queue_commands);

STATIC const mp_rom_map_elem_t dapio_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_dapio) },
    { MP_ROM_QSTR(MP_QSTR_info), MP_ROM_PTR(&dapio_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_host_status), MP_ROM_PTR(&dapio_host_status_obj) },
    { MP_ROM_QSTR(MP_QSTR_connect), MP_ROM_PTR(&dapio_connect_obj) },
    { MP_ROM_QSTR(MP_QSTR_disconnect), MP_ROM_PTR(&dapio_disconnect_obj) },
    { MP_ROM_QSTR(MP_QSTR_write_abort), MP_ROM_PTR(&dapio_write_abort_obj) },
    { MP_ROM_QSTR(MP_QSTR_delay), MP_ROM_PTR(&dapio_delay_obj) },
    { MP_ROM_QSTR(MP_QSTR_reset_target), MP_ROM_PTR(&dapio_reset_target_obj) },
    { MP_ROM_QSTR(MP_QSTR_swj_pins), MP_ROM_PTR(&dapio_swj_pins_obj) },
    { MP_ROM_QSTR(MP_QSTR_swj_clock), MP_ROM_PTR(&dapio_swj_clock_obj) },
    { MP_ROM_QSTR(MP_QSTR_swj_sequence), MP_ROM_PTR(&dapio_swj_sequence_obj) },
    { MP_ROM_QSTR(MP_QSTR_swd_configure), MP_ROM_PTR(&dapio_swd_configure_obj) },
    { MP_ROM_QSTR(MP_QSTR_swd_sequence), MP_ROM_PTR(&dapio_swd_sequence_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_transport), MP_ROM_PTR(&dapio_swo_transport_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_mode), MP_ROM_PTR(&dapio_swo_mode_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_baudrate), MP_ROM_PTR(&dapio_swo_baudrate_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_control), MP_ROM_PTR(&dapio_swo_control_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_status), MP_ROM_PTR(&dapio_swo_status_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_extended_status), MP_ROM_PTR(&dapio_swo_extended_status_obj) },
    { MP_ROM_QSTR(MP_QSTR_swo_data), MP_ROM_PTR(&dapio_swo_data_obj) },
    { MP_ROM_QSTR(MP_QSTR_jtag_sequence), MP_ROM_PTR(&dapio_jtag_sequence_obj) },
    { MP_ROM_QSTR(MP_QSTR_jtag_configure), MP_ROM_PTR(&dapio_jtag_configure_obj) },
    { MP_ROM_QSTR(MP_QSTR_jtag_idcode), MP_ROM_PTR(&dapio_jtag_idcode_obj) },
    { MP_ROM_QSTR(MP_QSTR_transfer_configure), MP_ROM_PTR(&dapio_transfer_configure_obj) },
    { MP_ROM_QSTR(MP_QSTR_transfer), MP_ROM_PTR(&dapio_transfer_obj) },
    { MP_ROM_QSTR(MP_QSTR_transfer_block), MP_ROM_PTR(&dapio_transfer_block_obj) },
    { MP_ROM_QSTR(MP_QSTR_transfer_abort), MP_ROM_PTR(&dapio_transfer_abort_obj) },
    { MP_ROM_QSTR(MP_QSTR_execute_commands), MP_ROM_PTR(&dapio_execute_commands_obj) },
    { MP_ROM_QSTR(MP_QSTR_queue_commands), MP_ROM_PTR(&dapio_queue_commands_obj) },
};
STATIC MP_DEFINE_CONST_DICT(dapio_module_globals, dapio_module_globals_table);

const mp_obj_module_t dapio_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&dapio_module_globals,
};
