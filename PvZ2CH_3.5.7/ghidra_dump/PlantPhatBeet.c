// Class: PlantPhatBeet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::StaticClassInit() */

void PlantPhatBeet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPhatBeet");
    (*pcVar2)(plVar1,asStack_10,FUN_0416c094,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPhatBeet::StaticGetClass() */

long * PlantPhatBeet::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPhatBeet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPhatBeet::GetClass() const */

long * PlantPhatBeet::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPhatBeet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPhatBeet::calcRealDamage(ComponentDamageRadiusProps&) */

void __thiscall
PlantPhatBeet::calcRealDamage(PlantPhatBeet *this,ComponentDamageRadiusProps *param_1)

{
  DamageInfoProps *this_00;
  Plant *this_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this_00 = (DamageInfoProps *)(param_1 + 0xa0);
  DamageInfoProps::GetBaseDamage(this_00);
  this_01 = *(Plant **)(this + 0x10);
  fVar1 = (float)FUN_0416a084(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar2 = (float)FUN_0416a094(*(undefined4 *)(this_01 + 0x3bc));
  fVar3 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar4 = (float)FUN_0416a098(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  fVar5 = (float)DamageInfoProps::GetBaseDamage(this_00);
  PlantPhatBeetTossSystem::setStunTime
            ((PlantPhatBeetTossSystem *)this_00,fVar2 * fVar1 * fVar3 * fVar4 * fVar5);
  return;
}


/* PlantPhatBeet::isCurrentlyPowerfulAttack() */

bool __thiscall PlantPhatBeet::isCurrentlyPowerfulAttack(PlantPhatBeet *this)

{
  return *(int *)(this + 0x28) < 1;
}


/* PlantPhatBeet::PlantPhatBeet() */

void __thiscall PlantPhatBeet::PlantPhatBeet(PlantPhatBeet *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f3f10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* PlantPhatBeet::StaticNew() */

PlantPhatBeet * PlantPhatBeet::StaticNew(void)

{
  PlantPhatBeet *this;
  
  this = ::operator_new(0x60);
  PlantPhatBeet(this);
  return this;
}


/* PlantPhatBeet::~PlantPhatBeet() */

void __thiscall PlantPhatBeet::~PlantPhatBeet(PlantPhatBeet *this)

{
  *(undefined ***)this = &PTR_GetClass_067f3f10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPhatBeet::~PlantPhatBeet() */

void __thiscall PlantPhatBeet::~PlantPhatBeet(PlantPhatBeet *this)

{
  ~PlantPhatBeet(this);
  AK::FreeHook(this);
  return;
}


/* PlantPhatBeet::canPullHelmFrom(Zombie*) const */

undefined1 __thiscall PlantPhatBeet::canPullHelmFrom(PlantPhatBeet *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar3;
  
  if (((param_1 != (Zombie *)0x0) &&
      (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)param_1), cVar1 != '\0')) &&
     (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0')) {
    pEVar3 = (EntityConditionTracker<Zombie,ZombieConditions> *)Zombie::GetConditionTracker(param_1)
    ;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar3,0x19);
    if (cVar1 == '\0') {
      pEVar3 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(param_1);
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar3,0x77);
      if (cVar1 == '\0') {
        pEVar3 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(param_1);
        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar3,0x3f);
        if (cVar1 == '\0') {
          uVar2 = (**(code **)(*(long *)param_1 + 0x398))(param_1);
          return uVar2;
        }
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::TryApplyDamageToEntity(DamageInfo&, BoardEntity*) */

void __thiscall
PlantPhatBeet::TryApplyDamageToEntity(PlantPhatBeet *this,DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  int iVar2;
  Zombie *pZVar3;
  float fVar4;
  float fVar5;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (BoardEntity *)0x0) {
    pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2);
    if ((pZVar3 != (Zombie *)0x0) && (cVar1 = Zombie::IsInvisible(pZVar3), cVar1 != '\0'))
    goto LAB_0416b3c4;
    if ((this[0x30] != (PlantPhatBeet)0x0) &&
       (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2), pZVar3 != (Zombie *)0x0)) {
      fVar4 = (float)FUN_0416a09c(*(undefined4 *)(pZVar3 + 0x280));
      fVar5 = (float)FUN_0416a0a4(*(undefined4 *)(pZVar3 + 0x2a8));
      if ((fVar5 + fVar4 <= *(float *)(param_1 + 8)) &&
         (cVar1 = (**(code **)(*(long *)pZVar3 + 0x3f0))(pZVar3), cVar1 != '\0')) {
        iVar2 = PlantFramework::Rand((PlantFramework *)this,600);
        EATextSquish::Vec3::Vec3(aVStack_18,1000.0,(float)iVar2,0.0);
        Zombie::FlickOff(pZVar3,(SexyVector3 *)aVStack_18);
        goto LAB_0416b3c4;
      }
    }
  }
  cVar1 = '\0';
LAB_0416b3c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::tossZombie(Zombie*) */

void __thiscall PlantPhatBeet::tossZombie(PlantPhatBeet *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  ZombieTosserSubSystem *pZVar4;
  uint uVar5;
  Point *extraout_x1;
  TPoint *pTVar6;
  Board *this_00;
  float fVar7;
  ZombieTosserSubSystem *pZVar9;
  float fVar8;
  TPoint<int> aTStack_88 [8];
  Point aPStack_80 [8];
  int local_78;
  int local_74;
  float local_70 [4];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar8 = *pfVar3;
  fVar7 = pfVar3[1];
  EATextSquish::Vec3::Vec3((Vec3 *)local_70,fVar8,fVar7,0.0);
  cVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
  if (cVar1 == '\0') {
    pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43200000;
  }
  else {
    uVar5 = (uint)DAT_06aef110 & 1;
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if (((DAT_06aef110 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aef110), iVar2 != 0)) {
      Sexy::Point::Point((Point *)&DAT_06aef1d0,uVar5,-1);
      Sexy::Point::Point((Point *)&DAT_06aef1d8,uVar5,1);
      Sexy::Point::Point((Point *)&DAT_06aef1e0,1,-1);
      Sexy::Point::Point((Point *)&DAT_06aef1e8,1,1);
      __cxa_guard_release(&DAT_06aef110);
    }
    iVar2 = 0;
    pTVar6 = (TPoint *)&DAT_06aef1d0;
    BoardTransforms::BoardSpaceToGrid((BoardTransforms *)&DAT_06aef000,fVar8,fVar7);
    do {
      Sexy::TPoint<int>::operator+(aTStack_88,pTVar6);
      Sexy::Point::Point(aPStack_80,(TPoint *)aVStack_60);
      cVar1 = Board::IsPitOfDoom(this_00,aPStack_80);
      if (cVar1 != '\0') {
        BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_80,extraout_x1);
        EATextSquish::Vec3::Vec3(aVStack_60,(float)local_78,(float)local_74,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)local_70,(SexyVector3 *)aVStack_60);
        if (0 < (int)(&DAT_06aef1d4)[(long)iVar2 * 2]) {
          pZVar9._0_4_ = (ZombieTosserSubSystem *)0x44480000;
          goto LAB_0416b564;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      pTVar6 = pTVar6 + 8;
    } while (iVar2 != 4);
    pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43200000;
  }
LAB_0416b564:
  local_70[0] = (float)NEON_fminnm(local_70[0],0x44480000);
  Sexy::OutputDebugStrF((wchar_t *)"ZombieTosserSubSystem %f",(double)local_70[0]);
  pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            (pZVar9._0_4_,0x3f000000,pZVar4,param_1,(Vec3 *)local_70,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPhatBeet::calculateAttacksUntilNextPowerful() */

void __thiscall PlantPhatBeet::calculateAttacksUntilNextPowerful(PlantPhatBeet *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_0416a0d0(uVar4);
  if (1 < iVar1) {
    lVar3 = FUN_0416b81c(uVar4);
    fVar5 = *(float *)(lVar3 + 0x2c0);
    lVar3 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
    uVar2 = RandRangeInt((int)fVar5,(int)*(float *)(lVar3 + 0x2c4));
    *(undefined4 *)(this + 0x28) = uVar2;
    return;
  }
  lVar3 = FUN_0416b81c(uVar4);
  fVar5 = *(float *)(lVar3 + 0x2b8);
  lVar3 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
  uVar2 = RandRangeInt((int)fVar5,(int)*(float *)(lVar3 + 700));
  *(undefined4 *)(this + 0x28) = uVar2;
  return;
}


/* PlantPhatBeet::calculateNextAttack() */

void __thiscall PlantPhatBeet::calculateNextAttack(PlantPhatBeet *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PVZ_T();
  lVar2 = FUN_0416a264(*(undefined8 *)(lVar2 + 0x70));
  *(float *)(this + 0x2c) = fVar3 + *(float *)(lVar2 + 0x28);
  cVar1 = isCurrentlyPowerfulAttack(this);
  if (cVar1 != '\0') {
    calculateAttacksUntilNextPowerful(this);
  }
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::setState(unsigned int) */

void __thiscall PlantPhatBeet::setState(PlantPhatBeet *this,uint param_1)

{
  char cVar1;
  Plant *this_00;
  long lVar2;
  string *extraout_x0;
  long *extraout_x0_00;
  long *extraout_x0_01;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 4:
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
    (**(code **)(*plVar3 + 0x118))();
    break;
  case 10:
    this[0x30] = (PlantPhatBeet)0x0;
    UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
    nop();
    pcVar4 = *(code **)(*extraout_x0_01 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar4)(extraout_x0_01,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 0xb:
    cVar1 = Plant::GetAvatarEnable(this_00);
    if (cVar1 == '\0') {
      this[0x30] = (PlantPhatBeet)0x0;
    }
    else {
      this[0x30] = (PlantPhatBeet)0x1;
    }
    break;
  case 0xd:
    this[0x30] = (PlantPhatBeet)0x0;
    this[0x5c] = (PlantPhatBeet)0x1;
    fVar5 = (float)PVZ_T();
    lVar2 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x58) = fVar5 + *(float *)(lVar2 + 0x2d4);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    std::string::string(asStack_58,"attack");
    PlantAnimRig_HoyaCordata::setIdleTag(extraout_x0);
    std::string::~string(asStack_58);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    pcVar4 = *(code **)(*extraout_x0_00 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar4)(extraout_x0_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPhatBeet::CancelPlantfood() */

void __thiscall PlantPhatBeet::CancelPlantfood(PlantPhatBeet *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  return;
}


/* PlantPhatBeet::onAnimStoppedCallback(std::string const&) */

void PlantPhatBeet::onAnimStoppedCallback(string *param_1)

{
  param_1[0x5c] = (string)0x0;
  setState((PlantPhatBeet *)param_1,4);
  return;
}


/* PlantPhatBeet::doBasicAttack() */

void __thiscall PlantPhatBeet::doBasicAttack(PlantPhatBeet *this)

{
  ComponentConditionRadius *this_00;
  
  this_00 = (ComponentConditionRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  ComponentConditionRadius::beginCoolDown(this_00);
  calculateNextAttack(this);
  setState(this,0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::shouldStartAttack() */

void __thiscall PlantPhatBeet::shouldStartAttack(PlantPhatBeet *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  bVar1 = false;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  (**(code **)(*plVar3 + 0xa8))
            (plVar3,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  (**(code **)(*plVar3 + 0xa0))(plVar3,avStack_20);
  uVar7 = local_38;
  uVar4 = FUN_0416a108(local_38,local_30);
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_0416a114(uVar7,uVar6);
      if ((RtObject *)*puVar5 != (RtObject *)0x0) {
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((this_00 == (Zombie *)0x0) ||
           (cVar2 = Zombie::IsInvisible(this_00), uVar7 = local_38, cVar2 != '\0')) {
          uVar7 = local_38;
          uVar4 = FUN_0416a108(local_38,local_30);
        }
        else {
          bVar1 = true;
          uVar4 = FUN_0416a108(local_38,local_30);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  if (!bVar1) {
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    bVar1 = false;
    if (cVar2 != '\0') goto LAB_0416c034;
  }
  fVar8 = (float)PVZ_T();
  bVar1 = *(float *)(this + 0x2c) <= fVar8;
LAB_0416c034:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::NotifyDamagedEntity(BoardEntity*) */

void __thiscall PlantPhatBeet::NotifyDamagedEntity(PlantPhatBeet *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *pZVar3;
  PlantPhatBeetDotSystem *pPVar4;
  long lVar5;
  PlantPhatBeetTossSystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BoardEntity *)0x0) && (this[0x5c] != (PlantPhatBeet)0x0)) &&
     (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) {
    pPVar4 = (PlantPhatBeetDotSystem *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantPhatBeetDotSystem::AddZombie(pPVar4,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    iVar2 = FUN_0416a080(*(undefined4 *)(pZVar3 + 0x50));
    lVar5 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
    if ((float)iVar2 <= *(float *)(lVar5 + 0x2d8)) {
      FUN_0416a0a0(*(undefined4 *)(pZVar3 + 0xb0));
      cVar1 = Zombie::IsHelmTypeMetallic();
      if (((cVar1 != '\0') || (iVar2 = FUN_0416a0a0(*(undefined4 *)(pZVar3 + 0xb0)), iVar2 == 1)) &&
         (cVar1 = canPullHelmFrom(this,pZVar3), cVar1 != '\0')) {
        (**(code **)(*(long *)pZVar3 + 0x248))(pZVar3);
      }
      cVar1 = Zombie::CanBeLaunchedByPlants(pZVar3);
      if (cVar1 != '\0') {
        this_00 = Board::GetGameSubSystem<PlantPhatBeetTossSystem>(*(Board **)(gLawnApp + 0x9f0));
        PlantPhatBeetTossSystem::TossZombies(this_00,pZVar3);
      }
    }
  }
  if ((((param_1 == (BoardEntity *)0x0) < (byte)this[0x30]) &&
      (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) &&
     ((cVar1 = Zombie::IsBoss(pZVar3), cVar1 == '\0' &&
      ((((cVar1 = Zombie::HasCondition(pZVar3,0x55), cVar1 == '\0' &&
         (cVar1 = (**(code **)(*(long *)pZVar3 + 0x4d8))(pZVar3), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)pZVar3 + 0x508))(pZVar3), cVar1 == '\0')) &&
       ((cVar1 = Zombie::IsBerserk(pZVar3), cVar1 == '\0' &&
        (cVar1 = Zombie::HasFogImmune(pZVar3), cVar1 == '\0')))))))) {
    tossZombie(this,pZVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0416d724 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPhatBeet::Initialize() */

void __thiscall PlantPhatBeet::Initialize(PlantPhatBeet *this)

{
  PlantPhatBeetTossSystem *this_00;
  long lVar1;
  PlantPhatBeetDotSystem *this_01;
  BoardEntity *pBVar2;
  ComponentDamageRadius *pCVar3;
  RtObject *pRVar4;
  PowerPropsDamageRadius *pPVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_118 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_110 [8];
  string asStack_108 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [160];
  DamageInfoProps aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar6 = PVZ_T();
  this[0x5c] = (PlantPhatBeet)0x0;
  *(undefined4 *)(this + 0x58) = uVar6;
  this_00 = Board::GetGameSubSystem<PlantPhatBeetTossSystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar1 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
  PlantPhatBeetTossSystem::setStunTime(this_00,*(float *)(lVar1 + 0x2d0));
  this_01 = Board::GetGameSubSystem<PlantPhatBeetDotSystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar1 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar1 + 0x2cc);
  lVar1 = FUN_0416b81c(*(undefined8 *)(this + 0x10));
  PlantPhatBeetDotSystem::SetData(this_01,fVar7,*(float *)(lVar1 + 0x2c8));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  pBVar2 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(pBVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_110,(RtWeakPtrBase *)aRStack_118);
  std::string::string(asStack_108,"BeetsRadius");
  ComponentRunner::Add<ComponentDamageRadius>((ComponentRunner *)pBVar2,aRStack_110,asStack_108);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  std::string::~string(asStack_108);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_118);
  pBVar2 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(pBVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_110,(RtWeakPtrBase *)aRStack_118);
  std::string::string(asStack_108,"BeetsRadiusPlantfood");
  ComponentRunner::Add<ComponentDamageRadius>((ComponentRunner *)pBVar2,aRStack_110,asStack_108);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  std::string::~string(asStack_108);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_118);
  pBVar2 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(pBVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_110,(RtWeakPtrBase *)aRStack_118);
  std::string::string(asStack_108,"BeetsRadiusLvl5");
  ComponentRunner::Add<ComponentDamageRadius>((ComponentRunner *)pBVar2,aRStack_110,asStack_108);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  std::string::~string(asStack_108);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_118);
  FUN_0416a0ac(aRStack_f0,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
  PowerSet::PowerSet((PowerSet *)asStack_108,(PowerSet *)(lVar1 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  pCVar3 = (ComponentDamageRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PowerSet::Find(aRStack_f0,asStack_108,5,0);
  pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
  pPVar5 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar4);
  ComponentDamageRadius::SetRadiusProps(pCVar3,(ComponentDamageRadiusProps *)(pPVar5 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  PowerSet::Find(aRStack_110,asStack_108,5,4);
  pRVar4 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  pPVar5 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar4);
  ComponentDamageRadiusProps::ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)aRStack_f0,(ComponentDamageRadiusProps *)(pPVar5 + 0x18))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  fVar7 = (float)DamageInfoProps::GetBaseDamage(aDStack_50);
  fVar8 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  PlantPhatBeetTossSystem::setStunTime((PlantPhatBeetTossSystem *)aDStack_50,fVar8 * fVar7 + fVar7);
  pCVar3 = (ComponentDamageRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  ComponentDamageRadius::SetRadiusProps(pCVar3,(ComponentDamageRadiusProps *)aRStack_f0);
  pCVar3 = (ComponentDamageRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PowerSet::Find(aRStack_110,asStack_108,5,5);
  pRVar4 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  pPVar5 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar4);
  ComponentDamageRadius::SetRadiusProps(pCVar3,(ComponentDamageRadiusProps *)(pPVar5 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  *(undefined4 *)(this + 0x28) = 0;
  calculateNextAttack(this);
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::~PowerSet((PowerSet *)asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::makeNextAttackPowerful() */

void __thiscall PlantPhatBeet::makeNextAttackPowerful(PlantPhatBeet *this)

{
  int iVar1;
  long lVar2;
  RtObject *this_00;
  PowerPropsDamageRadius *pPVar3;
  ComponentDamageRadius *this_01;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  PowerSet aPStack_108 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0416a0ac(aRStack_f0,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
  PowerSet::PowerSet(aPStack_108,(PowerSet *)(lVar2 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  ComponentDamageRadiusProps::ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  iVar1 = FUN_0416a0d0(*(undefined8 *)(this + 0x10));
  uVar4 = 2;
  if (2 < iVar1) {
    uVar4 = 3;
  }
  PowerSet::Find(aRStack_110,aPStack_108,5,uVar4);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_110);
  pPVar3 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(this_00);
  ComponentDamageRadiusProps::operator=
            ((ComponentDamageRadiusProps *)aRStack_f0,(ComponentDamageRadiusProps *)(pPVar3 + 0x18))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  calcRealDamage(this,(ComponentDamageRadiusProps *)aRStack_f0);
  this_01 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  ComponentDamageRadius::SetRadiusProps(this_01,(ComponentDamageRadiusProps *)aRStack_f0);
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::~PowerSet(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::makeNextAttackNormal() */

void __thiscall PlantPhatBeet::makeNextAttackNormal(PlantPhatBeet *this)

{
  long lVar1;
  RtObject *this_00;
  PowerPropsDamageRadius *pPVar2;
  ComponentDamageRadius *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  PowerSet aPStack_108 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0416a0ac(aRStack_f0,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
  PowerSet::PowerSet(aPStack_108,(PowerSet *)(lVar1 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  ComponentDamageRadiusProps::ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::Find(aRStack_110,aPStack_108,5,0);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_110);
  pPVar2 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(this_00);
  ComponentDamageRadiusProps::operator=
            ((ComponentDamageRadiusProps *)aRStack_f0,(ComponentDamageRadiusProps *)(pPVar2 + 0x18))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  calcRealDamage(this,(ComponentDamageRadiusProps *)aRStack_f0);
  this_01 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  ComponentDamageRadius::SetRadiusProps(this_01,(ComponentDamageRadiusProps *)aRStack_f0);
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::~PowerSet(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPhatBeet::setTypeOfAttackToMake() */

void __thiscall PlantPhatBeet::setTypeOfAttackToMake(PlantPhatBeet *this)

{
  char cVar1;
  
  cVar1 = isCurrentlyPowerfulAttack(this);
  if (cVar1 == '\0') {
    makeNextAttackNormal(this);
    return;
  }
  makeNextAttackPowerful(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::ApplyPlantfood() */

void __thiscall PlantPhatBeet::ApplyPlantfood(PlantPhatBeet *this)

{
  long lVar1;
  RtObject *this_00;
  PowerPropsDamageRadius *pPVar2;
  ComponentDamageRadius *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  PowerSet aPStack_108 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0416a0ac(aRStack_f0,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
  PowerSet::PowerSet(aPStack_108,(PowerSet *)(lVar1 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  ComponentDamageRadiusProps::ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::Find(aRStack_110,aPStack_108,5,1);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_110);
  pPVar2 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(this_00);
  ComponentDamageRadiusProps::operator=
            ((ComponentDamageRadiusProps *)aRStack_f0,(ComponentDamageRadiusProps *)(pPVar2 + 0x18))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  calcRealDamage(this,(ComponentDamageRadiusProps *)aRStack_f0);
  this_01 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  ComponentDamageRadius::SetRadiusProps(this_01,(ComponentDamageRadiusProps *)aRStack_f0);
  setState(this,0xb);
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::~PowerSet(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeet::doLvl5Attack() */

void __thiscall PlantPhatBeet::doLvl5Attack(PlantPhatBeet *this)

{
  long lVar1;
  RtObject *this_00;
  PowerPropsDamageRadius *pPVar2;
  ComponentDamageRadius *this_01;
  ComponentConditionRadius *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  PowerSet aPStack_108 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0416a0ac(aRStack_f0,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f0);
  PowerSet::PowerSet(aPStack_108,(PowerSet *)(lVar1 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
  ComponentDamageRadiusProps::ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::Find(aRStack_110,aPStack_108,5,5);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_110);
  pPVar2 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(this_00);
  ComponentDamageRadiusProps::operator=
            ((ComponentDamageRadiusProps *)aRStack_f0,(ComponentDamageRadiusProps *)(pPVar2 + 0x18))
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  calcRealDamage(this,(ComponentDamageRadiusProps *)aRStack_f0);
  this_01 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48))
  ;
  ComponentDamageRadius::SetRadiusProps(this_01,(ComponentDamageRadiusProps *)aRStack_f0);
  this_02 = (ComponentConditionRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48))
  ;
  ComponentConditionRadius::beginCoolDown(this_02);
  setState(this,0xc);
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)aRStack_f0);
  PowerSet::~PowerSet(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPhatBeet::UpdateActions() */

void __thiscall PlantPhatBeet::UpdateActions(PlantPhatBeet *this)

{
  bool bVar1;
  char cVar2;
  ComponentConditionRadius *this_00;
  int iVar3;
  int iVar4;
  float fVar5;
  
  cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
    do {
      switch(iVar4) {
      case 4:
        cVar2 = FUN_0416a0d8();
        if ((cVar2 == '\0') || (fVar5 = (float)PVZ_T(), fVar5 <= *(float *)(this + 0x58))) {
          setTypeOfAttackToMake(this);
          cVar2 = shouldStartAttack(this);
          if (cVar2 == '\0') goto LAB_0416de7c;
          setState(this,10);
          iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
        }
        else {
          cVar2 = shouldStartAttack(this);
          if (cVar2 == '\0') goto LAB_0416de7c;
          setState(this,0xd);
          iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
        }
        break;
      default:
        goto switchD_0416de64_caseD_5;
      case 0xb:
        this_00 = (ComponentConditionRadius *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        ComponentConditionRadius::beginCoolDown(this_00);
      case 10:
        doBasicAttack(this);
LAB_0416de7c:
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
        break;
      case 0xd:
        doLvl5Attack(this);
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      bVar1 = iVar4 == iVar3;
      iVar4 = iVar3;
      if (bVar1) {
        return;
      }
    } while( true );
  }
switchD_0416de64_caseD_5:
  return;
}

