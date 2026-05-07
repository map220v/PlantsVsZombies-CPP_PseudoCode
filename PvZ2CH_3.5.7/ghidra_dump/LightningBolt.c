// Class: LightningBolt


/* LightningBolt::SetPopAnim(std::string const&, std::string const&, std::string const&) */

void __thiscall
LightningBolt::SetPopAnim(LightningBolt *this,string *param_1,string *param_2,string *param_3)

{
  thunk_FUN_05475e00(this + 0x100);
  thunk_FUN_05475e00(this + 0x108,param_2);
  thunk_FUN_05475e00(this + 0x110,param_3);
  return;
}


/* LightningBolt::onInitialized() */

void __thiscall LightningBolt::onInitialized(LightningBolt *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xe0) = fVar1 + *(float *)(this + 0x11c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::onDestroy() */

void __thiscall LightningBolt::onDestroy(LightningBolt *this)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar2;
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
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::ClearChild() */

void __thiscall LightningBolt::ClearChild(LightningBolt *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    (**(code **)(*plVar2 + 0x48))();
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::clear
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningBolt::~LightningBolt() */

void __thiscall LightningBolt::~LightningBolt(LightningBolt *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d890;
  *(undefined ***)(this + 0x10) = &PTR__LightningBolt_0678da88;
  std::string::~string((string *)(this + 0x110));
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::~vector
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0xe8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to LightningBolt::~LightningBolt() */

void __thiscall LightningBolt::~LightningBolt(LightningBolt *this)

{
  ~LightningBolt(this + -0x10);
  return;
}


/* LightningBolt::~LightningBolt() */

void __thiscall LightningBolt::~LightningBolt(LightningBolt *this)

{
  ~LightningBolt(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LightningBolt::~LightningBolt() */

void __thiscall LightningBolt::~LightningBolt(LightningBolt *this)

{
  ~LightningBolt(this + -0x10);
  return;
}


/* LightningBolt::SetHitTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall LightningBolt::SetHitTargets(LightningBolt *this,vector *param_2)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 200),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::StaticClassInit() */

void LightningBolt::StaticClassInit(void)

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
    std::string::string(asStack_10,"LightningBolt");
    (*pcVar2)(plVar1,asStack_10,FUN_03e7bd58,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningBolt::StaticGetClass() */

long * LightningBolt::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LightningBolt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LightningBolt::GetClass() const */

long * LightningBolt::GetClass(void)

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
  (*pcVar3)(plVar1,"LightningBolt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::setRenderTransformForRig(PopAnimRig*, float) */

void __thiscall
LightningBolt::setRenderTransformForRig(LightningBolt *this,PopAnimRig *param_1,float param_2)

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
  fVar4 = (float)FUN_03e7b5cc(*(float *)(this + 0xb8) - *pfVar3);
  fVar5 = (float)FUN_03e7b5cc(*(float *)(this + 0xbc) - pfVar3[1]);
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar4,fVar5);
  fVar4 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)aFStack_38);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar1 = FUN_03e7b5b8(0xffffffbf);
  iVar2 = FUN_03e7b5b8(0xffffff9c);
  FUN_03e7b3e4((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  fVar4 = acosf(fVar4);
  if (0.0 < fVar5) {
    fVar4 = 6.2831855 - fVar4;
  }
  FUN_03e7b3e4(param_2,0,auStack_28,auStack_1c);
  Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar4);
  uVar6 = FUN_03e7b5cc(*pfVar3);
  uVar7 = FUN_03e7b5cc(pfVar3[1]);
  FUN_03e7b3e4(uVar6,uVar7,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::CalcRenderOrder() const */

void __thiscall LightningBolt::CalcRenderOrder(LightningBolt *this)

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


/* non-virtual thunk to LightningBolt::CalcRenderOrder() const */

void __thiscall LightningBolt::CalcRenderOrder(LightningBolt *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::onUpdate() */

void __thiscall LightningBolt::onUpdate(LightningBolt *this)

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
  if (this[0x124] == (LightningBolt)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0xe4);
    if (fVar3 <= fVar2) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      fVar2 = (float)PVZ_EOT();
      if (fVar3 == fVar2) {
        fVar2 = (float)PVZ_T();
        fVar3 = *(float *)(this + 0xe0);
        if (fVar3 <= fVar2) {
          if (*(int *)(this + 0xa4) < *(int *)(this + 0x118)) {
            (**(code **)(*(long *)this + 0x1d8))(this);
            fVar3 = *(float *)(this + 0xe0);
          }
          *(float *)(this + 0xe4) = fVar3 + *(float *)(this + 0x120);
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
/* LightningBolt::onDraw(Sexy::Graphics*) */

void __thiscall LightningBolt::onDraw(LightningBolt *this,Graphics *param_1)

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
  fVar5 = (float)FUN_03e7b5cc(0x41a00000);
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar6 = (float)FUN_03e7b5cc(*puVar2);
  local_40 = fVar6;
  fVar7 = (float)FUN_03e7b5cc(puVar2[1]);
  local_3c = fVar7;
  fVar8 = (float)FUN_03e7b5cc(*(undefined4 *)(this + 0xb8));
  local_38 = fVar8;
  fVar9 = (float)FUN_03e7b5cc(*(undefined4 *)(this + 0xbc));
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
/* LightningBolt::LightningBolt() */

void __thiscall LightningBolt::LightningBolt(LightningBolt *this)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  this[0xa8] = (LightningBolt)0x0;
  *(undefined ***)this = &PTR_GetClass_0678d890;
  this[0xa9] = (LightningBolt)0x0;
  *(undefined ***)(this + 0x10) = &PTR__LightningBolt_0678da88;
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
  this[0x124] = (LightningBolt)0x0;
  *(undefined4 *)(this + 0x128) = 0x3f800000;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 300) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningBolt::StaticNew() */

LightningBolt * LightningBolt::StaticNew(void)

{
  LightningBolt *this;
  
  this = ::operator_new(0x130);
  LightningBolt(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::causeDamage(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall LightningBolt::causeDamage(LightningBolt *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  ResourceInfo *pRVar6;
  long extraout_x0;
  long lVar7;
  long extraout_x0_00;
  long lVar8;
  Effect_PopAnim *this_00;
  RtObject *this_01;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_70,"lightningreed");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string((string *)&local_70);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar6 + 0x28));
  nop();
  lVar7 = FUN_03e7b4fc(*(undefined8 *)(extraout_x0 + 0x70),0);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_70,"citron");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string((string *)&local_70);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar6 + 0x28));
  nop();
  lVar8 = FUN_03e7b4fc(*(undefined8 *)(extraout_x0_00 + 0x70),2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_01);
    if (bVar1) {
      if (this[0xa9] == (LightningBolt)0x0) {
        iVar3 = *(int *)(lVar7 + 0x2c);
      }
      else {
        iVar3 = *(int *)(lVar8 + 0x2c);
      }
      fVar12 = (float)iVar3;
      cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)(this + 200));
      if ((cVar2 == '\0') && (this[0xa9] == (LightningBolt)0x0)) {
        fVar12 = fVar12 * *(float *)(this + 0x128) * *(float *)(extraout_x0 + 0x2c4);
      }
      fVar11 = *(float *)(this + 300);
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pcVar10 = *(code **)(*plVar9 + 0x110);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb0));
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar12 + fVar11),local_70,local_6c,aRStack_68,0x80,pRVar6,aPStack_78
                 ,0);
      (*pcVar10)(plVar9,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
  }
  cVar2 = FUN_0547419c((string *)(this + 0x110));
  if (cVar2 == '\0') {
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)(this + 0x110));
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::string((string *)aRStack_68,"idle");
                    /* WARNING: Load size is inaccurate */
    Effect_PopAnim::PlayLoopingAnimation(*(Effect_PopAnim **)(this + 0x120),this_00,aRStack_68,2);
    std::string::~string((string *)aRStack_68);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_68,*(float *)(this + 0xb8) - (float)iVar3 * 1.5,
               *(float *)(this + 0xbc) - (float)iVar4 * 1.5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
    iVar3 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_03e7b4a0(this_00 + 0x1c,iVar3 + 1);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 200),param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::SetInitialTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall LightningBolt::SetInitialTarget(LightningBolt *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  float *pfVar7;
  ResourceInfo *pRVar8;
  RtClass *pRVar9;
  PopAnimRig *pPVar10;
  long lVar11;
  RtObject *this_00;
  Zombie *this_01;
  code *pcVar12;
  float fVar13;
  float fVar14;
  FastCurve aFStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  Vec3 aVStack_50 [8];
  int local_48;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    EATextSquish::Vec3::Vec3(aVStack_50,1000.0,pfVar7[1],0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xb8),(SexyVector3 *)aVStack_50);
LAB_03e7ca38:
    if (this[0x124] == (LightningBolt)0x0) {
      iVar3 = *(int *)(this + 0xa4);
      goto joined_r0x03e7ca48;
    }
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    piVar6 = (int *)(**(code **)(*plVar5 + 0x178))();
    EATextSquish::Vec3::Vec3
              (aVStack_50,(float)*piVar6,(float)piVar6[1] + (float)piVar6[3] * 0.5,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xb8),(SexyVector3 *)aVStack_50);
    if (this[0x124] == (LightningBolt)0x0) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (this_01 != (Zombie *)0x0) {
        if (this[0xa8] != (LightningBolt)0x0) {
          std::string::string((string *)aVStack_50,"red");
          Zombie::SetElectrocuteColor((string *)this_01);
          std::string::~string((string *)aVStack_50);
          nop();
          bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01);
          if ((((!bVar2) &&
               (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), !bVar2)) &&
              (cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 == '\0')) &&
             (cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 == '\0')) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)(this + 0xb0));
            ZombieConditionsStruct::ZombieConditionsStruct
                      ((ZombieConditionsStruct *)0x3f800000,aVStack_50,0x18,
                       (RtWeakPtr<Sexy::SoundResource> *)aRStack_58);
            Zombie::ApplyCondition(this_01,(ZombieConditionsStruct *)aVStack_50);
            PVPZoneData::~PVPZoneData((PVPZoneData *)aVStack_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
          }
        }
        if (this[0xa9] != (LightningBolt)0x0) {
          std::string::string((string *)aVStack_50,"blue");
          Zombie::SetElectrocuteColor((string *)this_01);
          std::string::~string((string *)aVStack_50);
          nop();
        }
      }
      pcVar12 = *(code **)(*(long *)this + 0x1e0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aVStack_50,(RtWeakPtrBase *)param_2);
      (*pcVar12)(this,aVStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_50);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      goto LAB_03e7ca38;
    }
  }
  ClearChild(this);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar3 = *(int *)(this + 0xa4);
joined_r0x03e7ca48:
  if (iVar3 == 0) {
    GetPAMByName((string *)(this + 0x100));
  }
  else {
    GetPAMByName((string *)(this + 0x108));
  }
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aVStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_50);
  pRVar9 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar10 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar8,pRVar9);
  std::string::string((string *)aVStack_50,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar10,(RtWeakPtr *)aVStack_50,0,aDStack_38);
  std::string::~string((string *)aVStack_50);
  nop();
  setRenderTransformForRig(this,pPVar10,0.0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aVStack_50,(RtWeakPtrBase *)aRStack_58);
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::push_back
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0xe8),(RtWeakPtr *)aVStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  Sexy::Insets::Insets((Insets *)aVStack_50);
  std::string::string((string *)aRStack_58,"lightningreed_bolt_start");
  PopAnimRig::CalcSymbolRect(pPVar10,(string *)aRStack_58,(TRect *)aVStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  iVar3 = FUN_03e7b5b8(10);
  fVar13 = (float)FUN_03e7b5cc(*(float *)(this + 0xb8) - *pfVar7);
  fVar14 = (float)FUN_03e7b5cc(*(float *)(this + 0xbc) - pfVar7[1]);
  Sexy::FastCurve::SetOutRange(aFStack_68,fVar13,fVar14);
  fVar14 = (float)DVec2::getLength((DVec2 *)aFStack_68);
  for (fVar13 = (float)(local_48 - iVar3); fVar13 < fVar14;
      fVar13 = fVar13 + (float)(local_48 - iVar3)) {
    while( true ) {
      pRVar9 = (RtClass *)PopAnimRig::StaticGetClass();
      pPVar10 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar8,pRVar9);
      iVar4 = Sexy::Rand(2);
      Sexy::StrFormat("animation%d",aRStack_58,(ulong)(iVar4 + 2));
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar10,aRStack_58,0,aDStack_38);
      std::string::~string((string *)aRStack_58);
      setRenderTransformForRig(this,pPVar10,fVar13);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)aRStack_60);
      std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::
      push_back((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
                (this + 0xe8),(RtWeakPtr *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      lVar11 = FUN_03e7b4dc(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
      if (lVar11 != 2) break;
      std::string::string((string *)aRStack_58,"lightningreed_bolt_middle");
      PopAnimRig::CalcSymbolRect(pPVar10,(string *)aRStack_58,(TRect *)aVStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      fVar13 = fVar13 + (float)(local_48 - iVar3);
      if (fVar14 <= fVar13) goto LAB_03e7cce0;
    }
  }
LAB_03e7cce0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningBolt::createBounce() */

void __thiscall LightningBolt::createBounce(LightningBolt *this)

{
  int iVar1;
  LightningBolt LVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  Zombie *pZVar12;
  GridItem *pGVar13;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar14;
  LightningBolt *this_01;
  string *psVar15;
  RtObject *this_02;
  code *pcVar16;
  undefined8 local_50;
  string asStack_48 [8];
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0xb8));
  iVar7 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0xbc));
  local_38 = iVar6 + -1;
  local_20._0_4_ = 0;
  piVar10 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar9 = *piVar10;
  local_38 = iVar7 + -1;
  local_20 = (ulong)local_20._4_4_ << 0x20;
  piVar10 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar1 = *piVar10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  uVar8 = operator|(4,2);
  Sexy::Insets::Insets((Insets *)&local_20,iVar9,iVar1,(iVar6 - iVar9) + 2,(iVar7 - iVar1) + 2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,uVar8,
             (Insets *)&local_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
LAB_03e7cf90:
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_20);
  do {
    if (!bVar3) {
      cVar5 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      if (cVar5 == '\0') {
        iVar9 = FUN_03e7b4e8(CONCAT44(uStack_34,local_38),local_30);
        iVar9 = Sexy::Rand(iVar9);
        FUN_03e7b4f4(CONCAT44(uStack_34,local_38),(long)iVar9);
        this_01 = GameObject::Create<LightningBolt>();
        SetPopAnim(this_01,(string *)(this + 0x100),(string *)(this + 0x108),
                   (string *)(this + 0x110));
        FUN_03e7b4b0(this_01 + 0x118,*(undefined4 *)(this + 0x118));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(this + 0xb0));
        TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_01,(Insets *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        FUN_03e7b4b8(*(undefined4 *)(this + 0x11c),*(undefined4 *)(this + 0x120),this_01 + 0x11c,
                     this_01 + 0x120);
        FUN_03e7b4c4(*(undefined4 *)(this + 0x128),this_01 + 0x128);
        FUN_03e7b4a8(this_01 + 0xa4,*(int *)(this + 0xa4) + 1);
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20,(vector *)(this + 200));
        SetHitTargets(this_01,(Insets *)&local_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_20);
        LVar2 = this[0xa9];
        this_01[0xa8] = this[0xa8];
        this_01[0xa9] = LVar2;
        SetPopAnim(this_01,(string *)(this + 0x100),(string *)(this + 0x108),
                   (string *)(this + 0x110));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_40);
        SetInitialTarget(this_01,(Insets *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_02 = (RtObject *)*puVar11;
    pZVar12 = Sexy::RtObject::Cast<Zombie>(this_02);
    pGVar13 = Sexy::RtObject::Cast<GridItem>(this_02);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 200));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 200));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_20), bVar4)
    {
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      bVar4 = true;
      if (this_02 == (RtObject *)pRVar14) goto LAB_03e7d05c;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    bVar4 = bVar3;
    if ((pGVar13 == (GridItem *)0x0) ||
       (cVar5 = (**(code **)(*(long *)pGVar13 + 0x200))(pGVar13), cVar5 != '\0')) {
      if (pZVar12 == (Zombie *)0x0) break;
      cVar5 = (**(code **)(*(long *)pZVar12 + 0x328))(pZVar12);
      if (cVar5 != '\0') goto LAB_03e7d05c;
      pcVar16 = *(code **)(*(long *)pZVar12 + 0x3d0);
      psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_48,"lightningreed");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_40);
      cVar5 = (*pcVar16)(pZVar12,(Insets *)&local_20,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string(asStack_48);
      nop();
      if (cVar5 == '\x01') break;
    }
    else {
LAB_03e7d05c:
      if (bVar4 == false) break;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_50);
    local_50 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,local_20);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_20);
  } while( true );
  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  goto LAB_03e7cf90;
}

