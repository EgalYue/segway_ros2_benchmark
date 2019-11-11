#include "ImageVGA_SplDcps.h"
#include "ccpp_ImageVGA_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__fixed_size_msgs_msg_dds__ImageVGA___copyIn(
    c_base base,
    const struct ::fixed_size_msgs::msg::dds_::ImageVGA_ *from,
    struct _fixed_size_msgs_msg_dds__ImageVGA_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->timestamp_ = (c_longlong)from->timestamp_;
    to->is_bigendian_ = (c_octet)from->is_bigendian_;
    to->step_ = (c_ulong)from->step_;
    {
        typedef c_octet _DestType[921600];
        _DestType *dest = &to->data_;
        memcpy (dest, from->data_, sizeof (*dest));
    }
    return result;
}

void
__fixed_size_msgs_msg_dds__ImageVGA___copyOut(
    const void *_from,
    void *_to)
{
    const struct _fixed_size_msgs_msg_dds__ImageVGA_ *from = (const struct _fixed_size_msgs_msg_dds__ImageVGA_ *)_from;
    struct ::fixed_size_msgs::msg::dds_::ImageVGA_ *to = (struct ::fixed_size_msgs::msg::dds_::ImageVGA_ *)_to;
    to->timestamp_ = (::DDS::LongLong)from->timestamp_;
    to->is_bigendian_ = (::DDS::Octet)from->is_bigendian_;
    to->step_ = (::DDS::ULong)from->step_;
    {
        typedef c_octet _DestType[921600];
        const _DestType *src = &from->data_;

        memcpy ((void *)to->data_, src, sizeof (*src));
    }
}

