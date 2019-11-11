#ifndef H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p_SPLTYPES_H
#define H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Image1080p_.h"


extern c_metaObject __Image1080p__fixed_size_msgs__load (c_base base);

extern c_metaObject __Image1080p__fixed_size_msgs_msg__load (c_base base);

extern c_metaObject __Image1080p__fixed_size_msgs_msg_dds___load (c_base base);

extern c_metaObject __Image1080p__fixed_size_msgs_msg_dds__Image1080p_Constants__load (c_base base);

extern const char *fixed_size_msgs_msg_dds__Image1080p__metaDescriptor[];
extern const int fixed_size_msgs_msg_dds__Image1080p__metaDescriptorArrLength;
extern const int fixed_size_msgs_msg_dds__Image1080p__metaDescriptorLength;
extern c_metaObject __fixed_size_msgs_msg_dds__Image1080p___load (c_base base);
struct _fixed_size_msgs_msg_dds__Image1080p_ ;
extern  v_copyin_result __fixed_size_msgs_msg_dds__Image1080p___copyIn(c_base base, const struct fixed_size_msgs::msg::dds_::Image1080p_ *from, struct _fixed_size_msgs_msg_dds__Image1080p_ *to);
extern  void __fixed_size_msgs_msg_dds__Image1080p___copyOut(const void *_from, void *_to);
struct _fixed_size_msgs_msg_dds__Image1080p_ {
    c_longlong timestamp_;
    c_octet is_bigendian_;
    c_ulong step_;
    c_octet data_[6220800];
};

#undef OS_API
#endif
