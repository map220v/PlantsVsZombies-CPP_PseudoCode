// Class: LightningBoltToGround


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBoltToGround::StaticClassInit() */

void LightningBoltToGround::StaticClassInit(void)

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
    std::string::string(asStack_10,"LightningBoltToGround");
    (*pcVar2)(plVar1,asStack_10,FUN_03479f88,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningBoltToGround::StaticGetClass() */

long * LightningBoltToGround::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"LightningBoltToGround",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LightningBoltToGround::GetClass() const */

long * LightningBoltToGround::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"LightningBoltToGround",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBoltToGround::setRenderTransformForRig(PopAnimRig*, float) */

void __thiscall
LightningBoltToGround::setRenderTransformForRig
          (LightningBoltToGround *this,PopAnimRig *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = (float)FUN_03479250(*(float *)(this + 0xb8) - *pfVar3);
  fVar5 = (float)FUN_03479250(*(float *)(this + 0xbc) - pfVar3[1]);
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar4,fVar5);
  fVar4 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)aFStack_38);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar1 = FUN_0347923c(0xffffffbf);
  iVar2 = FUN_0347923c(0xffffff9c);
  FUN_03478f64((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  fVar4 = acosf(fVar4);
  if (0.0 < fVar5) {
    fVar4 = 6.2831855 - fVar4;
  }
  FUN_03478f64(param_2,0,auStack_28,auStack_1c);
  Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar4);
  uVar6 = FUN_03479250(*pfVar3);
  uVar7 = FUN_03479250(pfVar3[1]);
  FUN_03478f64(uVar6,uVar7,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBoltToGround::CalcRenderOrder() const */

void __thiscall LightningBoltToGround::CalcRenderOrder(LightningBoltToGround *this)

{
  long lVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  local_10 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(lVar1 + 4));
  local_c = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(this + 0xbc));
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    Board::MakeRenderOrder(0x64960,*piVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LightningBoltToGround::CalcRenderOrder() const */

void __thiscall LightningBoltToGround::CalcRenderOrder(LightningBoltToGround *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBoltToGround::onUpdate() */

void __thiscall LightningBoltToGround::onUpdate(LightningBoltToGround *this)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *this_01;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_01,fVar2,fVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (this[0x124] == (LightningBoltToGround)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0xe4);
    if (fVar3 <= fVar2) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      fVar2 = (float)PVZ_EOT();
      if (fVar3 == fVar2) {
        fVar2 = (float)PVZ_T();
        if (*(float *)(this + 0xe0) <= fVar2) {
          *(float *)(this + 0xe4) = *(float *)(this + 0x120) + *(float *)(this + 0xe0);
        }
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
/* LightningBoltToGround::onDraw(Sexy::Graphics*) */

void __thiscall LightningBoltToGround::onDraw(LightningBoltToGround *this,Graphics *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  GraphicsAutoState aGStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  fVar5 = (float)FUN_03479250(0x41a00000);
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar6 = (float)FUN_03479250(*puVar2);
  local_40 = fVar6;
  fVar7 = (float)FUN_03479250(puVar2[1]);
  local_3c = fVar7;
  fVar8 = (float)FUN_03479250(*(undefined4 *)(this + 0xb8));
  local_38 = fVar8;
  fVar9 = (float)FUN_03479250(*(undefined4 *)(this + 0xbc));
  local_34 = fVar9;
  pfVar3 = eastl::min_alt<float>(&local_40,&local_38);
  pfVar4 = eastl::min_alt<float>(&local_3c,&local_34);
  Sexy::Insets::Insets
            (aIStack_18,(int)(*pfVar3 - fVar5),(int)(*pfVar4 - fVar5),
             (int)(ABS(fVar8 - fVar6) + fVar5 + fVar5),(int)(ABS(fVar9 - fVar7) + fVar5 + fVar5));
  Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_18);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::Draw(this_01,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBoltToGround::LightningBoltToGround() */

void __thiscall LightningBoltToGround::LightningBoltToGround(LightningBoltToGround *this)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  this[0xa8] = (LightningBoltToGround)0x0;
  *(undefined ***)this = &PTR_GetClass_0663d1a0;
  this[0xa9] = (LightningBoltToGround)0x0;
  *(undefined ***)(this + 0x10) = &PTR__LightningBoltToGround_0663d388;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  DVec3::DVec3((DVec3 *)(this + 0xb8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0xe4) = uVar3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::string::string((string *)(this + 0x100),"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT");
  nop();
  std::string::string((string *)(this + 0x108),"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
  nop();
  std::string::string((string *)(this + 0x110),"POPANIM_EFFECTS_LIGHTNINGREED_HIT");
  nop();
  *(undefined4 *)(this + 0x118) = 0;
  lVar2 = ___stack_chk_guard;
  this[0x124] = (LightningBoltToGround)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningBoltToGround::StaticNew() */

LightningBoltToGround * LightningBoltToGround::StaticNew(void)

{
  LightningBoltToGround *this;
  
  this = ::operator_new(0x128);
  LightningBoltToGround(this);
  return this;
}


/* LightningBoltToGround::~LightningBoltToGround() */

void __thiscall LightningBoltToGround::~LightningBoltToGround(LightningBoltToGround *this)

{
  *(undefined ***)this = &PTR_GetClass_0663d1a0;
  *(undefined ***)(this + 0x10) = &PTR__LightningBoltToGround_0663d388;
  std::string::~string((string *)(this + 0x110));
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::~vector
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0xe8));
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to LightningBoltToGround::~LightningBoltToGround() */

void __thiscall LightningBoltToGround::~LightningBoltToGround(LightningBoltToGround *this)

{
  ~LightningBoltToGround(this + -0x10);
  return;
}


/* LightningBoltToGround::~LightningBoltToGround() */

void __thiscall LightningBoltToGround::~LightningBoltToGround(LightningBoltToGround *this)

{
  ~LightningBoltToGround(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LightningBoltToGround::~LightningBoltToGround() */

void __thiscall LightningBoltToGround::~LightningBoltToGround(LightningBoltToGround *this)

{
  ~LightningBoltToGround(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBoltToGround::SetInitialTarget(Sexy::SexyVector3) */

void LightningBoltToGround::SetInitialTarget
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               LightningBoltToGround *param_4)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  PopAnimRig *pPVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  FastCurve aFStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  int local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_70 = param_1;
  local_6c = param_2;
  local_68 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0xb8),(SexyVector3 *)&local_70);
  if (*(int *)(param_4 + 0xa4) == 0) {
    GetPAMByName((string *)(param_4 + 0x100));
  }
  else {
    GetPAMByName((string *)(param_4 + 0x108));
  }
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar5 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
  std::string::string((string *)aRStack_48,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,aRStack_48,0,aDStack_38);
  std::string::~string((string *)aRStack_48);
  nop();
  setRenderTransformForRig(param_4,pPVar5,0.0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_50);
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::push_back
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (param_4 + 0xe8),aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::Insets::Insets((Insets *)aRStack_48);
  std::string::string((string *)aRStack_50,"lightningreed_bolt_start");
  PopAnimRig::CalcSymbolRect(pPVar5,(string *)aRStack_50,(TRect *)aRStack_48);
  std::string::~string((string *)aRStack_50);
  nop();
  iVar1 = FUN_0347923c(10);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_4);
  fVar8 = (float)FUN_03479250(*(float *)(param_4 + 0xb8) - *pfVar6);
  fVar9 = (float)FUN_03479250(*(float *)(param_4 + 0xbc) - pfVar6[1]);
  Sexy::FastCurve::SetOutRange(aFStack_60,fVar8,fVar9);
  fVar9 = (float)DVec2::getLength((DVec2 *)aFStack_60);
  for (fVar8 = (float)(local_40 - iVar1); fVar8 < fVar9; fVar8 = fVar8 + (float)(local_40 - iVar1))
  {
    while( true ) {
      pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
      pPVar5 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
      iVar2 = Sexy::Rand(2);
      Sexy::StrFormat("animation%d",aRStack_50,(ulong)(iVar2 + 2));
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar5,aRStack_50,0,aDStack_38);
      std::string::~string((string *)aRStack_50);
      setRenderTransformForRig(param_4,pPVar5,fVar8);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_58);
      std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::
      push_back((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
                (param_4 + 0xe8),(RtWeakPtr *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      lVar7 = FUN_03479074(*(undefined8 *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0xf0));
      if (lVar7 != 2) break;
      std::string::string((string *)aRStack_50,"lightningreed_bolt_middle");
      PopAnimRig::CalcSymbolRect(pPVar5,(string *)aRStack_50,(TRect *)aRStack_48);
      std::string::~string((string *)aRStack_50);
      nop();
      fVar8 = fVar8 + (float)(local_40 - iVar1);
      if (fVar9 <= fVar8) goto LAB_0347acbc;
    }
  }
LAB_0347acbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

