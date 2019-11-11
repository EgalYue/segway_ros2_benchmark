#ifndef _H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p__H_
#define _H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Image1080p_Constants
            {
                const ::DDS::ULong HEIGHT_ = 1080U;

                const ::DDS::ULong WIDTH_ = 1920U;

                const ::DDS::ULong CHANNELS_ = 3U;

            }

            struct  Image1080p_
            {
                struct _data__uniq_{};
                typedef ::DDS::Octet _data__slice;
                typedef ::DDS::Octet _data_[6220800];
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

            typedef DDS_DCPSStruct_var<Image1080p_> Image1080p__var;
            typedef Image1080p_& Image1080p__out;

        }

    }

}

#endif /* _H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p__H_ */
