/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif


#ifndef LV_ATTRIBUTE_IMG_HAMMERBEAM1
#define LV_ATTRIBUTE_IMG_HAMMERBEAM1
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_HAMMERBEAM1 uint8_t hammerbeam1_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

  0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xfc, 0x0f, 0xff, 0xfd, 0xff, 0x00, 0x03, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0x80, 0x00, 0xff, 0xfc, 0xe7, 0x3c, 0x01, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xf0, 0x1f, 0xf2, 0x63, 0x7f, 0x00, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0x83, 0xf9, 0x23, 0x7f, 0x80, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xf8, 0xe4, 0xe1, 0xbf, 0xc0, 0x5f, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xf0, 
  0xff, 0xf7, 0xff, 0xff, 0xf0, 0x32, 0x41, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xfa, 0x3f, 0xff, 0xff, 0xf0, 
  0x3f, 0xf3, 0xff, 0xff, 0xc0, 0x68, 0xc0, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xf2, 0x3f, 0xff, 0xff, 0xf0, 
  0xc7, 0xe1, 0xff, 0xff, 0x01, 0xe5, 0x80, 0x7f, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xf2, 0x1f, 0xff, 0xff, 0xf0, 
  0xf1, 0xfc, 0x7f, 0xfc, 0x07, 0xfb, 0x00, 0x1f, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xf2, 0x1f, 0xff, 0xff, 0xf0, 
  0xfe, 0x0f, 0xf8, 0x60, 0x3e, 0x0e, 0x00, 0x0f, 0x88, 0x07, 0xff, 0xff, 0xff, 0xe1, 0x1f, 0xff, 0xff, 0xf0, 
  0xf8, 0x3f, 0x07, 0x7f, 0xf8, 0x0f, 0xff, 0x87, 0x48, 0x03, 0xff, 0xff, 0xff, 0xe1, 0x0f, 0xff, 0xff, 0xf0, 
  0x7f, 0xfc, 0x1f, 0x70, 0x00, 0x3f, 0xff, 0xff, 0xe4, 0x01, 0xff, 0xff, 0xff, 0xe1, 0x0f, 0xff, 0xff, 0xf0, 
  0x83, 0xf8, 0x1f, 0x78, 0x00, 0xf0, 0xfe, 0x07, 0xf0, 0x00, 0xff, 0xff, 0xff, 0xc0, 0x87, 0xff, 0xff, 0xf0, 
  0xcc, 0x60, 0x0f, 0xbc, 0x01, 0xff, 0x19, 0xf8, 0xf8, 0x01, 0x7f, 0xff, 0xff, 0xc0, 0x87, 0xff, 0xff, 0xf0, 
  0xcf, 0x80, 0x0f, 0xbe, 0x03, 0xff, 0xf7, 0xff, 0x3c, 0x80, 0x9f, 0xff, 0xff, 0xc0, 0x43, 0xff, 0xff, 0xf0, 
  0xef, 0xe0, 0x07, 0xdf, 0x07, 0xff, 0xef, 0xff, 0xdf, 0x40, 0x47, 0xff, 0xff, 0xc1, 0x41, 0xff, 0xff, 0xf0, 
  0xef, 0xf0, 0x07, 0xdf, 0x87, 0xff, 0xec, 0xff, 0xef, 0x90, 0x11, 0xff, 0xff, 0xc1, 0xa1, 0xff, 0xff, 0xf0, 
  0xef, 0xf0, 0x03, 0xef, 0xcf, 0xff, 0xdb, 0xff, 0xf3, 0xcc, 0x03, 0x83, 0xff, 0xc1, 0xa0, 0xff, 0xff, 0xf0, 
  0xef, 0xf0, 0x01, 0xe7, 0xe7, 0x3f, 0xd7, 0xff, 0xf1, 0xe3, 0x87, 0xa0, 0xff, 0xc0, 0xd0, 0x7f, 0xff, 0xf0, 
  0xef, 0xd0, 0x00, 0xf3, 0xf3, 0xc7, 0xbf, 0xff, 0xe0, 0xf8, 0x7f, 0xf6, 0x1f, 0xe0, 0xd0, 0x3f, 0xff, 0xf0, 
  0xef, 0xc8, 0x00, 0x21, 0xf9, 0xf9, 0xaf, 0xff, 0xe0, 0x1e, 0x1f, 0x7b, 0xc3, 0xe0, 0x68, 0x3f, 0xff, 0xf0, 
  0xef, 0xc6, 0x00, 0x06, 0xfe, 0x7f, 0x2f, 0xff, 0xc6, 0x67, 0xbe, 0xfb, 0x04, 0x62, 0x6c, 0x1f, 0xff, 0xf0, 
  0xef, 0xc1, 0x00, 0x00, 0x9f, 0x9f, 0x1f, 0xff, 0xd9, 0xb9, 0xf1, 0x06, 0x7a, 0x31, 0x36, 0x0f, 0xff, 0xf0, 
  0xef, 0xc0, 0xc0, 0x1f, 0x07, 0xfc, 0x3f, 0xe7, 0xa0, 0xde, 0xf7, 0x79, 0x80, 0x09, 0x3b, 0x07, 0xff, 0xf0, 
  0xef, 0x80, 0x30, 0x3f, 0x03, 0xf3, 0x3f, 0xe7, 0x98, 0x47, 0x77, 0x76, 0x00, 0x08, 0x8d, 0x83, 0xff, 0xf0, 
  0xef, 0x80, 0x08, 0x7c, 0x30, 0xcf, 0x97, 0xff, 0x2c, 0x63, 0x78, 0x50, 0x00, 0x04, 0x4e, 0xc1, 0xff, 0xf0, 
  0xdf, 0x80, 0x06, 0x06, 0x0f, 0x07, 0x97, 0xff, 0x26, 0x31, 0x7f, 0xcc, 0x00, 0x05, 0x0f, 0x60, 0xff, 0xf0, 
  0xdf, 0x80, 0x00, 0xf9, 0xdf, 0xf7, 0xdf, 0xe0, 0x30, 0x8c, 0x7b, 0x3c, 0xff, 0x05, 0x0f, 0xb0, 0xff, 0xf0, 
  0xdf, 0x80, 0x01, 0xf0, 0x3f, 0xfb, 0xce, 0x1f, 0x38, 0x3e, 0x3c, 0xf9, 0xe4, 0x65, 0xff, 0xd8, 0x7f, 0xf0, 
  0xbf, 0xc0, 0x01, 0xf8, 0x7f, 0xfd, 0x21, 0xff, 0x1c, 0x45, 0xbb, 0xfd, 0x80, 0x12, 0xf9, 0xec, 0x3f, 0xf0, 
  0xbf, 0xc0, 0x01, 0xc3, 0x7f, 0xfe, 0x33, 0xff, 0x13, 0x5b, 0xb7, 0xfd, 0xc0, 0x02, 0xe0, 0xf6, 0x1f, 0xf0, 
  0x3f, 0xa0, 0x03, 0x80, 0xff, 0xfe, 0xd7, 0xff, 0x9c, 0x48, 0x6f, 0xfe, 0x9d, 0xe2, 0xf0, 0xfb, 0x8f, 0xf0, 
  0xbf, 0xb0, 0x03, 0x80, 0xff, 0xe7, 0x27, 0xff, 0x8b, 0x42, 0x5f, 0xfe, 0xcd, 0x02, 0xe7, 0x5c, 0xc7, 0xf0, 
  0xdf, 0xd8, 0x83, 0x00, 0xff, 0xde, 0xef, 0xff, 0x89, 0xa2, 0x5f, 0xbf, 0x70, 0x02, 0xf3, 0x3e, 0x63, 0xf0, 
  0xef, 0xed, 0x63, 0x01, 0xff, 0x7e, 0xef, 0xff, 0xc0, 0x10, 0xbf, 0xbd, 0x7f, 0x91, 0x7c, 0xdf, 0x33, 0xf0, 
  0xf7, 0xf4, 0x77, 0xf9, 0xe1, 0xfe, 0xef, 0xfa, 0xc4, 0x72, 0xbf, 0xff, 0xbc, 0x01, 0x7f, 0xff, 0x99, 0xf0, 
  0xf9, 0xe6, 0x77, 0x9b, 0xf3, 0xfe, 0xef, 0xf0, 0xc3, 0xfa, 0xbf, 0x7f, 0xc0, 0x01, 0x7f, 0xf0, 0xc9, 0xf0, 
  0x7e, 0x73, 0x67, 0xb1, 0xff, 0xfd, 0xcf, 0xf0, 0xc0, 0xf9, 0x5f, 0x7f, 0xf0, 0x00, 0xbf, 0xf1, 0xe4, 0xf0, 
  0xff, 0x93, 0x6f, 0x79, 0xff, 0xfd, 0x29, 0xf0, 0x60, 0x78, 0x5f, 0x7f, 0xe0, 0x00, 0xbf, 0xf2, 0x74, 0xf0, 
  0x1f, 0xe0, 0x6f, 0x7c, 0xff, 0xfc, 0xfe, 0x30, 0x20, 0x1c, 0x5f, 0xff, 0xf8, 0x00, 0xbf, 0xf5, 0x38, 0x70, 
  0xff, 0xf8, 0x2f, 0x7c, 0xff, 0xfe, 0xf7, 0xf0, 0xf0, 0x46, 0xaf, 0xff, 0xdc, 0x00, 0x5f, 0xfc, 0x98, 0x70, 
  0x00, 0xfd, 0x2e, 0xf8, 0x7f, 0xff, 0x77, 0xf4, 0xf2, 0xa0, 0xaf, 0xff, 0x6e, 0xc0, 0x5f, 0xfc, 0x48, 0x70, 
  0x03, 0xf8, 0xbe, 0xf0, 0x7f, 0xff, 0xbf, 0xff, 0xf6, 0x40, 0x57, 0xff, 0x0c, 0x80, 0x5f, 0xfe, 0x4c, 0x70, 
  0x0f, 0xe0, 0xb8, 0xe0, 0x3f, 0xff, 0xdb, 0xff, 0xfe, 0x00, 0x57, 0xfe, 0xe4, 0x00, 0x5f, 0xfe, 0x24, 0x70, 
  0x3f, 0x9e, 0xd2, 0xc0, 0x5f, 0xff, 0xed, 0xff, 0xfe, 0x00, 0x2b, 0xfe, 0x84, 0x00, 0x4f, 0xff, 0x24, 0x70, 
  0x7e, 0x7f, 0x4e, 0xc0, 0x4f, 0xff, 0xee, 0x7f, 0xff, 0xff, 0x3d, 0xfe, 0xc4, 0xe6, 0x4f, 0xff, 0x26, 0x70, 
  0xfd, 0xff, 0x5e, 0xc0, 0x87, 0xff, 0xf7, 0x8f, 0xff, 0x80, 0x1e, 0x72, 0x0b, 0x00, 0x8f, 0xff, 0x26, 0x70, 
  0xf3, 0xff, 0x1e, 0xf1, 0x0b, 0xfd, 0xf7, 0xfc, 0xf8, 0x7e, 0x19, 0x91, 0x88, 0x00, 0x8f, 0xff, 0xae, 0x70, 
  0xef, 0xff, 0x9d, 0xf9, 0x13, 0xfe, 0xe7, 0xff, 0xe1, 0xff, 0x9c, 0x60, 0x6c, 0x01, 0x8f, 0xff, 0x26, 0x70, 
  0x1f, 0xff, 0x9d, 0x0e, 0x11, 0xfe, 0x07, 0xff, 0xde, 0x37, 0xdf, 0xe0, 0x11, 0x81, 0x0f, 0xff, 0x26, 0x70, 
  0xdf, 0xff, 0xcc, 0x03, 0x20, 0xfe, 0x38, 0x3f, 0xbf, 0xff, 0x2e, 0x10, 0x00, 0x1b, 0x1f, 0xff, 0x26, 0x70, 
  0xdf, 0xff, 0xc4, 0x63, 0xa2, 0x7e, 0xff, 0xc1, 0xbf, 0xff, 0x8f, 0xf0, 0x00, 0x03, 0x1f, 0xff, 0x26, 0x70, 
  0xef, 0xff, 0xd8, 0xf1, 0x42, 0x3d, 0xfc, 0x7e, 0x1f, 0xef, 0xce, 0x08, 0x00, 0x06, 0x1f, 0xff, 0xae, 0x70, 
  0xef, 0xff, 0x99, 0xf8, 0xb4, 0x5b, 0xe0, 0x7f, 0xe1, 0x83, 0xe6, 0xf6, 0x00, 0x0e, 0x3f, 0xff, 0x26, 0x70, 
  0xef, 0xff, 0x99, 0xf9, 0x7c, 0x97, 0x80, 0xff, 0xf3, 0xff, 0xf5, 0x71, 0x20, 0x1c, 0x3f, 0xff, 0x26, 0x70, 
  0xf7, 0xff, 0x98, 0xf9, 0xff, 0x26, 0x00, 0xff, 0x1c, 0xff, 0xf8, 0x82, 0xc0, 0x3c, 0x3f, 0xff, 0x26, 0xf0, 
  0xf7, 0xff, 0x9c, 0xf8, 0xfd, 0x47, 0x01, 0xfc, 0x07, 0x7f, 0xfc, 0xe7, 0x7e, 0x58, 0x7f, 0xff, 0xae, 0xf0, 
  0xf7, 0xff, 0x9c, 0x70, 0xf7, 0x8f, 0x03, 0xf0, 0x01, 0xbf, 0xfe, 0x6f, 0xa1, 0x98, 0x7f, 0xfe, 0x4e, 0xf0, 
  0xfb, 0xff, 0x9c, 0x02, 0xdf, 0xde, 0x07, 0xe0, 0x00, 0xdf, 0xff, 0x6e, 0x2f, 0x90, 0xff, 0xfe, 0x4d, 0xf0, 
  0xfb, 0xff, 0x24, 0x07, 0x7f, 0xfe, 0x0f, 0xc0, 0x03, 0xdf, 0xff, 0xb0, 0xfb, 0x21, 0xff, 0xfc, 0x9d, 0xf0, 
  0xfb, 0xff, 0x0d, 0xf7, 0x7f, 0x7c, 0x3f, 0xc2, 0x1f, 0xef, 0xff, 0x8f, 0xf2, 0x23, 0xff, 0xfc, 0x9b, 0xf0, 
  0xfb, 0xff, 0x3b, 0xf7, 0xbc, 0xf8, 0x7f, 0x84, 0x7f, 0xf7, 0xff, 0xdf, 0xf4, 0x4f, 0xff, 0xf9, 0x3b, 0xf0, 
  0xfb, 0xff, 0x3b, 0xef, 0x93, 0xc8, 0xff, 0x8c, 0xff, 0xfb, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xe2, 0x77, 0xf0, 
  0xfb, 0xfe, 0xf7, 0xdf, 0x0f, 0x19, 0xff, 0x9e, 0xff, 0xfd, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x84, 0xef, 0xf0, 
};

const lv_img_dsc_t hammerbeam1 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = hammerbeam1_map,
};