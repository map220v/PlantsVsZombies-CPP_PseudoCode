// Class: ZombieBlowerSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::StaticClassInit() */

void ZombieBlowerSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlownZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_0467fcb4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieBlowerSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04680014,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBlowerSubSystem::StaticGetClass() */

long * ZombieBlowerSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBlowerSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBlowerSubSystem::GetClass() const */

long * ZombieBlowerSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBlowerSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBlowerSubSystem::ZombieBlowerSubSystem() */

void __thiscall ZombieBlowerSubSystem::ZombieBlowerSubSystem(ZombieBlowerSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0689b270;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombieBlowerSubSystem::StaticNew() */

ZombieBlowerSubSystem * ZombieBlowerSubSystem::StaticNew(void)

{
  ZombieBlowerSubSystem *this;
  
  this = ::operator_new(0x60);
  ZombieBlowerSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::registerForEvents() */

void __thiscall ZombieBlowerSubSystem::registerForEvents(ZombieBlowerSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ZombieBlowerSubSystem::registerForEvents");
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieBlowerSubSystem,void(ZombieBlowerSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBlowGriItem);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ZombieBlowerSubSystem,void(ZombieBlowerSubSystem::*)(int)>>
            ((MessageRouter *)puVar1,Message::HurrikaleWind,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBlowGridItemAll);
  Sexy::Delegate0::Delegate0<ZombieBlowerSubSystem,void(ZombieBlowerSubSystem::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantBloverWind,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBlowerSubSystem::~ZombieBlowerSubSystem() */

void __thiscall ZombieBlowerSubSystem::~ZombieBlowerSubSystem(ZombieBlowerSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0689b270;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<BlownZombie,std::allocator<BlownZombie>>::~vector
            ((vector<BlownZombie,std::allocator<BlownZombie>> *)(this + 0x28));
  std::vector<BlownZombie,std::allocator<BlownZombie>>::~vector
            ((vector<BlownZombie,std::allocator<BlownZombie>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieBlowerSubSystem::~ZombieBlowerSubSystem() */

void __thiscall ZombieBlowerSubSystem::~ZombieBlowerSubSystem(ZombieBlowerSubSystem *this)

{
  ~ZombieBlowerSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::onBlowGriItem(int) */

void __thiscall ZombieBlowerSubSystem::onBlowGriItem(ZombieBlowerSubSystem *this,int param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  RtObject *pRVar7;
  Plant *pPVar8;
  GridItemZombieGasSmoke *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_28,"planttarget_somke");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_28);
  nop();
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar4,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    GridItem::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    cVar2 = std::operator==((string *)(lVar5 + 0x10),(string *)(lVar6 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    if (cVar2 != '\0') {
      pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      Sexy::RtObject::Cast<GridItemZombieGasSmoke>(pRVar7);
      GridItemBoardEntityConditionTarget::GetOwner();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
      if (bVar1) {
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar7);
        if ((pPVar8 != (Plant *)0x0) && (*(int *)(pPVar8 + 0x110) == param_1)) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          GridItem::GetType();
          cVar2 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          if (cVar2 != '\0') {
            pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            this_00 = Sexy::RtObject::Cast<GridItemZombieGasSmoke>(pRVar7);
            if ((this_00 != (GridItemZombieGasSmoke *)0x0) &&
               (cVar2 = FUN_0467f154(this_00[0x1bd]), cVar2 == '\0')) {
              GridItemCardGameZombie::PlayDeathAnim((GridItemCardGameZombie *)this_00);
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::onBlowGridItemAll() */

void ZombieBlowerSubSystem::onBlowGridItemAll(void)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  RtObject *this;
  GridItemZombieGasSmoke *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_28,"planttarget_somke");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_28);
  nop();
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar4,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    GridItem::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    cVar2 = std::operator==((string *)(lVar5 + 0x10),(string *)(lVar6 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    if (cVar2 != '\0') {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      this_00 = Sexy::RtObject::Cast<GridItemZombieGasSmoke>(this);
      if ((this_00 != (GridItemZombieGasSmoke *)0x0) &&
         (cVar2 = FUN_0467f154(this_00[0x1bd]), cVar2 == '\0')) {
        GridItemCardGameZombie::PlayDeathAnim((GridItemCardGameZombie *)this_00);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::internalBlowZombie(float, float, BlownZombie&) */

void __thiscall
ZombieBlowerSubSystem::internalBlowZombie
          (ZombieBlowerSubSystem *this,float param_1,float param_2,BlownZombie *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  undefined8 uVar2;
  Zombie *pZVar3;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x18);
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pZVar3._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3._0_4_,0,uVar2,0x18,1);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Zombie::SetIsFlying(pZVar3,true);
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)param_3,(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,param_1,0.0,param_1 * param_2);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0xc),(SexyVector3 *)aVStack_18);
  std::vector<BlownZombie,std::allocator<BlownZombie>>::push_back
            ((vector<BlownZombie,std::allocator<BlownZombie>> *)(this + 0x28),param_3);
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)this_00);
  MessageRouter::Post<Zombie*,Sexy::RtWeakPtr<Zombie>>
            ((MessageRouter *)puVar1,Message::ZombieBlown,aVStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::BlowZombie(Plant*, Zombie*, float, float,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >) */

void __thiscall
ZombieBlowerSubSystem::BlowZombie
          (float param_3,float param_4,ZombieBlowerSubSystem *this,long param_1,
          ResourceInfo *param_2,RtReflectionDelegate *param_6)

{
  long lVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  RiftThemeHeavyBallon *pRVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  BlownZombie aBStack_78 [24];
  RtWeakPtr<PowerPropertySheet> aRStack_60 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (ResourceInfo *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_90);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  }
  if (param_1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_88);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  }
  uVar5 = 0;
  do {
    uVar6 = *(undefined8 *)(this + 0x10);
    uVar3 = FUN_0467f15c(uVar6,*(undefined8 *)(this + 0x18));
    if (uVar3 <= uVar5) {
      BlownZombie::BlownZombie(aBStack_78);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_58,(RtWeakPtr *)aRStack_88);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_60,(RtWeakPtr *)aRStack_90);
      RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_50,param_6);
      internalBlowZombie(this,param_3,param_4,aBStack_78);
      pRVar4 = RiftUtils::GetThemeByClass<RiftThemeHeavyBallon>();
      this[0x58] = (ZombieBlowerSubSystem)(pRVar4 != (RiftThemeHeavyBallon *)0x0);
      BlownZombie::~BlownZombie(aBStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      goto LAB_04680fe8;
    }
    lVar1 = FUN_0467f198(uVar6,uVar5);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar1 + 0x18));
    uVar5 = uVar5 + 1;
  } while (param_2 != pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
LAB_04680fe8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::onZombieDestroyed(Zombie*) */

void ZombieBlowerSubSystem::onZombieDestroyed(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x40),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBlowerSubSystem::Update() */

void ZombieBlowerSubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  long lVar6;
  long lVar7;
  RtWeakPtrBase *pRVar8;
  ResourceInfo *this_01;
  undefined8 *puVar9;
  Vec3 *pVVar10;
  ResourceInfo *pRVar11;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar12;
  Delegate1wRet<bool,SexyURL_const&> *this_02;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 in_s1;
  RtWeakPtr aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  uVar14 = 0;
  fVar17 = (float)PVZ_Dt();
  uVar16 = *(undefined8 *)(in_x0 + 0x40);
  uVar5 = FUN_0467f1a8(uVar16,*(undefined8 *)(in_x0 + 0x48));
  if (uVar5 != 0) {
    do {
      uVar15 = *(undefined8 *)(in_x0 + 0x10);
      lVar6 = FUN_0467f15c(uVar15,*(undefined8 *)(in_x0 + 0x18));
      lVar13 = 0;
      do {
        iVar3 = (int)lVar13;
        if (lVar13 == lVar6) goto LAB_04681984;
        lVar7 = FUN_0467f198(uVar15,lVar13);
        pRVar8 = (RtWeakPtrBase *)FUN_0467f1b4(uVar16,uVar14);
        cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar7 + 0x18),pRVar8);
        lVar13 = lVar13 + 1;
      } while (cVar2 == '\0');
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>
                 ::operator+((__normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>
                              *)&local_30,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<BlownZombie,std::allocator<BlownZombie>>::erase
                ((vector<BlownZombie,std::allocator<BlownZombie>> *)this,
                 CONCAT44(uStack_14,local_18));
      uVar16 = *(undefined8 *)(in_x0 + 0x40);
      uVar5 = FUN_0467f1a8(uVar16,*(undefined8 *)(in_x0 + 0x48));
LAB_04681984:
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar5);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(in_x0 + 0x28);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x40));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  uVar16 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_00);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_00);
  std::vector<BlownZombie,std::allocator<BlownZombie>>::
  insert<__gnu_cxx::__normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>,void>
            ((vector<BlownZombie,std::allocator<BlownZombie>> *)this,CONCAT44(uStack_14,local_18),
             uVar16,uVar15);
  std::vector<BlownZombie,std::allocator<BlownZombie>>::clear
            ((vector<BlownZombie,std::allocator<BlownZombie>> *)this_00);
  uVar16 = *(undefined8 *)(in_x0 + 0x10);
  iVar3 = FUN_0467f15c(uVar16,*(undefined8 *)(in_x0 + 0x18));
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) {
LAB_04681b44:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar13 = (long)iVar3;
  do {
    pVVar10 = (Vec3 *)FUN_0467f198(uVar16,lVar13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)(pVVar10 + 0x18));
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
    if (cVar2 == '\0') {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>
                 ::operator+((__normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>
                              *)&local_30,lVar13);
      pVVar10 = (Vec3 *)&local_28;
LAB_04681b18:
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)pVVar10);
      std::vector<BlownZombie,std::allocator<BlownZombie>>::erase
                ((vector<BlownZombie,std::allocator<BlownZombie>> *)this,
                 CONCAT44(uStack_14,local_18));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    else {
      this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
      puVar9 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_01);
      local_28 = *puVar9;
      local_20 = *(undefined4 *)(puVar9 + 1);
      if (*(char *)(in_x0 + 0x58) != '\0') {
        fVar1 = (float)local_28;
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        if (fVar1 <= (float)(800 - iVar4)) goto LAB_04681a60;
        pEVar12 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                  Zombie::GetConditionTracker((Zombie *)this_01);
        EntityConditionTracker<Zombie,ZombieConditions>::EndCondition(pEVar12,this_01,0x18);
        iVar4 = ::RtReflectionDelegate::operator_cast_to_int
                          ((RtReflectionDelegate *)(pVVar10 + 0x28));
joined_r0x04681c54:
        if (iVar4 != 0) {
          this_02 = (Delegate1wRet<bool,SexyURL_const&> *)
                    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                              ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(pVVar10 + 0x28));
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_02,(SexyURL *)this_01);
        }
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_30 = __gnu_cxx::
                   __normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>
                   ::operator+((__normal_iterator<BlownZombie*,std::vector<BlownZombie,std::allocator<BlownZombie>>>
                                *)&local_38,lVar13);
        pVVar10 = (Vec3 *)&local_30;
        goto LAB_04681b18;
      }
LAB_04681a60:
      EATextSquish::Vec3::operator+=(pVVar10,pVVar10 + 0xc);
      local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)pVVar10,fVar17);
      uStack_14 = in_s1;
      EATextSquish::Vec3::operator+=((Vec3 *)&local_28,(Vec3 *)&local_18);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,(Vec3 *)&local_28);
      if (880.0 < (float)local_28) {
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pVVar10 + 0x20));
        Zombie::TakeFatalDamage((Zombie *)this_01,(BoardEntity *)pRVar11);
        pEVar12 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                  Zombie::GetConditionTracker((Zombie *)this_01);
        EntityConditionTracker<Zombie,ZombieConditions>::EndCondition(pEVar12,this_01,0x18);
        iVar4 = ::RtReflectionDelegate::operator_cast_to_int
                          ((RtReflectionDelegate *)(pVVar10 + 0x28));
        goto joined_r0x04681c54;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    if (iVar3 == 0) goto LAB_04681b44;
    iVar3 = iVar3 + -1;
    lVar13 = lVar13 + -1;
    uVar16 = *(undefined8 *)(in_x0 + 0x10);
  } while( true );
}

