// Class: GridItemInfinutShieldSegment


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemInfinutShieldSegment::drawBackgroundShieldSegment(Sexy::Graphics*) */

void __thiscall
GridItemInfinutShieldSegment::drawBackgroundShieldSegment
          (GridItemInfinutShieldSegment *this,Graphics *param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,(float)-(iVar1 / 2));
  local_10 = local_18;
  GridItemPlantShield::drawShield((GridItemPlantShield *)this,param_1,(SexyVector2 *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemInfinutShieldSegment::StaticClassInit() */

void GridItemInfinutShieldSegment::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemInfinutShieldSegment");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0e560,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemInfinutShieldSegment::StaticGetClass() */

long * GridItemInfinutShieldSegment::StaticGetClass(void)

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
  uVar2 = GridItemLinkedPlantShield::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemInfinutShieldSegment",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemInfinutShieldSegment::GetClass() const */

long * GridItemInfinutShieldSegment::GetClass(void)

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
  uVar2 = GridItemLinkedPlantShield::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemInfinutShieldSegment",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemInfinutShieldSegment::updateDamageState() */

void __thiscall GridItemInfinutShieldSegment::updateDamageState(GridItemInfinutShieldSegment *this)

{
  int iVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  char *__s;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  RtMixedPtrBase aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (cVar2 != '\0') {
    lVar6 = *(long *)this;
    if (*(code **)(lVar6 + 0x1d8) == GridItem::GetHitpoints) {
      fVar7 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar7 = (float)(**(code **)(lVar6 + 0x1d8))();
      lVar6 = *(long *)this;
    }
    if (*(code **)(lVar6 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar8 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      fVar8 = (float)(**(code **)(lVar6 + 0x1e0))();
    }
    iVar5 = (int)((fVar7 * 100.0) / fVar8);
    GridItemAnimation::GetAnimRig();
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    iVar1 = *(int *)(this + 0x1f0);
    if (iVar5 < 0x21) {
      if (iVar1 == 3) goto LAB_03e0e710;
      __s = "plantfood_shieldIdle_damage2";
      uVar4 = 3;
    }
    else if (iVar5 < 0x42) {
      if (iVar1 == 2) goto LAB_03e0e710;
      __s = "plantfood_shieldIdle_damage1";
      uVar4 = 2;
    }
    else {
      if (iVar1 == 1) goto LAB_03e0e710;
      __s = "plantfood_shieldIdle";
      uVar4 = 1;
    }
    *(undefined4 *)(this + 0x1f0) = uVar4;
    std::string::string((string *)aRStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)pRVar3,aRStack_40,0,aDStack_38);
    std::string::~string((string *)aRStack_40);
    nop();
  }
LAB_03e0e710:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemInfinutShieldSegment::onGridItemInitialize() */

void __thiscall
GridItemInfinutShieldSegment::onGridItemInitialize(GridItemInfinutShieldSegment *this)

{
  GridItemLinkedPlantShield::onGridItemInitialize((GridItemLinkedPlantShield *)this);
  *(undefined4 *)(this + 0x1f0) = 0;
  updateDamageState(this);
  return;
}


/* GridItemInfinutShieldSegment::onTakeDamage(DamageInfo const&) */

void __thiscall
GridItemInfinutShieldSegment::onTakeDamage(GridItemInfinutShieldSegment *this,DamageInfo *param_1)

{
  char cVar1;
  
  if ((*(long *)param_1 != 0) && (cVar1 = RealObject::IsOnTeam(*(long *)param_1,1), cVar1 != '\0'))
  {
    return;
  }
  GridItemLinkedPlantShield::onTakeDamage((GridItemLinkedPlantShield *)this,param_1);
  updateDamageState(this);
  return;
}


/* GridItemInfinutShieldSegment::Heal() */

void __thiscall GridItemInfinutShieldSegment::Heal(GridItemInfinutShieldSegment *this)

{
  GridItemBreakableTarget::Heal((GridItemBreakableTarget *)this);
  updateDamageState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemInfinutShieldSegment::AddToRenderQueue(RenderQueue*) */

void __thiscall
GridItemInfinutShieldSegment::AddToRenderQueue
          (GridItemInfinutShieldSegment *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::AddToRenderQueue((RealObject *)this,param_1);
  uVar1 = FUN_03e0e338(*(undefined4 *)(this + 0x134));
  uVar1 = Board::MakeRenderOrder(0x61a81,uVar1,0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawBackgroundShieldSegment);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<GridItemInfinutShieldSegment,void(GridItemInfinutShieldSegment::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,uVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemInfinutShieldSegment::GridItemInfinutShieldSegment() */

void __thiscall
GridItemInfinutShieldSegment::GridItemInfinutShieldSegment(GridItemInfinutShieldSegment *this)

{
  GridItemLinkedPlantShield::GridItemLinkedPlantShield((GridItemLinkedPlantShield *)this);
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR_GetClass_06782fb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemInfinutShieldSegment_06783290;
  return;
}


/* GridItemInfinutShieldSegment::StaticNew() */

GridItemInfinutShieldSegment * GridItemInfinutShieldSegment::StaticNew(void)

{
  GridItemInfinutShieldSegment *this;
  
  this = ::operator_new(0x1f8);
  GridItemInfinutShieldSegment(this);
  return this;
}


/* GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment() */

void __thiscall
GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment(GridItemInfinutShieldSegment *this)

{
  *(undefined ***)this = &PTR_GetClass_06782fb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemInfinutShieldSegment_06783290;
  GridItemLinkedPlantShield::~GridItemLinkedPlantShield((GridItemLinkedPlantShield *)this);
  return;
}


/* non-virtual thunk to GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment() */

void __thiscall
GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment(GridItemInfinutShieldSegment *this)

{
  ~GridItemInfinutShieldSegment(this + -0x10);
  return;
}


/* GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment() */

void __thiscall
GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment(GridItemInfinutShieldSegment *this)

{
  ~GridItemInfinutShieldSegment(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment() */

void __thiscall
GridItemInfinutShieldSegment::~GridItemInfinutShieldSegment(GridItemInfinutShieldSegment *this)

{
  ~GridItemInfinutShieldSegment(this + -0x10);
  return;
}

