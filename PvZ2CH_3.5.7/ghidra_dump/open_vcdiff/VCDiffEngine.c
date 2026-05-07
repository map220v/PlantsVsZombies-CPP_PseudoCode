// Class: open_vcdiff::VCDiffEngine


/* open_vcdiff::VCDiffEngine::ShouldGenerateCopyInstructionForMatchOfSize(unsigned long) */

bool open_vcdiff::VCDiffEngine::ShouldGenerateCopyInstructionForMatchOfSize(ulong param_1)

{
  return 0x1f < param_1;
}


/* open_vcdiff::VCDiffEngine::VCDiffEngine(char const*, unsigned long) */

void __thiscall
open_vcdiff::VCDiffEngine::VCDiffEngine(VCDiffEngine *this,char *param_1,ulong param_2)

{
  void *__dest;
  
  if (param_2 == 0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 **)this = &DAT_055923fe;
    return;
  }
  __dest = operator_new__(param_2);
  *(ulong *)(this + 8) = param_2;
  *(void **)this = __dest;
  *(undefined8 *)(this + 0x10) = 0;
  memcpy(__dest,param_1,param_2);
  return;
}


/* open_vcdiff::VCDiffEngine::~VCDiffEngine() */

void __thiscall open_vcdiff::VCDiffEngine::~VCDiffEngine(VCDiffEngine *this)

{
  BlockHash *this_00;
  
  this_00 = *(BlockHash **)(this + 0x10);
  if (this_00 != (BlockHash *)0x0) {
    BlockHash::~BlockHash(this_00);
    AK::FreeHook(this_00);
  }
  if ((*(long *)(this + 8) != 0) && (*(ColourFit **)this != (ColourFit *)0x0)) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)this);
    return;
  }
  return;
}


/* open_vcdiff::VCDiffEngine::Init() */

undefined8 __thiscall open_vcdiff::VCDiffEngine::Init(VCDiffEngine *this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  
  if (*(long *)(this + 0x10) == 0) {
    uVar2 = FUN_053f5894(*(undefined8 *)(this + 8));
    lVar3 = BlockHash::CreateDictionaryHash(*(char **)this,uVar2);
    *(long *)(this + 0x10) = lVar3;
    if (lVar3 != 0) {
      RollingHash<16>::Init();
      return 1;
    }
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar4 = "Creation of dictionary hash failed";
  }
  else {
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar4 = "Init() called twice for same VCDiffEngine object";
  }
  uVar1 = FUN_054603b8(uVar1,pcVar4);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  CheckFatalError();
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void open_vcdiff::VCDiffEngine::EncodeInternal<true>(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*, open_vcdiff::CodeTableWriterInterface*) const */

void __thiscall
open_vcdiff::VCDiffEngine::EncodeInternal<true>
          (VCDiffEngine *this,char *param_1,ulong param_2,OutputStringInterface *param_3,
          CodeTableWriterInterface *param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  BlockHash *this_00;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) == 0) {
    uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar6 = "Internal error: VCDiffEngine::Encode() called before VCDiffEngine::Init()";
  }
  else {
    if (param_2 == 0) goto LAB_053f6004;
    if (param_2 < 0x10) {
      FUN_053f5898(param_1,param_2,param_4);
      FUN_053f58cc(param_2,param_3,param_4);
      goto LAB_053f6004;
    }
    RollingHash<16>::RollingHash();
    uVar3 = FUN_053f5894(*(undefined8 *)(this + 8));
    this_00 = (BlockHash *)BlockHash::CreateTargetHash(param_1,param_2,uVar3);
    if (this_00 != (BlockHash *)0x0) {
      uVar2 = RollingHash<16>::Hash(param_1);
      pcVar7 = param_1;
      pcVar6 = param_1;
      pcVar8 = (char *)param_2;
      while( true ) {
        while (lVar4 = FUN_053f5a30(this + 0x10,uVar2,pcVar7,pcVar6,pcVar8,this_00,param_4),
              lVar4 == 0) {
          if (param_1 + (param_2 - 0x10) < pcVar7 + 1) goto LAB_053f616c;
          BlockHash::AddOneIndexHash(this_00,(int)pcVar7 - (int)param_1,uVar2);
          uVar2 = FUN_053f5f8c(uVar2,*pcVar7,pcVar7[0x10]);
          pcVar7 = pcVar7 + 1;
        }
        pcVar6 = pcVar6 + lVar4;
        if (param_1 + (param_2 - 0x10) < pcVar6) break;
        pcVar8 = param_1 + (param_2 - (long)pcVar6);
        uVar2 = RollingHash<16>::Hash(pcVar6);
        BlockHash::AddAllBlocksThroughIndex(this_00,(int)pcVar6 - (int)param_1);
        pcVar7 = pcVar6;
      }
      pcVar8 = param_1 + (param_2 - (long)pcVar6);
LAB_053f616c:
      FUN_053f5898(pcVar6,pcVar8,param_4);
      FUN_053f58cc(param_2,param_3,param_4);
      BlockHash::~BlockHash(this_00);
      AK::FreeHook(this_00);
      goto LAB_053f6004;
    }
    uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar6 = "Instantiation of target hash failed";
  }
  uVar5 = FUN_054603b8(uVar5,pcVar6);
  FUN_0545f9e8(uVar5,FUN_0545fdc8);
  CheckFatalError();
LAB_053f6004:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void open_vcdiff::VCDiffEngine::EncodeInternal<false>(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*, open_vcdiff::CodeTableWriterInterface*) const */

void __thiscall
open_vcdiff::VCDiffEngine::EncodeInternal<false>
          (VCDiffEngine *this,char *param_1,ulong param_2,OutputStringInterface *param_3,
          CodeTableWriterInterface *param_4)

{
  long lVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) == 0) {
    uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar5 = FUN_054603b8(uVar5,
                         "Internal error: VCDiffEngine::Encode() called before VCDiffEngine::Init()"
                        );
    FUN_0545f9e8(uVar5,FUN_0545fdc8);
    CheckFatalError();
  }
  else if (param_2 != 0) {
    pcVar3 = param_1;
    pcVar7 = (char *)param_2;
    if (0xf < param_2) {
      RollingHash<16>::RollingHash();
      uVar2 = RollingHash<16>::Hash(param_1);
      pcVar6 = param_1;
      while( true ) {
        while (lVar4 = FUN_053f5b78(this + 0x10,uVar2,pcVar6,pcVar3,pcVar7,param_4), lVar4 == 0) {
          if (param_1 + (param_2 - 0x10) < pcVar6 + 1) goto LAB_053f6258;
          uVar2 = FUN_053f5f8c(uVar2,*pcVar6,pcVar6[0x10]);
          pcVar6 = pcVar6 + 1;
        }
        pcVar3 = pcVar3 + lVar4;
        if (param_1 + (param_2 - 0x10) < pcVar3) break;
        pcVar7 = param_1 + (param_2 - (long)pcVar3);
        uVar2 = RollingHash<16>::Hash(pcVar3);
        pcVar6 = pcVar3;
      }
      pcVar7 = param_1 + (param_2 - (long)pcVar3);
    }
LAB_053f6258:
    FUN_053f5898(pcVar3,pcVar7,param_4);
    FUN_053f58cc(param_2,param_3,param_4);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* open_vcdiff::VCDiffEngine::Encode(char const*, unsigned long, bool,
   open_vcdiff::OutputStringInterface*, open_vcdiff::CodeTableWriterInterface*) const */

void __thiscall
open_vcdiff::VCDiffEngine::Encode
          (VCDiffEngine *this,char *param_1,ulong param_2,bool param_3,
          OutputStringInterface *param_4,CodeTableWriterInterface *param_5)

{
  if (!param_3) {
    EncodeInternal<false>(this,param_1,param_2,param_4,param_5);
    return;
  }
  EncodeInternal<true>(this,param_1,param_2,param_4,param_5);
  return;
}

