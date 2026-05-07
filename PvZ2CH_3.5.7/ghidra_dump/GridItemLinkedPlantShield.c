// Class: GridItemLinkedPlantShield


/* GridItemLinkedPlantShield::onGridItemInitialize() */

void __thiscall GridItemLinkedPlantShield::onGridItemInitialize(GridItemLinkedPlantShield *this)

{
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLinkedPlantShield::StaticClassInit() */

void GridItemLinkedPlantShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLinkedPlantShield");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0db80,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLinkedPlantShield::StaticGetClass() */

long * GridItemLinkedPlantShield::StaticGetClass(void)

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
  uVar2 = GridItemPlantShield::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemLinkedPlantShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLinkedPlantShield::GetClass() const */

long * GridItemLinkedPlantShield::GetClass(void)

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
  uVar2 = GridItemPlantShield::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemLinkedPlantShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLinkedPlantShield::GridItemLinkedPlantShield() */

void __thiscall
GridItemLinkedPlantShield::GridItemLinkedPlantShield(GridItemLinkedPlantShield *this)

{
  GridItemPlantShield::GridItemPlantShield((GridItemPlantShield *)this);
  *(undefined ***)this = &PTR_GetClass_06782ca0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLinkedPlantShield_06782f80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  return;
}


/* GridItemLinkedPlantShield::StaticNew() */

GridItemLinkedPlantShield * GridItemLinkedPlantShield::StaticNew(void)

{
  GridItemLinkedPlantShield *this;
  
  this = ::operator_new(0x1f0);
  GridItemLinkedPlantShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLinkedPlantShield::onTakeDamage(DamageInfo const&) */

void __thiscall
GridItemLinkedPlantShield::onTakeDamage(GridItemLinkedPlantShield *this,DamageInfo *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr *this_00;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x8000);
  if (!bVar1) {
    uVar5 = 0;
    DamageInfo::DamageInfo(aDStack_68);
    local_60 = *(undefined4 *)(param_1 + 8);
    SetFlag<DamageTypeFlags>(auStack_58,0x8000,1);
    uVar6 = *(undefined8 *)(this + 0x1d8);
    lVar2 = FUN_03e0d43c(uVar6,*(undefined8 *)(this + 0x1e0));
    if (lVar2 != 0) {
      do {
        this_00 = (RtWeakPtr *)FUN_03e0d448(uVar6,uVar5);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_03e0d448(*(undefined8 *)(this + 0x1d8),uVar5);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          (**(code **)(*plVar4 + 0x110))(plVar4,aDStack_68);
        }
        uVar5 = uVar5 + 1;
        uVar6 = *(undefined8 *)(this + 0x1d8);
        uVar3 = FUN_03e0d43c(uVar6,*(undefined8 *)(this + 0x1e0));
      } while (uVar5 < uVar3);
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  GridItemBreakableTarget::onTakeDamage((DamageInfo *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemLinkedPlantShield::~GridItemLinkedPlantShield() */

void __thiscall
GridItemLinkedPlantShield::~GridItemLinkedPlantShield(GridItemLinkedPlantShield *this)

{
  *(undefined ***)this = &PTR_GetClass_06782ca0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLinkedPlantShield_06782f80;
  std::
  vector<Sexy::RtWeakPtr<GridItemLinkedPlantShield>,std::allocator<Sexy::RtWeakPtr<GridItemLinkedPlantShield>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemLinkedPlantShield>,std::allocator<Sexy::RtWeakPtr<GridItemLinkedPlantShield>>>
             *)(this + 0x1d8));
  GridItemPlantShield::~GridItemPlantShield((GridItemPlantShield *)this);
  return;
}


/* non-virtual thunk to GridItemLinkedPlantShield::~GridItemLinkedPlantShield() */

void __thiscall
GridItemLinkedPlantShield::~GridItemLinkedPlantShield(GridItemLinkedPlantShield *this)

{
  ~GridItemLinkedPlantShield(this + -0x10);
  return;
}


/* GridItemLinkedPlantShield::~GridItemLinkedPlantShield() */

void __thiscall
GridItemLinkedPlantShield::~GridItemLinkedPlantShield(GridItemLinkedPlantShield *this)

{
  ~GridItemLinkedPlantShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemLinkedPlantShield::~GridItemLinkedPlantShield() */

void __thiscall
GridItemLinkedPlantShield::~GridItemLinkedPlantShield(GridItemLinkedPlantShield *this)

{
  ~GridItemLinkedPlantShield(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLinkedPlantShield::setPartners(std::vector<GridItemLinkedPlantShield*,
   std::allocator<GridItemLinkedPlantShield*> > const&) */

void __thiscall
GridItemLinkedPlantShield::setPartners(GridItemLinkedPlantShield *this,vector *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  std::
  vector<Sexy::RtWeakPtr<GridItemLinkedPlantShield>,std::allocator<Sexy::RtWeakPtr<GridItemLinkedPlantShield>>>
  ::clear((vector<Sexy::RtWeakPtr<GridItemLinkedPlantShield>,std::allocator<Sexy::RtWeakPtr<GridItemLinkedPlantShield>>>
           *)(this + 0x1d8));
  uVar4 = *(undefined8 *)param_1;
  uVar1 = FUN_03e0d428(uVar4,*(undefined8 *)(param_1 + 8));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03e0d434(uVar4,uVar3);
      if (*plVar2 != 0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        std::
        vector<Sexy::RtWeakPtr<GridItemLinkedPlantShield>,std::allocator<Sexy::RtWeakPtr<GridItemLinkedPlantShield>>>
        ::push_back((vector<Sexy::RtWeakPtr<GridItemLinkedPlantShield>,std::allocator<Sexy::RtWeakPtr<GridItemLinkedPlantShield>>>
                     *)(this + 0x1d8),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        uVar4 = *(undefined8 *)param_1;
        uVar1 = FUN_03e0d428(uVar4,*(undefined8 *)(param_1 + 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLinkedPlantShield::SetPlantShieldGroup(std::vector<GridItemLinkedPlantShield*,
   std::allocator<GridItemLinkedPlantShield*> > const&) */

void GridItemLinkedPlantShield::SetPlantShieldGroup(vector *param_1)

{
  long lVar1;
  ulong uVar2;
  GridItemLinkedPlantShield **ppGVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  lVar1 = FUN_03e0d428(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  uVar8 = 0;
  if (lVar1 != 0) {
    do {
      std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::clear
                ((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>> *)
                 avStack_20);
      uVar6 = *(undefined8 *)param_1;
      uVar5 = 0;
      uVar2 = FUN_03e0d428(uVar6,*(undefined8 *)(param_1 + 8));
      if (uVar2 != 0) {
        do {
          if (iVar7 != (int)uVar5) {
            ppGVar3 = (GridItemLinkedPlantShield **)FUN_03e0d434(uVar6,uVar5);
            std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::
            push_back((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>
                       *)avStack_20,ppGVar3);
            uVar6 = *(undefined8 *)param_1;
            uVar2 = FUN_03e0d428(uVar6,*(undefined8 *)(param_1 + 8));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar5 = uVar8 + 1;
      puVar4 = (undefined8 *)FUN_03e0d434(uVar6,uVar8);
      iVar7 = (int)uVar5;
      setPartners((GridItemLinkedPlantShield *)*puVar4,(vector *)avStack_20);
      uVar2 = FUN_03e0d428(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      uVar8 = uVar5;
    } while (uVar5 < uVar2);
  }
  std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::~vector
            ((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

