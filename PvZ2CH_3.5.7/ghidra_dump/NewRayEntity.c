// Class: NewRayEntity


/* NewRayEntity::SetHitOffset(Sexy::Point) */

void __thiscall NewRayEntity::SetHitOffset(NewRayEntity *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0xf4) = *param_2;
  return;
}


/* NewRayEntity::~NewRayEntity() */

void __thiscall NewRayEntity::~NewRayEntity(NewRayEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_06790020;
  *(undefined ***)(this + 0x10) = &PTR__NewRayEntity_06790218;
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::~vector
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0x100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to NewRayEntity::~NewRayEntity() */

void __thiscall NewRayEntity::~NewRayEntity(NewRayEntity *this)

{
  ~NewRayEntity(this + -0x10);
  return;
}


/* NewRayEntity::~NewRayEntity() */

void __thiscall NewRayEntity::~NewRayEntity(NewRayEntity *this)

{
  ~NewRayEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewRayEntity::~NewRayEntity() */

void __thiscall NewRayEntity::~NewRayEntity(NewRayEntity *this)

{
  ~NewRayEntity(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::StaticClassInit() */

void NewRayEntity::StaticClassInit(void)

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
    std::string::string(asStack_10,"RayEntityData");
    (*pcVar3)(plVar2,asStack_10,FUN_03e8ca4c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewRayEntity");
    (*pcVar3)(plVar2,asStack_10,FUN_03e8d8b4,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewRayEntity::StaticGetClass() */

long * NewRayEntity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewRayEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRayEntity::GetClass() const */

long * NewRayEntity::GetClass(void)

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
  (*pcVar3)(plVar1,"NewRayEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRayEntity::Initialize(RayEntityData const&, Sexy::RtWeakPtr<BoardEntity>, float) */

void __thiscall
NewRayEntity::Initialize
          (undefined4 param_1_00,NewRayEntity *this,RayEntityData *param_1,RtWeakPtr *param_4)

{
  RayEntityData::operator=((RayEntityData *)(this + 0xa8),param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),param_4);
  *(undefined4 *)(this + 0xe4) = param_1_00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::setRenderTransformForRig(PopAnimRig*, float) */

void __thiscall
NewRayEntity::setRenderTransformForRig(NewRayEntity *this,PopAnimRig *param_1,float param_2)

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
  fVar4 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xe8));
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar5 = (float)FUN_03e8ccf8(*puVar3);
  fVar6 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xec));
  fVar7 = (float)FUN_03e8ccf8(puVar3[1]);
  fVar6 = fVar6 - fVar7;
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar4 - fVar5,fVar6);
  fVar4 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)aFStack_38);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar1 = FUN_03e8cce4(0xffffffbf);
  iVar2 = FUN_03e8cce4(0xffffff9c);
  FUN_03e8c904((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  fVar4 = acosf(fVar4);
  if (0.0 < fVar6) {
    fVar4 = 6.2831855 - fVar4;
  }
  FUN_03e8c904(param_2,0,auStack_28,auStack_1c);
  Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar4);
  uVar8 = FUN_03e8ccf8(*puVar3);
  uVar9 = FUN_03e8ccf8(puVar3[1]);
  FUN_03e8c904(uVar8,uVar9,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::CalcRenderOrder() const */

void __thiscall NewRayEntity::CalcRenderOrder(NewRayEntity *this)

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
  local_c = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(this + 0xec));
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    Board::MakeRenderOrder(0x64960,*piVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewRayEntity::CalcRenderOrder() const */

void __thiscall NewRayEntity::CalcRenderOrder(NewRayEntity *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* NewRayEntity::onDestroy() */

void __thiscall NewRayEntity::onDestroy(NewRayEntity *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x100);
    uVar2 = FUN_03e8c98c(uVar4,*(undefined8 *)(this + 0x108));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8c998(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::onDraw(Sexy::Graphics*) */

void __thiscall NewRayEntity::onDraw(NewRayEntity *this,Graphics *param_1)

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
  fVar9 = (float)FUN_03e8ccf8(0x41a00000);
  fVar9 = fVar9 * *(float *)(param_1 + 0x18);
  puVar1 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar17 = *puVar1;
  local_d0 = (float)FUN_03e8ccf8(uVar17);
  uVar16 = *(undefined4 *)(this + 0xe8);
  local_cc = (float)FUN_03e8ccf8(uVar16);
  pfVar2 = eastl::min_alt<float>(&local_d0,&local_cc);
  uVar18 = puVar1[1];
  fVar14 = *pfVar2;
  local_c8 = (float)FUN_03e8ccf8(uVar18);
  uVar15 = *(undefined4 *)(this + 0xec);
  local_c4 = (float)FUN_03e8ccf8(uVar15);
  pfVar2 = eastl::min_alt<float>(&local_c8,&local_c4);
  fVar10 = (float)FUN_03e8ccf8(uVar16);
  fVar11 = (float)FUN_03e8ccf8(uVar17);
  fVar12 = (float)FUN_03e8ccf8(uVar15);
  fVar13 = (float)FUN_03e8ccf8(uVar18);
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
    uVar8 = *(undefined8 *)(this + 0x100);
    uVar6 = FUN_03e8c98c(uVar8,*(undefined8 *)(this + 0x108));
    if (uVar6 <= uVar7) break;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8c998(uVar8,uVar7);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    lVar4 = FUN_03e8c980(*(undefined8 *)(lVar4 + 0x20));
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
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8c998(*(undefined8 *)(this + 0x100),uVar7);
    pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    Sexy::SexyMatrix3::operator*((SexyMatrix3 *)&local_80,(SexyMatrix3 *)aSStack_a8);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,aSStack_58);
    PopAnimRig::Draw(pPVar5,param_1,aSStack_30);
    _local_78 = CONCAT44(uStack_74,fVar9);
    _local_70 = CONCAT44(fVar10,local_70);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8c998(*(undefined8 *)(this + 0x100),uVar7);
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


/* NewRayEntity::updateTiles() */

void __thiscall NewRayEntity::updateTiles(NewRayEntity *this)

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
    uVar3 = *(undefined8 *)(this + 0x100);
    uVar1 = FUN_03e8c98c(uVar3,*(undefined8 *)(this + 0x108));
    if (uVar1 <= uVar2) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e8c998(uVar3,uVar2);
    this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_01,fVar4,fVar5);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* NewRayEntity::onUpdate() */

void __thiscall NewRayEntity::onUpdate(NewRayEntity *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  updateTiles(this);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_EOT();
  fVar3 = *(float *)(this + 0xe0);
  if (fVar3 == fVar2) {
    fVar3 = fVar1 + *(float *)(this + 0xe4);
    *(float *)(this + 0xe0) = fVar3;
  }
  if (fVar3 <= fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::SpawnHitEffect() */

void __thiscall NewRayEntity::SpawnHitEffect(NewRayEntity *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Effect_PopAnim *this_00;
  PopAnim *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c((string *)(this + 0xb0));
  if (cVar2 == '\0') {
    iVar5 = *(int *)(this + 0xf4);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar1 = *(int *)(this + 0xf8);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)(this + 0xb0));
    pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Effect_PopAnim::PlaySingleAnimation(this_00,this + 0xb8,0);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(*(float *)(this + 0xe8) - (float)iVar5) - (float)iVar3 * 1.5,
               (*(float *)(this + 0xec) - (float)iVar1) - (float)iVar4 * 1.5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
    iVar5 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_03e8c978(this_00 + 0x1c,iVar5 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::NewRayEntity() */

void __thiscall NewRayEntity::NewRayEntity(NewRayEntity *this)

{
  undefined4 uVar1;
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06790020;
  *(undefined ***)(this + 0x10) = &PTR__NewRayEntity_06790218;
  RayEntityData::RayEntityData((RayEntityData *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  DVec3::DVec3((DVec3 *)(this + 0xe8));
  Sexy::Point::Point((Point *)(this + 0xf4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xe0) = uVar1;
  *(undefined4 *)(this + 0xe4) = 0;
  Sexy::Point::Point((Point *)local_38,0,0);
  *(undefined8 *)(this + 0xf4) = local_38[0];
  RayEntityData::RayEntityData((RayEntityData *)local_38);
  RayEntityData::operator=((RayEntityData *)(this + 0xa8),(RayEntityData *)local_38);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewRayEntity::StaticNew() */

NewRayEntity * NewRayEntity::StaticNew(void)

{
  NewRayEntity *this;
  
  this = ::operator_new(0x118);
  NewRayEntity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRayEntity::createPopAnimsToTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall NewRayEntity::createPopAnimsToTarget(NewRayEntity *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *this_00;
  long *plVar4;
  Insets *pIVar5;
  undefined4 *puVar6;
  PopAnim *pPVar7;
  RtClass *pRVar8;
  PopAnimRig *pPVar9;
  long lVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FastCurve aFStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  Vec3 aVStack_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    puVar6 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_48,1000.0,(float)puVar6[1],0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xe8),(SexyVector3 *)&local_48);
  }
  else {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar2) {
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pSVar11 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xe8),pSVar11);
    }
    else {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pIVar5 = (Insets *)(**(code **)(*plVar4 + 0x178))();
      Sexy::Insets::Insets((Insets *)&local_48,pIVar5);
      EATextSquish::Vec3::Vec3
                (aVStack_58,(float)local_48,(float)local_44 + (float)local_3c * 0.5,0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xe8),(SexyVector3 *)aVStack_58);
    }
    SpawnHitEffect(this);
    puVar6 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
  }
  GetPAMByName((string *)(this + 0xa8));
  pPVar7 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar9 = (PopAnimRig *)PopAnimRig::CreateRig(pPVar7,pRVar8);
  std::string::string((string *)&local_48,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_48,0,aDStack_38);
  std::string::~string((string *)&local_48);
  nop();
  setRenderTransformForRig(this,pPVar9,0.0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aVStack_58);
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::push_back
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0x100),(RtWeakPtr *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_58);
  Sexy::Insets::Insets((Insets *)&local_48);
  PopAnimRig::CalcSymbolRect(pPVar9,(string *)(this + 0xc0),(TRect *)&local_48);
  fVar12 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xe8));
  fVar13 = (float)FUN_03e8ccf8(*puVar6);
  fVar14 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xec));
  fVar15 = (float)FUN_03e8ccf8(puVar6[1]);
  Sexy::FastCurve::SetOutRange(aFStack_68,fVar12 - fVar13,fVar14 - fVar15);
  fVar12 = (float)DVec2::getLength((DVec2 *)aFStack_68);
  fVar13 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xd0));
  fVar13 = (float)local_40 - fVar13;
  if (fVar13 < fVar12) {
    do {
      while( true ) {
        pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
        pPVar9 = (PopAnimRig *)PopAnimRig::CreateRig(pPVar7,pRVar8);
        iVar3 = Sexy::Rand(2);
        Sexy::StrFormat("animation%d",(RtWeakPtr<Sexy::ResourceInfo> *)aVStack_58,(ulong)(iVar3 + 2)
                       );
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar9,(RtWeakPtr<Sexy::ResourceInfo> *)aVStack_58,0,aDStack_38)
        ;
        std::string::~string((string *)aVStack_58);
        setRenderTransformForRig(this,pPVar9,fVar13);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aVStack_58,(RtWeakPtrBase *)aRStack_60);
        std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::
        push_back((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *
                  )(this + 0x100),(RtWeakPtr *)aVStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_58)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        lVar10 = FUN_03e8c98c(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
        if (lVar10 != 2) break;
        PopAnimRig::CalcSymbolRect(pPVar9,(string *)(this + 200),(TRect *)&local_48);
        fVar14 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xd4));
        fVar13 = fVar13 + ((float)local_40 - fVar14);
        if (fVar12 <= fVar13) goto LAB_03e8dfc0;
      }
      fVar14 = (float)FUN_03e8ccf8(*(undefined4 *)(this + 0xd4));
      fVar13 = fVar13 + ((float)local_40 - fVar14);
    } while (fVar13 < fVar12);
  }
LAB_03e8dfc0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

