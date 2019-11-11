#ifndef _H_F656788DBE215D0DD299EAED9D7804F3_Image1m__H_
#define _H_F656788DBE215D0DD299EAED9D7804F3_Image1m__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Image1m_Constants
            {
                const ::DDS::ULong HEIGHT_ = 2192U;

                const ::DDS::ULong WIDTH_ = 2921U;

                const ::DDS::ULong CHANNELS_ = 3U;

            }

            struct  Image1m_
            {
                struct _data__uniq_{};
                typedef ::DDS::Octet _data__slice;
                typedef ::DDS::Octet _data_[19208496];
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

            typedef DDS_DCPSStruct_var<Image1m_> Image1m__var;
            typedef Image1m_& Image1m__out;

        }

    }

}

#endif /* _H_F656788DBE215D0DD299EAED9D7804F3_Image1m__H_ */
