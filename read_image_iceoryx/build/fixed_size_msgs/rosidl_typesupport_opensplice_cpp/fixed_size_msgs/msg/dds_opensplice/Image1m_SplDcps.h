#ifndef H_F656788DBE215D0DD299EAED9D7804F3_Image1m_SPLTYPES_H
#define H_F656788DBE215D0DD299EAED9D7804F3_Image1m_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Image1m_.h"


extern c_metaObject __Image1m__fixed_size_msgs__load (c_base base);

extern c_metaObject __Image1m__fixed_size_msgs_msg__load (c_base base);

extern c_metaObject __Image1m__fixed_size_msgs_msg_dds___load (c_base base);

extern c_metaObject __Image1m__fixed_size_msgs_msg_dds__Image1m_Constants__load (c_base base);

extern const char *fixed_size_msgs_msg_dds__Image1m__metaDescriptor[];
extern const int fixed_size_msgs_msg_dds__Image1m__metaDescriptorArrLength;
extern const int fixed_size_msgs_msg_dds__Image1m__metaDescriptorLength;
extern c_metaObject __fixed_size_msgs_msg_dds__Image1m___load (c_base base);
struct _fixed_size_msgs_msg_dds__Image1m_ ;
extern  v_copyin_result __fixed_size_msgs_msg_dds__Image1m___copyIn(c_base base, const struct fixed_size_msgs::msg::dds_::Image1m_ *from, struct _fixed_size_msgs_msg_dds__Image1m_ *to);
extern  void __fixed_size_msgs_msg_dds__Image1m___copyOut(const void *_from, void *_to);
struct _fixed_size_msgs_msg_dds__Image1m_ {
    c_longlong timestamp_;
    c_octet is_bigendian_;
    c_ulong step_;
    c_octet data_[19208496];
};

#undef OS_API
#endif
