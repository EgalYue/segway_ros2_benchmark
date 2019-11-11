#include "Image720p_.h"
#include "Image720p_Dcps.h"

namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < fixed_size_msgs::msg::dds_::Image720p_, struct Image720p_Seq_uniq_>;
#endif

const char * fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_local_id = "IDL:::fixed_size_msgs::msg::dds_/Image720p_TypeSupportInterface:1.0";

fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_duplicate (fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr result;
    result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * fixed_size_msgs::msg::dds_::Image720p_DataWriter::_local_id = "IDL:::fixed_size_msgs::msg::dds_/Image720p_DataWriter:1.0";

fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr fixed_size_msgs::msg::dds_::Image720p_DataWriter::_duplicate (fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean fixed_size_msgs::msg::dds_::Image720p_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, fixed_size_msgs::msg::dds_::Image720p_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr fixed_size_msgs::msg::dds_::Image720p_DataWriter::_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr result = NULL;
    if (p && p->_is_a (fixed_size_msgs::msg::dds_::Image720p_DataWriter::_local_id))
    {
        result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr fixed_size_msgs::msg::dds_::Image720p_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr result;
    result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * fixed_size_msgs::msg::dds_::Image720p_DataReader::_local_id = "IDL:::fixed_size_msgs::msg::dds_/Image720p_DataReader:1.0";

fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr fixed_size_msgs::msg::dds_::Image720p_DataReader::_duplicate (fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean fixed_size_msgs::msg::dds_::Image720p_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, fixed_size_msgs::msg::dds_::Image720p_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr fixed_size_msgs::msg::dds_::Image720p_DataReader::_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr result = NULL;
    if (p && p->_is_a (fixed_size_msgs::msg::dds_::Image720p_DataReader::_local_id))
    {
        result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr fixed_size_msgs::msg::dds_::Image720p_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr result;
    result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_local_id = "IDL:::fixed_size_msgs::msg::dds_/Image720p_DataReaderView:1.0";

fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_duplicate (fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_local_id))
    {
        result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr fixed_size_msgs::msg::dds_::Image720p_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr result;
    result = dynamic_cast < fixed_size_msgs::msg::dds_::Image720p_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

