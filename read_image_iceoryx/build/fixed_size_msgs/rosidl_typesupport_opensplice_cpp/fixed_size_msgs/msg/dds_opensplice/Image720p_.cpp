#include "Image720p_.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< ::fixed_size_msgs::msg::dds_::Image720p_::_data_, ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice, struct ::fixed_size_msgs::msg::dds_::Image720p_::_data__uniq_>;
template class DDS_DCPS_Array_forany< ::fixed_size_msgs::msg::dds_::Image720p_::_data_, ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice, struct ::fixed_size_msgs::msg::dds_::Image720p_::_data__uniq_>;
#endif

template <>
::fixed_size_msgs::msg::dds_::Image720p_::_data__slice* DDS_DCPS_ArrayHelper < ::fixed_size_msgs::msg::dds_::Image720p_::_data_, ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice, ::fixed_size_msgs::msg::dds_::Image720p_::_data__uniq_>::alloc ()
{
    return ::fixed_size_msgs::msg::dds_::Image720p_::_data__alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < ::fixed_size_msgs::msg::dds_::Image720p_::_data_, ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice, ::fixed_size_msgs::msg::dds_::Image720p_::_data__uniq_>::copy (::fixed_size_msgs::msg::dds_::Image720p_::_data__slice *to, const ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice* from)
{
    ::fixed_size_msgs::msg::dds_::Image720p_::_data__copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < ::fixed_size_msgs::msg::dds_::Image720p_::_data_, ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice, ::fixed_size_msgs::msg::dds_::Image720p_::_data__uniq_>::free (::fixed_size_msgs::msg::dds_::Image720p_::_data__slice *ptr)
{
    ::fixed_size_msgs::msg::dds_::Image720p_::_data__free(ptr);
}

::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * ::fixed_size_msgs::msg::dds_::Image720p_::_data__alloc ()
{
    ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * ret = new ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice[2764800];
    return ret;
}

void ::fixed_size_msgs::msg::dds_::Image720p_::_data__free (::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * s)
{
    delete [] s;
}

void ::fixed_size_msgs::msg::dds_::Image720p_::_data__copy(::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * to, const ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * from)
{
    for (DDS::ULong i0 = 0; i0 < 2764800; i0++) {
        to[i0] = from[i0];
    }
}

::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * ::fixed_size_msgs::msg::dds_::Image720p_::_data__dup(const ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * from)
{
    ::fixed_size_msgs::msg::dds_::Image720p_::_data__slice * to = ::fixed_size_msgs::msg::dds_::Image720p_::_data__alloc ();
    ::fixed_size_msgs::msg::dds_::Image720p_::_data__copy (to, from);
    return to;
}

