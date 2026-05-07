// Class: ZombieIceAgeHunter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunter::StaticClassInit() */

void ZombieIceAgeHunter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeHunter");
    (*pcVar2)(plVar1,asStack_10,FUN_04765a94,0x858,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeHunter::StaticGetClass() */

long * ZombieIceAgeHunter::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeHunter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunter::GetClass() const */

long * ZombieIceAgeHunter::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeHunter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunter::ZombieIceAgeHunter() */

void __thiscall ZombieIceAgeHunter::ZombieIceAgeHunter(ZombieIceAgeHunter *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_068cfd30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeHunter_068d07b8;
  return;
}


/* ZombieIceAgeHunter::StaticNew() */

ZombieIceAgeHunter * ZombieIceAgeHunter::StaticNew(void)

{
  ZombieIceAgeHunter *this;
  
  this = ::operator_new(0x858);
  ZombieIceAgeHunter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunter::onZombieInitialize() */

void __thiscall ZombieIceAgeHunter::onZombieInitialize(ZombieIceAgeHunter *this)

{
  undefined4 uVar1;
  long lVar2;
  PopAnimRig *this_00;
  ZombieIceAgeHunterProps *pZVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_10,"zombie_schall_back");
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  pZVar3 = Zombie::GetProps<ZombieIceAgeHunterProps>((Zombie *)this);
  uVar4 = *(undefined4 *)(pZVar3 + 0x228);
  uVar1 = *(undefined4 *)(pZVar3 + 0x230);
  *(undefined4 *)(this + 0x84c) = *(undefined4 *)(pZVar3 + 0x22c);
  *(undefined4 *)(this + 0x848) = uVar4;
  *(undefined4 *)(this + 0x844) = uVar1;
  *(undefined4 *)(this + 0x850) = 0;
  uVar4 = PVZ_EOT();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x840) = uVar4;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunter::isNearestTargetInRange() */

void __thiscall ZombieIceAgeHunter::isNearestTargetInRange(ZombieIceAgeHunter *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Plant *pPVar5;
  Plant *this_00;
  long lVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  undefined8 extraout_x0;
  int iVar9;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = -1;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_30,0,local_5c,local_60,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(1,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar4,aIStack_30);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar2) {
      if ((iVar9 != -1) && (local_60 - *(int *)(this + 0x84c) <= iVar9)) {
        bVar2 = iVar9 <= local_60 - *(int *)(this + 0x848);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    BoardEntity::CalcGridPosition();
    cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)*puVar7);
    if (cVar3 == '\0') {
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
      if (pGVar8 != (GridItem *)0x0) {
        nop();
        cVar3 = (**(code **)(*(long *)this + 0xa68))(this,extraout_x0);
joined_r0x04766980:
        if (cVar3 != '\0') {
LAB_0476691c:
          if (iVar9 < local_48) {
            iVar9 = local_48;
          }
        }
      }
    }
    else {
      pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
      if (pPVar5 == (Plant *)0x0) {
        nop();
        GridItem::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(int *)(lVar6 + 0x60) == 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          GridItem::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar1 = *(int *)(lVar6 + 0x60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if (iVar1 != 1) goto LAB_0476691c;
        }
      }
      else {
        nop();
        Plant::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(int *)(lVar6 + 0xb4) == 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          Plant::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar1 = *(int *)(lVar6 + 0xb4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if ((iVar1 != 1) && (cVar3 = Plant::IsIceblocked(this_00), cVar3 == '\0')) {
            cVar3 = Plant::CanBeRangeTargeted(this_00);
            goto joined_r0x04766980;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunter::doZap(Sexy::RtWeakPtr<ZombieActionDefinition const>) */

void __thiscall
ZombieIceAgeHunter::doZap(ZombieIceAgeHunter *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  char cVar2;
  RtObject *pRVar3;
  ZombieProjectileActionDefinition *pZVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
  cVar2 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(this + 0x850);
    *(int *)(this + 0x850) = iVar1 + 1;
    if (iVar1 + 1 == *(int *)(this + 0x844)) {
      *(undefined4 *)(this + 0x850) = 0;
      fVar5 = (float)PVZ_T();
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pZVar4 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar3);
      fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 100));
      *(float *)(this + 0x840) = fVar6 + fVar5;
    }
    else {
      fVar5 = (float)PVZ_T();
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pZVar4 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar3);
      fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x5c));
      *(float *)(this + 0x840) = fVar6 + fVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeHunter::~ZombieIceAgeHunter() */

void __thiscall ZombieIceAgeHunter::~ZombieIceAgeHunter(ZombieIceAgeHunter *this)

{
  *(undefined ***)this = &PTR_GetClass_068cfd30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeHunter_068d07b8;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeHunter::~ZombieIceAgeHunter() */

void __thiscall ZombieIceAgeHunter::~ZombieIceAgeHunter(ZombieIceAgeHunter *this)

{
  ~ZombieIceAgeHunter(this + -0x10);
  return;
}


/* ZombieIceAgeHunter::~ZombieIceAgeHunter() */

void __thiscall ZombieIceAgeHunter::~ZombieIceAgeHunter(ZombieIceAgeHunter *this)

{
  ~ZombieIceAgeHunter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeHunter::~ZombieIceAgeHunter() */

void __thiscall ZombieIceAgeHunter::~ZombieIceAgeHunter(ZombieIceAgeHunter *this)

{
  ~ZombieIceAgeHunter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunter::isGridItemValidTarget(GridItem*) */

void __thiscall
ZombieIceAgeHunter::isGridItemValidTarget(ZombieIceAgeHunter *this,GridItem *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  bVar1 = false;
  std::string::string(asStack_10,"planttarget_iceblock");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_10);
  nop();
  iVar3 = FUN_04765348(*(undefined4 *)(param_1 + 0x24));
  iVar4 = FUN_04765348(*(undefined4 *)(this + 0x24));
  if (iVar3 == iVar4) {
    GridItem::GetType();
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)asStack_10,(RtWeakPtrBase *)aRStack_18)
    ;
    bVar1 = false;
    if (cVar2 != '\0') {
      lVar6 = *(long *)param_1;
      if (*(code **)(lVar6 + 0x1d8) == GridItem::GetHitpoints) {
        fVar7 = (float)GridItem::GetHitpoints(param_1);
      }
      else {
        fVar7 = (float)(**(code **)(lVar6 + 0x1d8))();
        lVar6 = *(long *)param_1;
      }
      if (*(code **)(lVar6 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar8 = (float)GridItem::GetMaxHitpoints(param_1);
      }
      else {
        fVar8 = (float)(**(code **)(lVar6 + 0x1e0))();
      }
      bVar1 = fVar7 < fVar8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

