// Class: open_vcdiff::VCDiffStreamingDecoder


/* open_vcdiff::VCDiffStreamingDecoder::SetMaximumTargetFileSize(unsigned long) */

void open_vcdiff::VCDiffStreamingDecoder::SetMaximumTargetFileSize(ulong param_1)

{
  FUN_05334d74(*(long *)param_1 + 0xf8);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::SetMaximumTargetWindowSize(unsigned long) */

void open_vcdiff::VCDiffStreamingDecoder::SetMaximumTargetWindowSize(ulong param_1)

{
  FUN_05334e54(*(long *)param_1 + 0x100);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::SetAllowVcdTarget(bool) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoder::SetAllowVcdTarget(VCDiffStreamingDecoder *this,bool param_1)

{
  FUN_05334eec(*(undefined1 *)(*(long *)this + 0x118),*(long *)this + 0x119,param_1);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::VCDiffStreamingDecoder() */

void __thiscall
open_vcdiff::VCDiffStreamingDecoder::VCDiffStreamingDecoder(VCDiffStreamingDecoder *this)

{
  VCDiffStreamingDecoderImpl *this_00;
  
  this_00 = ::operator_new(0x120);
  VCDiffStreamingDecoderImpl::VCDiffStreamingDecoderImpl(this_00);
  *(VCDiffStreamingDecoderImpl **)this = this_00;
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::~VCDiffStreamingDecoder() */

void __thiscall
open_vcdiff::VCDiffStreamingDecoder::~VCDiffStreamingDecoder(VCDiffStreamingDecoder *this)

{
  if (*(VCDiffStreamingDecoderImpl **)this != (VCDiffStreamingDecoderImpl *)0x0) {
    VCDiffStreamingDecoderImpl::~VCDiffStreamingDecoderImpl(*(VCDiffStreamingDecoderImpl **)this);
    AK::FreeHook(*(void **)this);
    return;
  }
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::StartDecoding(char const*, unsigned long) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoder::StartDecoding
          (VCDiffStreamingDecoder *this,char *param_1,ulong param_2)

{
  VCDiffStreamingDecoderImpl::StartDecoding(*(VCDiffStreamingDecoderImpl **)this,param_1,param_2);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::FinishDecoding() */

void __thiscall open_vcdiff::VCDiffStreamingDecoder::FinishDecoding(VCDiffStreamingDecoder *this)

{
  VCDiffStreamingDecoderImpl::FinishDecoding(*(VCDiffStreamingDecoderImpl **)this);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoder::DecodeChunkToInterface(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoder::DecodeChunkToInterface
          (VCDiffStreamingDecoder *this,char *param_1,ulong param_2,OutputStringInterface *param_3)

{
  VCDiffStreamingDecoderImpl::DecodeChunk
            (*(VCDiffStreamingDecoderImpl **)this,param_1,param_2,param_3);
  return;
}

