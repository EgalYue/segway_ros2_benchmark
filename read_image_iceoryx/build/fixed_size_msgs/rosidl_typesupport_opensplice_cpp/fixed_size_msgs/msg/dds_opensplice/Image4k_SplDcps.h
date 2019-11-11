#ifndef H_8E00508DEAD8F44484116AB7193ACB7D_Image4k_SPLTYPES_H
#define H_8E00508DEAD8F44484116AB7193ACB7D_Image4k_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Image4k_.h"


extern c_metaObject __Image4k__fixed_size_msgs__load (c_base base);

extern c_metaObject __Image4k__fixed_size_msgs_msg__load (c_base base);

extern c_metaObject __Image4k__fixed_size_msgs_msg_dds___load (c_base base);

extern c_metaObject __Image4k__fixed_size_msgs_msg_dds__Image4k_Constants__load (c_base base);

extern const char *fixed_size_msgs_msg_dds__Image4k__metaDescriptor[];
extern const int fixed_size_msgs_msg_dds__Image4k__metaDescriptorArrLength;
extern const int fixed_size_msgs_msg_dds__Image4k__metaDescriptorLength;
extern c_metaObject __fixed_size_msgs_msg_dds__Image4k___load (c_base base);
struct _fixed_size_msgs_msg_dds__Image4k_ ;
extern  v_copyin_result __fixed_size_msgs_msg_dds__Image4k___copyIn(c_base base, const struct fixed_size_msgs::msg::dds_::Image4k_ *from, struct _fixed_size_msgs_msg_dds__Image4k_ *to);
extern  void __fixed_size_msgs_msg_dds__Image4k___copyOut(const void *_from, void *_to);
struct _fixed_size_msgs_msg_dds__Image4k_ {
    c_longlong timestamp_;
    c_octet is_bigendian_;
    c_ulong step_;
    c_octet data_[24883200];
};

#undef OS_API
#endif
