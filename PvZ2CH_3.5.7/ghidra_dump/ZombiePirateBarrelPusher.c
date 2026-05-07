// Class: ZombiePirateBarrelPusher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::StaticClassInit() */

void ZombiePirateBarrelPusher::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePirateBarrelPusher");
    (*pcVar2)(plVar1,asStack_10,FUN_046aa9d8,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateBarrelPusher::StaticGetClass() */

long * ZombiePirateBarrelPusher::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePirateBarrelPusher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateBarrelPusher::GetClass() const */

long * ZombiePirateBarrelPusher::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePirateBarrelPusher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher() */

void __thiscall ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher(ZombiePirateBarrelPusher *this)

{
  *(undefined ***)this = &PTR_GetClass_068abfd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateBarrelPusher_068ac9e8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher() */

void __thiscall ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher(ZombiePirateBarrelPusher *this)

{
  ~ZombiePirateBarrelPusher(this + -0x10);
  return;
}


/* ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher() */

void __thiscall ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher(ZombiePirateBarrelPusher *this)

{
  ~ZombiePirateBarrelPusher(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher() */

void __thiscall ZombiePirateBarrelPusher::~ZombiePirateBarrelPusher(ZombiePirateBarrelPusher *this)

{
  ~ZombiePirateBarrelPusher(this + -0x10);
  return;
}


/* ZombiePirateBarrelPusher::ZombiePirateBarrelPusher() */

void __thiscall ZombiePirateBarrelPusher::ZombiePirateBarrelPusher(ZombiePirateBarrelPusher *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068abfd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateBarrelPusher_068ac9e8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  this[0x808] = (ZombiePirateBarrelPusher)0x0;
  return;
}


/* ZombiePirateBarrelPusher::StaticNew() */

ZombiePirateBarrelPusher * ZombiePirateBarrelPusher::StaticNew(void)

{
  ZombiePirateBarrelPusher *this;
  
  this = ::operator_new(0x810);
  ZombiePirateBarrelPusher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::repositionBarrel() */

void __thiscall ZombiePirateBarrelPusher::repositionBarrel(ZombiePirateBarrelPusher *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  SexyVector3 *this_00;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  fVar5 = 12.0;
  if (cVar1 == '\0') {
    fVar5 = 0.0;
  }
  uVar6 = 0;
  uVar7 = 0;
  EATextSquish::Vec3::Vec3(aVStack_38,fVar5,0.0,0.0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x800));
  if (bVar2) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
    pcVar4 = *(code **)(*plVar3 + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_28 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&DAT_06b1f680);
    local_24 = uVar6;
    local_20 = uVar7;
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_28,(SexyVector3 *)aVStack_38);
    local_14 = uVar6;
    local_10 = uVar7;
    (*pcVar4)(plVar3,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::onZombieInitialize() */

void __thiscall ZombiePirateBarrelPusher::onZombieInitialize(ZombiePirateBarrelPusher *this)

{
  ZombieHydraHeadAnimRig *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x800),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this_00,true);
  ZombieAnimRig_PirateBarrelPusher::HideBarrel((ZombieAnimRig_PirateBarrelPusher *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateBarrelPusher::onEndCondition(ZombieConditions) */

void ZombiePirateBarrelPusher::onEndCondition(Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  RtObject *this;
  ZombiePirateBarrel *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x800));
  if (cVar1 == '\0') {
    return;
  }
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x800));
  this_00 = Sexy::RtObject::Cast<ZombiePirateBarrel>(this);
  bVar2 = Zombie::IsSuspended(param_1);
  ZombiePirateBarrel::SetBeingPushed(this_00,(bool)(bVar2 ^ 1));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::disconnectBarrel() */

void __thiscall ZombiePirateBarrelPusher::disconnectBarrel(ZombiePirateBarrelPusher *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ZombieHydraHeadAnimRig *this_01;
  CreatureAnimRig *pCVar2;
  long *plVar3;
  RtObject *pRVar4;
  ZombiePirateBarrel *pZVar5;
  code *pcVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x800);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar5 = Sexy::RtObject::Cast<ZombiePirateBarrel>(pRVar4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    ZombiePirateBarrel::SetPusherZombie(pZVar5,a_Stack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar5 = Sexy::RtObject::Cast<ZombiePirateBarrel>(pRVar4);
    ZombiePirateBarrel::SetBeingPushed(pZVar5,false);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this_01,false);
  pCVar2 = (CreatureAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  cVar1 = CreatureAnimRig::IsPlaying(pCVar2,2);
  if (cVar1 != '\0') {
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar6 = *(code **)(*plVar3 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar6)(plVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::onTakeFatalDamage(DamageInfo const&) */

void ZombiePirateBarrelPusher::onTakeFatalDamage(DamageInfo *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  CreatureAnimRig *pCVar2;
  long *plVar3;
  RtObject *pRVar4;
  ZombiePirateBarrel *pZVar5;
  code *pcVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long lStack_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x800);
  lStack_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pZVar5 = Sexy::RtObject::Cast<ZombiePirateBarrel>(pRVar4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    ZombiePirateBarrel::SetPusherZombie(pZVar5,a_Stack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pZVar5 = Sexy::RtObject::Cast<ZombiePirateBarrel>(pRVar4);
    ZombiePirateBarrel::SetBeingPushed(pZVar5,false);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this_00,false);
  pCVar2 = (CreatureAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  cVar1 = CreatureAnimRig::IsPlaying(pCVar2,2);
  if (cVar1 != '\0') {
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
    pcVar6 = *(code **)(*plVar3 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar6)(plVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePirateBarrelPusher::OnBarrelDied() */

void __thiscall ZombiePirateBarrelPusher::OnBarrelDied(ZombiePirateBarrelPusher *this)

{
  char cVar1;
  
  disconnectBarrel(this);
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0,0);
  return;
}


/* ZombiePirateBarrelPusher::onApplyCondition(ZombieConditions) */

void __thiscall
ZombiePirateBarrelPusher::onApplyCondition(ZombiePirateBarrelPusher *this,int param_2)

{
  char cVar1;
  byte bVar2;
  RtObject *this_00;
  ZombiePirateBarrel *this_01;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
  if (cVar1 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
    this_01 = Sexy::RtObject::Cast<ZombiePirateBarrel>(this_00);
    bVar2 = Zombie::IsSuspended((Zombie *)this);
    ZombiePirateBarrel::SetBeingPushed(this_01,(bool)(bVar2 ^ 1));
    if (((param_2 - 0x40U < 5) || (param_2 == 0x60)) || (param_2 == 0x93)) {
      disconnectBarrel(this);
      return;
    }
  }
  return;
}


/* ZombiePirateBarrelPusher::onZombieTossed(Zombie*) */

void __thiscall
ZombiePirateBarrelPusher::onZombieTossed(ZombiePirateBarrelPusher *this,Zombie *param_1)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x800));
  if ((param_1 != (Zombie *)pRVar1) && (this != (ZombiePirateBarrelPusher *)param_1)) {
    return;
  }
  disconnectBarrel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::spawnBarrelZombie() */

void __thiscall ZombiePirateBarrelPusher::spawnBarrelZombie(ZombiePirateBarrelPusher *this)

{
  undefined4 uVar1;
  ZombieBarrelPusherProps *pZVar2;
  string *psVar3;
  RtObject *this_00;
  ZombiePirateBarrel *this_01;
  long *plVar4;
  code *pcVar5;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieBarrelPusherProps>((Zombie *)this);
  FUN_05475d88(asStack_50,pZVar2 + 0x210);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2b = 1;
  local_30 = *(undefined4 *)(this + 0x50);
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_48);
  uVar1 = FUN_046a9ea0(*(undefined4 *)(this + 0x2b0));
  this_00 = (RtObject *)(*pcVar5)(plVar4,aRStack_38,uVar1,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  this_01 = Sexy::RtObject::Cast<ZombiePirateBarrel>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  ZombiePirateBarrel::SetPusherZombie(this_01,aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  ZombiePirateBarrel::SetBeingPushed(this_01,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x800),(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateBarrelPusher::registerForEvents() */

void __thiscall ZombiePirateBarrelPusher::registerForEvents(ZombiePirateBarrelPusher *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieTossed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombiePirateBarrelPusher,void(ZombiePirateBarrelPusher::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieTossed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrelPusher::onPlaceOnBoard() */

void __thiscall ZombiePirateBarrelPusher::onPlaceOnBoard(ZombiePirateBarrelPusher *this)

{
  long lVar1;
  ResourceInfo *pRVar2;
  
  lVar1 = ___stack_chk_guard;
  spawnBarrelZombie(this);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x800));
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)this);
  BoardEntity::PlaceOnBoard((SexyVector3 *)pRVar2);
  repositionBarrel(this);
  Zombie::onPlaceOnBoard((Zombie *)this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateBarrelPusher::Silence(bool) */

void __thiscall ZombiePirateBarrelPusher::Silence(ZombiePirateBarrelPusher *this,bool param_1)

{
  char cVar1;
  
  Zombie::Silence((Zombie *)this,param_1);
  cVar1 = (**(code **)(*(long *)this + 0x9f8))(this);
  if (cVar1 == '\0') {
    return;
  }
  disconnectBarrel(this);
  return;
}


/* ZombiePirateBarrelPusher::onPlaceOnStreet() */

void __thiscall ZombiePirateBarrelPusher::onPlaceOnStreet(ZombiePirateBarrelPusher *this)

{
  ResourceInfo *pRVar1;
  undefined8 *puVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  spawnBarrelZombie(this);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x800));
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = (undefined4)*puVar2;
  uStack_c = (undefined4)((ulong)*puVar2 >> 0x20);
  Zombie::PlaceOnStreet(local_10,uStack_c,*(undefined4 *)(puVar2 + 1),pRVar1);
  repositionBarrel(this);
  Zombie::onPlaceOnStreet((Zombie *)this);
  return;
}


/* ZombiePirateBarrelPusher::updateState_Idle() */

void __thiscall ZombiePirateBarrelPusher::updateState_Idle(ZombiePirateBarrelPusher *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  long *plVar3;
  RtObject *this_01;
  ZombiePirateBarrel *this_02;
  
  iVar2 = FUN_046a9ea0(*(undefined4 *)(this + 0x2b0));
  if ((iVar2 != -2) && (this[0x808] == (ZombiePirateBarrelPusher)0x0)) {
    this_00 = (RtMixedPtrBase *)(this + 0x800);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar3 + 0x328))();
      if (cVar1 == '\0') {
        this_01 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        this_02 = Sexy::RtObject::Cast<ZombiePirateBarrel>(this_01);
        cVar1 = ZombiePirateBarrel::CanBePushed(this_02);
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    Zombie::setZombieState((Zombie *)this,1,0);
    return;
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}


/* ZombiePirateBarrelPusher::updateState_Walk() */

void __thiscall ZombiePirateBarrelPusher::updateState_Walk(ZombiePirateBarrelPusher *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  RtObject *this_01;
  ZombiePirateBarrel *this_02;
  
  this_00 = (RtMixedPtrBase *)(this + 0x800);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 == '\0') {
      repositionBarrel(this);
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_02 = Sexy::RtObject::Cast<ZombiePirateBarrel>(this_01);
      cVar1 = ZombiePirateBarrel::CanBePushed(this_02);
      if (cVar1 != '\0') {
        return;
      }
      Zombie::setZombieState((Zombie *)this,0,0);
      return;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombiePirateBarrelPusher::onEnterState_BleedingOut(ZombieState) */

void __thiscall
ZombiePirateBarrelPusher::onEnterState_BleedingOut
          (ZombiePirateBarrelPusher *this,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
  if (cVar1 != '\0') {
    disconnectBarrel(this);
  }
  Zombie::onEnterState_BleedingOut(this,param_2);
  return;
}


/* ZombiePirateBarrelPusher::onDestroy() */

void __thiscall ZombiePirateBarrelPusher::onDestroy(ZombiePirateBarrelPusher *this)

{
  disconnectBarrel(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Zombie::onDestroy((Zombie *)this);
  return;
}

