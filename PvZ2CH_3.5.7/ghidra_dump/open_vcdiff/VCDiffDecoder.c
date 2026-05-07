// Class: open_vcdiff::VCDiffDecoder


/* open_vcdiff::VCDiffDecoder::DecodeToInterface(char const*, unsigned long, std::string const&,
   open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::VCDiffDecoder::DecodeToInterface
          (VCDiffDecoder *this,char *param_1,ulong param_2,string *param_3,
          OutputStringInterface *param_4)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  
  (**(code **)(*(long *)param_4 + 0x18))(param_4);
  VCDiffStreamingDecoder::StartDecoding((VCDiffStreamingDecoder *)this,param_1,param_2);
  pcVar2 = (char *)FUN_054742a4(param_3);
  uVar3 = FUN_05474178(param_3);
  cVar1 = VCDiffStreamingDecoder::DecodeChunkToInterface
                    ((VCDiffStreamingDecoder *)this,pcVar2,uVar3,param_4);
  if (cVar1 == '\0') {
    return;
  }
  VCDiffStreamingDecoder::FinishDecoding((VCDiffStreamingDecoder *)this);
  return;
}

