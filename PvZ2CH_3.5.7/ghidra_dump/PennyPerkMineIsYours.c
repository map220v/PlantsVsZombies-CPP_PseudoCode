// Class: PennyPerkMineIsYours


/* PennyPerkMineIsYours::~PennyPerkMineIsYours() */

void __thiscall PennyPerkMineIsYours::~PennyPerkMineIsYours(PennyPerkMineIsYours *this)

{
  *(undefined ***)this = &PTR_GetClass_06681c40;
  PennyPerkTimedEffect::~PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  return;
}


/* PennyPerkMineIsYours::~PennyPerkMineIsYours() */

void __thiscall PennyPerkMineIsYours::~PennyPerkMineIsYours(PennyPerkMineIsYours *this)

{
  ~PennyPerkMineIsYours(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkMineIsYours::PennyPerkMineIsYours() */

void __thiscall PennyPerkMineIsYours::PennyPerkMineIsYours(PennyPerkMineIsYours *this)

{
  PennyPerkTimedEffect::PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06681c40;
  return;
}


/* PennyPerkMineIsYours::StaticNew() */

PennyPerkMineIsYours * PennyPerkMineIsYours::StaticNew(void)

{
  PennyPerkMineIsYours *this;
  
  this = ::operator_new(0x28);
  PennyPerkMineIsYours(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYours::StaticClassInit() */

void PennyPerkMineIsYours::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PennyPerkMineIsYours");
    (*pcVar2)(plVar1,asStack_10,FUN_036c6780,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkMineIsYours::StaticGetClass() */

long * PennyPerkMineIsYours::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkMineIsYours",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMineIsYours::GetClass() const */

long * PennyPerkMineIsYours::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkMineIsYours",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYours::calcNextUpdateTime() */

void __thiscall PennyPerkMineIsYours::calcNextUpdateTime(PennyPerkMineIsYours *this)

{
  long extraout_x0;
  int *piVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  piVar1 = (int *)FUN_036c62e8(*(undefined8 *)(extraout_x0 + 0x78),(long)*(int *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)*piVar1 + fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYours::applyCondition() */

void __thiscall PennyPerkMineIsYours::applyCondition(PennyPerkMineIsYours *this)

{
  bool bVar1;
  long extraout_x0;
  ulong uVar2;
  int *piVar3;
  PlantPotatomine *this_00;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar5 = *(undefined8 *)(extraout_x0 + 0x60);
  uVar2 = FUN_036c62d8(uVar5,*(undefined8 *)(extraout_x0 + 0x68));
  iVar4 = 1;
  if ((ulong)(long)*(int *)(this + 0x10) < uVar2) {
    piVar3 = (int *)FUN_036c62e8(uVar5);
    iVar4 = *piVar3;
  }
  Board::AddPlants(*(string **)(gLawnApp + 0x9f0),(int)extraout_x0 + 0x98,
                   *(int *)(extraout_x0 + 0x90),*(int *)(extraout_x0 + 0x94),iVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    if (this_00 != (PlantPotatomine *)0x0) {
      PlantPotatomine::ForceArming(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMineIsYours::onUpdate() */

void __thiscall PennyPerkMineIsYours::onUpdate(PennyPerkMineIsYours *this)

{
  bool bVar1;
  long extraout_x0;
  ulong uVar2;
  int *piVar3;
  PlantPotatomine *this_00;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar5 = *(undefined8 *)(extraout_x0 + 0x60);
  uVar2 = FUN_036c62d8(uVar5,*(undefined8 *)(extraout_x0 + 0x68));
  iVar4 = 1;
  if ((ulong)(long)*(int *)(this + 0x10) < uVar2) {
    piVar3 = (int *)FUN_036c62e8(uVar5);
    iVar4 = *piVar3;
  }
  Board::AddPlants(*(string **)(gLawnApp + 0x9f0),(int)extraout_x0 + 0x98,
                   *(int *)(extraout_x0 + 0x90),*(int *)(extraout_x0 + 0x94),iVar4);
  uStack_30 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aRStack_20);
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aRStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28), bVar1)
  {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
    nop();
    if (this_00 != (PlantPotatomine *)0x0) {
      PlantPotatomine::ForceArming(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_30);
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)aRStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

