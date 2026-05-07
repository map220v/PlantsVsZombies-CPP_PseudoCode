// Class: VaseBreakerFlowActionCreateAndShowVases


/* VaseBreakerFlowActionCreateAndShowVases::StaticGetClass() */

long * VaseBreakerFlowActionCreateAndShowVases::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionCreateAndShowVases",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionCreateAndShowVases::GetClass() const */

long * VaseBreakerFlowActionCreateAndShowVases::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionCreateAndShowVases",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionCreateAndShowVases::onUpdate() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::onUpdate(VaseBreakerFlowActionCreateAndShowVases *this)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  GridItemVase *this_01;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *(int *)(this + 0x60);
  uVar2 = FUN_049728a4(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  uVar5 = (long)iVar1;
  if (uVar2 <= (ulong)(long)iVar1) {
    RunnableAction::End((RunnableAction *)(this + 0x10));
    return;
  }
  do {
    while( true ) {
      pfVar3 = (float *)FUN_049728b0(*(undefined8 *)(this + 0x48),uVar5);
      fVar7 = *pfVar3;
      fVar6 = (float)PVZ_T();
      if (fVar7 <= fVar6) break;
      uVar5 = uVar5 + 1;
      uVar2 = FUN_049728a4(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
      if (uVar2 <= uVar5) {
        return;
      }
    }
    uVar2 = uVar5 + 1;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049728b8(*(undefined8 *)(this + 0x30),uVar5);
    this_01 = (GridItemVase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    GridItemVase::Drop(this_01);
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    uVar4 = FUN_049728a4(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
    uVar5 = uVar2;
  } while (uVar2 < uVar4);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionCreateAndShowVases::onUpdate() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::onUpdate(VaseBreakerFlowActionCreateAndShowVases *this)

{
  onUpdate(this + -0x10);
  return;
}


/* VaseBreakerFlowActionCreateAndShowVases::VaseBreakerFlowActionCreateAndShowVases() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::VaseBreakerFlowActionCreateAndShowVases
          (VaseBreakerFlowActionCreateAndShowVases *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917780;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionCreateAndShowVases_06917828;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* VaseBreakerFlowActionCreateAndShowVases::StaticNew() */

VaseBreakerFlowActionCreateAndShowVases * VaseBreakerFlowActionCreateAndShowVases::StaticNew(void)

{
  VaseBreakerFlowActionCreateAndShowVases *this;
  
  this = ::operator_new(0x68);
  VaseBreakerFlowActionCreateAndShowVases(this);
  return this;
}


/* VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases
          (VaseBreakerFlowActionCreateAndShowVases *this)

{
  *(undefined ***)this = &PTR_GetClass_06917780;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionCreateAndShowVases_06917828;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x48));
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
             (this + 0x30));
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases
          (VaseBreakerFlowActionCreateAndShowVases *this)

{
  ~VaseBreakerFlowActionCreateAndShowVases(this + -0x10);
  return;
}


/* VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases
          (VaseBreakerFlowActionCreateAndShowVases *this)

{
  ~VaseBreakerFlowActionCreateAndShowVases(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::~VaseBreakerFlowActionCreateAndShowVases
          (VaseBreakerFlowActionCreateAndShowVases *this)

{
  ~VaseBreakerFlowActionCreateAndShowVases(this + -0x10);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x049783cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* VaseBreakerFlowActionCreateAndShowVases::onBegin() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::onBegin(VaseBreakerFlowActionCreateAndShowVases *this)

{
  vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *this_00;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined4 uVar5;
  VaseBreakerModule *this_01;
  vector *pvVar6;
  RtWeakPtrBase *pRVar7;
  GridItemVase *this_02;
  PopAnimRig *this_03;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 extraout_var [12];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
            (this + 0x30);
  local_8 = ___stack_chk_guard;
  this_01 = (VaseBreakerModule *)
            VaseBreakerFlowAction::getVaseBreaker((VaseBreakerFlowAction *)this);
  VaseBreakerModule::ConfigureVasesFromPropertySheet(this_01);
  VaseBreakerModule::SpawnVases(this_01);
  pvVar6 = (vector *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)this_01);
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::
  operator=(this_00,pvVar6);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  while( true ) {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar4) break;
    pRVar7 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar7);
    this_02 = (GridItemVase *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    this_03 = (PopAnimRig *)GridItemVase::GetAnimRig(this_02);
    PopAnimRig::SetDisabled(this_03,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_00);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar8,uVar9);
  *(undefined4 *)(this + 0x60) = 0;
  uVar5 = RandRangeInt(1,3);
  local_18 = CONCAT44(local_18._4_4_,uVar5);
  uVar10 = FUN_049728a4(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  local_10 = CONCAT44(local_10._4_4_,(int)uVar10);
  piVar11 = eastl::min_alt<int>((int *)&local_18,(int *)&local_10);
  iVar1 = *piVar11;
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x48),uVar10);
  fVar14 = (float)PVZ_T();
  uVar8 = *(undefined8 *)(this + 0x48);
  uVar10 = 0;
  fVar16 = fVar14;
  while( true ) {
    uVar13 = FUN_04972890(uVar8,*(undefined8 *)(this + 0x50));
    if (uVar13 <= uVar10) break;
    if (uVar13 - uVar10 < 0x15) {
      if (uVar13 - uVar10 < (ulong)(long)iVar1) {
        fVar16 = (float)RandRangeFloat(0.35,0.6);
      }
      else {
        local_18 = CONCAT44(local_18._4_4_,0x3e800000);
        local_10 = CONCAT44(local_10._4_4_,0x3f800000);
        auVar3._4_12_ = extraout_var;
        auVar3._0_4_ = fVar16;
        fVar15 = CurveLerp<float>(auVar3,(float)uVar13,(float)(int)uVar10,(exception_ptr *)&local_18
                                  ,(__normal_iterator *)&local_10,2);
        fVar16 = (float)RandRangeFloat(0.05,0.1);
        fVar16 = fVar16 * fVar15;
      }
    }
    else {
      local_18 = CONCAT44(local_18._4_4_,0x3f000000);
      local_10 = CONCAT44(local_10._4_4_,0x3f800000);
      auVar2._4_12_ = extraout_var;
      auVar2._0_4_ = fVar16;
      fVar15 = CurveLerp<float>(auVar2,0x41a00000,(float)(int)uVar10,(exception_ptr *)&local_18,
                                (__normal_iterator *)&local_10,2);
      fVar16 = (float)RandRangeFloat(0.02,0.03);
      fVar16 = fVar16 * fVar15;
    }
    uVar8 = *(undefined8 *)(this + 0x48);
    fVar14 = fVar14 + fVar16;
    pfVar12 = (float *)FUN_049728b0(uVar8,uVar10);
    *pfVar12 = fVar14;
    uVar10 = uVar10 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionCreateAndShowVases::onBegin() */

void __thiscall
VaseBreakerFlowActionCreateAndShowVases::onBegin(VaseBreakerFlowActionCreateAndShowVases *this)

{
  onBegin(this + -0x10);
  return;
}

