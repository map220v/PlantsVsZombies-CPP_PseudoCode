// Class: ZombieCamelSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::StaticClassInit() */

void ZombieCamelSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieCamelCollection");
    (*pcVar3)(plVar2,asStack_10,FUN_046ef1a4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieCamelSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046ef480,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamelSubSystem::StaticGetClass() */

long * ZombieCamelSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCamelSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCamelSubSystem::GetClass() const */

long * ZombieCamelSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCamelSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetCamelForZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void __thiscall
ZombieCamelSubSystem::GetCamelForZombie(ZombieCamelSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  ZombieCamelCollection *pZVar3;
  long lVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_046ee028(uVar5,*(undefined8 *)(this + 0x18));
    if (iVar2 <= (int)lVar4) {
      pZVar3 = (ZombieCamelCollection *)0x0;
      break;
    }
    pZVar3 = (ZombieCamelCollection *)FUN_046ee058(uVar5,lVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    cVar1 = ZombieCamelCollection::ContainsZombie(pZVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetNewSegmentSignHealth(Sexy::RtWeakPtr<ZombieCamel>) */

void __thiscall
ZombieCamelSubSystem::GetNewSegmentSignHealth(ZombieCamelSubSystem *this,RtWeakPtrBase *param_2)

{
  long lVar1;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar1 = GetCamelForZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar1 == 0) {
    lVar2 = 0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar2 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      FUN_046ee010(*(undefined4 *)(lVar1 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetHeadZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelSubSystem::GetHeadZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               ZombieCamelSubSystem *param_2,RtWeakPtrBase *param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  lVar1 = GetCamelForZombie(param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  else {
    ZombieCamelCollection::GetHeadZombie();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetPreviousZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelSubSystem::GetPreviousZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               ZombieCamelSubSystem *param_2,RtWeakPtrBase *param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  lVar1 = GetCamelForZombie(param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
    ZombieCamelCollection::GetPreviousZombie(param_1,lVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetNextZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelSubSystem::GetNextZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               ZombieCamelSubSystem *param_2,RtWeakPtrBase *param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  lVar1 = GetCamelForZombie(param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
    ZombieCamelCollection::GetNextZombie(param_1,lVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetTailZombie(Sexy::RtWeakPtr<ZombieCamel>) */

void ZombieCamelSubSystem::GetTailZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               ZombieCamelSubSystem *param_2,RtWeakPtrBase *param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  lVar1 = GetCamelForZombie(param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
    FUN_046eea84(param_1,lVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::GetAnimationOffset(Sexy::RtWeakPtr<ZombieCamel>, int, int&) */

void __thiscall
ZombieCamelSubSystem::GetAnimationOffset
          (ZombieCamelSubSystem *this,RtWeakPtrBase *param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  Zombie *pZVar4;
  ZombieHydraHeadAnimRig *this_00;
  ZombieHydraHeadAnimRig *this_01;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  GetPreviousZombie(aRStack_18,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar4);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar4);
    cVar2 = ZombieAnimRig_Camel::IsWalking((ZombieAnimRig_Camel *)this_01);
    if (cVar2 != '\0') {
      cVar2 = ZombieAnimRig_Camel::IsWalking((ZombieAnimRig_Camel *)this_00);
      if (cVar2 != '\0') {
        iVar3 = ZombieAnimRig_Camel::GetWalkAnimFrame((ZombieAnimRig_Camel *)this_01);
        *param_4 = iVar3 + param_3;
        goto LAB_046eec40;
      }
    }
    cVar2 = ZombieAnimRig_Camel::IsIdling((ZombieAnimRig_Camel *)this_01);
    if (cVar2 != '\0') {
      cVar2 = ZombieAnimRig_Camel::IsIdling((ZombieAnimRig_Camel *)this_00);
      if (cVar2 != '\0') {
        iVar3 = ZombieAnimRig_Camel::GetIdleAnimFrame((ZombieAnimRig_Camel *)this_01);
        *param_4 = iVar3 + param_3;
        goto LAB_046eec40;
      }
    }
    cVar2 = '\0';
  }
LAB_046eec40:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ZombieCamelSubSystem::ZombieCamelSubSystem() */

void __thiscall ZombieCamelSubSystem::ZombieCamelSubSystem(ZombieCamelSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b7ce0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ZombieCamelSubSystem::StaticNew() */

ZombieCamelSubSystem * ZombieCamelSubSystem::StaticNew(void)

{
  ZombieCamelSubSystem *this;
  
  this = ::operator_new(0x28);
  ZombieCamelSubSystem(this);
  return this;
}


/* ZombieCamelSubSystem::registerForEvents() */

void __thiscall ZombieCamelSubSystem::registerForEvents(ZombieCamelSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x88);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieCamelSubSystem,void(ZombieCamelSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* ZombieCamelSubSystem::~ZombieCamelSubSystem() */

void __thiscall ZombieCamelSubSystem::~ZombieCamelSubSystem(ZombieCamelSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7ce0;
  std::vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>>::~vector
            ((vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieCamelSubSystem::~ZombieCamelSubSystem() */

void __thiscall ZombieCamelSubSystem::~ZombieCamelSubSystem(ZombieCamelSubSystem *this)

{
  ~ZombieCamelSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::OnZombieRemoved(Zombie*) */

void __thiscall ZombieCamelSubSystem::OnZombieRemoved(ZombieCamelSubSystem *this,Zombie *param_1)

{
  bool bVar1;
  ZombieCamelCollection *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ZombieCamel>((RtObject *)param_1), bVar1)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    pZVar2 = (ZombieCamelCollection *)GetCamelForZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (pZVar2 != (ZombieCamelCollection *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      ZombieCamelCollection::RemoveZombie(pZVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::OnCamelSegmentCreated(Sexy::RtWeakPtr<ZombieCamel>,
   Sexy::RtWeakPtr<ZombieCamel>) */

void __thiscall
ZombieCamelSubSystem::OnCamelSegmentCreated
          (ZombieCamelSubSystem *this,RtWeakPtrBase *param_2,RtWeakPtrBase *param_3)

{
  long lVar1;
  Zombie *this_00;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_2);
  lVar1 = GetCamelForZombie(this,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (lVar1 == 0) {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pRVar2 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar2);
    ZombieCamelCollection::ZombieCamelCollection((ZombieCamelCollection *)aRStack_30,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
    ZombieCamelCollection::AddZombie(aRStack_30,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    std::vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>>::push_back
              ((vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>> *)(this + 0x10),
               (ZombieCamelCollection *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
    GetCamelForZombie(this,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    ZombieCamelCollection::~ZombieCamelCollection((ZombieCamelCollection *)aRStack_30);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_3);
    ZombieCamelCollection::AddZombie(lVar1,aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::NotifyZombieLeftCamel(Sexy::RtWeakPtr<ZombieCamel>) */

void __thiscall
ZombieCamelSubSystem::NotifyZombieLeftCamel(ZombieCamelSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  ZombieCamelCollection *pZVar2;
  Zombie *this_00;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_2);
  pZVar2 = (ZombieCamelCollection *)GetCamelForZombie(this,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (pZVar2 != (ZombieCamelCollection *)0x0) {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pRVar3 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar3);
    ZombieCamelCollection::ZombieCamelCollection((ZombieCamelCollection *)aRStack_30,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
    cVar1 = ZombieCamelCollection::RemoveAndSplit(pZVar2,aRStack_38,aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    if (cVar1 != '\0') {
      std::vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>>::push_back
                ((vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>> *)
                 (this + 0x10),(ZombieCamelCollection *)aRStack_30);
      ZombieCamelCollection::GetHeadZombie();
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      pcVar5 = *(code **)(*plVar4 + 0xa08);
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      (*pcVar5)(plVar4,aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    ZombieCamelCollection::~ZombieCamelCollection((ZombieCamelCollection *)aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelSubSystem::Update() */

void __thiscall ZombieCamelSubSystem::Update(ZombieCamelSubSystem *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ZombieCamelCollection *this_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_046ee028(uVar4,*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar2 = lVar5;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      lVar6 = lVar2;
      this_00 = (ZombieCamelCollection *)FUN_046ee058(uVar4,lVar7);
      iVar3 = ZombieCamelCollection::GetSize(this_00);
      if (iVar3 == 0) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                   ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                                *)&local_20,lVar7);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>>::erase
                  ((vector<ZombieCamelCollection,std::allocator<ZombieCamelCollection>> *)
                   (this + 0x10),local_10);
      }
      if (lVar6 == lVar5 - (ulong)uVar1) break;
      uVar4 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar6 + -1;
      lVar7 = lVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

