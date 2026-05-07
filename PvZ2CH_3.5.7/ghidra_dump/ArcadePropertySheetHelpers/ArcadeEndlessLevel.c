// Class: ArcadePropertySheetHelpers::ArcadeEndlessLevel


/* ArcadePropertySheetHelpers::ArcadeEndlessLevel::~ArcadeEndlessLevel() */

void __thiscall
ArcadePropertySheetHelpers::ArcadeEndlessLevel::~ArcadeEndlessLevel(ArcadeEndlessLevel *this)

{
  std::string::~string((string *)(this + 8));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)this);
  return;
}


/* ArcadePropertySheetHelpers::ArcadeEndlessLevel::ArcadeEndlessLevel(ArcadePropertySheetHelpers::ArcadeEndlessLevel
   const&) */

void __thiscall
ArcadePropertySheetHelpers::ArcadeEndlessLevel::ArcadeEndlessLevel
          (ArcadeEndlessLevel *this,ArcadeEndlessLevel *param_1)

{
  TGABagData::TGABagData((TGABagData *)this,(TGABagData *)param_1);
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* ArcadePropertySheetHelpers::ArcadeEndlessLevel::ArcadeEndlessLevel() */

void __thiscall
ArcadePropertySheetHelpers::ArcadeEndlessLevel::ArcadeEndlessLevel(ArcadeEndlessLevel *this)

{
  PakFileDesc::PakFileDesc((PakFileDesc *)this);
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 1;
  return;
}


/* ArcadePropertySheetHelpers::ArcadeEndlessLevel::TEMPNAMEPLACEHOLDERVALUE(ArcadePropertySheetHelpers::ArcadeEndlessLevel
   const&) */

ArcadeEndlessLevel * __thiscall
ArcadePropertySheetHelpers::ArcadeEndlessLevel::operator=
          (ArcadeEndlessLevel *this,ArcadeEndlessLevel *param_1)

{
  ArcadeLevel::operator=((ArcadeLevel *)this,(ArcadeLevel *)param_1);
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


/* ArcadePropertySheetHelpers::ArcadeEndlessLevel::ArcadeEndlessLevel(ArcadePropertySheetHelpers::ArcadeEndlessLevel&&)
    */

void __thiscall
ArcadePropertySheetHelpers::ArcadeEndlessLevel::ArcadeEndlessLevel
          (ArcadeEndlessLevel *this,ArcadeEndlessLevel *param_1)

{
  ArcadeLevel::ArcadeLevel((ArcadeLevel *)this,(ArcadeLevel *)param_1);
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

