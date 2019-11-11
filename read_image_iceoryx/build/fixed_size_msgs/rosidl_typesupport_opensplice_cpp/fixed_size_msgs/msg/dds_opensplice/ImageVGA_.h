#ifndef _H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA__H_
#define _H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace ImageVGA_Constants
            {
                const ::DDS::ULong HEIGHT_ = 480U;

                const ::DDS::ULong WIDTH_ = 640U;

                const ::DDS::ULong CHANNELS_ = 3U;

            }

            struct  ImageVGA_
            {
                struct _data__uniq_{};
                typedef ::DDS::Octet _data__slice;
                typedef ::DDS::Octet _data_[921600];
                typedef DDS_DCPS_FArray_var< _data_, _data__slice, struct _data__uniq_ > _data__var;
                typedef _data_ _data__out;
                typedef DDS_DCPS_Array_forany< _data_, _data__slice, struct _data__uniq_ > _data__forany;
                static _data__slice *_data__alloc();
                static void _data__free(_data__slice *);
                static void _data__copy(_data__slice *to, const _data__slice *from);
                static _data__slice *_data__dup(const _data__slice *from);
                ::DDS::LongLong timestamp_;
                ::DDS::Octet is_bigendian_;
                ::DDS::ULong step_;
                _data_ data_;
            };

            typedef DDS_DCPSStruct_var<ImageVGA_> ImageVGA__var;
            typedef ImageVGA_& ImageVGA__out;

        }

    }

}

#endif /* _H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA__H_ */
