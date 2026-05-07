// Class: ZombossRobotTrampleActionHandler


/* ZombossRobotTrampleActionHandler::drawCrushRect(Sexy::Graphics*) */

void ZombossRobotTrampleActionHandler::drawCrushRect(Graphics *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::StaticClassInit() */

void ZombossRobotTrampleActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotTrampleActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f19684,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotTrampleActionHandler::StaticGetClass() */

long * ZombossRobotTrampleActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotTrampleActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotTrampleActionHandler::GetClass() const */

long * ZombossRobotTrampleActionHandler::GetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotTrampleActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::pickRandomCrushRect() */

void __thiscall
ZombossRobotTrampleActionHandler::pickRandomCrushRect(ZombossRobotTrampleActionHandler *this)

{
  int iVar1;
  Insets *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::Rand(4);
  Sexy::Point::Point((Point *)&local_10,5,iVar1);
  if (local_c == 1) {
    local_c = 0;
  }
  else if (local_c == 2) {
    local_c = 3;
  }
  Sexy::Insets::Insets(in_x8,local_10,local_c,4,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotTrampleActionHandler::ZombossRobotTrampleActionHandler() */

void __thiscall
ZombossRobotTrampleActionHandler::ZombossRobotTrampleActionHandler
          (ZombossRobotTrampleActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a11040;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  return;
}


/* ZombossRobotTrampleActionHandler::StaticNew() */

ZombossRobotTrampleActionHandler * ZombossRobotTrampleActionHandler::StaticNew(void)

{
  ZombossRobotTrampleActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossRobotTrampleActionHandler(this);
  return this;
}


/* ZombossRobotTrampleActionHandler::~ZombossRobotTrampleActionHandler() */

void __thiscall
ZombossRobotTrampleActionHandler::~ZombossRobotTrampleActionHandler
          (ZombossRobotTrampleActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a11040;
  ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  return;
}


/* ZombossRobotTrampleActionHandler::~ZombossRobotTrampleActionHandler() */

void __thiscall
ZombossRobotTrampleActionHandler::~ZombossRobotTrampleActionHandler
          (ZombossRobotTrampleActionHandler *this)

{
  ~ZombossRobotTrampleActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::onTrampleAnimStoppedCallback(std::string const&) */

void __thiscall
ZombossRobotTrampleActionHandler::onTrampleAnimStoppedCallback
          (ZombossRobotTrampleActionHandler *this,string *param_1)

{
  char cVar1;
  Zombie *this_00;
  RtObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  FUN_04f11f38(asStack_10,*(undefined4 *)(this + 0x34));
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xb0))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombossRobotTrampleActionHandler::AddToRenderQueue
          (ZombossRobotTrampleActionHandler *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawCrushRect);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ZombossRobotTrampleActionHandler,void(ZombossRobotTrampleActionHandler::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::onStartAction() */

void __thiscall
ZombossRobotTrampleActionHandler::onStartAction(ZombossRobotTrampleActionHandler *this)

{
  long lVar1;
  bool bVar2;
  Zombie *this_00;
  RtObject *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = ___stack_chk_guard;
  ZombossRobotBaseZombieActionHandler::onStartAction((ZombossRobotBaseZombieActionHandler *)this);
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar4 + *(float *)(pZVar3 + 0x3c);
  pickRandomCrushRect(this);
  bVar2 = lVar1 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x30) = local_18;
  *(undefined8 *)(this + 0x38) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::playTrampleAnim() */

void __thiscall
ZombossRobotTrampleActionHandler::playTrampleAnim(ZombossRobotTrampleActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f11f38(asStack_70,*(undefined4 *)(this + 0x34));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTrampleAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::startNextAction() */

void __thiscall
ZombossRobotTrampleActionHandler::startNextAction(ZombossRobotTrampleActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f11f38(asStack_70,*(undefined4 *)(this + 0x34));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTrampleAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::crushEntities() */

void __thiscall
ZombossRobotTrampleActionHandler::crushEntities(ZombossRobotTrampleActionHandler *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  GridItem *pGVar6;
  TRect *extraout_x1;
  RtObject *this_00;
  code *pcVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)(this + 0x30),extraout_x1);
  uVar3 = operator|(4,1);
  EntityFinder::GetEntitiesInRectangle(avStack_80,uVar3,auStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    this_00 = (RtObject *)*puVar4;
    pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar5 == (Plant *)0x0) {
      pGVar6 = Sexy::RtObject::Cast<GridItem>(this_00);
      if ((pGVar6 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar6 + 0x1f8))(), cVar2 != '\0')) {
        pcVar7 = *(code **)(*(long *)pGVar6 + 0x120);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_98,local_94,aDStack_68,0x200000,0,aPStack_a0,0);
        (*pcVar7)(pGVar6,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      pcVar7 = *(code **)(*(long *)pPVar5 + 0x120);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aDStack_68,0x200000,0,aPStack_a0,0)
      ;
      (*pcVar7)(pPVar5,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombossRobotTrampleActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  Zombie *this;
  RtObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = (RtObject *)Zombie::GetAnimRig(this);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_00);
  FUN_04f124d8(asStack_10);
  cVar1 = std::operator==(param_4,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    crushEntities((ZombossRobotTrampleActionHandler *)param_1);
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),0,-10,0.15);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

