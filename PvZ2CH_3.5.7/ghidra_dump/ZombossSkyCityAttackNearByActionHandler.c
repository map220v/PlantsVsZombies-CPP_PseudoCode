// Class: ZombossSkyCityAttackNearByActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityAttackNearByActionHandler::StaticClassInit() */

void ZombossSkyCityAttackNearByActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityAttackNearByActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0472d244,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityAttackNearByActionHandler::StaticGetClass() */

long * ZombossSkyCityAttackNearByActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityAttackNearByActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityAttackNearByActionHandler::GetClass() const */

long * ZombossSkyCityAttackNearByActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityAttackNearByActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityAttackNearByActionHandler::ZombossSkyCityAttackNearByActionHandler() */

void __thiscall
ZombossSkyCityAttackNearByActionHandler::ZombossSkyCityAttackNearByActionHandler
          (ZombossSkyCityAttackNearByActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c33c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* ZombossSkyCityAttackNearByActionHandler::StaticNew() */

ZombossSkyCityAttackNearByActionHandler * ZombossSkyCityAttackNearByActionHandler::StaticNew(void)

{
  ZombossSkyCityAttackNearByActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombossSkyCityAttackNearByActionHandler(this);
  return this;
}


/* ZombossSkyCityAttackNearByActionHandler::~ZombossSkyCityAttackNearByActionHandler() */

void __thiscall
ZombossSkyCityAttackNearByActionHandler::~ZombossSkyCityAttackNearByActionHandler
          (ZombossSkyCityAttackNearByActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c33c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSkyCityAttackNearByActionHandler::~ZombossSkyCityAttackNearByActionHandler() */

void __thiscall
ZombossSkyCityAttackNearByActionHandler::~ZombossSkyCityAttackNearByActionHandler
          (ZombossSkyCityAttackNearByActionHandler *this)

{
  ~ZombossSkyCityAttackNearByActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossSkyCityAttackNearByActionHandler::onAttackNearByEnded(std::string const&) */

void ZombossSkyCityAttackNearByActionHandler::onAttackNearByEnded(string *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  Plant *this_01;
  long *plVar3;
  
  this = (RtWeakPtr *)(param_1 + 0x28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    this_01 = Sexy::RtObject::Cast<Plant>(this_00);
    if ((this_01 != (Plant *)0x0) && (cVar2 = Plant::IsIgnoreControlAndDmg(this_01), cVar2 == '\0'))
    {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar3 + 0x48))();
      ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
      return;
    }
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityAttackNearByActionHandler::onStartAction() */

void __thiscall
ZombossSkyCityAttackNearByActionHandler::onStartAction
          (ZombossSkyCityAttackNearByActionHandler *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMech_SkyCity *extraout_x0;
  long *plVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68 [3];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68);
  iVar2 = ZombieZombossMech_SkyCity::GetNearByTargets
                    (extraout_x0,1,
                     (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
  if (cVar1 == '\0') {
    plVar3 = (long *)FUN_04726040(local_68[0]);
    if (*plVar3 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
    if (iVar2 == 0) {
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string((string *)aRStack_70,"onAttackNearByEnded");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_78,(string *)aRStack_70);
      ZombieAnimRig_ZombossMech_SkyCity::PlayAttackMiddleNearBy
                ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar4,aRStack_50);
    }
    else if (iVar2 == 1) {
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string((string *)aRStack_70,"onAttackNearByEnded");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_78,(string *)aRStack_70);
      ZombieAnimRig_ZombossMech_SkyCity::PlayAttackUpNearBy
                ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar4,aRStack_50);
    }
    else {
      if (iVar2 != 2) goto LAB_0472cd00;
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string((string *)aRStack_70,"onAttackNearByEnded");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_78,(string *)aRStack_70);
      ZombieAnimRig_ZombossMech_SkyCity::PlayAttackDownNearBy
                ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar4,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aRStack_70);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  }
  else {
LAB_0472cd00:
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

