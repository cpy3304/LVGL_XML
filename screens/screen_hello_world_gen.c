/**
 * @file screen_hello_world_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_hello_world_gen.h"
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

lv_obj_t * screen_hello_world_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x00688a));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_hello_world_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_height(lv_obj_0, lv_pct(100));
    lv_obj_set_width(lv_obj_0, lv_pct(100));
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 0, 0);

    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(80));
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_track_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_column(lv_obj_1, 0, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_2, lv_pct(50));
    lv_obj_set_height(lv_obj_2, lv_pct(100));
    lv_obj_set_style_radius(lv_obj_2, 0, 0);
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_main_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * button_i_0 = button_i_create(lv_obj_2, "Click_me");
    lv_obj_add_screen_create_event(button_i_0, LV_EVENT_CLICKED, screen2_create, LV_SCREEN_LOAD_ANIM_MOVE_LEFT, 500, 0);
    
    lv_obj_t * button_i_1 = button_i_create(lv_obj_2, "Click_me");
    
    lv_obj_t * button_i_2 = button_i_create(lv_obj_2, "Click_me");
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_3, lv_pct(50));
    lv_obj_set_height(lv_obj_3, lv_pct(100));
    lv_obj_set_style_radius(lv_obj_3, 0, 0);
    lv_obj_t * button_i_3 = button_i_create(lv_obj_3, "Click_me");
    lv_obj_set_x(button_i_3, 0);
    lv_obj_set_y(button_i_3, 20);
    
    lv_obj_t * button_i_4 = button_i_create(lv_obj_3, "Click_me");
    lv_obj_set_x(button_i_4, 0);
    lv_obj_set_y(button_i_4, 80);
    
    lv_obj_t * button_i_5 = button_i_create(lv_obj_3, "Click_me");
    lv_obj_set_x(button_i_5, 0);
    lv_obj_set_y(button_i_5, 140);
    
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_4, lv_pct(100));
    lv_obj_set_height(lv_obj_4, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_4);
    lv_image_set_src(lv_image_0, flower_file);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_4);
    lv_label_set_text(lv_label_0, "Hello world");
    lv_obj_set_style_text_font(lv_label_0, font_medium, 0);
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0x000), 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

