// Class: EffectObject_GardenerGrass


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::StaticClassInit() */

void EffectObject_GardenerGrass::StaticClassInit(void)

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
    std::string::string(asStack_10,"SawDes");
    (*pcVar3)(plVar2,asStack_10,FUN_03b170e8,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ShakeDes");
    (*pcVar3)(plVar2,asStack_10,FUN_03b1769c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EffectObject_GardenerGrass");
    (*pcVar3)(plVar2,asStack_10,FUN_03b1790c,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_GardenerGrass::StaticGetClass() */

long * EffectObject_GardenerGrass::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_GardenerGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_GardenerGrass::GetClass() const */

long * EffectObject_GardenerGrass::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_GardenerGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>,
   int, int) */

void EffectObject_GardenerGrass::onEffectObjectInitialize
               (Effect_PopAnim *param_1,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Effect_PopAnim::SetCentered(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_GardenerGrass::onAnimStopped(std::string const&) */

void __thiscall
EffectObject_GardenerGrass::onAnimStopped(EffectObject_GardenerGrass *this,string *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==(param_1,(string *)(this + 0x1b0));
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::findShakedZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
EffectObject_GardenerGrass::findShakedZombie
          (EffectObject_GardenerGrass *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  RtWeakPtrBase *this_00;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar4 = *(undefined8 *)(this + 0x1b8);
  lVar2 = FUN_03b14d90(uVar4,*(undefined8 *)(this + 0x1c0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) {
      this_00 = (RtWeakPtrBase *)0x0;
      break;
    }
    this_00 = (RtWeakPtrBase *)FUN_03b14dc0(uVar4,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)aRStack_18);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* EffectObject_GardenerGrass::EffectObject_GardenerGrass() */

void __thiscall
EffectObject_GardenerGrass::EffectObject_GardenerGrass(EffectObject_GardenerGrass *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_0672cf10;
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x130));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  Set8BytesTo0(this + 0x1a8);
  Set8BytesTo0(this + 0x1b0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  return;
}


/* EffectObject_GardenerGrass::StaticNew() */

EffectObject_GardenerGrass * EffectObject_GardenerGrass::StaticNew(void)

{
  EffectObject_GardenerGrass *this;
  
  this = ::operator_new(0x200);
  EffectObject_GardenerGrass(this);
  return this;
}


/* EffectObject_GardenerGrass::registerForEvents() */

void __thiscall EffectObject_GardenerGrass::registerForEvents(EffectObject_GardenerGrass *this)

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
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<EffectObject_GardenerGrass,void(EffectObject_GardenerGrass::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* EffectObject_GardenerGrass::~EffectObject_GardenerGrass() */

void __thiscall
EffectObject_GardenerGrass::~EffectObject_GardenerGrass(EffectObject_GardenerGrass *this)

{
  *(undefined ***)this = &PTR_GetClass_0672cf10;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e8));
  std::
  vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
  ::~vector((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
             *)(this + 0x1d0));
  std::
  vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
  ::~vector((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
             *)(this + 0x1b8));
  std::string::~string((string *)(this + 0x1b0));
  std::string::~string((string *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x130));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_GardenerGrass::~EffectObject_GardenerGrass() */

void __thiscall
EffectObject_GardenerGrass::~EffectObject_GardenerGrass(EffectObject_GardenerGrass *this)

{
  ~EffectObject_GardenerGrass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::setValues(EffectObject_GardenerGrass::SawDes) */

void __thiscall
EffectObject_GardenerGrass::setValues(EffectObject_GardenerGrass *this,DamageInfo *param_2)

{
  EffectObject_GardenerGrass *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  EffectObject_GardenerGrass EVar5;
  EffectObject_GardenerGrass EVar6;
  char cVar7;
  ResourceInfo *pRVar8;
  undefined4 uVar9;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  pEVar1 = this + 0x1a8;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(pEVar1,param_2 + 0x90);
  thunk_FUN_05475e00(this + 0x1b0,param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(this + 0x128) = uVar2;
  DamageInfo::operator=((DamageInfo *)(this + 0x130),param_2);
  uVar9 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  EVar5 = *(EffectObject_GardenerGrass *)(param_2 + 0x7c);
  uVar4 = *(undefined4 *)(param_2 + 0x78);
  EVar6 = *(EffectObject_GardenerGrass *)(param_2 + 0x71);
  this[0x118] = *(EffectObject_GardenerGrass *)(param_2 + 0x70);
  this[0x11a] = EVar5;
  this[0x119] = EVar6;
  *(undefined4 *)(this + 400) = uVar9;
  *(undefined4 *)(this + 0x194) = uVar3;
  *(undefined4 *)(this + 0x11c) = uVar4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),(RtWeakPtr *)(param_2 + 0xa0));
  GetPAMByName((string *)(param_2 + 0x88));
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  FUN_03b14f04(this + 0x1c);
  cVar7 = FUN_0547419c(pEVar1);
  if (cVar7 == '\0') {
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,pEVar1,0);
  }
  else {
    StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  }
  uVar9 = PVZ_T();
  *(undefined4 *)(this + 0x198) = uVar9;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::canZombieBeShaked(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
EffectObject_GardenerGrass::canZombieBeShaked(undefined8 param_1,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  string *psVar5;
  Zombie *pZVar6;
  RtObject *this;
  ZombieMech *pZVar7;
  undefined8 uVar8;
  EffectObject_GardenerGrassProps *pEVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar11;
  code *pcVar12;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pcVar12 = *(code **)(*plVar4 + 0x3d0);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_20,"gardenergrass");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    cVar1 = (*pcVar12)(plVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = (**(code **)(*plVar4 + 0x330))();
      bVar2 = false;
      if (cVar1 != '\0') goto LAB_03b19660;
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = (**(code **)(*plVar4 + 0x328))();
      if (cVar1 != '\0') goto LAB_03b19660;
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar3 = Zombie::GetSizeType(pZVar6);
      if (iVar3 == 1) goto LAB_03b19660;
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar3 = Zombie::GetSizeType(pZVar6);
      if (iVar3 == 2) goto LAB_03b19660;
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pZVar7 = Sexy::RtObject::Cast<ZombieMech>(this);
      if (pZVar7 == (ZombieMech *)0x0) {
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar1 = Zombie::IsBoss(pZVar6);
        if (cVar1 == '\0') {
          uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          cVar1 = Zombie::HasCondition(uVar8,0x7a);
          if (cVar1 == '\0') {
            pEVar9 = EffectObject::GetProps<EffectObject_GardenerGrassProps>();
            uVar8 = FUN_03b16378(*(undefined8 *)(pEVar9 + 0x30));
            uVar10 = FUN_03b163c8(*(undefined8 *)(pEVar9 + 0x38));
            pZVar6 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar6);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            local_18 = std::
                       find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                 (uVar8,uVar10,lVar11 + 8);
            local_10 = FUN_03b163c8(*(undefined8 *)(pEVar9 + 0x38));
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
            bVar2 = !bVar2;
            goto LAB_03b19660;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_03b19660:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::clearShakedZombies() */

void __thiscall EffectObject_GardenerGrass::clearShakedZombies(EffectObject_GardenerGrass *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  long *plVar5;
  RtObject *this_01;
  ZombieWithActions *pZVar6;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtMixedPtr<Sexy::Image> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar1) {
      std::
      vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
      ::clear((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
               *)this_00);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar1) {
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      plVar5 = (long *)Zombie::GetAnimRig(pZVar4);
      (**(code **)(*plVar5 + 0x88))();
      this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      if ((this_01 == (RtObject *)0x0) ||
         (pZVar6 = Sexy::RtObject::Cast<ZombieWithActions>(this_01),
         pZVar6 == (ZombieWithActions *)0x0)) {
LAB_03b19930:
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        Zombie::SetIsControlled(pZVar4,false);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar2 = canZombieBeShaked(this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          Zombie::setZombieState(pZVar4,*(undefined4 *)(pRVar3 + 8),0);
        }
        goto LAB_03b19898;
      }
      ZombieWithActions::GetCurrentAction();
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 == '\0') goto LAB_03b19930;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      (**(code **)(*plVar5 + 0x260))();
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      Zombie::SetIsControlled(pZVar4,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
LAB_03b19898:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::onDestroy() */

void __thiscall EffectObject_GardenerGrass::onDestroy(EffectObject_GardenerGrass *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  long *plVar5;
  RtObject *this_01;
  ZombieWithActions *pZVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtMixedPtr<Sexy::Image> aRStack_10 [8];
  long lStack_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  lStack_8 = ___stack_chk_guard;
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_28,(__normal_iterator *)&uStack_20);
    if (!bVar1) {
      std::
      vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
      ::clear((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
               *)this_00);
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar1) {
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      plVar5 = (long *)Zombie::GetAnimRig(pZVar4);
      (**(code **)(*plVar5 + 0x88))();
      this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      if ((this_01 == (RtObject *)0x0) ||
         (pZVar6 = Sexy::RtObject::Cast<ZombieWithActions>(this_01),
         pZVar6 == (ZombieWithActions *)0x0)) {
LAB_03b19930:
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        Zombie::SetIsControlled(pZVar4,false);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar2 = canZombieBeShaked(this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          Zombie::setZombieState(pZVar4,*(undefined4 *)(pRVar3 + 8),0);
        }
        goto LAB_03b19898;
      }
      ZombieWithActions::GetCurrentAction();
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 == '\0') goto LAB_03b19930;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      (**(code **)(*plVar5 + 0x260))();
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      Zombie::SetIsControlled(pZVar4,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
LAB_03b19898:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::onZombieDestroyed(Zombie*) */

void __thiscall
EffectObject_GardenerGrass::onZombieDestroyed(EffectObject_GardenerGrass *this,Zombie *param_1)

{
  long lVar1;
  long *plVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  lVar1 = findShakedZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (lVar1 != 0) {
    plVar2 = (long *)Zombie::GetAnimRig(param_1);
    (**(code **)(*plVar2 + 0x88))();
    Zombie::SetIsControlled(param_1,false);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrass::onUpdate() */

void __thiscall EffectObject_GardenerGrass::onUpdate(EffectObject_GardenerGrass *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  RtWeakPtrBase *this_02;
  RtWeakPtrBase *pRVar8;
  string *psVar9;
  undefined8 *puVar10;
  Zombie *this_03;
  GridItem *this_04;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  string asStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78;
  ResourceInfo *local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  if ((this[0x11a] == (EffectObject_GardenerGrass)0x0) &&
     (cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x1a0)),
     cVar3 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    fVar19 = *(float *)(this + 0x11c);
    fVar21 = *(float *)(this + 0x198);
    fVar20 = (float)PVZ_T();
    if (fVar19 + fVar21 < fVar20) {
      clearShakedZombies(this);
      cVar3 = FUN_0547419c(this + 0x1b0);
      if (cVar3 == '\0') {
        Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,this + 0x1b0);
      }
      else {
        StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
    else {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1b8);
      uVar17 = *(undefined8 *)(this + 0x1e8);
      uVar15 = 0;
      uVar6 = FUN_03b14d84(uVar17,*(undefined8 *)(this + 0x1f0));
      if (uVar6 != 0) {
        do {
          uVar16 = *(undefined8 *)(this + 0x1b8);
          lVar7 = FUN_03b14d90(uVar16,*(undefined8 *)(this + 0x1c0));
          lVar12 = 0;
          do {
            iVar5 = (int)lVar12;
            if (lVar12 == lVar7) goto LAB_03b1a474;
            this_02 = (RtWeakPtrBase *)FUN_03b14dc0(uVar16,lVar12);
            pRVar8 = (RtWeakPtrBase *)FUN_03b14dcc(uVar17,uVar15);
            cVar3 = Sexy::RtWeakPtrBase::operator==(this_02,pRVar8);
            lVar12 = lVar12 + 1;
          } while (cVar3 == '\0');
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,pRVar8);
          local_98 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_80 = __gnu_cxx::
                     __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                     ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                  *)&local_98,(long)iVar5);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_68,(__normal_iterator *)&local_80);
          std::
          vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
          ::erase((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
                   *)this_00,local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
          uVar17 = *(undefined8 *)(this + 0x1e8);
          uVar6 = FUN_03b14d84(uVar17,*(undefined8 *)(this + 0x1f0));
LAB_03b1a474:
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar6);
      }
      this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1d0);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x1e8));
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_80);
      uVar17 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_01);
      uVar16 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
      std::
      vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
      ::
      insert<__gnu_cxx::__normal_iterator<EffectObject_GardenerGrass::ShakeDes*,std::vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>>,void>
                ((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
                  *)this_00,local_68,uVar17,uVar16);
      std::
      vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
      ::clear((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
               *)this_01);
      fVar20 = *(float *)(this + 0x19c);
      fVar19 = (float)PVZ_T();
      if (fVar20 < fVar19) {
        uVar6 = time((time_t *)0x0);
        Sexy::SRand(uVar6);
        iVar5 = Sexy::Rand(100);
        bVar2 = (float)iVar5 < *(float *)(this + 400) * 100.0;
      }
      else {
        bVar2 = false;
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
      uVar4 = operator|(2,4);
      EntityFinder::GetEntitiesInRectangle
                ((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                  *)&local_98,uVar4,this + 0x120);
      uVar17 = local_98;
      iVar5 = FUN_03b14dd4(local_98,local_90);
      uVar1 = iVar5 - 1;
      if (-1 < (int)uVar1) {
        lVar13 = (long)(int)uVar1 + -1;
        lVar12 = lVar13;
        lVar7 = (long)(int)uVar1;
        do {
          lVar14 = lVar12;
          puVar10 = (undefined8 *)FUN_03b14de0(uVar17,lVar7);
          this_03 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
          puVar10 = (undefined8 *)FUN_03b14de0(local_98,lVar7);
          this_04 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
          DamageInfo::DamageInfo((DamageInfo *)&local_68,(DamageInfo *)(this + 0x130));
          local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a0));
          fVar19 = *(float *)(this + 0x138);
          local_60 = (float)PVZ_Dt();
          local_60 = local_60 * fVar19;
          if (this_03 == (Zombie *)0x0) {
LAB_03b1a6e4:
            if ((this_04 == (GridItem *)0x0) ||
               (cVar3 = (**(code **)(*(long *)this_04 + 0x200))(this_04), cVar3 == '\0'))
            goto LAB_03b1a66c;
            lVar12 = *(long *)this_04;
            if (*(code **)(lVar12 + 0x1d8) == GridItem::GetHitpoints) {
              fVar19 = (float)GridItem::GetHitpoints(this_04);
            }
            else {
              fVar19 = (float)(**(code **)(lVar12 + 0x1d8))(this_04);
              lVar12 = *(long *)this_04;
            }
            if (*(code **)(lVar12 + 0x1e0) == GridItem::GetMaxHitpoints) {
              fVar20 = (float)GridItem::GetMaxHitpoints(this_04);
            }
            else {
              fVar20 = (float)(**(code **)(lVar12 + 0x1e0))();
              lVar12 = *(long *)this_04;
            }
            if ((fVar20 * 0.5 < fVar19) && (bVar2)) {
              if (*(code **)(lVar12 + 0x1d8) == GridItem::GetHitpoints) {
                fVar19 = (float)GridItem::GetHitpoints(this_04);
              }
              else {
                fVar19 = (float)(**(code **)(lVar12 + 0x1d8))(this_04);
                lVar12 = *(long *)this_04;
              }
              if (*(code **)(lVar12 + 0x1e0) == GridItem::GetMaxHitpoints) {
                fVar20 = (float)GridItem::GetMaxHitpoints(this_04);
              }
              else {
                fVar20 = (float)(**(code **)(lVar12 + 0x1e0))();
                lVar12 = *(long *)this_04;
              }
              local_60 = fVar19 - fVar20 * 0.5;
            }
            (**(code **)(lVar12 + 0x110))
                      (this_04,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            uVar17 = local_98;
          }
          else {
            pcVar18 = *(code **)(*(long *)this_03 + 0x3d0);
            psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr()
            ;
            std::string::string(asStack_a8,"gardenergrass");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_a0);
            cVar3 = (*pcVar18)(this_03,(RtWeakPtr<Sexy::SoundResource> *)&local_80,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
            std::string::~string(asStack_a8);
            nop();
            if (cVar3 == '\0') goto LAB_03b1a6e4;
            iVar5 = FUN_03b14d6c(*(undefined4 *)(this_03 + 0xb0));
            if (iVar5 == 0) {
              fVar19 = (float)FUN_03b14d64(*(undefined4 *)(this_03 + 0x280));
              fVar20 = (float)FUN_03b14d68(*(undefined4 *)(this_03 + 0x284));
              if ((fVar20 * 0.5 < fVar19) && (bVar2)) {
                local_60 = (float)FUN_03b14d70(*(undefined4 *)(this_03 + 0x2a8));
                local_60 = ((fVar19 + 1.0) - fVar20 * 0.6666667) + local_60;
              }
            }
            (**(code **)(*(long *)this_03 + 0x110))
                      (this_03,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_68);
            if (this[0x118] != (EffectObject_GardenerGrass)0x0) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_a0);
              cVar3 = canZombieBeShaked(this,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
              if (cVar3 != '\0') {
                cVar3 = Zombie::IsControlled(this_03);
                if (cVar3 == '\0') {
                  ShakeDes::ShakeDes((ShakeDes *)&local_80);
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_80,
                             (RtWeakPtrBase *)aRStack_a0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
                  local_78 = Zombie::getZombieStateSerialization(this_03);
                  Zombie::SetIsControlled(this_03,true);
                  (**(code **)(*(long *)this_03 + 600))(this_03);
                  std::
                  vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
                  ::push_back((vector<EffectObject_GardenerGrass::ShakeDes,std::allocator<EffectObject_GardenerGrass::ShakeDes>>
                               *)this_01,(ShakeDes *)&local_80);
                  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_80);
                }
                iVar5 = Zombie::getZombieStateSerialization(this_03);
                if (iVar5 == 0) {
                  plVar11 = (long *)Zombie::GetAnimRig(this_03);
                  (**(code **)(*plVar11 + 0x80))(0x41200000);
                }
              }
            }
            if (this[0x119] != (EffectObject_GardenerGrass)0x0) {
              Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_03,0x35,1);
              fVar19 = (float)PVZ_T();
              *(float *)(this_03 + 0x3c) = fVar19 + 5.0;
              if (*(int *)(this_03 + 0x30) < 1) {
                fVar19 = *(float *)(this + 0x194);
                *(undefined4 *)(this_03 + 0x30) = 6;
                *(int *)(this_03 + 0x34) = (int)fVar19;
                uVar4 = PVZ_T();
                *(undefined4 *)(this_03 + 0x38) = uVar4;
              }
              else if (*(int *)(this_03 + 0x30) == 6) {
                *(int *)(this_03 + 0x34) = (int)*(float *)(this + 0x194);
              }
              else {
                *(int *)(this_03 + 0x34) =
                     (int)((float)*(int *)(this_03 + 0x34) + *(float *)(this + 0x194));
              }
            }
LAB_03b1a66c:
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            uVar17 = local_98;
          }
          local_98 = uVar17;
          if (lVar14 == lVar13 - (ulong)uVar1) break;
          lVar12 = lVar14 + -1;
          lVar7 = lVar14;
        } while( true );
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

