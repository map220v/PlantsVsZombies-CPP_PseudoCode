// Class: RayEntity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::InitiateWithTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall RayEntity::InitiateWithTarget(RayEntity *this,RtWeakPtrBase *param_2)

{
  code *pcVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x1d8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  (*pcVar1)(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RayEntity::onAnimationDone(std::string const&) */

void RayEntity::onAnimationDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* RayEntity::getPopAnimName() */

undefined8 RayEntity::getPopAnimName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::StaticClassInit() */

void RayEntity::StaticClassInit(void)

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
    std::string::string(asStack_10,"RayEntity");
    (*pcVar2)(plVar1,asStack_10,FUN_03e8bc4c,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RayEntity::StaticGetClass() */

long * RayEntity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RayEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RayEntity::GetClass() const */

long * RayEntity::GetClass(void)

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
  (*pcVar3)(plVar1,"RayEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RayEntity::Initialize(std::string const&, std::string const&, std::string const&,
   Sexy::RtWeakPtr<BoardEntity>, float, bool, bool) */

void __thiscall
RayEntity::Initialize
          (undefined4 param_1,RayEntity *this,undefined8 param_3_00,undefined8 param_2,
          undefined8 param_3,RtWeakPtr *param_6,RayEntity param_7,RayEntity param_8)

{
  thunk_FUN_05475e00(this + 0xb0);
  thunk_FUN_05475e00(this + 0xb8,param_2);
  thunk_FUN_05475e00(this + 0xc0,param_3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 200),param_6);
  this[0x100] = param_7;
  this[0x101] = param_8;
  this[0xe4] = (RayEntity)0x0;
  *(undefined4 *)(this + 0xa8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::setRenderTransformForRig(PopAnimRig*, float) */

void __thiscall
RayEntity::setRenderTransformForRig(RayEntity *this,PopAnimRig *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_03e8af6c(*(undefined4 *)(this + 0xd0));
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar5 = (float)FUN_03e8af6c(*puVar3);
  fVar6 = (float)FUN_03e8af6c(*(undefined4 *)(this + 0xd4));
  fVar7 = (float)FUN_03e8af6c(puVar3[1]);
  fVar6 = fVar6 - fVar7;
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar4 - fVar5,fVar6);
  fVar4 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)aFStack_38);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar1 = FUN_03e8af58(0xffffffbf);
  iVar2 = FUN_03e8af58(0xffffff9c);
  FUN_03e8ad4c((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  fVar4 = acosf(fVar4);
  if (0.0 < fVar6) {
    fVar4 = 6.2831855 - fVar4;
  }
  FUN_03e8ad4c(param_2,0,auStack_28,auStack_1c);
  Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar4);
  uVar8 = FUN_03e8af6c(*puVar3);
  uVar9 = FUN_03e8af6c(puVar3[1]);
  FUN_03e8ad4c(uVar8,uVar9,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::CalcRenderOrder() const */

void __thiscall RayEntity::CalcRenderOrder(RayEntity *this)

{
  long lVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x102] != (RayEntity)0x0) {
    return;
  }
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  local_10 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(lVar1 + 4));
  local_c = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(this + 0xd4));
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(___stack_chk_guard);
  }
  Board::MakeRenderOrder(0x64960,*piVar2,0);
  return;
}


/* non-virtual thunk to RayEntity::CalcRenderOrder() const */

void __thiscall RayEntity::CalcRenderOrder(RayEntity *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::onDraw(Sexy::Graphics*) */

void __thiscall RayEntity::onDraw(RayEntity *this,Graphics *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  GraphicsAutoState aGStack_c0 [8];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  SexyTransform2D aSStack_a8 [40];
  undefined8 local_80;
  float local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined4 local_60;
  SexyMatrix3 aSStack_58 [40];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_c0,param_1);
  fVar9 = (float)FUN_03e8af6c(0x41a00000);
  fVar9 = fVar9 * *(float *)(param_1 + 0x18);
  puVar1 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar17 = *puVar1;
  local_d0 = (float)FUN_03e8af6c(uVar17);
  uVar16 = *(undefined4 *)(this + 0xd0);
  local_cc = (float)FUN_03e8af6c(uVar16);
  pfVar2 = eastl::min_alt<float>(&local_d0,&local_cc);
  uVar18 = puVar1[1];
  fVar14 = *pfVar2;
  local_c8 = (float)FUN_03e8af6c(uVar18);
  uVar15 = *(undefined4 *)(this + 0xd4);
  local_c4 = (float)FUN_03e8af6c(uVar15);
  pfVar2 = eastl::min_alt<float>(&local_c8,&local_c4);
  fVar10 = (float)FUN_03e8af6c(uVar16);
  fVar11 = (float)FUN_03e8af6c(uVar17);
  fVar12 = (float)FUN_03e8af6c(uVar15);
  fVar13 = (float)FUN_03e8af6c(uVar18);
  Sexy::Insets::Insets
            ((Insets *)&local_b8,(int)(fVar14 - fVar9),(int)(*pfVar2 - fVar9),
             (int)(fVar9 + fVar9 + ABS(fVar10 - fVar11)),(int)(ABS(fVar12 - fVar13) + fVar9 + fVar9)
            );
  local_b0 = (int)((float)local_b0 * *(float *)(param_1 + 0x18));
  local_ac = (int)((float)local_ac * *(float *)(param_1 + 0x1c));
  local_b8 = (int)((float)(int)(((float)local_b8 - *(float *)(param_1 + 0x20)) *
                               *(float *)(param_1 + 0x18)) + *(float *)(param_1 + 0x20));
  local_b4 = (int)((float)(int)(((float)local_b4 - *(float *)(param_1 + 0x24)) *
                               *(float *)(param_1 + 0x1c)) + *(float *)(param_1 + 0x24));
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_b8);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_a8);
  Sexy::SexyTransform2D::Scale(aSStack_a8,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(this + 0xe8);
    uVar6 = FUN_03e8ae28(uVar8,*(undefined8 *)(this + 0xf0));
    if (uVar6 <= uVar7) break;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8ae34(uVar8,uVar7);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    lVar4 = FUN_03e8ae14(*(undefined8 *)(lVar4 + 0x20));
    fVar11 = *(float *)(param_1 + 0x20);
    local_80 = *(undefined8 *)(lVar4 + 0x6c);
    uStack_68 = *(undefined8 *)(lVar4 + 0x84);
    local_78 = (float)*(undefined8 *)(lVar4 + 0x74);
    fVar9 = local_78;
    local_60 = *(undefined4 *)(lVar4 + 0x8c);
    fStack_6c = (float)((ulong)*(undefined8 *)(lVar4 + 0x7c) >> 0x20);
    fVar10 = fStack_6c;
    local_78 = (float)(int)((local_78 - fVar11) * *(float *)(param_1 + 0x18)) + fVar11;
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x74) >> 0x20);
    local_70 = (undefined4)*(undefined8 *)(lVar4 + 0x7c);
    _local_70 = CONCAT44((float)(int)((fStack_6c - fVar11) * *(float *)(param_1 + 0x18)) + fVar11,
                         local_70);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8ae34(*(undefined8 *)(this + 0xe8),uVar7);
    pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    Sexy::SexyMatrix3::operator*((SexyMatrix3 *)&local_80,(SexyMatrix3 *)aSStack_a8);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,aSStack_58);
    PopAnimRig::Draw(pPVar5,param_1,aSStack_30);
    _local_78 = CONCAT44(uStack_74,fVar9);
    _local_70 = CONCAT44(fVar10,local_70);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8ae34(*(undefined8 *)(this + 0xe8),uVar7);
    pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    PopAnimRig::SetRenderTransform(pPVar5,(SexyTransform2D *)&local_80);
    uVar7 = uVar7 + 1;
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RayEntity::onDestroy() */

void __thiscall RayEntity::onDestroy(RayEntity *this)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xe8);
    uVar2 = FUN_03e8ae28(uVar5,*(undefined8 *)(this + 0xf0));
    if (uVar2 <= uVar4) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8ae34(uVar5,uVar4);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar3 + 0x48))();
    uVar4 = uVar4 + 1;
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x108));
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
    (**(code **)(*plVar3 + 0x48))();
  }
  return;
}


/* RayEntity::updateTiles() */

void __thiscall RayEntity::updateTiles(RayEntity *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *this_01;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0xe8);
    uVar1 = FUN_03e8ae28(uVar3,*(undefined8 *)(this + 0xf0));
    if (uVar1 <= uVar2) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8ae34(uVar3,uVar2);
    this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_01,fVar4,fVar5);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* RayEntity::onUpdate() */

void __thiscall RayEntity::onUpdate(RayEntity *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  updateTiles(this);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_EOT();
  fVar3 = *(float *)(this + 0xa4);
  if (fVar3 == fVar2) {
    fVar3 = fVar1 + *(float *)(this + 0xa8);
    *(float *)(this + 0xa4) = fVar3;
  }
  if ((fVar3 <= fVar1) && (this[0x100] == (RayEntity)0x0)) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::spawnHitEffect() */

void __thiscall RayEntity::spawnHitEffect(RayEntity *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Effect_PopAnim *pEVar6;
  PopAnim *pPVar7;
  StandaloneEffect *this_01;
  long lVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c((string *)(this + 0xb8));
  if (cVar2 == '\0') {
    iVar5 = *(int *)(this + 0xdc);
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x108);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar1 = *(int *)(this + 0xe0);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pEVar6 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GetPAMByName((string *)(this + 0xb8));
    pPVar7 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar6,pPVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (this[0x101] == (RayEntity)0x0) {
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar6,this + 0xc0,0);
    }
    else {
      pEVar6 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Effect_PopAnim::PlaySingleAnimation(pEVar6,this + 0xc0,0);
    }
    this_01 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(*(float *)(this + 0xd0) - (float)iVar5) - (float)iVar3 * 1.5,
               (*(float *)(this + 0xd4) - (float)iVar1) - (float)iVar4 * 1.5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_18,-1);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_03e8ae0c(lVar8 + 0x1c,iVar5 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::RayEntity() */

void __thiscall RayEntity::RayEntity(RayEntity *this)

{
  bool bVar1;
  undefined **__n;
  undefined4 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  __n = &PTR_GetClass_0678fdf0;
  *(undefined ***)this = &PTR_GetClass_0678fdf0;
  *(undefined ***)(this + 0x10) = &PTR__RayEntity_0678ffe8;
  Set8BytesTo0(this + 0xb0);
  Set8BytesTo0(this + 0xb8);
  Set8BytesTo0((string *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  DVec3::DVec3((DVec3 *)(this + 0xd0));
  Sexy::Point::Point((Point *)(this + 0xdc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  uVar2 = PVZ_EOT();
  this[0x100] = (RayEntity)0x0;
  *(undefined4 *)(this + 0xa4) = uVar2;
  this[0x102] = (RayEntity)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  std::string::append((string *)(this + 0xc0),"idle",(size_t)__n);
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0xdc) = local_10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x108),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x104) = 0x40000000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RayEntity::StaticNew() */

RayEntity * RayEntity::StaticNew(void)

{
  RayEntity *this;
  
  this = ::operator_new(0x110);
  RayEntity(this);
  return this;
}


/* RayEntity::~RayEntity() */

void __thiscall RayEntity::~RayEntity(RayEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_0678fdf0;
  *(undefined ***)(this + 0x10) = &PTR__RayEntity_0678ffe8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::~vector
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  std::string::~string((string *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb8));
  std::string::~string((string *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to RayEntity::~RayEntity() */

void __thiscall RayEntity::~RayEntity(RayEntity *this)

{
  ~RayEntity(this + -0x10);
  return;
}


/* RayEntity::~RayEntity() */

void __thiscall RayEntity::~RayEntity(RayEntity *this)

{
  ~RayEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RayEntity::~RayEntity() */

void __thiscall RayEntity::~RayEntity(RayEntity *this)

{
  ~RayEntity(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RayEntity::createPopAnimsToTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall RayEntity::createPopAnimsToTarget(RayEntity *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  PopAnim *pPVar5;
  RtClass *pRVar6;
  PopAnimRig *pPVar7;
  undefined4 *puVar8;
  long lVar9;
  RtObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar10;
  long *plVar11;
  Insets *pIVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [16];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    if (this[0xe4] == (RayEntity)0x0) {
      lVar9 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_60,1000.0,*(float *)(lVar9 + 4),0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),(SexyVector3 *)&local_60);
    }
  }
  else {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar2) {
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pSVar10 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),pSVar10);
    }
    else {
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pIVar12 = (Insets *)(**(code **)(*plVar11 + 0x178))();
      Sexy::Insets::Insets((Insets *)&local_60,pIVar12);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)asStack_70,(float)local_60,
                 (float)local_54 / *(float *)(this + 0x104) + (float)local_5c,0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),(SexyVector3 *)asStack_70);
    }
  }
  spawnHitEffect(this);
  GetPAMByName((string *)(this + 0xb0));
  pPVar5 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  pRVar6 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar7 = (PopAnimRig *)PopAnimRig::CreateRig(pPVar5,pRVar6);
  if (this[0x100] == (RayEntity)0x0) {
    std::string::string((string *)&local_60,"animation");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue
              (pPVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60,0,(DummyInit *)aRStack_50);
    std::string::~string((string *)&local_60);
    nop();
  }
  else {
    std::string::string((string *)&local_60,"animation");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
    std::string::string(asStack_70,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
               asStack_70);
    PopAnimRig::PlayAndStop(pPVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_70);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    std::string::~string((string *)&local_60);
    nop();
  }
  setRenderTransformForRig(this,pPVar7,0.0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)asStack_70);
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::push_back
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0xe8),(RtWeakPtr *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
  if (this[0x100] == (RayEntity)0x0) {
    Sexy::Insets::Insets((Insets *)&local_60);
    std::string::string(asStack_70,"lightningreed_bolt_start");
    PopAnimRig::CalcSymbolRect(pPVar7,asStack_70,(TRect *)&local_60);
    std::string::~string(asStack_70);
    nop();
    fVar13 = (float)FUN_03e8af6c(*(undefined4 *)(this + 0xd0));
    puVar8 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar14 = (float)FUN_03e8af6c(*puVar8);
    fVar15 = (float)FUN_03e8af6c(*(undefined4 *)(this + 0xd4));
    fVar16 = (float)FUN_03e8af6c(puVar8[1]);
    Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_80,fVar13 - fVar14,fVar15 - fVar16);
    fVar14 = (float)DVec2::getLength((DVec2 *)aRStack_80);
    iVar4 = local_58;
    iVar3 = FUN_03e8af58(10);
    for (fVar13 = (float)(iVar4 - iVar3); fVar13 < fVar14; fVar13 = fVar13 + (float)(iVar4 - iVar3))
    {
      pRVar6 = (RtClass *)PopAnimRig::StaticGetClass();
      pPVar7 = (PopAnimRig *)PopAnimRig::CreateRig(pPVar5,pRVar6);
      iVar4 = Sexy::Rand(2);
      Sexy::StrFormat("animation%d",asStack_70,(ulong)(iVar4 + 2));
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
      PopAnimRig::PlayAndContinue(pPVar7,asStack_70,0,(DummyInit *)aRStack_50);
      std::string::~string(asStack_70);
      setRenderTransformForRig(this,pPVar7,fVar13);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_70,(RtWeakPtrBase *)aRStack_78);
      std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::
      push_back((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
                (this + 0xe8),(RtWeakPtr *)asStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      lVar9 = FUN_03e8ae28(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
      if (lVar9 == 2) {
        std::string::string(asStack_70,"lightningreed_bolt_middle");
        PopAnimRig::CalcSymbolRect(pPVar7,asStack_70,(TRect *)&local_60);
        std::string::~string(asStack_70);
        nop();
      }
      iVar4 = local_58;
      iVar3 = FUN_03e8af58(10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RayEntity::SetHitOffset(Sexy::Point) */

void __thiscall RayEntity::SetHitOffset(RayEntity *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0xdc) = *param_2;
  return;
}


/* RayEntity::SetHitPosition(bool, Sexy::SexyVector3 const&) */

void __thiscall RayEntity::SetHitPosition(RayEntity *this,bool param_1,SexyVector3 *param_2)

{
  this[0xe4] = (RayEntity)param_1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),param_2);
  return;
}

