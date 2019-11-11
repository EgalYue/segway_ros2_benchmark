#ifndef _H_8E00508DEAD8F44484116AB7193ACB7D_Image4k_DCPS_H_
#define _H_8E00508DEAD8F44484116AB7193ACB7D_Image4k_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Image4k_.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Image4k_TypeSupportInterface;

            typedef Image4k_TypeSupportInterface * Image4k_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Image4k_TypeSupportInterface> Image4k_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Image4k_TypeSupportInterface> Image4k_TypeSupportInterface_out;


            class Image4k_DataWriter;

            typedef Image4k_DataWriter * Image4k_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Image4k_DataWriter> Image4k_DataWriter_var;
            typedef DDS_DCPSInterface_out < Image4k_DataWriter> Image4k_DataWriter_out;


            class Image4k_DataReader;

            typedef Image4k_DataReader * Image4k_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Image4k_DataReader> Image4k_DataReader_var;
            typedef DDS_DCPSInterface_out < Image4k_DataReader> Image4k_DataReader_out;


            class Image4k_DataReaderView;

            typedef Image4k_DataReaderView * Image4k_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Image4k_DataReaderView> Image4k_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Image4k_DataReaderView> Image4k_DataReaderView_out;

            struct Image4k_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Image4k_, struct Image4k_Seq_uniq_> Image4k_Seq;
            typedef DDS_DCPSSequence_var < Image4k_Seq> Image4k_Seq_var;
            typedef DDS_DCPSSequence_out < Image4k_Seq> Image4k_Seq_out;

            class  Image4k_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Image4k_TypeSupportInterface_ptr _ptr_type;
                typedef Image4k_TypeSupportInterface_var _var_type;

                static Image4k_TypeSupportInterface_ptr _duplicate (Image4k_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image4k_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Image4k_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image4k_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Image4k_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Image4k_TypeSupportInterface () {};
                ~Image4k_TypeSupportInterface () {};
            private:
                Image4k_TypeSupportInterface (const Image4k_TypeSupportInterface &);
                Image4k_TypeSupportInterface & operator = (const Image4k_TypeSupportInterface &);
            };

            class  Image4k_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Image4k_DataWriter_ptr _ptr_type;
                typedef Image4k_DataWriter_var _var_type;

                static Image4k_DataWriter_ptr _duplicate (Image4k_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image4k_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Image4k_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image4k_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Image4k_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Image4k_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Image4k_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Image4k_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Image4k_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Image4k_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Image4k_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Image4k_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Image4k_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Image4k_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Image4k_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Image4k_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image4k_& instance_data) = 0;

            protected:
                Image4k_DataWriter () {};
                ~Image4k_DataWriter () {};
            private:
                Image4k_DataWriter (const Image4k_DataWriter &);
                Image4k_DataWriter & operator = (const Image4k_DataWriter &);
            };

            class  Image4k_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Image4k_DataReader_ptr _ptr_type;
                typedef Image4k_DataReader_var _var_type;

                static Image4k_DataReader_ptr _duplicate (Image4k_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image4k_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Image4k_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image4k_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Image4k_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image4k_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image4k_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image4k_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image4k_& instance) = 0;

            protected:
                Image4k_DataReader () {};
                ~Image4k_DataReader () {};
            private:
                Image4k_DataReader (const Image4k_DataReader &);
                Image4k_DataReader & operator = (const Image4k_DataReader &);
            };

            class  Image4k_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Image4k_DataReaderView_ptr _ptr_type;
                typedef Image4k_DataReaderView_var _var_type;

                static Image4k_DataReaderView_ptr _duplicate (Image4k_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Image4k_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Image4k_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Image4k_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Image4k_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Image4k_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Image4k_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Image4k_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Image4k_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Image4k_& instance) = 0;

            protected:
                Image4k_DataReaderView () {};
                ~Image4k_DataReaderView () {};
            private:
                Image4k_DataReaderView (const Image4k_DataReaderView &);
                Image4k_DataReaderView & operator = (const Image4k_DataReaderView &);
            };
        }

    }

}

#endif
