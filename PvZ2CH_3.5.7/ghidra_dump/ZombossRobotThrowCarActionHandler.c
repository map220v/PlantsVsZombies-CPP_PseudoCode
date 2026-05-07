// Class: ZombossRobotThrowCarActionHandler


/* ZombossRobotThrowCarActionHandler::drawCrushRect(Sexy::Graphics*) */

void ZombossRobotThrowCarActionHandler::drawCrushRect(Graphics *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotThrowCarActionHandler::StaticClassInit() */

void ZombossRobotThrowCarActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotThrowCarActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f18e78,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotThrowCarActionHandler::StaticGetClass() */

long * ZombossRobotThrowCarActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotThrowCarActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotThrowCarActionHandler::GetClass() const */

long * ZombossRobotThrowCarActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotThrowCarActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotThrowCarActionHandler::pickRandomCrushRect() */

void __thiscall
ZombossRobotThrowCarActionHandler::pickRandomCrushRect(ZombossRobotThrowCarActionHandler *this)

{
  int iVar1;
  int iVar2;
  Insets *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::Rand(3);
  iVar2 = Sexy::Rand(4);
  Sexy::Point::Point((Point *)&local_10,iVar1,iVar2);
  Sexy::Insets::Insets(in_x8,local_10,local_c,3,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotThrowCarActionHandler::ZombossRobotThrowCarActionHandler() */

void __thiscall
ZombossRobotThrowCarActionHandler::ZombossRobotThrowCarActionHandler
          (ZombossRobotThrowCarActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a10cc0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  return;
}


/* ZombossRobotThrowCarActionHandler::StaticNew() */

ZombossRobotThrowCarActionHandler * ZombossRobotThrowCarActionHandler::StaticNew(void)

{
  ZombossRobotThrowCarActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossRobotThrowCarActionHandler(this);
  return this;
}


/* ZombossRobotThrowCarActionHandler::~ZombossRobotThrowCarActionHandler() */

void __thiscall
ZombossRobotThrowCarActionHandler::~ZombossRobotThrowCarActionHandler
          (ZombossRobotThrowCarActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10cc0;
  ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  return;
}


/* ZombossRobotThrowCarActionHandler::~ZombossRobotThrowCarActionHandler() */

void __thiscall
ZombossRobotThrowCarActionHandler::~ZombossRobotThrowCarActionHandler
          (ZombossRobotThrowCarActionHandler *this)

{
  ~ZombossRobotThrowCarActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotThrowCarActionHandler::onThrowCarAnimStoppedCallback(std::string const&) */

void __thiscall
ZombossRobotThrowCarActionHandler::onThrowCarAnimStoppedCallback
          (ZombossRobotThrowCarActionHandler *this,string *param_1)

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
  FUN_04f122d0(asStack_10);
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
/* ZombossRobotThrowCarActionHandler::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombossRobotThrowCarActionHandler::AddToRenderQueue
          (ZombossRobotThrowCarActionHandler *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawCrushRect);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ZombossRobotThrowCarActionHandler,void(ZombossRobotThrowCarActionHandler::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotThrowCarActionHandler::OnPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void ZombossRobotThrowCarActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  Board *pBVar8;
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this;
  RtObject *pRVar5;
  undefined8 uVar6;
  ZombossRobotCarProjectile *pZVar7;
  TRect *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [8];
  undefined8 local_48;
  float local_40;
  float local_38;
  float local_34;
  undefined4 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pRVar5 = (RtObject *)Zombie::GetAnimRig(this);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(pRVar5);
  FUN_04f12338(asStack_18);
  cVar2 = std::operator==(param_4,asStack_18);
  std::string::~string(asStack_18);
  if (cVar2 != '\0') {
    DVec3::DVec3((DVec3 *)&local_48);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_48._0_4_ = (Board *)(float)(iVar4 / 2 + (iVar3 + 100) * 2);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_48._4_4_ = (float)(iVar4 / 2 + (iVar3 + 0x50) * 2);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_40 = (float)(iVar3 << 1);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,300.0,350.0,200.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,(SexyVector3 *)asStack_18);
    BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)(param_1 + 0x30),extraout_x1);
    DVec3::DVec3((DVec3 *)&local_38);
    local_38 = (float)(local_28 + local_20 / 2);
    local_34 = (float)(local_24 + local_1c / 2);
    local_30 = 0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      local_30 = Board::calculateRoofOffsetZ(local_38);
    }
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_58,"ZombossRobotCarProjectile");
    Sexy::ToWString(asStack_58);
    Sexy::RtName::RtName((RtName *)asStack_18,awStack_50);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_60,uVar6,0xc,asStack_18);
    Sexy::RtName::~RtName((RtName *)asStack_18);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_58);
    nop();
    fVar1 = local_40;
    pBVar8._4_4_ = local_48._4_4_;
    pBVar8._0_4_ = (Board *)local_48;
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_60);
    pRVar5 = (RtObject *)Board::AddProjectile(pBVar8._0_4_,pBVar8._4_4_,fVar1,uVar6,asStack_18,0,0);
    pZVar7 = Sexy::RtObject::Cast<ZombossRobotCarProjectile>(pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    ZombossRobotCarProjectile::setEndPosition(local_38,local_34,local_30,pZVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotThrowCarActionHandler::onStartAction() */

void __thiscall
ZombossRobotThrowCarActionHandler::onStartAction(ZombossRobotThrowCarActionHandler *this)

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
/* ZombossRobotThrowCarActionHandler::playThrowCarAnim() */

void __thiscall
ZombossRobotThrowCarActionHandler::playThrowCarAnim(ZombossRobotThrowCarActionHandler *this)

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
  FUN_04f122d0(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onThrowCarAnimStoppedCallback");
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
/* ZombossRobotThrowCarActionHandler::startNextAction() */

void ZombossRobotThrowCarActionHandler::startNextAction(void)

{
  Zombie *this;
  RtObject *this_00;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  ZombieActionHandler *in_x0;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie(in_x0);
  this_00 = (RtObject *)Zombie::GetAnimRig(this);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_00);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f122d0(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onThrowCarAnimStoppedCallback");
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

