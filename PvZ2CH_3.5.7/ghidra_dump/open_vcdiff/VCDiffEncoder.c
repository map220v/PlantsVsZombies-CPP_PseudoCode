// Class: open_vcdiff::VCDiffEncoder


/* open_vcdiff::VCDiffEncoder::VCDiffEncoder(char const*, unsigned long) */

void __thiscall
open_vcdiff::VCDiffEncoder::VCDiffEncoder(VCDiffEncoder *this,char *param_1,ulong param_2)

{
  HashedDictionary::HashedDictionary((HashedDictionary *)this,param_1,param_2);
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (VCDiffEncoder)0x1;
  return;
}


/* open_vcdiff::VCDiffEncoder::~VCDiffEncoder() */

void __thiscall open_vcdiff::VCDiffEncoder::~VCDiffEncoder(VCDiffEncoder *this)

{
  VCDiffStreamingEncoder *this_00;
  
  this_00 = *(VCDiffStreamingEncoder **)(this + 8);
  if (this_00 != (VCDiffStreamingEncoder *)0x0) {
    VCDiffStreamingEncoder::~VCDiffStreamingEncoder(this_00);
    AK::FreeHook(this_00);
  }
  HashedDictionary::~HashedDictionary((HashedDictionary *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool open_vcdiff::VCDiffEncoder::Encode<std::string >(char const*, unsigned long, std::string*)
    */

bool __thiscall
open_vcdiff::VCDiffEncoder::Encode<std::string>
          (VCDiffEncoder *this,char *param_1,ulong param_2,string *param_3)

{
  undefined1 uVar1;
  OutputString<std::string> aOStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutputString<std::string>::OutputString(aOStack_18,param_3);
  uVar1 = EncodeToInterface(this,param_1,param_2,(OutputStringInterface *)aOStack_18);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::VCDiffEncoder::EncodeToInterface(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*) */

undefined8 __thiscall
open_vcdiff::VCDiffEncoder::EncodeToInterface
          (VCDiffEncoder *this,char *param_1,ulong param_2,OutputStringInterface *param_3)

{
  char cVar1;
  VCDiffStreamingEncoder *this_00;
  undefined8 uVar2;
  
  (**(code **)(*(long *)param_3 + 0x18))(param_3);
  this_00 = *(VCDiffStreamingEncoder **)(this + 8);
  if (this_00 == (VCDiffStreamingEncoder *)0x0) {
    cVar1 = HashedDictionary::Init((HashedDictionary *)this);
    if (cVar1 == '\0') {
      uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar2 = FUN_054603b8(uVar2,"Error initializing HashedDictionary");
      FUN_0545f9e8(uVar2,FUN_0545fdc8);
      CheckFatalError();
      return 0;
    }
    this_00 = ::operator_new(8);
    VCDiffStreamingEncoder::VCDiffStreamingEncoder
              (this_00,(HashedDictionary *)this,*(int *)(this + 0x10),(bool)this[0x14]);
    *(VCDiffStreamingEncoder **)(this + 8) = this_00;
  }
  cVar1 = VCDiffStreamingEncoder::StartEncodingToInterface(this_00,param_3);
  if ((cVar1 != '\0') &&
     (cVar1 = VCDiffStreamingEncoder::EncodeChunkToInterface
                        (*(VCDiffStreamingEncoder **)(this + 8),param_1,param_2,param_3),
     cVar1 != '\0')) {
    uVar2 = VCDiffStreamingEncoder::FinishEncodingToInterface
                      (*(VCDiffStreamingEncoder **)(this + 8),param_3);
    return uVar2;
  }
  return 0;
}

