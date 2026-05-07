// Class: CthulhuSubSystem


/* CthulhuSubSystem::Update() */

void __thiscall CthulhuSubSystem::Update(CthulhuSubSystem *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuSubSystem::StaticClassInit() */

void CthulhuSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"CthulhuSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04d6fc1c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuSubSystem::StaticGetClass() */

long * CthulhuSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuSubSystem::GetClass() const */

long * CthulhuSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuSubSystem::CthulhuSubSystem() */

void __thiscall CthulhuSubSystem::CthulhuSubSystem(CthulhuSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069b5fe0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* CthulhuSubSystem::StaticNew() */

CthulhuSubSystem * CthulhuSubSystem::StaticNew(void)

{
  CthulhuSubSystem *this;
  
  this = ::operator_new(0x18);
  CthulhuSubSystem(this);
  return this;
}


/* CthulhuSubSystem::~CthulhuSubSystem() */

void __thiscall CthulhuSubSystem::~CthulhuSubSystem(CthulhuSubSystem *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase *this_00;
  
  this_00 = (RtMixedPtrBase *)(this + 0x10);
  *(undefined ***)this = &PTR_GetClass_069b5fe0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* CthulhuSubSystem::~CthulhuSubSystem() */

void __thiscall CthulhuSubSystem::~CthulhuSubSystem(CthulhuSubSystem *this)

{
  ~CthulhuSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuSubSystem::GetButtonPosition() */

void __thiscall CthulhuSubSystem::GetButtonPosition(CthulhuSubSystem *this)

{
  char cVar1;
  long *plVar2;
  undefined8 local_20;
  int local_18;
  int iStack_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x10));
  if (cVar1 == '\0') {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_18);
    local_20 = CONCAT44(iStack_14,local_18);
  }
  else {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    (**(code **)(*plVar2 + 0x230))(&local_18);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_20,(float)(local_18 + local_10 / 2),
               (float)(iStack_14 + local_c / 2));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_20,(int)((ulong)local_20 >> 0x20));
}


/* CthulhuSubSystem::GetEnergy() */

void __thiscall CthulhuSubSystem::GetEnergy(CthulhuSubSystem *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  FUN_04d6d65c(*(undefined4 *)(lVar2 + 0xb0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuSubSystem::GenerateDangerroomInfo() */

void CthulhuSubSystem::GenerateDangerroomInfo(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  undefined4 uVar2;
  long in_x0;
  long lVar3;
  CthulhuDangerroomInfo *in_x8;
  string asStack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  CthulhuDangerroomInfo::CthulhuDangerroomInfo(in_x8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    CthulhuEasyButton::GetTypeName();
    thunk_FUN_05475e00();
    std::string::~string(asStack_10);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar2 = FUN_04d6d65c(*(undefined4 *)(lVar3 + 0xb0));
    *(undefined4 *)(in_x8 + 8) = uVar2;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar2 = FUN_04d6d660(*(undefined4 *)(lVar3 + 0xb4));
    *(undefined4 *)(in_x8 + 0xc) = uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuSubSystem::CreateCthulhuEasyButton(std::string) */

void __thiscall CthulhuSubSystem::CreateCthulhuEasyButton(undefined8 param_1,string *param_2)

{
  bool bVar1;
  long lVar2;
  ResourceInfo *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"cthulhueyeball");
  if ((bVar1) || (lVar2 = FUN_05474374(param_2,"devilsflower",0), lVar2 != -1)) {
    GameObject::Create<CthulhuEyeballEasyButton>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    pRVar3 = (ResourceInfo *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuSubSystem::LoadDangerroomInfo() */

void __thiscall CthulhuSubSystem::LoadDangerroomInfo(CthulhuSubSystem *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  DangerRoomManager *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  S2C_DangerRoomRecord *pSVar4;
  string *psVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 local_e0;
  undefined8 local_d8;
  string asStack_d0 [16];
  S2C_DangerRoomRecord aSStack_c0 [160];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(*(long **)(gLawnApp + 0x9f0));
  if ((cVar1 == '\0') &&
     (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar3 + 0x112) != '\0')) {
    this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar1 = DangerRoomManager::IsTrainingMode(this_01);
    if (cVar1 == '\0') {
      this_00 = (RtMixedPtrBase *)(this + 0x10);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        pSVar4 = (S2C_DangerRoomRecord *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_02);
        S2C_DangerRoomRecord::S2C_DangerRoomRecord(aSStack_c0,pSVar4);
        local_e0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_20);
        local_d8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8),
              bVar2) {
          psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          CthulhuEasyButton::GetTypeName();
          cVar1 = std::operator==(psVar5,asStack_d0);
          std::string::~string(asStack_d0);
          if (cVar1 != '\0') {
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pcVar7 = *(code **)(*plVar6 + 0x200);
            AnimationSequenceEntry::AnimationSequenceEntry
                      ((AnimationSequenceEntry *)asStack_d0,(AnimationSequenceEntry *)psVar5);
            (*pcVar7)(plVar6,asStack_d0);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_d0);
            break;
          }
          std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                    ((move_iterator<Sexy::CharDataHashEntry*> *)&local_e0);
        }
        S2C_DangerRoomRecord::~S2C_DangerRoomRecord(aSStack_c0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuSubSystem::InitButton(std::string, float) */

void __thiscall
CthulhuSubSystem::InitButton(float param_1,CthulhuSubSystem *this,undefined8 param_3)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  CthulhuEasyButton *this_01;
  code *pcVar3;
  float fVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_18,param_3);
    CreateCthulhuEasyButton(this,asStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x1e0))();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar3 = *(code **)(*plVar2 + 0x1f8);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,param_3);
    (*pcVar3)(plVar2,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,0);
    std::string::~string(asStack_10);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x210))(param_1);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar3 = *(code **)(*plVar2 + 0x208);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,param_3);
    (*pcVar3)(param_1,plVar2,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_10);
    LoadDangerroomInfo(this);
  }
  else {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x1f0))();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar3 = *(code **)(*plVar2 + 0x1f8);
    FUN_05475d88(asStack_10,param_3);
    (*pcVar3)(plVar2,asStack_10,0);
    std::string::~string(asStack_10);
    this_01 = (CthulhuEasyButton *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(code **)(*(long *)this_01 + 0x218) == CthulhuEasyButton::GetPlantAttackRatio) {
      fVar4 = (float)CthulhuEasyButton::GetPlantAttackRatio(this_01);
    }
    else {
      fVar4 = (float)(**(code **)(*(long *)this_01 + 0x218))();
    }
    if (fVar4 < param_1) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar2 + 0x210))(param_1);
    }
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar3 = *(code **)(*plVar2 + 0x208);
    FUN_05475d88(asStack_10,param_3);
    (*pcVar3)(param_1,plVar2,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

