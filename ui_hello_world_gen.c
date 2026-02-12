/**
 * @file ui_hello_world_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "ui_hello_world_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_medium;
extern lv_font_t font_medium_data;

/*----------------
 * Images
 *----------------*/

const void * flower_data;
extern const void * flower_data_data;
const void * flower_file;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t volume;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_hello_world_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/

    /* get font 'font_medium' from a C array */
    font_medium = &font_medium_data;


    /*----------------
     * Images
     *----------------*/
    flower_data = &flower_data_data;
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/orange-flower.png");
    flower_file = lv_strdup(buf);

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&volume, 50);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_medium", font_medium);

    /* Register subjects */
    lv_xml_register_subject(NULL, "volume", &volume);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "flower_data", flower_data);
    lv_xml_register_image(NULL, "flower_file", flower_file);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/