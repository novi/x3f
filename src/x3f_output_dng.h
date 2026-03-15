/* X3F_OUTPUT_DNG.H
 *
 * Library for writing the image as DNG.
 *
 * Copyright 2015 - Roland and Erik Karlsson
 * BSD-style - see doc/copyright.txt
 *
 */

#ifndef X3F_OUTPUT_DNG_H
#define X3F_OUTPUT_DNG_H

#include "x3f_io.h"

typedef enum x3f_color_profile_e {
    PROFILE_EMBED=0,
    PROFILE_CALIBRATED=1,
    PROFILE_NONE=2,
} x3f_color_profile_t;

extern x3f_return_t x3f_dump_raw_data_as_dng(x3f_t *x3f, char *outfilename,
					     int fix_bad,
					     int denoise,
					     int apply_sgain,
					     char *wb,
					     int compress,
                         x3f_color_profile_t color_profile);

extern x3f_return_t x3f_dump_layer_as_dng(x3f_t *x3f,
					  char *outfilename,
					  int layer,
					  int fix_bad,
					  int denoise,
					  char *wb,
					  int compress);

#endif
