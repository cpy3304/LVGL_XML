/**
 * @file button_i_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "button_i_gen.h"
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

lv_obj_t * button_i_create(lv_obj_t * parent, const char * button_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_btn;
    static lv_style_t style_btn_press;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_btn);
        lv_style_set_height(&style_btn, BUTTON_HEIGHT);
        lv_style_set_width(&style_btn, BUTTON_WIDTH);
        lv_style_set_bg_color(&style_btn, BUTTON_BG_COLOR);
        lv_style_set_text_color(&style_btn, BUTTON_TXT_COLOR);

        lv_style_init(&style_btn_press);
        lv_style_set_text_color(&style_btn_press, lv_color_hex3(0xf0f));

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_set_name_static(lv_button_0, "button_i_#");

    lv_obj_add_style(lv_button_0, &style_btn, 0);
    lv_obj_add_style(lv_button_0, &style_btn_press, LV_STATE_PRESSED);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, button_text);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

