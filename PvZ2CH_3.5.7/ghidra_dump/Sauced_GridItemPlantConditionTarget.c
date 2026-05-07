// Class: Sauced_GridItemPlantConditionTarget


/* Sauced_GridItemPlantConditionTarget::Sauced_GridItemPlantConditionTarget() */

void __thiscall
Sauced_GridItemPlantConditionTarget::Sauced_GridItemPlantConditionTarget
          (Sauced_GridItemPlantConditionTarget *this)

{
  GridItemPlantConditionTarget::GridItemPlantConditionTarget((GridItemPlantConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06a0b730;
  *(undefined ***)(this + 0x10) = &PTR__Sauced_GridItemPlantConditionTarget_06a0ba38;
  return;
}


/* Sauced_GridItemPlantConditionTarget::StaticNew() */

Sauced_GridItemPlantConditionTarget * Sauced_GridItemPlantConditionTarget::StaticNew(void)

{
  Sauced_GridItemPlantConditionTarget *this;
  
  this = ::operator_new(0x1f8);
  Sauced_GridItemPlantConditionTarget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sauced_GridItemPlantConditionTarget::StaticClassInit() */

void Sauced_GridItemPlantConditionTarget::StaticClassInit(void)

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
    std::string::string(asStack_10,"Sauced_GridItemPlantConditionTarget");
    (*pcVar2)(plVar1,asStack_10,FUN_04efe6a4,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sauced_GridItemPlantConditionTarget::StaticGetClass() */

long * Sauced_GridItemPlantConditionTarget::StaticGetClass(void)

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
  uVar2 = GridItemPlantConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"Sauced_GridItemPlantConditionTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sauced_GridItemPlantConditionTarget::GetClass() const */

long * Sauced_GridItemPlantConditionTarget::GetClass(void)

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
  uVar2 = GridItemPlantConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"Sauced_GridItemPlantConditionTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget() */

void __thiscall
Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget
          (Sauced_GridItemPlantConditionTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0b730;
  *(undefined ***)(this + 0x10) = &PTR__Sauced_GridItemPlantConditionTarget_06a0ba38;
  GridItemPlantConditionTarget::~GridItemPlantConditionTarget((GridItemPlantConditionTarget *)this);
  return;
}


/* non-virtual thunk to Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget()
    */

void __thiscall
Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget
          (Sauced_GridItemPlantConditionTarget *this)

{
  ~Sauced_GridItemPlantConditionTarget(this + -0x10);
  return;
}


/* Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget() */

void __thiscall
Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget
          (Sauced_GridItemPlantConditionTarget *this)

{
  ~Sauced_GridItemPlantConditionTarget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget()
    */

void __thiscall
Sauced_GridItemPlantConditionTarget::~Sauced_GridItemPlantConditionTarget
          (Sauced_GridItemPlantConditionTarget *this)

{
  ~Sauced_GridItemPlantConditionTarget(this + -0x10);
  return;
}


/* Sauced_GridItemPlantConditionTarget::onGridItemInitialize() */

void __thiscall
Sauced_GridItemPlantConditionTarget::onGridItemInitialize(Sauced_GridItemPlantConditionTarget *this)

{
  SaucedPlantConditionTargetProps *pSVar1;
  float fVar2;
  
  GridItemZombieConditionTarget::onGridItemInitialize((GridItemZombieConditionTarget *)this);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1ec) = fVar2 + 1.0;
  fVar2 = (float)PVZ_T();
  pSVar1 = GridItem::GetProps<SaucedPlantConditionTargetProps>();
  *(float *)(this + 0x1f0) = fVar2 + *(float *)(pSVar1 + 0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sauced_GridItemPlantConditionTarget::broadcastAroma() */

void Sauced_GridItemPlantConditionTarget::broadcastAroma(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_30,local_48 + 1,local_44,200,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if ((((RtObject *)*puVar3 != (RtObject *)0x0) &&
        (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), pZVar4 != (Zombie *)0x0)) &&
       (cVar1 = RealObject::IsOnTeam(pZVar4,2), cVar1 != '\0')) {
      Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar4,0x24,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sauced_GridItemPlantConditionTarget::onUpdate() */

void __thiscall
Sauced_GridItemPlantConditionTarget::onUpdate(Sauced_GridItemPlantConditionTarget *this)

{
  float fVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1ec) <= fVar1) {
    broadcastAroma();
    *(float *)(this + 0x1ec) = *(float *)(this + 0x1ec) + 1.0;
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1f0) <= fVar1) {
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x3f800000,local_70,local_6c,aDStack_68,0x200000000000,this,aPStack_78,
               0);
    (**(code **)(*(long *)this + 0x120))(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sauced_GridItemPlantConditionTarget::TakeDamage(DamageInfo const&) */

void __thiscall
Sauced_GridItemPlantConditionTarget::TakeDamage
          (Sauced_GridItemPlantConditionTarget *this,DamageInfo *param_1)

{
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  operator|=(auStack_58,0x100);
  GridItemBreakableTarget::TakeDamage((GridItemBreakableTarget *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

