/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-11-16     Meco Man     the first version
 */

#include <rtdef.h>
#include <stdarg.h>

/**
 * This function will fill a formatted string to buffer.
 *
 * @param  buf is the buffer to save formatted string.
 *
 * @param  size is the size of buffer.
 *
 * @param  fmt is the format parameters.
 *
 * @param  args is a list of variable parameters.
 *
 * @return The number of characters actually written to buffer.
 */
rt_int32_t rt_vsnprintf(char *buf, rt_size_t size, const char *fmt, va_list args)
{

    return 0;
}