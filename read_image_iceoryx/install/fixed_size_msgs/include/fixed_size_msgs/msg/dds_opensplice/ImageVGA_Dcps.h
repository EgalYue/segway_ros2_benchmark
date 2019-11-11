#ifndef _H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA_DCPS_H_
#define _H_335EB0D7EA48CF3A8851D626DDC75AFA_ImageVGA_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ImageVGA_.h"


namespace fixed_size_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ImageVGA_TypeSupportInterface;

            typedef ImageVGA_TypeSupportInterface * ImageVGA_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ImageVGA_TypeSupportInterface> ImageVGA_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ImageVGA_TypeSupportInterface> ImageVGA_TypeSupportInterface_out;


            class ImageVGA_DataWriter;

            typedef ImageVGA_DataWriter * ImageVGA_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ImageVGA_DataWriter> ImageVGA_DataWriter_var;
            typedef DDS_DCPSInterface_out < ImageVGA_DataWriter> ImageVGA_DataWriter_out;


            class ImageVGA_DataReader;

            typedef ImageVGA_DataReader * ImageVGA_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ImageVGA_DataReader> ImageVGA_DataReader_var;
            typedef DDS_DCPSInterface_out < ImageVGA_DataReader> ImageVGA_DataReader_out;


            class ImageVGA_DataReaderView;

            typedef ImageVGA_DataReaderView * ImageVGA_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ImageVGA_DataReaderView> ImageVGA_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ImageVGA_DataReaderView> ImageVGA_DataReaderView_out;

            struct ImageVGA_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ImageVGA_, struct ImageVGA_Seq_uniq_> ImageVGA_Seq;
            typedef DDS_DCPSSequence_var < ImageVGA_Seq> ImageVGA_Seq_var;
            typedef DDS_DCPSSequence_out < ImageVGA_Seq> ImageVGA_Seq_out;

            class  ImageVGA_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ImageVGA_TypeSupportInterface_ptr _ptr_type;
                typedef ImageVGA_TypeSupportInterface_var _var_type;

                static ImageVGA_TypeSupportInterface_ptr _duplicate (ImageVGA_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageVGA_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ImageVGA_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageVGA_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageVGA_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ImageVGA_TypeSupportInterface () {};
                ~ImageVGA_TypeSupportInterface () {};
            private:
                ImageVGA_TypeSupportInterface (const ImageVGA_TypeSupportInterface &);
                ImageVGA_TypeSupportInterface & operator = (const ImageVGA_TypeSupportInterface &);
            };

            class  ImageVGA_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ImageVGA_DataWriter_ptr _ptr_type;
                typedef ImageVGA_DataWriter_var _var_type;

                static ImageVGA_DataWriter_ptr _duplicate (ImageVGA_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageVGA_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ImageVGA_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageVGA_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageVGA_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ImageVGA_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ImageVGA_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ImageVGA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ImageVGA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ImageVGA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ImageVGA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ImageVGA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ImageVGA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ImageVGA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ImageVGA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ImageVGA_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ImageVGA_& instance_data) = 0;

            protected:
                ImageVGA_DataWriter () {};
                ~ImageVGA_DataWriter () {};
            private:
                ImageVGA_DataWriter (const ImageVGA_DataWriter &);
                ImageVGA_DataWriter & operator = (const ImageVGA_DataWriter &);
            };

            class  ImageVGA_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ImageVGA_DataReader_ptr _ptr_type;
                typedef ImageVGA_DataReader_var _var_type;

                static ImageVGA_DataReader_ptr _duplicate (ImageVGA_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageVGA_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ImageVGA_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageVGA_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageVGA_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ImageVGA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ImageVGA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ImageVGA_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ImageVGA_& instance) = 0;

            protected:
                ImageVGA_DataReader () {};
                ~ImageVGA_DataReader () {};
            private:
                ImageVGA_DataReader (const ImageVGA_DataReader &);
                ImageVGA_DataReader & operator = (const ImageVGA_DataReader &);
            };

            class  ImageVGA_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ImageVGA_DataReaderView_ptr _ptr_type;
                typedef ImageVGA_DataReaderView_var _var_type;

                static ImageVGA_DataReaderView_ptr _duplicate (ImageVGA_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ImageVGA_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ImageVGA_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ImageVGA_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ImageVGA_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ImageVGA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ImageVGA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ImageVGA_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ImageVGA_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ImageVGA_& instance) = 0;

            protected:
                ImageVGA_DataReaderView () {};
                ~ImageVGA_DataReaderView () {};
            private:
                ImageVGA_DataReaderView (const ImageVGA_DataReaderView &);
                ImageVGA_DataReaderView & operator = (const ImageVGA_DataReaderView &);
            };
        }

    }

}

#endif
