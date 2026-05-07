// Class: ZombossSkyCityLineShootActionHandler


/* ZombossSkyCityLineShootActionHandler::onLineShootStartEnded(std::string const&) */

void ZombossSkyCityLineShootActionHandler::onLineShootStartEnded(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityLineShootActionHandler::StaticClassInit() */

void ZombossSkyCityLineShootActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityLineShootActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0472a8b4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityLineShootActionHandler::StaticGetClass() */

long * ZombossSkyCityLineShootActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityLineShootActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityLineShootActionHandler::GetClass() const */

long * ZombossSkyCityLineShootActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityLineShootActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityLineShootActionHandler::ZombossSkyCityLineShootActionHandler() */

void __thiscall
ZombossSkyCityLineShootActionHandler::ZombossSkyCityLineShootActionHandler
          (ZombossSkyCityLineShootActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c2e40;
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x24));
  return;
}


/* ZombossSkyCityLineShootActionHandler::StaticNew() */

ZombossSkyCityLineShootActionHandler * ZombossSkyCityLineShootActionHandler::StaticNew(void)

{
  ZombossSkyCityLineShootActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossSkyCityLineShootActionHandler(this);
  return this;
}


/* ZombossSkyCityLineShootActionHandler::~ZombossSkyCityLineShootActionHandler() */

void __thiscall
ZombossSkyCityLineShootActionHandler::~ZombossSkyCityLineShootActionHandler
          (ZombossSkyCityLineShootActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2e40;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSkyCityLineShootActionHandler::~ZombossSkyCityLineShootActionHandler() */

void __thiscall
ZombossSkyCityLineShootActionHandler::~ZombossSkyCityLineShootActionHandler
          (ZombossSkyCityLineShootActionHandler *this)

{
  ~ZombossSkyCityLineShootActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityLineShootActionHandler::onStartAction() */

void __thiscall
ZombossSkyCityLineShootActionHandler::onStartAction(ZombossSkyCityLineShootActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  long extraout_x0;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  nop();
  *(undefined4 *)(extraout_x0 + 0x960) = 0;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLineShootStartEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_SkyCity::PlayLineShootStart
            ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

