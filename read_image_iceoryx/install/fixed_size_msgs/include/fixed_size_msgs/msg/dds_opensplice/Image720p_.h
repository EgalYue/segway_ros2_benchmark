#ifndef _H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p__H_
#define _H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Image720p_Constants
            {
                const ::DDS::ULong HEIGHT_ = 720U;

                const ::DDS::ULong WIDTH_ = 1280U;

                const ::DDS::ULong CHANNELS_ = 3U;

            }

            struct  Image720p_
            {
                struct _data__uniq_{};
                typedef ::DDS::Octet _data__slice;
                typedef ::DDS::Octet _data_[2764800];
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

            typedef DDS_DCPSStruct_var<Image720p_> Image720p__var;
            typedef Image720p_& Image720p__out;

        }

    }

}

#endif /* _H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p__H_ */
