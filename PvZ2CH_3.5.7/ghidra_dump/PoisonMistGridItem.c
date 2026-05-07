// Class: PoisonMistGridItem


/* PoisonMistGridItem::ResetTimer() */

void __thiscall PoisonMistGridItem::ResetTimer(PoisonMistGridItem *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar1 + *(float *)(this + 0x1b0);
  return;
}


/* PoisonMistGridItem::InitializeValues(float, float, float, float, float) */

void __thiscall
PoisonMistGridItem::InitializeValues
          (PoisonMistGridItem *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  this[0x1ac] = (PoisonMistGridItem)0x0;
  *(float *)(this + 0x1b0) = param_1;
  *(float *)(this + 0x1b4) = param_2;
  *(float *)(this + 0x1b8) = param_3;
  *(float *)(this + 0x1bc) = param_4;
  *(float *)(this + 0x1c0) = param_5;
  ResetTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonMistGridItem::fadeTile() */

void __thiscall PoisonMistGridItem::fadeTile(PoisonMistGridItem *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  PopAnimRig::GetPAMColor();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  fVar2 = *(float *)(this + 0x1a8);
  fVar1 = (float)PVZ_T();
  local_c = (int)(((fVar2 - fVar1) / *(float *)(this + 0x1b0)) * 255.0);
  GridItemAnimation::GetAnimRig();
  this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  PopAnimRig::SetPAMColor(this_00,aCStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonMistGridItem::CalcRenderOrder() const */

void __thiscall PoisonMistGridItem::CalcRenderOrder(PoisonMistGridItem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to PoisonMistGridItem::CalcRenderOrder() const */

void __thiscall PoisonMistGridItem::CalcRenderOrder(PoisonMistGridItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* PoisonMistGridItem::~PoisonMistGridItem() */

void __thiscall PoisonMistGridItem::~PoisonMistGridItem(PoisonMistGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0699f330;
  *(undefined ***)(this + 0x10) = &PTR__PoisonMistGridItem_0699f5e8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to PoisonMistGridItem::~PoisonMistGridItem() */

void __thiscall PoisonMistGridItem::~PoisonMistGridItem(PoisonMistGridItem *this)

{
  ~PoisonMistGridItem(this + -0x10);
  return;
}


/* PoisonMistGridItem::~PoisonMistGridItem() */

void __thiscall PoisonMistGridItem::~PoisonMistGridItem(PoisonMistGridItem *this)

{
  ~PoisonMistGridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PoisonMistGridItem::~PoisonMistGridItem() */

void __thiscall PoisonMistGridItem::~PoisonMistGridItem(PoisonMistGridItem *this)

{
  ~PoisonMistGridItem(this + -0x10);
  return;
}


/* PoisonMistGridItem::PoisonMistGridItem() */

void __thiscall PoisonMistGridItem::PoisonMistGridItem(PoisonMistGridItem *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0699f330;
  *(undefined ***)(this + 0x10) = &PTR__PoisonMistGridItem_0699f5e8;
  return;
}


/* PoisonMistGridItem::StaticNew() */

PoisonMistGridItem * PoisonMistGridItem::StaticNew(void)

{
  PoisonMistGridItem *this;
  
  this = ::operator_new(0x1c8);
  PoisonMistGridItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonMistGridItem::StaticClassInit() */

void PoisonMistGridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoisonMistGridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd4134,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonMistGridItem::StaticGetClass() */

long * PoisonMistGridItem::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonMistGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonMistGridItem::GetClass() const */

long * PoisonMistGridItem::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonMistGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonMistGridItem::InitializeValues(bool) */

void __thiscall PoisonMistGridItem::InitializeValues(PoisonMistGridItem *this,bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PoisonMistGridItemProps *pPVar4;
  
  pPVar4 = GridItem::GetProps<PoisonMistGridItemProps>();
  uVar1 = *(undefined4 *)(pPVar4 + 0xd0);
  uVar2 = *(undefined4 *)(pPVar4 + 0xd4);
  uVar3 = *(undefined4 *)(pPVar4 + 0xd8);
  this[0x1ac] = (PoisonMistGridItem)param_1;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1b4) = uVar2;
  *(undefined4 *)(this + 0x1bc) = uVar3;
  *(undefined4 *)(this + 0x1c0) = 0;
  ResetTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonMistGridItem::applyConditions() */

void __thiscall PoisonMistGridItem::applyConditions(PoisonMistGridItem *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = FUN_04cd2574(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_04cd2578(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar5,(RealObject *)this);
    if (cVar2 != '\0') {
      nop();
      cVar2 = Zombie::IsOnGround(this_00);
      if ((((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(this_00,0x27), cVar2 == '\0')) &&
          (cVar2 = Zombie::HasCondition(this_00,0x25), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasCondition(this_00,0x30), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x30,1);
        Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1bc),this_00,0x30);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
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
/* PoisonMistGridItem::onGridItemInitialize() */

void __thiscall PoisonMistGridItem::onGridItemInitialize(PoisonMistGridItem *this)

{
  long *plVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  uint local_28 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [4];
  uint local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  pcVar2 = *(code **)(*plVar1 + 0x78);
  std::string::string((string *)local_28,"ANIMATION");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar2)(plVar1,(string *)local_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string((string *)local_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  Sexy::OutputDebugStrF
            ((wchar_t *)"PoisonMistGridItem::onGridItemInitialize x = %d y = %d",(ulong)local_28[0],
             (ulong)local_1c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonMistGridItem::onUpdate() */

void __thiscall PoisonMistGridItem::onUpdate(PoisonMistGridItem *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x1a8);
  fVar1 = (float)PVZ_T();
  if (fVar2 < fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  applyConditions(this);
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}

