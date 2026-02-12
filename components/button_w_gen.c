/**
 * @file button_w_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "button_w_gen.h"
#include "ui_hello_world.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * button_w_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * button_i_0 = button_i_create(parent, "Click_me");
    lv_obj_set_name_static(button_i_0, "button_w_#");
    lv_obj_set_style_text_color(button_i_0, lv_color_hex3(0xf0f), 0);

    LV_TRACE_OBJ_CREATE("finished");

    return button_i_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

