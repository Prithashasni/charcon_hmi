#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_WIFI_4
#define LV_ATTRIBUTE_IMG_WIFI_4
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WIFI_4 uint8_t wifi_4_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x10, 0x49, 0x60, 0x49, 0x9f, 0x49, 0xcf, 0x49, 0xdf, 0x49, 0xff, 0x49, 0xdf, 0x49, 0xbf, 0x49, 0x9f, 0x49, 0x60, 0x49, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x20, 0x49, 0x9f, 0x49, 0xef, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0xff, 0x49, 0x9f, 0x49, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x49, 0x6f, 0x49, 0xef, 0x49, 0xff, 0x49, 0xef, 0x49, 0xaf, 0x49, 0x60, 0x49, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x30, 0x49, 0x60, 0x49, 0xaf, 0x49, 0xff, 0x49, 0xff, 0x49, 0xef, 0x49, 0x70, 0x00, 0x00, 0x00, 0x00, 
  0x49, 0x10, 0x49, 0x9f, 0x49, 0xff, 0x49, 0xff, 0x49, 0x90, 0x49, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x20, 0x49, 0xa0, 0x49, 0xff, 0x49, 0xff, 0x49, 0x8f, 0x00, 0x00, 
  0x49, 0x60, 0x49, 0xff, 0x49, 0xdf, 0x49, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x60, 0x49, 0xef, 0x49, 0xff, 0x49, 0x40, 
  0x00, 0x00, 0x49, 0x60, 0x49, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x20, 0x49, 0x60, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x42, 0x10, 0xc7, 0x39, 0x60, 0xe7, 0x39, 0x9f, 0xe7, 0x39, 0xcf, 0xe7, 0x39, 0xdf, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xdf, 0xc7, 0x39, 0xbf, 0xe7, 0x39, 0x9f, 0xe7, 0x39, 0x60, 0x08, 0x42, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x20, 0xe7, 0x39, 0x9f, 0xe7, 0x39, 0xef, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0x9f, 0xc7, 0x39, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x6f, 0xe7, 0x39, 0xef, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xef, 0xc7, 0x39, 0xaf, 0xc7, 0x39, 0x60, 0xc7, 0x39, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x39, 0x30, 0xc7, 0x39, 0x60, 0xc7, 0x39, 0xaf, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xef, 0xc7, 0x39, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x08, 0x42, 0x10, 0xe7, 0x39, 0x9f, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0x90, 0x08, 0x42, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x20, 0xc7, 0x39, 0xa0, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xff, 0xc7, 0x39, 0x8f, 0x00, 0x00, 0x00, 
  0xc7, 0x39, 0x60, 0xe7, 0x39, 0xff, 0xe7, 0x39, 0xdf, 0xc7, 0x39, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x60, 0xe7, 0x39, 0xef, 0xe7, 0x39, 0xff, 0xc7, 0x39, 0x40, 
  0x00, 0x00, 0x00, 0xc7, 0x39, 0x60, 0xc7, 0x39, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x20, 0xe7, 0x39, 0x60, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x08, 0x10, 0x39, 0xc7, 0x60, 0x39, 0xe7, 0x9f, 0x39, 0xe7, 0xcf, 0x39, 0xe7, 0xdf, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xdf, 0x39, 0xc7, 0xbf, 0x39, 0xe7, 0x9f, 0x39, 0xe7, 0x60, 0x42, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x20, 0x39, 0xe7, 0x9f, 0x39, 0xe7, 0xef, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0x9f, 0x39, 0xc7, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x6f, 0x39, 0xe7, 0xef, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xef, 0x39, 0xc7, 0xaf, 0x39, 0xc7, 0x60, 0x39, 0xc7, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xa7, 0x30, 0x39, 0xc7, 0x60, 0x39, 0xc7, 0xaf, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xef, 0x39, 0xc7, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x42, 0x08, 0x10, 0x39, 0xe7, 0x9f, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0x90, 0x42, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x20, 0x39, 0xc7, 0xa0, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xff, 0x39, 0xc7, 0x8f, 0x00, 0x00, 0x00, 
  0x39, 0xc7, 0x60, 0x39, 0xe7, 0xff, 0x39, 0xe7, 0xdf, 0x39, 0xc7, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x60, 0x39, 0xe7, 0xef, 0x39, 0xe7, 0xff, 0x39, 0xc7, 0x40, 
  0x00, 0x00, 0x00, 0x39, 0xc7, 0x60, 0x39, 0xc7, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x20, 0x39, 0xe7, 0x60, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x10, 0x38, 0x38, 0x38, 0x60, 0x3a, 0x3a, 0x3a, 0x9f, 0x3a, 0x3a, 0x3a, 0xcf, 0x3a, 0x3a, 0x3a, 0xdf, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xdf, 0x39, 0x39, 0x39, 0xbf, 0x3a, 0x3a, 0x3a, 0x9f, 0x3a, 0x3a, 0x3a, 0x60, 0x40, 0x40, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x20, 0x3a, 0x3a, 0x3a, 0x9f, 0x3a, 0x3a, 0x3a, 0xef, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0x9f, 0x38, 0x38, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x39, 0x39, 0x6f, 0x3a, 0x3a, 0x3a, 0xef, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xef, 0x39, 0x39, 0x39, 0xaf, 0x38, 0x38, 0x38, 0x60, 0x38, 0x38, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x35, 0x35, 0x30, 0x38, 0x38, 0x38, 0x60, 0x39, 0x39, 0x39, 0xaf, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xef, 0x39, 0x39, 0x39, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x40, 0x40, 0x10, 0x3a, 0x3a, 0x3a, 0x9f, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0x90, 0x40, 0x40, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x20, 0x39, 0x39, 0x39, 0xa0, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x39, 0x39, 0x39, 0x8f, 0x00, 0x00, 0x00, 0x00, 
  0x38, 0x38, 0x38, 0x60, 0x3a, 0x3a, 0x3a, 0xff, 0x3a, 0x3a, 0x3a, 0xdf, 0x38, 0x38, 0x38, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x60, 0x3a, 0x3a, 0x3a, 0xef, 0x3a, 0x3a, 0x3a, 0xff, 0x38, 0x38, 0x38, 0x40, 
  0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x60, 0x38, 0x38, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x20, 0x3a, 0x3a, 0x3a, 0x60, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t wifi_4 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 21,
  .header.h = 6,
  .data_size = 126 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = wifi_4_map,
};
