// Class: PoisonGridItem


/* PoisonGridItem::CalcRenderOrder() const */

void __thiscall PoisonGridItem::CalcRenderOrder(PoisonGridItem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to PoisonGridItem::CalcRenderOrder() const */

void __thiscall PoisonGridItem::CalcRenderOrder(PoisonGridItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* PoisonGridItem::~PoisonGridItem() */

void __thiscall PoisonGridItem::~PoisonGridItem(PoisonGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0699cab0;
  *(undefined ***)(this + 0x10) = &PTR__PoisonGridItem_0699cd68;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to PoisonGridItem::~PoisonGridItem() */

void __thiscall PoisonGridItem::~PoisonGridItem(PoisonGridItem *this)

{
  ~PoisonGridItem(this + -0x10);
  return;
}


/* PoisonGridItem::~PoisonGridItem() */

void __thiscall PoisonGridItem::~PoisonGridItem(PoisonGridItem *this)

{
  ~PoisonGridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PoisonGridItem::~PoisonGridItem() */

void __thiscall PoisonGridItem::~PoisonGridItem(PoisonGridItem *this)

{
  ~PoisonGridItem(this + -0x10);
  return;
}


/* PoisonGridItem::PoisonGridItem() */

void __thiscall PoisonGridItem::PoisonGridItem(PoisonGridItem *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0699cab0;
  *(undefined ***)(this + 0x10) = &PTR__PoisonGridItem_0699cd68;
  return;
}


/* PoisonGridItem::StaticNew() */

PoisonGridItem * PoisonGridItem::StaticNew(void)

{
  PoisonGridItem *this;
  
  this = ::operator_new(0x1c8);
  PoisonGridItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonGridItem::StaticClassInit() */

void PoisonGridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoisonGridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc8fb4,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonGridItem::StaticGetClass() */

long * PoisonGridItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PoisonGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonGridItem::GetClass() const */

long * PoisonGridItem::GetClass(void)

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
  (*pcVar3)(plVar1,"PoisonGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonGridItem::applyConditions() */

void __thiscall PoisonGridItem::applyConditions(PoisonGridItem *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  string *psVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar7;
  long lVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = FUN_04cc6f88(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_04cc6f8c(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_28,"poisonpeashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::~string((string *)&local_28);
  nop();
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
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar6,(RealObject *)this);
    if (cVar2 != '\0') {
      nop();
      cVar2 = Zombie::IsOnGround(this_00);
      if (((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(this_00,0x27), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasCondition(this_00,0x25), cVar2 == '\0')) {
        cVar2 = Zombie::HasCondition(this_00,0x30);
        if (cVar2 == '\0') {
          fVar9 = 0.0;
        }
        else {
          pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(this_00);
          lVar8 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x30);
          fVar9 = *(float *)(lVar8 + 0xc);
        }
        if ((fVar9 < *(float *)(this + 0x1bc)) || (this[0x1ac] != (PoisonGridItem)0x0)) {
          Zombie::EndCondition(this_00,0x30);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x30,1);
          uVar3 = NEON_fminnm(fVar9 * 1.5,0x43c80000);
          Zombie::SetConditionTracker(uVar3,this_00,0x30);
        }
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x33,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonGridItem::onGridItemInitialize() */

void __thiscall PoisonGridItem::onGridItemInitialize(PoisonGridItem *this)

{
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  return;
}


/* PoisonGridItem::onUpdate() */

void __thiscall PoisonGridItem::onUpdate(PoisonGridItem *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x1a8);
  fVar1 = (float)PVZ_T();
  if (fVar2 < fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  PoisonMistGridItem::fadeTile((PoisonMistGridItem *)this);
  applyConditions(this);
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}

