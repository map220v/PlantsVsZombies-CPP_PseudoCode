// Class: FishingZombieGroup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingZombieGroup::HasSpecialZombie(int) const */

void __thiscall FishingZombieGroup::HasSpecialZombie(FishingZombieGroup *this,int param_1)

{
  bool bVar1;
  FishingZombieInfo *pFVar2;
  undefined8 local_38;
  undefined8 local_30;
  FishingZombieInfo aFStack_28 [28];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = FUN_047ae29c(*(undefined8 *)(this + 0x10));
  local_30 = FUN_047ae2ec(*(undefined8 *)(this + 0x18));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
LAB_047ae3d4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    pFVar2 = (FishingZombieInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    FishingZombieInfo::FishingZombieInfo(aFStack_28,pFVar2);
    if (local_c == param_1) {
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_28);
      goto LAB_047ae3d4;
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
  } while( true );
}


/* FishingZombieGroup::FishingZombieGroup() */

void __thiscall FishingZombieGroup::FishingZombieGroup(FishingZombieGroup *this)

{
  undefined4 uVar1;
  
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x42c80000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* FishingZombieGroup::~FishingZombieGroup() */

void __thiscall FishingZombieGroup::~FishingZombieGroup(FishingZombieGroup *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::~vector
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* FishingZombieGroup::FishingZombieGroup(FishingZombieGroup const&) */

void __thiscall
FishingZombieGroup::FishingZombieGroup(FishingZombieGroup *this,FishingZombieGroup *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::vector
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* FishingZombieGroup::FishingZombieGroup(FishingZombieGroup&&) */

void __thiscall
FishingZombieGroup::FishingZombieGroup(FishingZombieGroup *this,FishingZombieGroup *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


void __thiscall FishingZombieGroup::~FishingZombieGroup(FishingZombieGroup *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::~vector
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


void __thiscall FishingZombieGroup::~FishingZombieGroup(FishingZombieGroup *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::~vector
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


void __thiscall FishingZombieGroup::~FishingZombieGroup(FishingZombieGroup *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::~vector
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* FishingZombieGroup::TEMPNAMEPLACEHOLDERVALUE(FishingZombieGroup&&) */

FishingZombieGroup * __thiscall
FishingZombieGroup::operator=(FishingZombieGroup *this,FishingZombieGroup *param_1)

{
  undefined4 uVar1;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::operator=
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x40) = uVar1;
  return this;
}


/* FishingZombieGroup::TEMPNAMEPLACEHOLDERVALUE(FishingZombieGroup const&) */

FishingZombieGroup * __thiscall
FishingZombieGroup::operator=(FishingZombieGroup *this,FishingZombieGroup *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::operator=
            ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x40) = uVar1;
  return this;
}

