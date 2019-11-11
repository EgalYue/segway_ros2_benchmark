#ifndef H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p_SPLTYPES_H
#define H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Image720p_.h"


extern c_metaObject __Image720p__fixed_size_msgs__load (c_base base);

extern c_metaObject __Image720p__fixed_size_msgs_msg__load (c_base base);

extern c_metaObject __Image720p__fixed_size_msgs_msg_dds___load (c_base base);

extern c_metaObject __Image720p__fixed_size_msgs_msg_dds__Image720p_Constants__load (c_base base);

extern const char *fixed_size_msgs_msg_dds__Image720p__metaDescriptor[];
extern const int fixed_size_msgs_msg_dds__Image720p__metaDescriptorArrLength;
extern const int fixed_size_msgs_msg_dds__Image720p__metaDescriptorLength;
extern c_metaObject __fixed_size_msgs_msg_dds__Image720p___load (c_base base);
struct _fixed_size_msgs_msg_dds__Image720p_ ;
extern  v_copyin_result __fixed_size_msgs_msg_dds__Image720p___copyIn(c_base base, const struct fixed_size_msgs::msg::dds_::Image720p_ *from, struct _fixed_size_msgs_msg_dds__Image720p_ *to);
extern  void __fixed_size_msgs_msg_dds__Image720p___copyOut(const void *_from, void *_to);
struct _fixed_size_msgs_msg_dds__Image720p_ {
    c_longlong timestamp_;
    c_octet is_bigendian_;
    c_ulong step_;
    c_octet data_[2764800];
};

#undef OS_API
#endif
