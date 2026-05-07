// Class: ZombieRomanMedusaPetrifyActionHandler


/* ZombieRomanMedusaPetrifyActionHandler::onAnimationDone(std::string const&) */

void ZombieRomanMedusaPetrifyActionHandler::onAnimationDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaPetrifyActionHandler::StaticClassInit() */

void ZombieRomanMedusaPetrifyActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanMedusaPetrifyActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04efb51c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusaPetrifyActionHandler::StaticGetClass() */

long * ZombieRomanMedusaPetrifyActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanMedusaPetrifyActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanMedusaPetrifyActionHandler::GetClass() const */

long * ZombieRomanMedusaPetrifyActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanMedusaPetrifyActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanMedusaPetrifyActionHandler::ZombieRomanMedusaPetrifyActionHandler() */

void __thiscall
ZombieRomanMedusaPetrifyActionHandler::ZombieRomanMedusaPetrifyActionHandler
          (ZombieRomanMedusaPetrifyActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a09810;
  return;
}


/* ZombieRomanMedusaPetrifyActionHandler::StaticNew() */

ZombieRomanMedusaPetrifyActionHandler * ZombieRomanMedusaPetrifyActionHandler::StaticNew(void)

{
  ZombieRomanMedusaPetrifyActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieRomanMedusaPetrifyActionHandler(this);
  return this;
}


/* ZombieRomanMedusaPetrifyActionHandler::~ZombieRomanMedusaPetrifyActionHandler() */

void __thiscall
ZombieRomanMedusaPetrifyActionHandler::~ZombieRomanMedusaPetrifyActionHandler
          (ZombieRomanMedusaPetrifyActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a09810;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieRomanMedusaPetrifyActionHandler::~ZombieRomanMedusaPetrifyActionHandler() */

void __thiscall
ZombieRomanMedusaPetrifyActionHandler::~ZombieRomanMedusaPetrifyActionHandler
          (ZombieRomanMedusaPetrifyActionHandler *this)

{
  ~ZombieRomanMedusaPetrifyActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaPetrifyActionHandler::onStartAction() */

void __thiscall
ZombieRomanMedusaPetrifyActionHandler::onStartAction(ZombieRomanMedusaPetrifyActionHandler *this)

{
  bool bVar1;
  long lVar2;
  RtObject *this_00;
  ZombieRomanMedusa *this_01;
  ZombieHydraHeadAnimRig *pZVar3;
  RtWeakPtr aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  if (lVar2 != 0) {
    this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = Sexy::RtObject::Cast<ZombieRomanMedusa>(this_00);
    if (this_01 != (ZombieRomanMedusa *)0x0) {
      ZombieRomanMedusa::FindPetrifyTarget();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
      if (bVar1) {
        pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimationDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        ZombieAnimRig_Medusa::PlayPetrify((ZombieAnimRig_Medusa *)pZVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaPetrifyActionHandler::petrifyTarget() */

void __thiscall
ZombieRomanMedusaPetrifyActionHandler::petrifyTarget(ZombieRomanMedusaPetrifyActionHandler *this)

{
  bool bVar1;
  long lVar2;
  RtObject *this_00;
  ZombieRomanMedusa *this_01;
  ZombieRomanMedusaProps *pZVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  if (lVar2 != 0) {
    this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = Sexy::RtObject::Cast<ZombieRomanMedusa>(this_00);
    if (this_01 != (ZombieRomanMedusa *)0x0) {
      ZombieRomanMedusa::FindPetrifyTarget();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar1) {
        pZVar3 = Zombie::GetProps<ZombieRomanMedusaProps>((Zombie *)this_01);
        fVar6 = *(float *)(pZVar3 + 0x238);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar5 = (float)FUN_04efa360(*(undefined4 *)(lVar2 + 0x284));
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        FUN_05475d88(asStack_10,pZVar3 + 0x240);
        Zombie::Petrify(fVar5 * fVar6,uVar4,asStack_10);
        std::string::~string(asStack_10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusaPetrifyActionHandler::OnPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void ZombieRomanMedusaPetrifyActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  petrifyTarget((ZombieRomanMedusaPetrifyActionHandler *)param_1);
  return;
}

