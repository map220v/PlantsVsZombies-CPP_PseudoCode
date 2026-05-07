// Class: open_vcdiff::VCDiffStreamingEncoderImpl


/* open_vcdiff::VCDiffStreamingEncoderImpl::~VCDiffStreamingEncoderImpl() */

void __thiscall
open_vcdiff::VCDiffStreamingEncoderImpl::~VCDiffStreamingEncoderImpl
          (VCDiffStreamingEncoderImpl *this)

{
  std::auto_ptr<open_vcdiff::CodeTableWriterInterface>::~auto_ptr
            ((auto_ptr<open_vcdiff::CodeTableWriterInterface> *)(this + 8));
  return;
}


/* open_vcdiff::VCDiffStreamingEncoderImpl::VCDiffStreamingEncoderImpl(open_vcdiff::HashedDictionary
   const*, int, bool) */

void __thiscall
open_vcdiff::VCDiffStreamingEncoderImpl::VCDiffStreamingEncoderImpl
          (VCDiffStreamingEncoderImpl *this,HashedDictionary *param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  VCDiffCodeTableWriter *this_00;
  JSONCodeTableWriter *this_01;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *this_02;
  
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
  this_02 = (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
             *)(this + 8);
  *(undefined8 *)this = uVar1;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(this_02,(rbtree_node *)0x0);
  *(int *)(this + 0x10) = param_2;
  this[0x14] = (VCDiffStreamingEncoderImpl)param_3;
  this[0x15] = (VCDiffStreamingEncoderImpl)0x0;
  if (((uint)param_2 >> 2 & 1) == 0) {
    this_00 = ::operator_new(0xa8);
    VCDiffCodeTableWriter::VCDiffCodeTableWriter(this_00,(bool)((byte)param_2 & 1));
    std::auto_ptr<open_vcdiff::CodeTableWriterInterface>::reset
              ((auto_ptr<open_vcdiff::CodeTableWriterInterface> *)this_02,
               (CodeTableWriterInterface *)this_00);
    return;
  }
  this_01 = ::operator_new(0x20);
  JSONCodeTableWriter::JSONCodeTableWriter(this_01);
  std::auto_ptr<open_vcdiff::CodeTableWriterInterface>::reset
            ((auto_ptr<open_vcdiff::CodeTableWriterInterface> *)this_02,
             (CodeTableWriterInterface *)this_01);
  return;
}


/* open_vcdiff::VCDiffStreamingEncoderImpl::StartEncoding(open_vcdiff::OutputStringInterface*) */

char __thiscall
open_vcdiff::VCDiffStreamingEncoderImpl::StartEncoding
          (VCDiffStreamingEncoderImpl *this,OutputStringInterface *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 8));
  uVar3 = FUN_05337198(*(undefined8 *)(*(long *)this + 8));
  cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  if (cVar1 != '\0') {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 8));
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*(undefined4 *)(this + 0x10));
    this[0x15] = (VCDiffStreamingEncoderImpl)0x1;
    return cVar1;
  }
  uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar3 = FUN_054603b8(uVar3,"Internal error: Initialization of code table writer failed");
  FUN_0545f9e8(uVar3,FUN_0545fdc8);
  CheckFatalError();
  return '\0';
}


/* open_vcdiff::VCDiffStreamingEncoderImpl::FinishEncoding(open_vcdiff::OutputStringInterface*) */

VCDiffStreamingEncoderImpl __thiscall
open_vcdiff::VCDiffStreamingEncoderImpl::FinishEncoding
          (VCDiffStreamingEncoderImpl *this,OutputStringInterface *param_1)

{
  VCDiffStreamingEncoderImpl VVar1;
  long *plVar2;
  undefined8 uVar3;
  
  VVar1 = this[0x15];
  if (VVar1 != (VCDiffStreamingEncoderImpl)0x0) {
    this[0x15] = (VCDiffStreamingEncoderImpl)0x0;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 8));
    (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
    return VVar1;
  }
  uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar3 = FUN_054603b8(uVar3,"FinishEncoding called before StartEncoding");
  FUN_0545f9e8(uVar3,FUN_0545fdc8);
  CheckFatalError();
  return (VCDiffStreamingEncoderImpl)0x0;
}


/* open_vcdiff::VCDiffStreamingEncoderImpl::EncodeChunk(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*) */

VCDiffStreamingEncoderImpl __thiscall
open_vcdiff::VCDiffStreamingEncoderImpl::EncodeChunk
          (VCDiffStreamingEncoderImpl *this,char *param_1,ulong param_2,
          OutputStringInterface *param_3)

{
  VCDiffStreamingEncoderImpl VVar1;
  CodeTableWriterInterface *pCVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  VVar1 = this[0x15];
  if (VVar1 == (VCDiffStreamingEncoderImpl)0x0) {
    uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar4 = FUN_054603b8(uVar4,"EncodeChunk called before StartEncoding");
    FUN_0545f9e8(uVar4,FUN_0545fdc8);
    CheckFatalError();
    return (VCDiffStreamingEncoderImpl)0x0;
  }
  if ((*(uint *)(this + 0x10) >> 1 & 1) != 0) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 8));
    pcVar5 = *(code **)(*plVar3 + 0x38);
    uVar4 = ComputeAdler32(param_1,param_2);
    (*pcVar5)(plVar3,uVar4);
  }
  pCVar2 = (CodeTableWriterInterface *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 8));
  VCDiffEngine::Encode(*(VCDiffEngine **)this,param_1,param_2,(bool)this[0x14],param_3,pCVar2);
  return VVar1;
}

