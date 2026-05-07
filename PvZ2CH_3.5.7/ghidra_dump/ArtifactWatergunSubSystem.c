// Class: ArtifactWatergunSubSystem


/* ArtifactWatergunSubSystem::DrawWaterbeam(Sexy::Graphics*) */

void ArtifactWatergunSubSystem::DrawWaterbeam(Graphics *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunSubSystem::StaticClassInit() */

void ArtifactWatergunSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"WatergunBeamParams");
    (*pcVar3)(plVar2,asStack_10,FUN_04caac10,0x24,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactWatergunSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04cb01e0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWatergunSubSystem::StaticGetClass() */

long * ArtifactWatergunSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWatergunSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWatergunSubSystem::GetClass() const */

long * ArtifactWatergunSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWatergunSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWatergunSubSystem::FillWatergunBeamParams(WatergunBeamParams) */

void __thiscall
ArtifactWatergunSubSystem::FillWatergunBeamParams
          (ArtifactWatergunSubSystem *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x40) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunSubSystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
ArtifactWatergunSubSystem::AddToRenderQueue(ArtifactWatergunSubSystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DrawWaterbeam);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ArtifactWatergunSubSystem,void(ArtifactWatergunSubSystem::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x64960,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunSubSystem::ArtifactWatergunSubSystem() */

void __thiscall
ArtifactWatergunSubSystem::ArtifactWatergunSubSystem(ArtifactWatergunSubSystem *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069989a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  WatergunBeamParams::WatergunBeamParams((WatergunBeamParams *)(this + 0x28));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWatergunSubSystem::StaticNew() */

ArtifactWatergunSubSystem * ArtifactWatergunSubSystem::StaticNew(void)

{
  ArtifactWatergunSubSystem *this;
  
  this = ::operator_new(0x50);
  ArtifactWatergunSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunSubSystem::~ArtifactWatergunSubSystem() */

void __thiscall
ArtifactWatergunSubSystem::~ArtifactWatergunSubSystem(ArtifactWatergunSubSystem *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069989a0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::
  vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>::
  ~vector((vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>
           *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWatergunSubSystem::~ArtifactWatergunSubSystem() */

void __thiscall
ArtifactWatergunSubSystem::~ArtifactWatergunSubSystem(ArtifactWatergunSubSystem *this)

{
  ~ArtifactWatergunSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactWatergunSubSystem::End() */

void __thiscall ArtifactWatergunSubSystem::End(ArtifactWatergunSubSystem *this)

{
  std::
  vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>::
  clear((vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>
         *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunSubSystem::Start() */

void __thiscall ArtifactWatergunSubSystem::Start(ArtifactWatergunSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  RtMixedPtrBase *this_01;
  long *plVar6;
  SexyVector3 *pSVar7;
  WatergunBeamEntity *pWVar8;
  Point *extraout_x1;
  uint uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    uVar9 = (uint)bVar2;
    if (!bVar2) break;
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar3 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar6 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  std::
  vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>::
  clear((vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>
         *)this_00);
  uVar4 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < (int)uVar4) {
    do {
      GameObject::Create<WatergunBeamEntity>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::Point::Point((Point *)&local_18,0,uVar9);
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
      DVec3::DVec3((DVec3 *)&local_18);
      iVar1 = (int)local_20;
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      local_10 = 0;
      local_18 = CONCAT44((float)local_20._4_4_,(float)(iVar1 - iVar5));
      pSVar7 = (SexyVector3 *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      BoardEntity::PlaceOnBoard(pSVar7);
      pWVar8 = (WatergunBeamEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      local_40 = *(undefined4 *)(this + 0x48);
      local_60 = *(undefined8 *)(this + 0x28);
      uStack_58 = *(undefined8 *)(this + 0x30);
      local_50 = *(undefined8 *)(this + 0x38);
      uStack_48 = *(undefined8 *)(this + 0x40);
      WatergunBeamEntity::InitParams(pWVar8,&local_60);
      pWVar8 = (WatergunBeamEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      bVar2 = uVar9 != 2;
      uVar9 = uVar9 + 1;
      WatergunBeamEntity::CanShowWatergun(pWVar8,bVar2);
      pWVar8 = (WatergunBeamEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      WatergunBeamEntity::CreateWatergunRig(pWVar8);
      pWVar8 = (WatergunBeamEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      WatergunBeamEntity::StartBeam(pWVar8);
      std::
      vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>
      ::push_back((vector<Sexy::RtWeakPtr<WatergunBeamEntity>,std::allocator<Sexy::RtWeakPtr<WatergunBeamEntity>>>
                   *)this_00,(RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    } while (uVar9 != uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

