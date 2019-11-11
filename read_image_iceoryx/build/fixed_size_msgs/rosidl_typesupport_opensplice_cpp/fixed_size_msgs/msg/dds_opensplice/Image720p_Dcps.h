#ifndef _H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p_DCPS_H_
#define _H_2795FE69AAAB4CF6F43A5F27D40D11E2_Image720p_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Image720p_.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Image720p_TypeSupportInterface;

            typedef Image720p_TypeSupportInterface * Image720p_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Image720p_TypeSupportInterface> Image720p_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Image720p_TypeSupportInterface> Image720p_TypeSupportInterface_out;


            class Image720p_DataWriter;

            typedef Image720p_DataWriter * Image720p_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Image720p_DataWriter> Image720p_DataWriter_var;
            typedef DDS_DCPSInterface_out < Image720p_DataWriter> Image720p_DataWriter_out;


            class Image720p_DataReader;

            typedef Image720p_DataReader * Image720p_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Image720p_DataReader> Image720p_DataReader_var;
            typedef DDS_DCPSInterface_out < Image720p_DataReader> Image720p_DataReader_out;


            class Image720p_DataReaderView;

            typedef Image720p_DataReaderView * Image720p_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Image720p_DataReaderView> Image720p_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Image720p_DataReaderView> Image720p_DataReaderView_out;

            struct Image720p_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Image720p_, struct Image720p_Seq_uniq_> Image720p_Seq;
            typedef DDS_DCPSSequence_var < Image720p_Seq> Image720p_Seq_var;
            typedef DDS_DCPSSequence_out < Image720p_Seq> Image720p_Seq_out;

            class  Image720p_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Image720p_TypeSupportInterface_ptr _ptr_type;
                typedef Image720p_TypeSupportInterface_var _var_type;

                static Image720p_TypeSupportInterface_ptr _duplicate (Image720p_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image720p_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Image720p_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image720p_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Image720p_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Image720p_TypeSupportInterface () {};
                ~Image720p_TypeSupportInterface () {};
            private:
                Image720p_TypeSupportInterface (const Image720p_TypeSupportInterface &);
                Image720p_TypeSupportInterface & operator = (const Image720p_TypeSupportInterface &);
            };

            class  Image720p_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Image720p_DataWriter_ptr _ptr_type;
                typedef Image720p_DataWriter_var _var_type;

                static Image720p_DataWriter_ptr _duplicate (Image720p_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image720p_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Image720p_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image720p_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Image720p_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Image720p_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Image720p_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Image720p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Image720p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Image720p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Image720p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Image720p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Image720p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Image720p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Image720p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Image720p_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image720p_& instance_data) = 0;

            protected:
                Image720p_DataWriter () {};
                ~Image720p_DataWriter () {};
            private:
                Image720p_DataWriter (const Image720p_DataWriter &);
                Image720p_DataWriter & operator = (const Image720p_DataWriter &);
            };

            class  Image720p_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Image720p_DataReader_ptr _ptr_type;
                typedef Image720p_DataReader_var _var_type;

                static Image720p_DataReader_ptr _duplicate (Image720p_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image720p_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Image720p_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image720p_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Image720p_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image720p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image720p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image720p_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image720p_& instance) = 0;

            protected:
                Image720p_DataReader () {};
                ~Image720p_DataReader () {};
            private:
                Image720p_DataReader (const Image720p_DataReader &);
                Image720p_DataReader & operator = (const Image720p_DataReader &);
            };

            class  Image720p_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Image720p_DataReaderView_ptr _ptr_type;
                typedef Image720p_DataReaderView_var _var_type;

                static Image720p_DataReaderView_ptr _duplicate (Image720p_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image720p_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Image720p_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image720p_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Image720p_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image720p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image720p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image720p_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image720p_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image720p_& instance) = 0;

            protected:
                Image720p_DataReaderView () {};
                ~Image720p_DataReaderView () {};
            private:
                Image720p_DataReaderView (const Image720p_DataReaderView &);
                Image720p_DataReaderView & operator = (const Image720p_DataReaderView &);
            };
        }

    }

}

#endif
