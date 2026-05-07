// Class: ArtifactImprovedPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactImprovedPropertySheet::StaticClassInit() */

void ArtifactImprovedPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactImprovedPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0340a184,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactImprovedPropertySheet::StaticGetClass() */

long * ArtifactImprovedPropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactImprovedPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactImprovedPropertySheet::GetClass() const */

long * ArtifactImprovedPropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactImprovedPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactImprovedPropertySheet::ArtifactImprovedPropertySheet() */

void __thiscall
ArtifactImprovedPropertySheet::ArtifactImprovedPropertySheet(ArtifactImprovedPropertySheet *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0661f9b0;
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactImprovedPropertySheet::StaticNew() */

ArtifactImprovedPropertySheet * ArtifactImprovedPropertySheet::StaticNew(void)

{
  ArtifactImprovedPropertySheet *this;
  
  this = ::operator_new(0x40);
  ArtifactImprovedPropertySheet(this);
  return this;
}


/* ArtifactImprovedPropertySheet::~ArtifactImprovedPropertySheet() */

void __thiscall
ArtifactImprovedPropertySheet::~ArtifactImprovedPropertySheet(ArtifactImprovedPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f9b0;
  std::
  vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>>>
  ::~vector((vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>>>
             *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ArtifactImprovedPropertySheet::~ArtifactImprovedPropertySheet() */

void __thiscall
ArtifactImprovedPropertySheet::~ArtifactImprovedPropertySheet(ArtifactImprovedPropertySheet *this)

{
  ~ArtifactImprovedPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactImprovedPropertySheet::Copy(ArtifactImprovedPropertySheet const&) */

void __thiscall
ArtifactImprovedPropertySheet::Copy
          (ArtifactImprovedPropertySheet *this,ArtifactImprovedPropertySheet *param_1)

{
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  std::
  vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>>>
  ::operator=((vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>>>
               *)(this + 0x28),(vector *)(param_1 + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactImprovedPropertySheet::syncBoost(NetworkArtifactBoostData const&) */

void __thiscall
ArtifactImprovedPropertySheet::syncBoost
          (ArtifactImprovedPropertySheet *this,NetworkArtifactBoostData *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ArtifactBoostPropertySheet *pAVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined8 local_20;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  uVar1 = *(undefined4 *)param_1;
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = FUN_03409e60(uVar3,uVar4,uVar1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (bVar2) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pAVar5 = (ArtifactBoostPropertySheet *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    ArtifactBoostPropertySheet::Sync(pAVar5,param_1);
  }
  else {
    GameObject::Create<ArtifactBoostPropertySheet>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    pAVar5 = (ArtifactBoostPropertySheet *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    ArtifactBoostPropertySheet::Sync(pAVar5,param_1);
    std::
    vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>>>
    ::push_back((vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>>>
                 *)this_00,(RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactImprovedPropertySheet::SyncNetwork(std::vector<NetworkArtifactBoostData,
   std::allocator<NetworkArtifactBoostData> > const&) */

void __thiscall
ArtifactImprovedPropertySheet::SyncNetwork(ArtifactImprovedPropertySheet *this,vector *param_1)

{
  bool bVar1;
  NetworkArtifactBoostData *pNVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_034096bc(*(undefined8 *)param_1);
  local_10 = FUN_0340970c(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pNVar2 = (NetworkArtifactBoostData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    syncBoost(this,pNVar2);
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

