#ifndef _H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p_DCPS_H_
#define _H_72C481C55768C8BC4E0DAAAB5F63A5D1_Image1080p_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Image1080p_.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Image1080p_TypeSupportInterface;

            typedef Image1080p_TypeSupportInterface * Image1080p_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Image1080p_TypeSupportInterface> Image1080p_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Image1080p_TypeSupportInterface> Image1080p_TypeSupportInterface_out;


            class Image1080p_DataWriter;

            typedef Image1080p_DataWriter * Image1080p_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Image1080p_DataWriter> Image1080p_DataWriter_var;
            typedef DDS_DCPSInterface_out < Image1080p_DataWriter> Image1080p_DataWriter_out;


            class Image1080p_DataReader;

            typedef Image1080p_DataReader * Image1080p_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Image1080p_DataReader> Image1080p_DataReader_var;
            typedef DDS_DCPSInterface_out < Image1080p_DataReader> Image1080p_DataReader_out;


            class Image1080p_DataReaderView;

            typedef Image1080p_DataReaderView * Image1080p_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Image1080p_DataReaderView> Image1080p_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Image1080p_DataReaderView> Image1080p_DataReaderView_out;

            struct Image1080p_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Image1080p_, struct Image1080p_Seq_uniq_> Image1080p_Seq;
            typedef DDS_DCPSSequence_var < Image1080p_Seq> Image1080p_Seq_var;
            typedef DDS_DCPSSequence_out < Image1080p_Seq> Image1080p_Seq_out;

            class  Image1080p_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Image1080p_TypeSupportInterface_ptr _ptr_type;
                typedef Image1080p_TypeSupportInterface_var _var_type;

                static Image1080p_TypeSupportInterface_ptr _duplicate (Image1080p_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1080p_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Image1080p_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1080p_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1080p_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Image1080p_TypeSupportInterface () {};
                ~Image1080p_TypeSupportInterface () {};
            private:
                Image1080p_TypeSupportInterface (const Image1080p_TypeSupportInterface &);
                Image1080p_TypeSupportInterface & operator = (const Image1080p_TypeSupportInterface &);
            };

            class  Image1080p_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Image1080p_DataWriter_ptr _ptr_type;
                typedef Image1080p_DataWriter_var _var_type;

                static Image1080p_DataWriter_ptr _duplicate (Image1080p_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1080p_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Image1080p_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1080p_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1080p_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Image1080p_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Image1080p_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Image1080p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Image1080p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Image1080p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Image1080p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Image1080p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Image1080p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Image1080p_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Image1080p_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Image1080p_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image1080p_& instance_data) = 0;

            protected:
                Image1080p_DataWriter () {};
                ~Image1080p_DataWriter () {};
            private:
                Image1080p_DataWriter (const Image1080p_DataWriter &);
                Image1080p_DataWriter & operator = (const Image1080p_DataWriter &);
            };

            class  Image1080p_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Image1080p_DataReader_ptr _ptr_type;
                typedef Image1080p_DataReader_var _var_type;

                static Image1080p_DataReader_ptr _duplicate (Image1080p_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1080p_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Image1080p_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1080p_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1080p_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image1080p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image1080p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image1080p_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image1080p_& instance) = 0;

            protected:
                Image1080p_DataReader () {};
                ~Image1080p_DataReader () {};
            private:
                Image1080p_DataReader (const Image1080p_DataReader &);
                Image1080p_DataReader & operator = (const Image1080p_DataReader &);
            };

            class  Image1080p_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Image1080p_DataReaderView_ptr _ptr_type;
                typedef Image1080p_DataReaderView_var _var_type;

                static Image1080p_DataReaderView_ptr _duplicate (Image1080p_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image1080p_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Image1080p_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image1080p_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Image1080p_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image1080p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image1080p_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image1080p_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image1080p_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image1080p_& instance) = 0;

            protected:
                Image1080p_DataReaderView () {};
                ~Image1080p_DataReaderView () {};
            private:
                Image1080p_DataReaderView (const Image1080p_DataReaderView &);
                Image1080p_DataReaderView & operator = (const Image1080p_DataReaderView &);
            };
        }

    }

}

#endif
