/* Copyright (C) StrawberryHacker */

#ifndef USB_DEBUG_H
#define USB_DEBUG_H

#include "types.h"
#include "usb_protocol.h"

void usb_debug_print_setup(struct usb_setup_desc* desc);

void usb_debug_print_ep_desc(struct usb_ep_desc* desc);

#endif
