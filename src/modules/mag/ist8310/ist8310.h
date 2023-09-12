/******************************************************************************
 * Copyright 2021 The Firmament Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#ifndef IST8310_H__
#define IST8310_H__

#include <rtthread.h>
#include <rtdevice.h>

/**
 * @brief 调用此函数初始化 ist8310
 *
 * @param i2c_bus_name ist8310 所挂载的总线名称
 *
 * @return RT_EOK
 */
rt_err_t drv_ist8310_init(const char* i2c_bus_name);

/**
 * @brief 调用此函数读取 ist8310 数据
 *
 * @param data[3] 存储读取数据的数组
 *
 * @return 读取成功 RT_EOK ; 读取失败 -RT_ERROR
 */
rt_err_t ist8310_read(float data[3]);

#endif
