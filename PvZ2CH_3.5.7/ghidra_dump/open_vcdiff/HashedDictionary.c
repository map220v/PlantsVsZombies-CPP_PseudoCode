// Class: open_vcdiff::HashedDictionary


/* open_vcdiff::HashedDictionary::HashedDictionary(char const*, unsigned long) */

void __thiscall
open_vcdiff::HashedDictionary::HashedDictionary(HashedDictionary *this,char *param_1,ulong param_2)

{
  VCDiffEngine *this_00;
  
  this_00 = ::operator_new(0x18);
  VCDiffEngine::VCDiffEngine(this_00,param_1,param_2);
  *(VCDiffEngine **)this = this_00;
  return;
}


/* open_vcdiff::HashedDictionary::~HashedDictionary() */

void __thiscall open_vcdiff::HashedDictionary::~HashedDictionary(HashedDictionary *this)

{
  VCDiffEngine *this_00;
  
  this_00 = *(VCDiffEngine **)this;
  if (this_00 != (VCDiffEngine *)0x0) {
    VCDiffEngine::~VCDiffEngine(this_00);
    AK::FreeHook(this_00);
    return;
  }
  return;
}


/* open_vcdiff::HashedDictionary::Init() */

void __thiscall open_vcdiff::HashedDictionary::Init(HashedDictionary *this)

{
  VCDiffEngine::Init(*(VCDiffEngine **)this);
  return;
}

