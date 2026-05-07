// Class: PlantCthulhuActinia


/* PlantCthulhuActinia::GetEyeballStatus() */

PlantCthulhuActinia __thiscall PlantCthulhuActinia::GetEyeballStatus(PlantCthulhuActinia *this)

{
  return this[0x40];
}


/* PlantCthulhuActinia::CthulhuActiniaTentacleDragStart(Plant*) */

void __thiscall
PlantCthulhuActinia::CthulhuActiniaTentacleDragStart(PlantCthulhuActinia *this,Plant *param_1)

{
  char cVar1;
  
  if (((param_1 != (Plant *)0x0) && (*(Plant **)(this + 0x10) == param_1)) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 != '\0')) {
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  }
  return;
}


/* PlantCthulhuActinia::CalcRenderOrder() */

void __thiscall PlantCthulhuActinia::CalcRenderOrder(PlantCthulhuActinia *this)

{
  if (*(int *)(*(long *)(this + 0x10) + 200) != 0x10) {
    PlantFramework::CalcRenderOrder((PlantFramework *)this);
    return;
  }
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  return;
}


/* PlantCthulhuActinia::GetTargetEntityTypesForWeapon(PlantWeapon) */

undefined8 PlantCthulhuActinia::GetTargetEntityTypesForWeapon(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 2;
  }
  uVar1 = operator|(2,4);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::StaticClassInit() */

void PlantCthulhuActinia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCthulhuActinia");
    (*pcVar2)(plVar1,asStack_10,FUN_04d5b944,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCthulhuActinia::StaticGetClass() */

long * PlantCthulhuActinia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCthulhuActinia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCthulhuActinia::GetClass() const */

long * PlantCthulhuActinia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCthulhuActinia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::GetFireLaserAnimationName() */

void PlantCthulhuActinia::GetFireLaserAnimationName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = FUN_04d586ac(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x50));
  if (iVar2 == 5) {
    std::string::string(in_x8,"eyeball_fire_laser_lv5");
    nop();
  }
  else {
    std::string::string(in_x8,"eyeball_fire_laser");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCthulhuActinia::GetTentacleAbsorbTimeExchange() */

undefined4 __thiscall PlantCthulhuActinia::GetTentacleAbsorbTimeExchange(PlantCthulhuActinia *this)

{
  if (*(int *)(*(long *)(this + 0x10) + 200) != 0xd) {
    return 0;
  }
  return *(undefined4 *)(this + 0x3c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::GetRefundSunAmount() */

void PlantCthulhuActinia::GetRefundSunAmount(void)

{
  int iVar1;
  RtObject *this;
  PlantTypeCthulhuActinia *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = Sexy::RtObject::Cast<PlantTypeCthulhuActinia>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar2 == (PlantTypeCthulhuActinia *)0x0) {
    fVar3 = 0.0;
  }
  else {
    iVar1 = (**(code **)(*(long *)pPVar2 + 0x98))(pPVar2);
    fVar3 = (float)iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


/* PlantCthulhuActinia::PlantCthulhuActinia() */

void __thiscall PlantCthulhuActinia::PlantCthulhuActinia(PlantCthulhuActinia *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069b33c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  return;
}


/* PlantCthulhuActinia::StaticNew() */

PlantCthulhuActinia * PlantCthulhuActinia::StaticNew(void)

{
  PlantCthulhuActinia *this;
  
  this = ::operator_new(0x90);
  PlantCthulhuActinia(this);
  return this;
}


/* PlantCthulhuActinia::IsTentacleAvailable() */

bool __thiscall PlantCthulhuActinia::IsTentacleAvailable(PlantCthulhuActinia *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_04d5ae38(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    return true;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return *(int *)(this + 0x48) < *(int *)(lVar2 + 0x334);
  }
  return *(int *)(this + 0x48) < *(int *)(lVar2 + 0x338);
}


/* PlantCthulhuActinia::GetTentacleDamage() */

float __thiscall PlantCthulhuActinia::GetTentacleDamage(PlantCthulhuActinia *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = FUN_04d5ae38(*(undefined8 *)(this + 0x10));
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(lVar3 + 0x328);
    fVar4 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    return fVar4 * (float)iVar1;
  }
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(lVar3 + 0x330);
    fVar4 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    return fVar4 * (float)iVar1;
  }
  iVar1 = *(int *)(lVar3 + 0x32c);
  fVar4 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  return fVar4 * (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::GenerateTentacle(int, int, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantCthulhuActinia::GenerateTentacle
          (PlantCthulhuActinia *this,int param_1,int param_2,RtMixedPtrBase *param_4)

{
  char cVar1;
  RtObject *this_00;
  GridItemCthulhuActiniaTentacle *pGVar2;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x180))();
  Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"griditem_cthulhuactinia_tentacle");
  this_00 = (RtObject *)Board::AddGridItem(this_01,asStack_10,param_1,param_2,1);
  pGVar2 = Sexy::RtObject::Cast<GridItemCthulhuActiniaTentacle>(this_00);
  std::string::~string(asStack_10);
  nop();
  if (pGVar2 != (GridItemCthulhuActiniaTentacle *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    GridItemCthulhuActiniaTentacle::SetOwnerPlant(pGVar2,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    FUN_04d5ae38(*(undefined8 *)(this + 0x10));
    GridItemCthulhuActiniaTentacle::SetProps((CthulhuActiniaProps *)pGVar2);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_4);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)param_4);
      GridItemCthulhuActiniaTentacle::SetTargetZombie(pGVar2,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCthulhuActinia::registerForEvents() */

void __thiscall PlantCthulhuActinia::registerForEvents(PlantCthulhuActinia *this)

{
  undefined *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CthulhuActiniaTentacleDragStart);
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_70 = local_50;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantCthulhuActinia,void(PlantCthulhuActinia::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleDragStart,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CthulhuActiniaTentacleDragOver);
  local_70 = local_38;
  local_80 = local_48;
  uStack_78 = uStack_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantCthulhuActinia,void(PlantCthulhuActinia::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleDragOver,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CthulhuActiniaTentacleAttackOver);
  local_80 = local_30;
  uStack_78 = uStack_28;
  local_70 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantCthulhuActinia,void(PlantCthulhuActinia::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleAttackOver,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantMoving);
  local_90 = local_8;
  local_a0 = local_18;
  uStack_98 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantCthulhuActinia,void(PlantCthulhuActinia::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_a0);
  return;
}


/* PlantCthulhuActinia::DarkEffectFlyEnd(float) */

void PlantCthulhuActinia::DarkEffectFlyEnd(float param_1)

{
  long in_x0;
  
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(in_x0 + 0x88));
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::CthulhuAbsorbDark,*(Plant **)(in_x0 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::IsZombieBlacklisted(Sexy::RtWeakPtr<Zombie>, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
PlantCthulhuActinia::IsZombieBlacklisted(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04d5a5ec(*param_3);
  uVar3 = FUN_04d5a63c(param_3[1]);
  local_18 = FUN_04d5d140(uVar2,uVar3,param_2);
  local_10 = FUN_04d5a63c(param_3[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::IsAbsorbTarget(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PlantCthulhuActinia::IsAbsorbTarget(PlantCthulhuActinia *this,RtWeakPtr *param_1)

{
  char cVar1;
  byte bVar2;
  GameObject *this_00;
  undefined8 uVar3;
  long *plVar4;
  Zombie *pZVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  Board *this_02;
  int local_18;
  int local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  BoardEntity::CalcGridPosition();
  this_00 = (GameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = GameObject::IsDestroyed(this_00);
  if (cVar1 == '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = RealObject::IsOnTeam(uVar3,2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = Creature::IsOnBoard();
      if (cVar1 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar1 = (**(code **)(*plVar4 + 0x328))();
        if (cVar1 == '\0') {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
          cVar1 = (**(code **)(*plVar4 + 0x330))();
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
            cVar1 = Zombie::HasHead(pZVar5);
            if (cVar1 != '\0') {
              pZVar5 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
              cVar1 = Zombie::IsControlled(pZVar5);
              if (cVar1 == '\0') {
                lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                cVar1 = FUN_02fd47a4(*(undefined4 *)(lVar6 + 0xcc));
                if (cVar1 == '\0') {
                  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                  cVar1 = Zombie::HasCondition(uVar3,0x2e);
                  if (cVar1 == '\0') {
                    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    cVar1 = Zombie::HasCondition(uVar3,0x5a);
                    if (cVar1 == '\0') {
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                (aRStack_10,(RtWeakPtrBase *)param_1);
                      lVar6 = FUN_04d5ae38(*(undefined8 *)(this + 0x10));
                      cVar1 = IsZombieBlacklisted(this,aRStack_10,lVar6 + 0x340);
                      bVar2 = 0;
                      if (cVar1 == '\0') {
                        pZVar5 = (Zombie *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                        cVar1 = Zombie::IsOnBoardOrClose(pZVar5,1);
                        if (cVar1 != '\0') {
                          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = (**(code **)(*plVar4 + 0x338))();
                          if (cVar1 == '\0') {
                            pZVar5 = (Zombie *)
                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                            cVar1 = Zombie::IsFlying(pZVar5);
                            if (cVar1 == '\0') {
                              pZVar5 = (Zombie *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                              cVar1 = Zombie::IsInWater(pZVar5);
                              if (cVar1 == '\0') {
                                this_02 = *(Board **)(gLawnApp + 0x9f0);
                                this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                pSVar7 = (SexyVector3 *)
                                         std::
                                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::_M_leftmost(this_01);
                                cVar1 = Board::IsSky(this_02,pSVar7);
                                if ((cVar1 == '\0') &&
                                   (cVar1 = PlantFramework::CanTargetGrid
                                                      ((PlantFramework *)this,local_18,local_14),
                                   cVar1 != '\0')) {
                                  pZVar5 = (Zombie *)
                                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                  cVar1 = Zombie::HasFogImmune(pZVar5);
                                  if (cVar1 == '\0') {
                                    pZVar5 = (Zombie *)
                                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                    cVar1 = Zombie::IsBerserk(pZVar5);
                                    if (cVar1 == '\0') {
                                      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                  param_1);
                                      cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                                      if (cVar1 == '\0') {
                                        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                   ((RtWeakPtr<Sexy::ResourceInfo> *
                                                                    )param_1);
                                        cVar1 = (**(code **)(*plVar4 + 0x508))();
                                        if (cVar1 == '\0') {
                                          pZVar5 = (Zombie *)
                                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                             ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                              param_1);
                                          cVar1 = Zombie::CanTakeFatalDamage(pZVar5);
                                          if (cVar1 != '\0') {
                                            pZVar5 = (Zombie *)
                                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                               ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                param_1);
                                            bVar2 = Zombie::IsParkourJumping(pZVar5);
                                            bVar2 = bVar2 ^ 1;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                      goto LAB_04d5d258;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_04d5d258:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::IsZombieFishable(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantCthulhuActinia::IsZombieFishable
          (PlantCthulhuActinia *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  byte bVar2;
  GameObject *this_00;
  undefined8 uVar3;
  long *plVar4;
  Zombie *pZVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  Board *this_02;
  int iStack_18;
  int iStack_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  BoardEntity::CalcGridPosition();
  this_00 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = GameObject::IsDestroyed(this_00);
  if (cVar1 == '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = RealObject::IsOnTeam(uVar3,2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Creature::IsOnBoard();
      if (cVar1 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = (**(code **)(*plVar4 + 0x328))();
        if (cVar1 == '\0') {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = (**(code **)(*plVar4 + 0x330))();
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = Zombie::HasHead(pZVar5);
            if (cVar1 != '\0') {
              pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = Zombie::IsControlled(pZVar5);
              if (cVar1 == '\0') {
                lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = FUN_02fd47a4(*(undefined4 *)(lVar6 + 0xcc));
                if (cVar1 == '\0') {
                  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  cVar1 = Zombie::HasCondition(uVar3,0x2e);
                  if (cVar1 == '\0') {
                    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    cVar1 = Zombie::HasCondition(uVar3,0x5a);
                    if (cVar1 == '\0') {
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                (aRStack_10,(RtWeakPtrBase *)param_2);
                      lVar6 = FUN_04d5ae38(*(undefined8 *)(this + 0x10));
                      cVar1 = IsZombieBlacklisted(this,aRStack_10,lVar6 + 0x340);
                      bVar2 = 0;
                      if (cVar1 == '\0') {
                        pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        cVar1 = Zombie::IsOnBoardOrClose(pZVar5,1);
                        if (cVar1 != '\0') {
                          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          cVar1 = (**(code **)(*plVar4 + 0x338))();
                          if (cVar1 == '\0') {
                            pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            cVar1 = Zombie::IsFlying(pZVar5);
                            if (cVar1 == '\0') {
                              pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              cVar1 = Zombie::IsInWater(pZVar5);
                              if (cVar1 == '\0') {
                                this_02 = *(Board **)(gLawnApp + 0x9f0);
                                this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                pSVar7 = (SexyVector3 *)
                                         std::
                                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::_M_leftmost(this_01);
                                cVar1 = Board::IsSky(this_02,pSVar7);
                                if ((cVar1 == '\0') &&
                                   (cVar1 = PlantFramework::CanTargetGrid
                                                      ((PlantFramework *)this,iStack_18,iStack_14),
                                   cVar1 != '\0')) {
                                  pZVar5 = (Zombie *)
                                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  cVar1 = Zombie::HasFogImmune(pZVar5);
                                  if (cVar1 == '\0') {
                                    pZVar5 = (Zombie *)
                                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    cVar1 = Zombie::IsBerserk(pZVar5);
                                    if (cVar1 == '\0') {
                                      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 (param_2);
                                      cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                                      if (cVar1 == '\0') {
                                        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                   (param_2);
                                        cVar1 = (**(code **)(*plVar4 + 0x508))();
                                        if (cVar1 == '\0') {
                                          pZVar5 = (Zombie *)
                                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2)
                                          ;
                                          cVar1 = Zombie::CanTakeFatalDamage(pZVar5);
                                          if (cVar1 != '\0') {
                                            pZVar5 = (Zombie *)
                                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                               (param_2);
                                            bVar2 = Zombie::IsParkourJumping(pZVar5);
                                            bVar2 = bVar2 ^ 1;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                      goto LAB_04d5d258;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_04d5d258:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::Initialize() */

void __thiscall PlantCthulhuActinia::Initialize(PlantCthulhuActinia *this)

{
  char cVar1;
  int iVar2;
  PlantAnimRig_DevilsFlower *pPVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  CthulhuSubSystem *pCVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  CthulhuSubSystem *pCVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pPVar3 = (PlantAnimRig_DevilsFlower *)FUN_04d5adb0(*(undefined8 *)(this + 0x10));
  if (pPVar3 != (PlantAnimRig_DevilsFlower *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  lVar9 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar9 + 200) = 10;
  iVar2 = FUN_04d586ac(*(undefined4 *)(lVar9 + 0x50));
  lVar9 = FUN_04d5ae38(lVar9);
  uVar11 = PVZ_T();
  uVar10 = (ulong)(iVar2 + -1);
  *(undefined4 *)(this + 0x28) = uVar11;
  fVar12 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar12 + *(float *)(lVar9 + 0x2b8);
  uVar11 = PVZ_EOT();
  uVar4 = *(undefined8 *)(lVar9 + 0x2c0);
  *(undefined4 *)(this + 0x30) = uVar11;
  *(undefined4 *)(this + 0x34) = uVar11;
  puVar5 = (undefined4 *)FUN_04d5872c(uVar4,uVar10);
  uVar4 = *(undefined8 *)(lVar9 + 0x2d8);
  *(undefined4 *)(this + 0x38) = *puVar5;
  puVar5 = (undefined4 *)FUN_04d5872c(uVar4,uVar10);
  uVar11 = *puVar5;
  this[0x40] = (PlantCthulhuActinia)0x0;
  *(undefined4 *)(this + 0x44) = 2;
  *(undefined4 *)(this + 0x3c) = uVar11;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50));
  *(undefined4 *)(this + 0x48) = 0;
  if (-1 < iVar2 + -1) {
    FUN_04d586f8((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,*(undefined8 *)(this + 0x10));
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar6 = FUN_04d58734(*(undefined8 *)(lVar9 + 0x208),*(undefined8 *)(lVar9 + 0x210));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (uVar10 < uVar6) {
      FUN_04d586f8((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,*(undefined8 *)(this + 0x10));
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar7 = (undefined8 *)FUN_04d58740(*(undefined8 *)(lVar9 + 0x208),uVar10);
                    /* WARNING: Load size is inaccurate */
      pCVar13._0_4_ = *puVar7;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_04d5d64c;
    }
  }
  pCVar13._0_4_ = (CthulhuSubSystem *)0x3f800000;
LAB_04d5d64c:
  cVar1 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(*(long **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    pCVar8 = Board::GetGameSubSystem<CthulhuSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)aRStack_10,"cthulhueyeball");
    CthulhuSubSystem::InitButton(pCVar13._0_4_,pCVar8,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::SetState(int) */

void __thiscall PlantCthulhuActinia::SetState(PlantCthulhuActinia *this,int param_1)

{
  PlantAnimRig_WizardThorns *pPVar1;
  char *pcVar2;
  RealObject *this_00;
  undefined4 uVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == *(int *)(*(long *)(this + 0x10) + 200)) goto switchD_04d5d7a0_default;
  FUN_04d5ae38();
  pPVar1 = (PlantAnimRig_WizardThorns *)FUN_04d5adb0(*(undefined8 *)(this + 0x10));
  this_00 = *(RealObject **)(this + 0x10);
  *(int *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 10:
    (**(code **)(*(long *)pPVar1 + 0x118))(pPVar1);
    break;
  case 0xb:
    pcVar2 = "attack_start";
    goto LAB_04d5d7b8;
  case 0xc:
    pcVar2 = "attack_normal_loop";
    goto LAB_04d5d898;
  case 0xd:
    pcVar2 = "attack_absorb_loop";
LAB_04d5d898:
    std::string::string(asStack_58,pcVar2);
    PlantAnimRig_DevilsFlower::playLoopAnimation((PlantAnimRig_DevilsFlower *)pPVar1,asStack_58);
    std::string::~string(asStack_58);
    nop();
    break;
  case 0xe:
    pcVar2 = "attack_end";
    goto LAB_04d5d7b8;
  case 0xf:
    pcVar2 = "bloom";
LAB_04d5d7b8:
    std::string::string(asStack_58,pcVar2);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar1,asStack_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    break;
  case 0x10:
    std::string::string(asStack_58,"Play_LaserBean_Food");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x30) = uVar3;
    *(undefined4 *)(this + 0x34) = uVar3;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x68));
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x80));
    GetFireLaserAnimationName();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)asStack_60,asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar1,(string *)aRStack_70,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string((string *)aRStack_70);
  }
switchD_04d5d7a0_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantCthulhuActinia::CancelPlantfood() */

void __thiscall PlantCthulhuActinia::CancelPlantfood(PlantCthulhuActinia *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetState(this,10);
  return;
}


/* PlantCthulhuActinia::CthulhuActiniaTentacleDragOver(Plant*) */

void __thiscall
PlantCthulhuActinia::CthulhuActiniaTentacleDragOver(PlantCthulhuActinia *this,Plant *param_1)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  
  if ((param_1 != (Plant *)0x0) && (*(Plant **)(this + 0x10) == param_1)) {
    cVar1 = (**(code **)(*(long *)this + 0x180))();
    if (cVar1 == '\0') {
      uVar2 = PVZ_T();
      *(undefined4 *)(this + 0x30) = uVar2;
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x34) = fVar3 + *(float *)(this + 0x38);
      SetState(this,0xd);
      return;
    }
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x30) = uVar2;
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x34) = uVar2;
  }
  return;
}


/* PlantCthulhuActinia::CthulhuActiniaTentacleAttackOver(Plant*) */

void __thiscall
PlantCthulhuActinia::CthulhuActiniaTentacleAttackOver(PlantCthulhuActinia *this,Plant *param_1)

{
  if (((param_1 != (Plant *)0x0) && (*(Plant **)(this + 0x10) == param_1)) &&
     (*(int *)(*(Plant **)(this + 0x10) + 200) == 0xc)) {
    SetState(this,0xe);
    return;
  }
  return;
}


/* PlantCthulhuActinia::OnPlantMoving(Plant*, Sexy::Point&) */

void PlantCthulhuActinia::OnPlantMoving(Plant *param_1,Point *param_2)

{
  if ((*(Point **)(param_1 + 0x10) == param_2) &&
     (*(int *)(*(Point **)(param_1 + 0x10) + 200) == 0xc)) {
    SetState((PlantCthulhuActinia *)param_1,0xe);
    return;
  }
  return;
}


/* PlantCthulhuActinia::UpdateEyeballTime() */

void __thiscall PlantCthulhuActinia::UpdateEyeballTime(PlantCthulhuActinia *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (this[0x40] == (PlantCthulhuActinia)0x0)) {
    fVar2 = (float)PVZ_Dt();
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + fVar2;
    fVar2 = (float)PVZ_Dt();
    fVar3 = (float)GetTentacleAbsorbTimeExchange(this);
    fVar2 = *(float *)(this + 0x28) + fVar2 * fVar3;
    *(float *)(this + 0x28) = fVar2;
    if ((this[0x40] == (PlantCthulhuActinia)0x0) &&
       ((*(float *)(this + 0x2c) <= fVar2 &&
        (this[0x40] = (PlantCthulhuActinia)0x1, *(int *)(*(long *)(this + 0x10) + 200) == 10)))) {
      SetState(this,0xf);
      return;
    }
  }
  return;
}


/* PlantCthulhuActinia::~PlantCthulhuActinia() */

void __thiscall PlantCthulhuActinia::~PlantCthulhuActinia(PlantCthulhuActinia *this)

{
  *(undefined ***)this = &PTR_GetClass_069b33c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x68));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCthulhuActinia::~PlantCthulhuActinia() */

void __thiscall PlantCthulhuActinia::~PlantCthulhuActinia(PlantCthulhuActinia *this)

{
  ~PlantCthulhuActinia(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::PlayDarkEffect(Sexy::SexyVector2 const&) */

void __thiscall PlantCthulhuActinia::PlayDarkEffect(PlantCthulhuActinia *this,SexyVector2 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *extraout_x0;
  char *pcVar3;
  code *pcVar4;
  float fVar5;
  FastCurve aFStack_70 [8];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  FastCurve aFStack_58 [8];
  undefined4 local_50;
  float local_4c;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d58c3c();
  Sexy::FastCurve::SetOutRange(aFStack_70,(float)iVar1,(float)iVar1);
  iVar1 = FUN_04d58c74();
  Sexy::FastCurve::SetOutRange(aFStack_68,(float)iVar1,(float)iVar1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_60)
  ;
  local_60 = 0x43480000;
  local_5c = 0x43200000;
  fVar5 = 160.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  Sexy::FastCurve::SetOutRange
            (aFStack_58,200.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),fVar5);
  uVar2 = AddCthulhuEnergyEffect::StaticGetClass();
  GameObject::Create(uVar2,0x27);
  nop();
  pcVar4 = *(code **)(*extraout_x0 + 0x88);
  local_50 = Sexy::SexyVector2::operator+(param_1,(SexyVector2 *)aFStack_70);
  local_4c = fVar5;
  (*pcVar4)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar4 = *(code **)(*extraout_x0 + 0x90);
  local_50 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_60,(SexyVector2 *)aFStack_68);
  local_4c = fVar5;
  (*pcVar4)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar4 = *(code **)(*extraout_x0 + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DarkEffectFlyEnd);
  Sexy::Delegate1<float>::Delegate1<PlantCthulhuActinia,void(PlantCthulhuActinia::*)(float)>
            (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  (*pcVar4)(extraout_x0,aDStack_38);
  (**(code **)(*extraout_x0 + 0x78))(extraout_x0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88),(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_PVP_Battle_Get_Energy");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::ApplyPlantfood() */

void __thiscall PlantCthulhuActinia::ApplyPlantfood(PlantCthulhuActinia *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetState(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = uVar2;
  if (this[0x40] == (PlantCthulhuActinia)0x0) {
    lVar1 = *(long *)(this + 0x10);
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    local_10 = FUN_04d58830(*(undefined4 *)(lVar1 + 0x18),uVar2,*(undefined4 *)(lVar1 + 0x20));
    local_c = uVar2;
    local_10 = FUN_04d58c50();
    local_c = FUN_04d58c50(uVar2);
    PlayDarkEffect(this,(SexyVector2 *)&local_10);
  }
  this[0x40] = (PlantCthulhuActinia)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::CthulhuActiniaPlantfood,
             *(Plant **)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::SpawnZombie(Zombie*) */

void PlantCthulhuActinia::SpawnZombie(Zombie *param_1)

{
  int iVar1;
  string *psVar2;
  ZombieType *this;
  SexyVector3 *pSVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long *plVar4;
  code *pcVar5;
  Zombie *pZVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [10];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  CthulhuActiniaSubSystem::getTransformType(param_1);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::string::~string((string *)local_90);
  this = (ZombieType *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  ZombieType::EnsureResourceGroupsLoaded(this);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_90);
  iVar1 = FUN_04d586ac(*(undefined4 *)(in_x1 + 0x50));
  local_90[0] = ClampInt(iVar1,1,5);
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_a8);
  pSVar3 = (SexyVector3 *)(*pcVar5)(plVar4,aRStack_68,0,(string *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (pSVar3 == (SexyVector3 *)0x0) {
    pcVar5 = *(code **)(*(long *)in_x1 + 0x120);
    Sexy::Point::Point(aPStack_a0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aRStack_68,4,aPStack_a0,0);
    (*pcVar5)();
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(in_x1);
    BoardEntity::PlaceOnBoard(pSVar3);
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,pSVar3,0x83,1);
    RealObject::JoinTeam((RealObject *)pSVar3,1);
    Zombie::SetFacing((Zombie *)pSVar3,1);
    pcVar5 = *(code **)(*(long *)in_x1 + 0x120);
    Sexy::Point::Point(aPStack_a0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aRStack_68,4,aPStack_a0,0);
    (*pcVar5)();
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::UpdateEyeballLaser() */

void __thiscall PlantCthulhuActinia::UpdateEyeballLaser(PlantCthulhuActinia *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PopAnimRig *this_00;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  RtWeakPtrBase *this_01;
  float *pfVar11;
  GridItem *pGVar12;
  ulong uVar13;
  Zombie *pZVar14;
  long lVar15;
  ulong uVar16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float fVar17;
  float local_a8;
  float local_a4;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_a8 = 0.0;
  local_a4 = 0.0;
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_68,"laserbean_blast_base");
  cVar2 = PopAnimRig::CalcLayerTranslation(this_00,asStack_68,&local_a8,&local_a4);
  std::string::~string(asStack_68);
  nop();
  if ((cVar2 != '\0') && (this[0x40] != (PlantCthulhuActinia)0x0)) {
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar4 = BoardTransforms::BoardSpaceToGridX(local_a8 + *pfVar7);
    bVar1 = iVar4 == -1;
    if (bVar1) {
      iVar4 = 0x11;
    }
    lVar15 = *(long *)this;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3 + 1;
    }
    if (*(code **)(lVar15 + 400) == PlantFramework::GetCollisionFlags) {
      uVar5 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar5 = (**(code **)(lVar15 + 400))(this,1);
      lVar15 = *(long *)this;
    }
    if (*(code **)(lVar15 + 0x198) == PlantFramework::GetDamageFlags) {
      uVar8 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar8 = (**(code **)(lVar15 + 0x198))(this,1);
    }
    uVar16 = 0;
    Plant::GetProps();
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    FUN_04d58824(*(undefined8 *)(lVar15 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    operator|=(auStack_58,uVar8);
    operator|=(auStack_58,0x80);
    fVar17 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    local_60 = (fVar17 + 1.0) * local_60;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar6 = operator|(2,4);
    Sexy::Insets::Insets
              (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),(iVar4 - iVar3) + 1,1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar6,
               aIStack_90);
    uVar8 = local_80;
    lVar15 = FUN_04d58754(local_80,local_78);
    if (lVar15 != 0) {
      do {
        puVar9 = (undefined8 *)FUN_04d58760(uVar8,uVar16);
        this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)*puVar9;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aIStack_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90)
        ;
        uVar8 = *(undefined8 *)(this + 0x68);
        lVar10 = FUN_04d58768(uVar8,*(undefined8 *)(this + 0x70));
        for (lVar15 = 0; lVar15 != lVar10; lVar15 = lVar15 + 1) {
          this_01 = (RtWeakPtrBase *)FUN_04d58774(uVar8,lVar15);
          cVar2 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_a0);
          if (cVar2 != '\0') goto LAB_04d5f5b0;
        }
        if (bVar1) {
LAB_04d5f58c:
          pGVar12 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_02);
          if (pGVar12 == (GridItem *)0x0) {
            pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
            if ((pZVar14 == (Zombie *)0x0) ||
               (((((cVar2 = (**(code **)(*(long *)pZVar14 + 0xb8))(pZVar14,uVar5), cVar2 != '\0' &&
                   (cVar2 = RealObject::IsOnOpposingTeam
                                      ((RealObject *)pZVar14,*(RealObject **)(this + 0x10)),
                   cVar2 != '\0')) &&
                  (cVar2 = (**(code **)(*(long *)pZVar14 + 0x328))(pZVar14), cVar2 == '\0')) &&
                 ((cVar2 = (**(code **)(*(long *)pZVar14 + 0x330))(pZVar14), cVar2 == '\0' &&
                  (cVar2 = Zombie::HasHead(pZVar14), cVar2 != '\0')))) &&
                ((cVar2 = Zombie::IsControlled(pZVar14), cVar2 == '\0' &&
                 ((cVar2 = FUN_02fd47a4(*(undefined4 *)(pZVar14 + 0xcc)), cVar2 == '\0' &&
                  (cVar2 = Zombie::IsIgnoringAllDamage(pZVar14), cVar2 == '\0')))))))) {
              (**(code **)(*(long *)this_02 + 0x110))(this_02,asStack_68);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aIStack_90,(RtWeakPtrBase *)aRStack_98);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x68),(RtWeakPtr *)aIStack_90);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
              iVar4 = FUN_04d586ac(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
              if ((iVar4 == 5) &&
                 (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x80)),
                 cVar2 == '\0')) {
                pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
                cVar2 = (**(code **)(*(long *)pZVar14 + 0x328))();
                if (cVar2 == '\0') {
                  pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
                  cVar2 = Zombie::HasHead(pZVar14);
                  if (cVar2 != '\0') {
                    pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
                    cVar2 = (**(code **)(*(long *)pZVar14 + 0x330))();
                    if (cVar2 == '\0') {
                      pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
                      cVar2 = Zombie::CanTakeFatalDamage(pZVar14);
                      if (cVar2 != '\0') {
                        Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
                        ToolPacketData::GetProps();
                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                  ((RtWeakPtr<Sexy::SoundResource> *)aIStack_90,
                                   (RtWeakPtrBase *)aRStack_98);
                        cVar2 = IsZombieFishable(this,aIStack_90);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
                        if (cVar2 != '\0') {
                          Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
                          SpawnZombie((Zombie *)this);
                          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x80),
                                     (RtWeakPtrBase *)aIStack_90);
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            cVar2 = (**(code **)(*(long *)pGVar12 + 0x1f8))();
            if ((cVar2 != '\0') && (cVar2 = RealObject::IsOnTeam(pGVar12,2), cVar2 != '\0')) {
              (**(code **)(*(long *)pGVar12 + 0x110))(pGVar12,asStack_68);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aIStack_90,(RtWeakPtrBase *)aRStack_98);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x68),(RtWeakPtr *)aIStack_90);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
            }
          }
        }
        else {
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_02);
          pfVar11 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             **)(this + 0x10));
          if (*pfVar7 <= local_a8 + *pfVar11) goto LAB_04d5f58c;
        }
LAB_04d5f5b0:
        uVar16 = uVar16 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
        uVar8 = local_80;
        uVar13 = FUN_04d58754(local_80,local_78);
      } while (uVar16 < uVar13);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::UpdateActions() */

void __thiscall PlantCthulhuActinia::UpdateActions(PlantCthulhuActinia *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  RtMixedPtrBase aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if (bVar2) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    (**(code **)(*plVar5 + 0x80))();
    lVar4 = *(long *)(this + 0x10);
    iVar1 = *(int *)(lVar4 + 200);
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    iVar1 = *(int *)(lVar4 + 200);
  }
  if (iVar1 == 0xd) {
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x34) < fVar6) {
      uVar7 = PVZ_EOT();
      *(undefined4 *)(this + 0x30) = uVar7;
      *(undefined4 *)(this + 0x34) = uVar7;
      SetState(this,0xf);
    }
  }
  else if (iVar1 == 0x10) {
    UpdateEyeballLaser(this);
  }
  else if (iVar1 == 10) {
    if (this[0x40] == (PlantCthulhuActinia)0x0) {
      Plant::FindTarget(aRStack_10);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar3 != '\0') {
        SetState(this,0xb);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      Plant::FindTarget(aRStack_18,lVar4,1);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      if (cVar3 == '\0') {
        Plant::FindTarget(aRStack_10,*(undefined8 *)(this + 0x10));
        cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        if (cVar3 != '\0') {
          SetState(this,0xb);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      else {
        SetState(this,0x10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::FindAttackTargets(Sexy::TRect<int>, bool) */

void PlantCthulhuActinia::FindAttackTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               PlantCthulhuActinia *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  Zombie *extraout_x0;
  code *pcVar3;
  undefined8 local_50;
  undefined8 local_48;
  Zombie *local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,param_3);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar1 == '\0') {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      nop();
      local_40 = extraout_x0;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        pcVar3 = *(code **)(*(long *)local_40 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_30);
        cVar1 = (*pcVar3)(local_40,aRStack_28,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if ((cVar1 != '\0') &&
           ((param_4 == '\0' ||
            (cVar1 = IsAbsorbTarget(param_2,(RtWeakPtr *)aRStack_38), cVar1 != '\0')))) {
          std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                    ((vector<Zombie*,std::allocator<Zombie*>> *)param_1,&local_40);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantCthulhuActinia::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               undefined8 param_1,Insets *param_3)

{
  long lVar1;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_30,param_3);
  FindAttackTargets((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,param_1,aIStack_30,0);
  lVar1 = FUN_04d58748(local_20,local_18);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1_00);
  }
  else {
    FUN_04d5882c(local_20,lVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::OnAnimCommand(std::string const&, std::string const&) */

void PlantCthulhuActinia::OnAnimCommand(string *param_1,string *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  RtMixedPtrBase aRStack_68 [8];
  ulong local_60;
  Insets aIStack_58 [16];
  ulong local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d5ae38(*(undefined8 *)(param_1 + 0x10));
  cVar6 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  bVar7 = std::operator==(param_2,"use_action");
  if (bVar7) {
    iVar11 = 1;
    if (cVar6 == '\0') {
      Plant::FindTarget(aRStack_68,*(undefined8 *)(param_1 + 0x10),0);
      cVar6 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)param_1 + 0x2b0))(aIStack_58,param_1,0);
        Sexy::Insets::Insets((Insets *)&local_20,aIStack_58);
        FindAttackTargets((vector<Zombie*,std::allocator<Zombie*>> *)&local_38,param_1,
                          (Insets *)&local_20,1);
        uVar5 = local_38;
        lVar9 = FUN_04d58748(local_38,local_30);
        if (lVar9 == 0) {
          Sexy::Insets::Insets((Insets *)local_48,aIStack_58);
          FindAttackTargets((Insets *)&local_20,param_1,(Insets *)local_48,0);
          FUN_04d5882c(CONCAT44(uStack_1c,local_20));
          BoardEntity::CalcGridPosition();
          Sexy::Point::Point((Point *)local_48,(int)local_60,
                             *(int *)(*(long *)(param_1 + 0x10) + 0x110));
          local_60 = local_48[0];
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_48);
          GenerateTentacle((PlantCthulhuActinia *)param_1,local_48[0] & 0xffffffff,
                           local_48[0] >> 0x20,(Insets *)local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48)
          ;
          std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                    ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
        }
        else {
          FUN_04d5882c(uVar5);
          BoardEntity::CalcGridPosition();
          uVar4 = local_60;
          uVar3 = local_60 >> 0x20;
          FUN_04d5882c(local_38);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)local_48);
          GenerateTentacle((PlantCthulhuActinia *)param_1,uVar4 & 0xffffffff,uVar3,
                           (Insets *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48)
          ;
        }
        std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                  ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      do {
        iVar10 = -1;
        do {
          iVar1 = iVar11 + *(int *)(*(long *)(param_1 + 0x10) + 0x114);
          if (-1 < iVar1) {
            iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x110) + iVar10;
            iVar8 = BoardConstants::NUMBER_OF_COLUMNS();
            if (((iVar1 < iVar8) && (-1 < iVar2)) &&
               (iVar8 = BoardConstants::NUMBER_OF_ROWS(), iVar2 < iVar8)) {
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20
                        );
              GenerateTentacle((PlantCthulhuActinia *)param_1,iVar1,iVar2,
                               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                               &local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != 2);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
    }
  }
  else {
    bVar7 = std::operator==(param_2,"bloom_action");
    if (bVar7) {
      lVar9 = *(long *)(param_1 + 0x10);
      uVar12 = *(undefined4 *)(lVar9 + 0x1c);
      local_20 = FUN_04d58830(*(undefined4 *)(lVar9 + 0x18),uVar12,*(undefined4 *)(lVar9 + 0x20));
      uStack_1c = uVar12;
      local_20 = FUN_04d58c50();
      uStack_1c = FUN_04d58c50(uVar12);
      PlayDarkEffect((PlantCthulhuActinia *)param_1,(SexyVector2 *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCthulhuActinia::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantCthulhuActinia::onAnimStoppedCallback(PlantCthulhuActinia *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  RtMixedPtrBase aRStack_48 [8];
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04d5ae38(*(undefined8 *)(this + 0x10));
  bVar1 = std::operator==(param_1,"attack_start");
  if (bVar1) {
    Plant::FindTarget(aRStack_48,*(undefined8 *)(this + 0x10),0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
    if (cVar2 == '\0') {
      SetState(this,10);
    }
    else {
      (**(code **)(*(long *)this + 0x2b0))(aIStack_40,this,0);
      Sexy::Insets::Insets(aIStack_30,aIStack_40);
      FindAttackTargets((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,this,aIStack_30,1);
      lVar3 = FUN_04d58748(local_20,local_18);
      if (lVar3 == 0) {
        SetState(this,0xc);
      }
      else {
        SetState(this,0xd);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  else {
    bVar1 = std::operator==(param_1,"attack_end");
    if (bVar1) {
      SetState(this,10);
    }
    else {
      bVar1 = std::operator==(param_1,"bloom");
      if (bVar1) {
        this[0x40] = (PlantCthulhuActinia)0x1;
        SetState(this,10);
      }
      else {
        lVar4 = FUN_05474374(param_1,"eyeball_fire_laser",0);
        if (lVar4 != -1) {
          this[0x40] = (PlantCthulhuActinia)0x0;
          uVar5 = PVZ_T();
          *(undefined4 *)(this + 0x28) = uVar5;
          fVar6 = (float)PVZ_T();
          *(float *)(this + 0x2c) = fVar6 + *(float *)(lVar3 + 0x2b8);
          SetState(this,10);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

