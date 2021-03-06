/*
 * QEMU model of the PSSYSMON Registers for System 16nm Monitor
 *
 * Copyright (c) 2017-2020 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2020-01-13.
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register.h"
#include "qemu/bitops.h"
#include "qemu/log.h"
#include "migration/vmstate.h"

#ifndef XILINX_PSSYSMON_ERR_DEBUG
#define XILINX_PSSYSMON_ERR_DEBUG 0
#endif

#define TYPE_XILINX_PSSYSMON "xlnx,zynqmp_sysmon"

#define XILINX_PSSYSMON(obj) \
     OBJECT_CHECK(PSSYSMON, (obj), TYPE_XILINX_PSSYSMON)

REG32(TEMPERATURE, 0x0)
    FIELD(TEMPERATURE, TEMPERATURE, 0, 16)
REG32(SUPPLY1, 0x4)
    FIELD(SUPPLY1, SUPPLY_VAL, 0, 16)
REG32(SUPPLY2, 0x8)
    FIELD(SUPPLY2, SUPPLY_VAL, 0, 16)
REG32(SUPPLY3, 0x18)
    FIELD(SUPPLY3, SUPPLY_VAL, 0, 16)
REG32(SUPPLY4, 0x34)
    FIELD(SUPPLY4, SUPPLY_VAL, 0, 16)
REG32(SUPPLY5, 0x38)
    FIELD(SUPPLY5, SUPPLY_VAL, 0, 16)
REG32(SUPPLY6, 0x3c)
    FIELD(SUPPLY6, SUPPLY_VAL, 0, 16)
REG32(MAX_TEMPERATURE, 0x80)
    FIELD(MAX_TEMPERATURE, TEMPERATURE, 0, 16)
REG32(MAX_SUPPLY1, 0x84)
    FIELD(MAX_SUPPLY1, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY2, 0x88)
    FIELD(MAX_SUPPLY2, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY3, 0x8c)
    FIELD(MAX_SUPPLY3, SUPPLY_VAL, 0, 16)
REG32(MIN_TEMPERATURE, 0x90)
    FIELD(MIN_TEMPERATURE, TEMPERATURE, 0, 16)
REG32(MIN_SUPPLY1, 0x94)
    FIELD(MIN_SUPPLY1, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY2, 0x98)
    FIELD(MIN_SUPPLY2, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY3, 0x9c)
    FIELD(MIN_SUPPLY3, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY4, 0xa0)
    FIELD(MAX_SUPPLY4, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY5, 0xa4)
    FIELD(MAX_SUPPLY5, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY6, 0xa8)
    FIELD(MAX_SUPPLY6, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY4, 0xb0)
    FIELD(MIN_SUPPLY4, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY5, 0xb4)
    FIELD(MIN_SUPPLY5, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY6, 0xb8)
    FIELD(MIN_SUPPLY6, SUPPLY_VAL, 0, 16)
REG32(STATUS_FLAG, 0xfc)
    FIELD(STATUS_FLAG, CLK_OSC_USED, 15, 1)
    FIELD(STATUS_FLAG, BLOCK_IN_RESET, 14, 1)
    FIELD(STATUS_FLAG, JTAG_DISABLED, 11, 1)
    FIELD(STATUS_FLAG, JTAG_READ_ONLY, 10, 1)
    FIELD(STATUS_FLAG, INTERNAL_REF, 9, 1)
    FIELD(STATUS_FLAG, DISABLED, 8, 1)
    FIELD(STATUS_FLAG, ALM_6_3, 4, 4)
    FIELD(STATUS_FLAG, OT, 3, 1)
    FIELD(STATUS_FLAG, ALM_2_0, 0, 3)
REG32(CONFIG_REG0, 0x100)
    FIELD(CONFIG_REG0, AVERAGING, 12, 2)
    FIELD(CONFIG_REG0, EXTERNAL_MUX, 11, 1)
    FIELD(CONFIG_REG0, BU, 10, 1)
    FIELD(CONFIG_REG0, EC, 9, 1)
    FIELD(CONFIG_REG0, ACQ, 8, 1)
    FIELD(CONFIG_REG0, MUX_CHANNEL, 0, 6)
REG32(CONFIG_REG1, 0x104)
    FIELD(CONFIG_REG1, SEQUENCE_MODE, 12, 4)
    FIELD(CONFIG_REG1, ALARM_DISABLE6TO3, 8, 4)
    FIELD(CONFIG_REG1, ALARM_DISABLE2TO0, 1, 3)
    FIELD(CONFIG_REG1, OVER_TEMP_DISABLE, 0, 1)
REG32(CONFIG_REG2, 0x108)
    FIELD(CONFIG_REG2, CLOCK_DIVIDER, 8, 8)
    FIELD(CONFIG_REG2, POWER_DOWN, 4, 4)
    FIELD(CONFIG_REG2, TEST_CHANNEL_EN, 2, 1)
    FIELD(CONFIG_REG2, TEST_MODE, 0, 2)
REG32(CONFIG_REG3, 0x10c)
    FIELD(CONFIG_REG3, I2C_OVERRIDE_EN, 15, 1)
    FIELD(CONFIG_REG3, I2C_OVERRIDE_ADDR, 8, 7)
    FIELD(CONFIG_REG3, I2C_EN, 7, 1)
    FIELD(CONFIG_REG3, ALARM_DISABLE13TO8, 0, 6)
REG32(CONFIG_REG4, 0x110)
    FIELD(CONFIG_REG4, LOW_RATE_EOS, 10, 2)
    FIELD(CONFIG_REG4, SEQUENCE_RATE, 8, 2)
    FIELD(CONFIG_REG4, VUSER_ENABLE_HRANGE, 0, 4)
REG32(SEQ_CHANNEL2, 0x118)
    FIELD(SEQ_CHANNEL2, TEMPERATURE_REMOTE, 5, 1)
    FIELD(SEQ_CHANNEL2, VCCAMS, 4, 1)
    FIELD(SEQ_CHANNEL2, SUPPLY10, 3, 1)
    FIELD(SEQ_CHANNEL2, SUPPLY9, 2, 1)
    FIELD(SEQ_CHANNEL2, SUPPLY8, 1, 1)
    FIELD(SEQ_CHANNEL2, SUPPLY7, 0, 1)
REG32(SEQ_AVERAGE2, 0x11c)
    FIELD(SEQ_AVERAGE2, AVERAGE2, 0, 16)
REG32(SEQ_CHANNEL0, 0x120)
    FIELD(SEQ_CHANNEL0, CURRENT_MON, 15, 1)
    FIELD(SEQ_CHANNEL0, SUPPLY3, 14, 1)
    FIELD(SEQ_CHANNEL0, VREFN, 13, 1)
    FIELD(SEQ_CHANNEL0, VREFP, 12, 1)
    FIELD(SEQ_CHANNEL0, VP_VN, 11, 1)
    FIELD(SEQ_CHANNEL0, SUPPLY2, 10, 1)
    FIELD(SEQ_CHANNEL0, SUPPLY1, 9, 1)
    FIELD(SEQ_CHANNEL0, TEMPERATURE, 8, 1)
    FIELD(SEQ_CHANNEL0, SUPPLY6, 7, 1)
    FIELD(SEQ_CHANNEL0, SUPPLY5, 6, 1)
    FIELD(SEQ_CHANNEL0, SUPPLY4, 5, 1)
    FIELD(SEQ_CHANNEL0, TEST_CHANNEL, 3, 1)
    FIELD(SEQ_CHANNEL0, CALIBRATION, 0, 1)
REG32(SEQ_CHANNEL1, 0x124)
    FIELD(SEQ_CHANNEL1, VAUX0F, 15, 1)
    FIELD(SEQ_CHANNEL1, VAUX0E, 14, 1)
    FIELD(SEQ_CHANNEL1, VAUX0D, 13, 1)
    FIELD(SEQ_CHANNEL1, VAUX0C, 12, 1)
    FIELD(SEQ_CHANNEL1, VAUX0B, 11, 1)
    FIELD(SEQ_CHANNEL1, VAUX0A, 10, 1)
    FIELD(SEQ_CHANNEL1, VAUX09, 9, 1)
    FIELD(SEQ_CHANNEL1, VAUX08, 8, 1)
    FIELD(SEQ_CHANNEL1, VAUX07, 7, 1)
    FIELD(SEQ_CHANNEL1, VAUX06, 6, 1)
    FIELD(SEQ_CHANNEL1, VAUX05, 5, 1)
    FIELD(SEQ_CHANNEL1, VAUX04, 4, 1)
    FIELD(SEQ_CHANNEL1, VAUX03, 3, 1)
    FIELD(SEQ_CHANNEL1, VAUX02, 2, 1)
    FIELD(SEQ_CHANNEL1, VAUX01, 1, 1)
    FIELD(SEQ_CHANNEL1, VAUX00, 0, 1)
REG32(SEQ_AVERAGE0, 0x128)
    FIELD(SEQ_AVERAGE0, AVERAGE0, 0, 16)
REG32(SEQ_AVERAGE1, 0x12c)
    FIELD(SEQ_AVERAGE1, AVERAGE1, 0, 16)
REG32(SEQ_INPUT_MODE0, 0x130)
    FIELD(SEQ_INPUT_MODE0, INPUT_MODE0, 0, 16)
REG32(SEQ_INPUT_MODE1, 0x134)
    FIELD(SEQ_INPUT_MODE1, INPUT_MODE1, 0, 16)
REG32(SEQ_ACQ0, 0x138)
    FIELD(SEQ_ACQ0, ACQ0, 0, 16)
REG32(SEQ_ACQ1, 0x13c)
    FIELD(SEQ_ACQ1, ACQ1, 0, 16)
REG32(ALARM_TEMPERATURE_UPPER, 0x140)
    FIELD(ALARM_TEMPERATURE_UPPER, TEMPERATURE_ALARM, 0, 16)
REG32(ALARM_SUPPLY1_UPPER, 0x144)
    FIELD(ALARM_SUPPLY1_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY2_UPPER, 0x148)
    FIELD(ALARM_SUPPLY2_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_OT_UPPER, 0x14c)
    FIELD(ALARM_OT_UPPER, TEMPERATURE_ALARM, 0, 16)
REG32(ALARM_TEMPERATURE_LOWER, 0x150)
    FIELD(ALARM_TEMPERATURE_LOWER, TEMPERATURE_ALARM, 1, 15)
    FIELD(ALARM_TEMPERATURE_LOWER, THRESHOLD_MODE, 0, 1)
REG32(ALARM_SUPPLY1_LOWER, 0x154)
    FIELD(ALARM_SUPPLY1_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY2_LOWER, 0x158)
    FIELD(ALARM_SUPPLY2_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_OT_LOWER, 0x15c)
    FIELD(ALARM_OT_LOWER, TEMPERATURE_ALARM, 1, 15)
    FIELD(ALARM_OT_LOWER, THRESHOLD_MODE, 0, 1)
REG32(ALARM_SUPPLY3_UPPER, 0x160)
    FIELD(ALARM_SUPPLY3_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY4_UPPER, 0x164)
    FIELD(ALARM_SUPPLY4_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY5_UPPER, 0x168)
    FIELD(ALARM_SUPPLY5_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY6_UPPER, 0x16c)
    FIELD(ALARM_SUPPLY6_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY3_LOWER, 0x170)
    FIELD(ALARM_SUPPLY3_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY4_LOWER, 0x174)
    FIELD(ALARM_SUPPLY4_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY5_LOWER, 0x178)
    FIELD(ALARM_SUPPLY5_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY6_LOWER, 0x17c)
    FIELD(ALARM_SUPPLY6_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY7_UPPER, 0x180)
    FIELD(ALARM_SUPPLY7_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY8_UPPER, 0x184)
    FIELD(ALARM_SUPPLY8_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY9_UPPER, 0x188)
    FIELD(ALARM_SUPPLY9_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY10_UPPER, 0x18c)
    FIELD(ALARM_SUPPLY10_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_VCCAMS_UPPER, 0x190)
    FIELD(ALARM_VCCAMS_UPPER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_TREMOTE_UPPER, 0x194)
    FIELD(ALARM_TREMOTE_UPPER, TEMPERATURE_ALARM, 0, 16)
REG32(ALARM_SUPPLY7_LOWER, 0x1a0)
    FIELD(ALARM_SUPPLY7_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY8_LOWER, 0x1a4)
    FIELD(ALARM_SUPPLY8_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY9_LOWER, 0x1a8)
    FIELD(ALARM_SUPPLY9_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_SUPPLY10_LOWER, 0x1ac)
    FIELD(ALARM_SUPPLY10_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_VCCAMS_LOWER, 0x1b0)
    FIELD(ALARM_VCCAMS_LOWER, SUPPLY_ALARM, 0, 16)
REG32(ALARM_TREMOTE_LOWER, 0x1b4)
    FIELD(ALARM_TREMOTE_LOWER, TEMPERATURE_ALARM, 1, 15)
    FIELD(ALARM_TREMOTE_LOWER, THRESHOLD_MODE, 0, 1)
REG32(SEQ_INPUT_MODE2, 0x1e0)
    FIELD(SEQ_INPUT_MODE2, INPUT_MODE2, 0, 16)
REG32(SEQ_ACQ2, 0x1e4)
    FIELD(SEQ_ACQ2, ACQ2, 0, 16)
REG32(SUPPLY7, 0x200)
    FIELD(SUPPLY7, SUPPLY_VAL, 0, 16)
REG32(SUPPLY8, 0x204)
    FIELD(SUPPLY8, SUPPLY_VAL, 0, 16)
REG32(SUPPLY9, 0x208)
    FIELD(SUPPLY9, SUPPLY_VAL, 0, 16)
REG32(SUPPLY10, 0x20c)
    FIELD(SUPPLY10, SUPPLY_VAL, 0, 16)
REG32(VCCAMS, 0x210)
    FIELD(VCCAMS, SUPPLY_VAL, 0, 16)
REG32(TEMPERATURE_REMOTE, 0x214)
    FIELD(TEMPERATURE_REMOTE, TEMPERATURE, 0, 16)
REG32(MAX_SUPPLY7, 0x280)
    FIELD(MAX_SUPPLY7, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY8, 0x284)
    FIELD(MAX_SUPPLY8, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY9, 0x288)
    FIELD(MAX_SUPPLY9, SUPPLY_VAL, 0, 16)
REG32(MAX_SUPPLY10, 0x28c)
    FIELD(MAX_SUPPLY10, SUPPLY_VAL, 0, 16)
REG32(MAX_VCCAMS, 0x290)
    FIELD(MAX_VCCAMS, SUPPLY_VAL, 0, 16)
REG32(MAX_TEMPERATURE_REMOTE, 0x294)
    FIELD(MAX_TEMPERATURE_REMOTE, TEMPERATURE, 0, 16)
REG32(MIN_SUPPLY7, 0x2a0)
    FIELD(MIN_SUPPLY7, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY8, 0x2a4)
    FIELD(MIN_SUPPLY8, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY9, 0x2a8)
    FIELD(MIN_SUPPLY9, SUPPLY_VAL, 0, 16)
REG32(MIN_SUPPLY10, 0x2ac)
    FIELD(MIN_SUPPLY10, SUPPLY_VAL, 0, 16)
REG32(MIN_VCCAMS, 0x2b0)
    FIELD(MIN_VCCAMS, SUPPLY_VAL, 0, 16)
REG32(MIN_TEMPERATURE_REMOTE, 0x2b4)
    FIELD(MIN_TEMPERATURE_REMOTE, TEMPERATURE, 0, 16)

#define PSSYSMON_R_MAX (R_MIN_TEMPERATURE_REMOTE + 1)

typedef struct PSSYSMON {
    SysBusDevice parent_obj;
    MemoryRegion iomem;

    uint32_t regs[PSSYSMON_R_MAX];
    RegisterInfo regs_info[PSSYSMON_R_MAX];
} PSSYSMON;

static const RegisterAccessInfo pssysmon_regs_info[] = {
    {   .name = "TEMPERATURE",  .addr = A_TEMPERATURE,
        .ro = 0xffff,
    },{ .name = "SUPPLY1",  .addr = A_SUPPLY1,
        .ro = 0xffff,
    },{ .name = "SUPPLY2",  .addr = A_SUPPLY2,
        .ro = 0xffff,
    },{ .name = "SUPPLY3",  .addr = A_SUPPLY3,
        .ro = 0xffff,
    },{ .name = "SUPPLY4",  .addr = A_SUPPLY4,
        .ro = 0xffff,
    },{ .name = "SUPPLY5",  .addr = A_SUPPLY5,
        .ro = 0xffff,
    },{ .name = "SUPPLY6",  .addr = A_SUPPLY6,
        .ro = 0xffff,
    },{ .name = "MAX_TEMPERATURE",  .addr = A_MAX_TEMPERATURE,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY1",  .addr = A_MAX_SUPPLY1,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY2",  .addr = A_MAX_SUPPLY2,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY3",  .addr = A_MAX_SUPPLY3,
        .ro = 0xffff,
    },{ .name = "MIN_TEMPERATURE",  .addr = A_MIN_TEMPERATURE,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY1",  .addr = A_MIN_SUPPLY1,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY2",  .addr = A_MIN_SUPPLY2,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY3",  .addr = A_MIN_SUPPLY3,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY4",  .addr = A_MAX_SUPPLY4,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY5",  .addr = A_MAX_SUPPLY5,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY6",  .addr = A_MAX_SUPPLY6,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY4",  .addr = A_MIN_SUPPLY4,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY5",  .addr = A_MIN_SUPPLY5,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY6",  .addr = A_MIN_SUPPLY6,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "STATUS_FLAG",  .addr = A_STATUS_FLAG,
        .reset = 0xa00,
        .rsvd = 0x3000,
        .ro = 0xffff,
    },{ .name = "CONFIG_REG0",  .addr = A_CONFIG_REG0,
        .rsvd = 0xc0c0,
    },{ .name = "CONFIG_REG1",  .addr = A_CONFIG_REG1,
        .rsvd = 0xf0,
    },{ .name = "CONFIG_REG2",  .addr = A_CONFIG_REG2,
        .rsvd = 0x8,
    },{ .name = "CONFIG_REG3",  .addr = A_CONFIG_REG3,
        .rsvd = 0x40,
    },{ .name = "CONFIG_REG4",  .addr = A_CONFIG_REG4,
        .rsvd = 0xf0f0,
    },{ .name = "SEQ_CHANNEL2",  .addr = A_SEQ_CHANNEL2,
        .rsvd = 0xffc0,
    },{ .name = "SEQ_AVERAGE2",  .addr = A_SEQ_AVERAGE2,
    },{ .name = "SEQ_CHANNEL0",  .addr = A_SEQ_CHANNEL0,
        .rsvd = 0x16,
    },{ .name = "SEQ_CHANNEL1",  .addr = A_SEQ_CHANNEL1,
    },{ .name = "SEQ_AVERAGE0",  .addr = A_SEQ_AVERAGE0,
    },{ .name = "SEQ_AVERAGE1",  .addr = A_SEQ_AVERAGE1,
    },{ .name = "SEQ_INPUT_MODE0",  .addr = A_SEQ_INPUT_MODE0,
    },{ .name = "SEQ_INPUT_MODE1",  .addr = A_SEQ_INPUT_MODE1,
    },{ .name = "SEQ_ACQ0",  .addr = A_SEQ_ACQ0,
    },{ .name = "SEQ_ACQ1",  .addr = A_SEQ_ACQ1,
    },{ .name = "ALARM_TEMPERATURE_UPPER",  .addr = A_ALARM_TEMPERATURE_UPPER,
    },{ .name = "ALARM_SUPPLY1_UPPER",  .addr = A_ALARM_SUPPLY1_UPPER,
    },{ .name = "ALARM_SUPPLY2_UPPER",  .addr = A_ALARM_SUPPLY2_UPPER,
    },{ .name = "ALARM_OT_UPPER",  .addr = A_ALARM_OT_UPPER,
    },{ .name = "ALARM_TEMPERATURE_LOWER",  .addr = A_ALARM_TEMPERATURE_LOWER,
    },{ .name = "ALARM_SUPPLY1_LOWER",  .addr = A_ALARM_SUPPLY1_LOWER,
    },{ .name = "ALARM_SUPPLY2_LOWER",  .addr = A_ALARM_SUPPLY2_LOWER,
    },{ .name = "ALARM_OT_LOWER",  .addr = A_ALARM_OT_LOWER,
    },{ .name = "ALARM_SUPPLY3_UPPER",  .addr = A_ALARM_SUPPLY3_UPPER,
    },{ .name = "ALARM_SUPPLY4_UPPER",  .addr = A_ALARM_SUPPLY4_UPPER,
    },{ .name = "ALARM_SUPPLY5_UPPER",  .addr = A_ALARM_SUPPLY5_UPPER,
    },{ .name = "ALARM_SUPPLY6_UPPER",  .addr = A_ALARM_SUPPLY6_UPPER,
    },{ .name = "ALARM_SUPPLY3_LOWER",  .addr = A_ALARM_SUPPLY3_LOWER,
    },{ .name = "ALARM_SUPPLY4_LOWER",  .addr = A_ALARM_SUPPLY4_LOWER,
    },{ .name = "ALARM_SUPPLY5_LOWER",  .addr = A_ALARM_SUPPLY5_LOWER,
    },{ .name = "ALARM_SUPPLY6_LOWER",  .addr = A_ALARM_SUPPLY6_LOWER,
    },{ .name = "ALARM_SUPPLY7_UPPER",  .addr = A_ALARM_SUPPLY7_UPPER,
    },{ .name = "ALARM_SUPPLY8_UPPER",  .addr = A_ALARM_SUPPLY8_UPPER,
    },{ .name = "ALARM_SUPPLY9_UPPER",  .addr = A_ALARM_SUPPLY9_UPPER,
    },{ .name = "ALARM_SUPPLY10_UPPER",  .addr = A_ALARM_SUPPLY10_UPPER,
    },{ .name = "ALARM_VCCAMS_UPPER",  .addr = A_ALARM_VCCAMS_UPPER,
    },{ .name = "ALARM_TREMOTE_UPPER",  .addr = A_ALARM_TREMOTE_UPPER,
    },{ .name = "ALARM_SUPPLY7_LOWER",  .addr = A_ALARM_SUPPLY7_LOWER,
    },{ .name = "ALARM_SUPPLY8_LOWER",  .addr = A_ALARM_SUPPLY8_LOWER,
    },{ .name = "ALARM_SUPPLY9_LOWER",  .addr = A_ALARM_SUPPLY9_LOWER,
    },{ .name = "ALARM_SUPPLY10_LOWER",  .addr = A_ALARM_SUPPLY10_LOWER,
    },{ .name = "ALARM_VCCAMS_LOWER",  .addr = A_ALARM_VCCAMS_LOWER,
    },{ .name = "ALARM_TREMOTE_LOWER",  .addr = A_ALARM_TREMOTE_LOWER,
    },{ .name = "SEQ_INPUT_MODE2",  .addr = A_SEQ_INPUT_MODE2,
    },{ .name = "SEQ_ACQ2",  .addr = A_SEQ_ACQ2,
    },{ .name = "SUPPLY7",  .addr = A_SUPPLY7,
        .ro = 0xffff,
    },{ .name = "SUPPLY8",  .addr = A_SUPPLY8,
        .ro = 0xffff,
    },{ .name = "SUPPLY9",  .addr = A_SUPPLY9,
        .ro = 0xffff,
    },{ .name = "SUPPLY10",  .addr = A_SUPPLY10,
        .ro = 0xffff,
    },{ .name = "VCCAMS",  .addr = A_VCCAMS,
        .ro = 0xffff,
    },{ .name = "TEMPERATURE_REMOTE",  .addr = A_TEMPERATURE_REMOTE,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY7",  .addr = A_MAX_SUPPLY7,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY8",  .addr = A_MAX_SUPPLY8,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY9",  .addr = A_MAX_SUPPLY9,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY10",  .addr = A_MAX_SUPPLY10,
        .ro = 0xffff,
    },{ .name = "MAX_VCCAMS",  .addr = A_MAX_VCCAMS,
        .ro = 0xffff,
    },{ .name = "MAX_TEMPERATURE_REMOTE",  .addr = A_MAX_TEMPERATURE_REMOTE,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY7",  .addr = A_MIN_SUPPLY7,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY8",  .addr = A_MIN_SUPPLY8,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY9",  .addr = A_MIN_SUPPLY9,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY10",  .addr = A_MIN_SUPPLY10,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_VCCAMS",  .addr = A_MIN_VCCAMS,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_TEMPERATURE_REMOTE",  .addr = A_MIN_TEMPERATURE_REMOTE,
        .reset = 0xffff,
        .ro = 0xffff,
    }
};

static void pssysmon_reset(DeviceState *dev)
{
    PSSYSMON *s = XILINX_PSSYSMON(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        register_reset(&s->regs_info[i]);
    }

}

static const MemoryRegionOps pssysmon_ops = {
    .read = register_read_memory,
    .write = register_write_memory,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void pssysmon_realize(DeviceState *dev, Error **errp)
{
    /* Delete this if you don't need it */
}

static void pssysmon_init(Object *obj)
{
    PSSYSMON *s = XILINX_PSSYSMON(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);
    RegisterInfoArray *reg_array;

    memory_region_init(&s->iomem, obj, TYPE_XILINX_PSSYSMON, PSSYSMON_R_MAX * 4);
    reg_array =
        register_init_block32(DEVICE(obj), pssysmon_regs_info,
                              ARRAY_SIZE(pssysmon_regs_info),
                              s->regs_info, s->regs,
                              &pssysmon_ops,
                              XILINX_PSSYSMON_ERR_DEBUG,
                              PSSYSMON_R_MAX * 4);
    memory_region_add_subregion(&s->iomem,
                                0x0,
                                &reg_array->mem);
    sysbus_init_mmio(sbd, &s->iomem);
}

static const VMStateDescription vmstate_pssysmon = {
    .name = TYPE_XILINX_PSSYSMON,
    .version_id = 1,
    .minimum_version_id = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, PSSYSMON, PSSYSMON_R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static void pssysmon_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = pssysmon_reset;
    dc->realize = pssysmon_realize;
    dc->vmsd = &vmstate_pssysmon;
}

static const TypeInfo pssysmon_info = {
    .name          = TYPE_XILINX_PSSYSMON,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(PSSYSMON),
    .class_init    = pssysmon_class_init,
    .instance_init = pssysmon_init,
};

static void pssysmon_register_types(void)
{
    type_register_static(&pssysmon_info);
}

type_init(pssysmon_register_types)
