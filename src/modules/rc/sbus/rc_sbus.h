 /*
 * Change Logs:
 * Date            Author          Notes
 * 2023-09-24      ChuShicheng     first version
 *                 ZhengWanshun
 *                 Yangshuo
 *                 ChenSihan
 */
#ifndef _RC_SBUS_H
#define _RC_SBUS_H

#include <rtthread.h>

#define SBUS_RX_BUF_NUM 36u
#define SBUS_FRAME_SIZE 25u

typedef struct
{
    int16_t ch1;   //右侧左右
    int16_t ch2;   //右侧上下
    int16_t ch3;   //左侧左右
    int16_t ch4;   //左侧上下

    /* 遥控器的拨杆数据，上中下分别为：1、3、2 */
    uint8_t sw1;   //左侧拨杆
    uint8_t sw2;   //右侧拨杆
} rc_obj_t;

/**
 * @brief 初始化sbus_rc
 *
 * @return rc_obj_t* 指向NOW和LAST两次数据的数组起始地址
 */
rc_obj_t *sbus_rc_init(void);

#endif /* _RC_SBUS_H */
