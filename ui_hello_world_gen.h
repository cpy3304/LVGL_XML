/**
 * @file ui_hello_world_gen.h
 */

#ifndef UI_HELLO_WORLD_GEN_H
#define UI_HELLO_WORLD_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

#define BUTTON_BG_COLOR lv_color_hex3(0x000)

#define BUTTON_TXT_COLOR lv_color_hex3(0xfff)

#define BUTTON_HEIGHT 40

#define BUTTON_WIDTH 80

#define BACK_BTN_TXT 80

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * font_medium;

/*----------------
 * Images
 *----------------*/

extern const void * flower_data;
extern const void * flower_file;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t volume;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_hello_world_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/button_i_gen.h"
#include "components/button_w_gen.h"
#include "components/slider_bind_gen.h"
#include "screens/screen2_gen.h"
#include "screens/screen_hello_world_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_HELLO_WORLD_GEN_H*/