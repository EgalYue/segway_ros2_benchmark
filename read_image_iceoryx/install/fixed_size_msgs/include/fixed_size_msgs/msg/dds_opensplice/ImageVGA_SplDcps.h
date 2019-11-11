#ifndef H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA_SPLTYPES_H
#define H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ImageVGA_.h"


extern c_metaObject __ImageVGA__fixed_size_msgs__load (c_base base);

extern c_metaObject __ImageVGA__fixed_size_msgs_msg__load (c_base base);

extern c_metaObject __ImageVGA__fixed_size_msgs_msg_dds___load (c_base base);

extern c_metaObject __ImageVGA__fixed_size_msgs_msg_dds__ImageVGA_Constants__load (c_base base);

extern const char *fixed_size_msgs_msg_dds__ImageVGA__metaDescriptor[];
extern const int fixed_size_msgs_msg_dds__ImageVGA__metaDescriptorArrLength;
extern const int fixed_size_msgs_msg_dds__ImageVGA__metaDescriptorLength;
extern c_metaObject __fixed_size_msgs_msg_dds__ImageVGA___load (c_base base);
struct _fixed_size_msgs_msg_dds__ImageVGA_ ;
extern  v_copyin_result __fixed_size_msgs_msg_dds__ImageVGA___copyIn(c_base base, const struct fixed_size_msgs::msg::dds_::ImageVGA_ *from, struct _fixed_size_msgs_msg_dds__ImageVGA_ *to);
extern  void __fixed_size_msgs_msg_dds__ImageVGA___copyOut(const void *_from, void *_to);
struct _fixed_size_msgs_msg_dds__ImageVGA_ {
    c_longlong timestamp_;
    c_octet is_bigendian_;
    c_ulong step_;
    c_octet data_[921600];
};

#undef OS_API
#endif
