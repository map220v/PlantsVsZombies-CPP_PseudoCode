// Class: AdaptorNewPVPMatchingScreenConfig


/* AdaptorNewPVPMatchingScreenConfig::~AdaptorNewPVPMatchingScreenConfig() */

void __thiscall
AdaptorNewPVPMatchingScreenConfig::~AdaptorNewPVPMatchingScreenConfig
          (AdaptorNewPVPMatchingScreenConfig *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  FUN_05476c50(this + 8);
  FUN_05476c50(this);
  return;
}


/* AdaptorNewPVPMatchingScreenConfig::AdaptorNewPVPMatchingScreenConfig() */

void __thiscall
AdaptorNewPVPMatchingScreenConfig::AdaptorNewPVPMatchingScreenConfig
          (AdaptorNewPVPMatchingScreenConfig *this)

{
  FUN_05476574();
  FUN_05476574(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* AdaptorNewPVPMatchingScreenConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorNewPVPMatchingScreenConfig
   const&) */

AdaptorNewPVPMatchingScreenConfig * __thiscall
AdaptorNewPVPMatchingScreenConfig::operator=
          (AdaptorNewPVPMatchingScreenConfig *this,AdaptorNewPVPMatchingScreenConfig *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05477b9c();
  thunk_FUN_05477b9c(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}

