/*  format_mkw.c - mkw format module
 *  Copyright (C) 2000-2006  Jason Jordan <shnutils@freeshell.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "format.h"

CVSID("$Id: format_mkw.c,v 1.8 2007/03/30 05:18:37 jason Exp $")

#define MKW_MAGIC "mkw"

#define MKWCON "mkwcon"

static char default_decoder_args[] = "-x -q " FILENAME_PLACEHOLDER " -";
static char default_encoder_args[] = "-e -q - " FILENAME_PLACEHOLDER;

format_module format_mkw = {
  "mkw",
  "MKW Audio Compression format",
  CVSIDSTR,
  TRUE,
  TRUE,
  FALSE,
  TRUE,
  TRUE,
  TRUE,
  NULL,
  MKW_MAGIC,
  0,
  "mkw",
  MKWCON,
  default_decoder_args,
  MKWCON,
  default_encoder_args,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
