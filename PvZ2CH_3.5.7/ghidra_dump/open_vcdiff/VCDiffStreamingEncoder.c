// Class: open_vcdiff::VCDiffStreamingEncoder


/* open_vcdiff::VCDiffStreamingEncoder::~VCDiffStreamingEncoder() */

void __thiscall
open_vcdiff::VCDiffStreamingEncoder::~VCDiffStreamingEncoder(VCDiffStreamingEncoder *this)

{
  if (*(VCDiffStreamingEncoderImpl **)this != (VCDiffStreamingEncoderImpl *)0x0) {
    VCDiffStreamingEncoderImpl::~VCDiffStreamingEncoderImpl(*(VCDiffStreamingEncoderImpl **)this);
    AK::FreeHook(*(void **)this);
    return;
  }
  return;
}


/* open_vcdiff::VCDiffStreamingEncoder::VCDiffStreamingEncoder(open_vcdiff::HashedDictionary const*,
   int, bool) */

void __thiscall
open_vcdiff::VCDiffStreamingEncoder::VCDiffStreamingEncoder
          (VCDiffStreamingEncoder *this,HashedDictionary *param_1,int param_2,bool param_3)

{
  VCDiffStreamingEncoderImpl *this_00;
  
  this_00 = ::operator_new(0x18);
  VCDiffStreamingEncoderImpl::VCDiffStreamingEncoderImpl(this_00,param_1,param_2,param_3);
  *(VCDiffStreamingEncoderImpl **)this = this_00;
  return;
}


/* open_vcdiff::VCDiffStreamingEncoder::StartEncodingToInterface(open_vcdiff::OutputStringInterface*)
    */

void __thiscall
open_vcdiff::VCDiffStreamingEncoder::StartEncodingToInterface
          (VCDiffStreamingEncoder *this,OutputStringInterface *param_1)

{
  VCDiffStreamingEncoderImpl::StartEncoding(*(VCDiffStreamingEncoderImpl **)this,param_1);
  return;
}


/* open_vcdiff::VCDiffStreamingEncoder::FinishEncodingToInterface(open_vcdiff::OutputStringInterface*)
    */

void __thiscall
open_vcdiff::VCDiffStreamingEncoder::FinishEncodingToInterface
          (VCDiffStreamingEncoder *this,OutputStringInterface *param_1)

{
  VCDiffStreamingEncoderImpl::FinishEncoding(*(VCDiffStreamingEncoderImpl **)this,param_1);
  return;
}


/* open_vcdiff::VCDiffStreamingEncoder::EncodeChunkToInterface(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::VCDiffStreamingEncoder::EncodeChunkToInterface
          (VCDiffStreamingEncoder *this,char *param_1,ulong param_2,OutputStringInterface *param_3)

{
  VCDiffStreamingEncoderImpl::EncodeChunk
            (*(VCDiffStreamingEncoderImpl **)this,param_1,param_2,param_3);
  return;
}

