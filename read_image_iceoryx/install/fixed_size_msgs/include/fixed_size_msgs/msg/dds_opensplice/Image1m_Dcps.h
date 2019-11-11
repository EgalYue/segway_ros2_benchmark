#ifndef _H_F656788DBE215D0DD299EAED9D7804F3_Image1m_DCPS_H_
#define _H_F656788DBE215D0DD299EAED9D7804F3_Image1m_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Image1m_.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Image1m_TypeSupportInterface;

            typedef Image1m_TypeSupportInterface * Image1m_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Image1m_TypeSupportInterface> Image1m_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Image1m_TypeSupportInterface> Image1m_TypeSupportInterface_out;


            class Image1m_DataWriter;

            typedef Image1m_DataWriter * Image1m_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Image1m_DataWriter> Image1m_DataWriter_var;
            typedef DDS_DCPSInterface_out < Image1m_DataWriter> Image1m_DataWriter_out;


            class Image1m_DataReader;

            typedef Image1m_DataReader * Image1m_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Image1m_DataReader> Image1m_DataReader_var;
            typedef DDS_DCPSInterface_out < Image1m_DataReader> Image1m_DataReader_out;


            class Image1m_DataReaderView;

            typedef Image1m_DataReaderView * Image1m_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Image1m_DataReaderView> Image1m_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Image1m_DataReaderView> Image1m_DataReaderView_out;

            struct Image1m_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Image1m_, struct Image1m_Seq_uniq_> Image1m_Seq;
            typedef DDS_DCPSSequence_var < Image1m_Seq> Image1m_Seq_var;
            typedef DDS_DCPSSequence_out < Image1m_Seq> Image1m_Seq_out;

            class  Image1m_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Image1m_TypeSupportInterface_ptr _ptr_type;
                typedef Image1m_TypeSupportInterface_var _var_type;

                static Image1m_TypeSupportInterface_ptr _duplicate (Image1m_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1m_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Image1m_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1m_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1m_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Image1m_TypeSupportInterface () {};
                ~Image1m_TypeSupportInterface () {};
            private:
                Image1m_TypeSupportInterface (const Image1m_TypeSupportInterface &);
                Image1m_TypeSupportInterface & operator = (const Image1m_TypeSupportInterface &);
            };

            class  Image1m_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Image1m_DataWriter_ptr _ptr_type;
                typedef Image1m_DataWriter_var _var_type;

                static Image1m_DataWriter_ptr _duplicate (Image1m_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1m_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Image1m_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1m_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1m_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Image1m_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Image1m_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Image1m_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Image1m_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Image1m_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Image1m_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Image1m_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Image1m_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Image1m_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Image1m_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Image1m_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image1m_& instance_data) = 0;

            protected:
                Image1m_DataWriter () {};
                ~Image1m_DataWriter () {};
            private:
                Image1m_DataWriter (const Image1m_DataWriter &);
                Image1m_DataWriter & operator = (const Image1m_DataWriter &);
            };

            class  Image1m_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Image1m_DataReader_ptr _ptr_type;
                typedef Image1m_DataReader_var _var_type;

                static Image1m_DataReader_ptr _duplicate (Image1m_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1m_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Image1m_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1m_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1m_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image1m_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image1m_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image1m_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image1m_& instance) = 0;

            protected:
                Image1m_DataReader () {};
                ~Image1m_DataReader () {};
            private:
                Image1m_DataReader (const Image1m_DataReader &);
                Image1m_DataReader & operator = (const Image1m_DataReader &);
            };

            class  Image1m_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Image1m_DataReaderView_ptr _ptr_type;
                typedef Image1m_DataReaderView_var _var_type;

                static Image1m_DataReaderView_ptr _duplicate (Image1m_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1m_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Image1m_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1m_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1m_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image1m_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image1m_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image1m_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image1m_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image1m_& instance) = 0;

            protected:
                Image1m_DataReaderView () {};
                ~Image1m_DataReaderView () {};
            private:
                Image1m_DataReaderView (const Image1m_DataReaderView &);
                Image1m_DataReaderView & operator = (const Image1m_DataReaderView &);
            };
        }

    }

}

#endif
