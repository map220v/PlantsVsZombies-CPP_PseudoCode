// Class: GridItemProtectorShield


/* GridItemProtectorShield::SetVelocity(Sexy::SexyVector3 const&) */

void __thiscall
GridItemProtectorShield::SetVelocity(GridItemProtectorShield *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x210),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::moveThroughTime(float) */

void GridItemProtectorShield::moveThroughTime(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28 [4];
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_48 = *puVar1;
  local_40 = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)PVPManager::GetLogArenaID((PVPManager *)in_x0);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  pcVar2 = *(code **)(*(long *)in_x0 + 0x78);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,param_1);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_48,(SexyVector3 *)local_28);
  (*pcVar2)();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShield::getShieldTypeStr() */

undefined8 GridItemProtectorShield::getShieldTypeStr(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* GridItemProtectorShield::SetShieldParent(Sexy::RtWeakPtr<ZombieFutureProtector>) */

void __thiscall
GridItemProtectorShield::SetShieldParent(GridItemProtectorShield *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::StaticClassInit() */

void GridItemProtectorShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProtectorShieldSlice");
    (*pcVar3)(plVar2,asStack_10,FUN_03e102e8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemProtectorShield");
    (*pcVar3)(plVar2,asStack_10,FUN_03e106a8,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShield::StaticGetClass() */

long * GridItemProtectorShield::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShield::GetClass() const */

long * GridItemProtectorShield::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShield::SetReverseShield(bool, Sexy::SexyVector3 const&) */

void __thiscall
GridItemProtectorShield::SetReverseShield
          (GridItemProtectorShield *this,bool param_1,SexyVector3 *param_2)

{
  this[0x200] = (GridItemProtectorShield)param_1;
  SetVelocity(this,param_2);
  return;
}


/* GridItemProtectorShield::SetShieldSize(float, float) */

void __thiscall
GridItemProtectorShield::SetShieldSize(GridItemProtectorShield *this,float param_1,float param_2)

{
  *(float *)(this + 0x1ac) = param_1;
  *(float *)(this + 0x1b0) = param_2;
  return;
}


/* GridItemProtectorShield::SetShieldHP(float) */

void __thiscall GridItemProtectorShield::SetShieldHP(GridItemProtectorShield *this,float param_1)

{
  *(float *)(this + 0x1a0) = param_1;
  return;
}


/* GridItemProtectorShield::GetShieldLeft() const */

float __thiscall GridItemProtectorShield::GetShieldLeft(GridItemProtectorShield *this)

{
  return (float)*(int *)(this + 0x1d0);
}


/* GridItemProtectorShield::recordChildPrePositions() */

void __thiscall GridItemProtectorShield::recordChildPrePositions(GridItemProtectorShield *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  long *plVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x1b8);
    uVar3 = FUN_03e0ebac(uVar5,*(undefined8 *)(this + 0x1c0));
    if (uVar3 <= uVar4) break;
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e0ebb8(uVar5,uVar4);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    pcVar6 = *(code **)(*plVar2 + 0x288);
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e0ebb8(*(undefined8 *)(this + 0x1b8),uVar4);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
    (*pcVar6)(plVar2,uVar5);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* GridItemProtectorShield::GetTimeSinceHit() const */

undefined1  [16] __thiscall GridItemProtectorShield::GetTimeSinceHit(GridItemProtectorShield *this)

{
  float extraout_s0;
  float fVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  
  PVZ_EOT();
  fVar1 = extraout_s0;
  uVar3 = extraout_var;
  uVar4 = extraout_var_00;
  if (*(float *)(this + 0x1e0) < extraout_s0) {
    fVar1 = (float)PVZ_T();
    fVar1 = fVar1 - *(float *)(this + 0x1e0);
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e0f61c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GridItemProtectorShield::CalculateShieldExpansionScale() */

void __thiscall
GridItemProtectorShield::CalculateShieldExpansionScale(GridItemProtectorShield *this)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  fVar3 = 0.0;
  iVar1 = *(int *)(this + 0x1a4);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      fVar3 = 1.0;
    }
    else {
      local_10 = 0;
      uVar2 = 3;
      local_c = 0x3f800000;
      if (iVar1 == 3) {
        uVar2 = 2;
        local_10 = 0x3f800000;
        local_c = 0;
      }
      auVar4 = PVZ_T();
      fVar3 = CurveLerp<float>(auVar4,0x3f000000,auVar4._0_4_ - *(float *)(this + 0x1a8),&local_10,
                               &local_c,uVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::setChildPositions() */

void __thiscall GridItemProtectorShield::setChildPositions(GridItemProtectorShield *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  GridItemProtectorShieldSegment *this_00;
  TPoint *pTVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar13 = (float)CalculateShieldExpansionScale(this);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  uVar11 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0x1b8);
    uVar10 = FUN_03e0ebac(uVar12,*(undefined8 *)(this + 0x1c0));
    if (uVar10 <= uVar11) break;
    local_18 = fVar1;
    local_14 = fVar2;
    local_10 = fVar3;
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e0ebb8(uVar12,uVar11);
    this_00 = (GridItemProtectorShieldSegment *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    pTVar8 = (TPoint *)GridItemProtectorShieldSegment::GetGridOffset(this_00);
    Sexy::Point::Point((Point *)&local_20,pTVar8);
    local_18 = local_18 + fVar13 * (float)(iVar4 * local_20);
    local_14 = local_14 + fVar13 * (float)(iVar5 * local_1c);
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e0ebb8(*(undefined8 *)(this + 0x1b8),uVar11);
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    (**(code **)(*plVar9 + 0x78))(plVar9,&local_18);
    uVar11 = uVar11 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::calculateShieldArea() */

void __thiscall GridItemProtectorShield::calculateShieldArea(GridItemProtectorShield *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_24;
  int local_1c;
  int local_18;
  int iStack_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Board::GetGridBoundingRect();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)*pfVar3,(int)pfVar3[1],
             (int)((float)iVar1 * *(float *)(this + 0x1ac)),
             (int)((float)iVar2 * *(float *)(this + 0x1b0)));
  *(undefined8 *)(this + 0x1d8) = local_10;
  iVar1 = *(int *)(this + 0x1dc);
  *(ulong *)(this + 0x1d0) = CONCAT44(iStack_14,local_18);
  iVar2 = -1;
  if (this[0x220] == (GridItemProtectorShield)0x0) {
    iVar2 = 1;
  }
  iVar4 = (*(int *)(this + 0x1d4) - iVar1 / 2) + -0x18;
  *(int *)(this + 0x1d4) = iVar4;
  *(int *)(this + 0x1d0) = local_18 + iVar2 * -(*(int *)(this + 0x1d8) / 2);
  if (iVar4 < local_24) {
    *(int *)(this + 0x1d4) = local_24;
    iVar1 = iVar1 + (iVar4 - local_24);
    *(int *)(this + 0x1dc) = iVar1;
    iVar4 = local_24;
  }
  if (local_24 + local_1c < iVar4 + iVar1) {
    *(int *)(this + 0x1dc) = ((local_24 + local_1c) - (iVar4 + iVar1)) + iVar1;
  }
  if ((*(uint *)(this + 0x1a4) & 0xfffffffd) == 1) {
    fVar6 = (float)CalculateShieldExpansionScale(this);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
    Sexy::Point::Point((Point *)&local_18,(int)fVar7,(int)fVar8);
    iVar1 = *(int *)(this + 0x1d4);
    iVar2 = *(int *)(this + 0x1d0);
    iVar5 = (int)(fVar7 + (float)(iVar2 - local_18));
    iVar4 = (int)(fVar8 + (float)(iVar1 - iStack_14) * fVar6);
    *(int *)(this + 0x1d0) = iVar5;
    *(int *)(this + 0x1d4) = iVar4;
    *(int *)(this + 0x1dc) =
         (int)(fVar8 + (float)((iVar1 + *(int *)(this + 0x1dc)) - iStack_14) * fVar6) - iVar4;
    *(int *)(this + 0x1d8) =
         (int)(fVar7 + (float)((iVar2 + *(int *)(this + 0x1d8)) - local_18) * fVar6) - iVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::GridItemProtectorShield() */

void __thiscall GridItemProtectorShield::GridItemProtectorShield(GridItemProtectorShield *this)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06783350;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShield_067835f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0x40400000;
  *(undefined4 *)(this + 0x1a0) = 0x447a0000;
  *(undefined4 *)(this + 0x1b0) = 0x40400000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x1e0) = uVar3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  this[0x200] = (GridItemProtectorShield)0x0;
  std::string::string((string *)(this + 0x208),"");
  nop();
  DVec3::DVec3((DVec3 *)(this + 0x210));
  this[0x220] = (GridItemProtectorShield)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x21c) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShield::StaticNew() */

GridItemProtectorShield * GridItemProtectorShield::StaticNew(void)

{
  GridItemProtectorShield *this;
  
  this = ::operator_new(0x228);
  GridItemProtectorShield(this);
  return this;
}


/* GridItemProtectorShield::Deactivate() */

void __thiscall GridItemProtectorShield::Deactivate(GridItemProtectorShield *this)

{
  int iVar1;
  GridItemProtectorShieldProps *pGVar2;
  undefined4 uVar3;
  
  if ((*(int *)(this + 0x1a4) != 3) && (*(int *)(this + 0x1a4) != 0)) {
    pGVar2 = GridItem::GetProps<GridItemProtectorShieldProps>();
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(pGVar2 + 0xa0),0.0);
    iVar1 = *(int *)(this + 0x1a4);
    *(undefined4 *)(this + 0x1a4) = 3;
    if (iVar1 != 1) {
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x1a8) = uVar3;
    }
    calculateShieldArea(this);
    return;
  }
  return;
}


/* GridItemProtectorShield::ShieldGotHit(GridItemProtectorShieldSegment*, DamageInfo const&) */

void __thiscall
GridItemProtectorShield::ShieldGotHit
          (GridItemProtectorShield *this,GridItemProtectorShieldSegment *param_1,DamageInfo *param_2
          )

{
  GridItemProtectorShieldProps *pGVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 != (GridItemProtectorShieldSegment *)0x0) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x1e0) = uVar2;
    if (0.0 <= *(float *)(this + 0x1a0)) {
      pGVar1 = GridItem::GetProps<GridItemProtectorShieldProps>();
      RealObject::PlayPositionalSound((RealObject *)this,(string *)(pGVar1 + 0xa8),0.0);
      fVar3 = *(float *)(this + 0x1a0);
      fVar4 = *(float *)(param_2 + 8);
      *(float *)(this + 0x1a0) = fVar3 - fVar4;
      if (fVar3 - fVar4 <= 0.0) {
        Deactivate(this);
        return;
      }
    }
  }
  return;
}


/* GridItemProtectorShield::deleteChildren() */

void __thiscall GridItemProtectorShield::deleteChildren(GridItemProtectorShield *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr *this_00;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x1b8);
  lVar2 = FUN_03e0ebac(uVar6,*(undefined8 *)(this + 0x1c0));
  if (lVar2 != 0) {
    do {
      this_00 = (RtWeakPtr *)FUN_03e0ebb8(uVar6,uVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e0ebb8(*(undefined8 *)(this + 0x1b8),uVar5)
        ;
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        (**(code **)(*plVar4 + 0x48))();
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x1b8);
      uVar3 = FUN_03e0ebac(uVar6,*(undefined8 *)(this + 0x1c0));
    } while (uVar5 < uVar3);
  }
  std::
  vector<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>>>
  ::clear((vector<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>>>
           *)(this + 0x1b8));
  std::vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>>::clear
            ((vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>> *)(this + 0x1e8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::onUpdate() */

void __thiscall GridItemProtectorShield::onUpdate(GridItemProtectorShield *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ZombieFutureProtector *this_00;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x200] == (GridItemProtectorShield)0x0) {
LAB_03e1115c:
    getShieldTypeStr();
    bVar2 = std::operator==(asStack_10,"protectorshieldsegment_wavegenerator");
    std::string::~string(asStack_10);
    if (!bVar2) {
      calculateShieldArea(this);
      uVar1 = *(uint *)(this + 0x1a4);
      goto joined_r0x03e11214;
    }
  }
  else {
    getShieldTypeStr();
    cVar3 = FUN_0547419c(asStack_10);
    std::string::~string(asStack_10);
    if (cVar3 == '\0') goto LAB_03e1115c;
  }
  recordChildPrePositions(this);
  PVZ_Dt();
  (**(code **)(*(long *)this + 0x288))(this);
  calculateShieldArea(this);
  uVar1 = *(uint *)(this + 0x1a4);
joined_r0x03e11214:
  if ((uVar1 & 0xfffffffd) == 1) {
    setChildPositions(this);
    fVar4 = (float)PVZ_T();
    if (0.5 <= fVar4 - *(float *)(this + 0x1a8)) {
      if (*(int *)(this + 0x1a4) == 1) {
        *(undefined4 *)(this + 0x1a4) = 2;
      }
      else {
        *(undefined4 *)(this + 0x1a4) = 0;
        deleteChildren(this);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
        if (bVar2) {
          this_00 = (ZombieFutureProtector *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
          ZombieFutureProtector::OnShieldDestroyed(this_00);
        }
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemProtectorShield::~GridItemProtectorShield() */

void __thiscall GridItemProtectorShield::~GridItemProtectorShield(GridItemProtectorShield *this)

{
  *(undefined ***)this = &PTR_GetClass_06783350;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShield_067835f0;
  deleteChildren(this);
  std::string::~string((string *)(this + 0x208));
  std::vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>>::~vector
            ((vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>> *)(this + 0x1e8));
  std::
  vector<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>>>
             *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemProtectorShield::~GridItemProtectorShield() */

void __thiscall GridItemProtectorShield::~GridItemProtectorShield(GridItemProtectorShield *this)

{
  ~GridItemProtectorShield(this + -0x10);
  return;
}


/* GridItemProtectorShield::~GridItemProtectorShield() */

void __thiscall GridItemProtectorShield::~GridItemProtectorShield(GridItemProtectorShield *this)

{
  ~GridItemProtectorShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemProtectorShield::~GridItemProtectorShield() */

void __thiscall GridItemProtectorShield::~GridItemProtectorShield(GridItemProtectorShield *this)

{
  ~GridItemProtectorShield(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::buildSlicesForRow(int, bool, bool, std::vector<ProtectorShieldSlice,
   std::allocator<ProtectorShieldSlice> >&, bool) */

void __thiscall
GridItemProtectorShield::buildSlicesForRow
          (GridItemProtectorShield *this,int param_1,bool param_2,bool param_3,vector *param_4,
          bool param_5)

{
  int iVar1;
  Vec3 aVStack_68 [20];
  int local_54;
  int local_4c;
  ProtectorShieldSlice local_48;
  undefined1 local_47;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined1 local_30;
  Vec3 local_28;
  undefined1 local_27;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,param_1,1,1,(int)___stack_chk_guard);
  ProtectorShieldSlice::ProtectorShieldSlice(&local_48,this);
  local_47 = 0;
  local_40 = (float)(local_54 + local_4c);
  local_48 = (ProtectorShieldSlice)param_3;
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(param_1);
  local_44 = (float)iVar1;
  if (param_3) {
    local_40 = local_40 + 8.0;
  }
  local_30 = param_5;
  EATextSquish::Vec3::Vec3(&local_28,0.0,local_44,0.0);
  local_3c = BoardEntity::CalcRenderOrderFromPosition((SexyVector3 *)&local_28);
  std::vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>>::push_back
            ((vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>> *)param_4,&local_48)
  ;
  ProtectorShieldSlice::ProtectorShieldSlice((ProtectorShieldSlice *)&local_28,this);
  local_28 = (Vec3)0x0;
  local_24 = (float)local_54;
  local_20 = local_44;
  if (param_2) {
    local_24 = local_24 - 8.0;
  }
  local_27 = param_2;
  local_10 = param_5;
  EATextSquish::Vec3::Vec3(aVStack_68,0.0,local_24,0.0);
  local_1c = BoardEntity::CalcRenderOrderFromPosition((SexyVector3 *)aVStack_68);
  std::vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>>::push_back
            ((vector<ProtectorShieldSlice,std::allocator<ProtectorShieldSlice>> *)param_4,
             (ProtectorShieldSlice *)&local_28);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_28);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::createChildren() */

void __thiscall GridItemProtectorShield::createChildren(GridItemProtectorShield *this)

{
  int iVar1;
  char *__s;
  int iVar2;
  bool bVar3;
  float *pfVar4;
  int *piVar5;
  GridItemProtectorShield *extraout_x0;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  int local_28;
  int local_24;
  string asStack_20 [8];
  int local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = *(long *)(gLawnApp + 0x9f0);
  BoardEntity::CalcGridPosition();
  local_18[0] = 0;
  fVar11 = (float)(int)((*(float *)(this + 0x1b0) + -1.0) * 0.5);
  local_10[0] = (float)local_24 - fVar11;
  pfVar4 = eastl::max_alt<float>((float *)local_18,local_10);
  fVar10 = *pfVar4;
  local_18[0] = *(int *)(lVar9 + 0xfc) + -1;
  local_10[0] = (float)(int)(fVar11 + (float)local_24);
  piVar5 = eastl::min_alt<int>(local_18,(int *)local_10);
  fVar11 = *(float *)(this + 0x1ac);
  iVar2 = *piVar5 - (int)fVar10;
  if (-1 < iVar2) {
    iVar8 = 0;
    do {
      __s = "protectorshieldsegment_alpha";
      if (this[0x200] == (GridItemProtectorShield)0x0) {
        __s = "protectorshieldsegment";
      }
      std::string::string(asStack_20,__s);
      nop();
      getShieldTypeStr();
      bVar3 = std::operator!=((string *)local_10,"");
      std::string::~string((string *)local_10);
      if (bVar3) {
        getShieldTypeStr();
        FUN_05474278(asStack_20,(RtWeakPtr<Sexy::SoundResource> *)local_10);
        std::string::~string((string *)local_10);
      }
      lVar9 = Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_20,local_28,local_24,1);
      if (lVar9 != 0) {
        iVar1 = iVar8 + (int)fVar10;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
        std::
        vector<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>>>
        ::push_back((vector<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemProtectorShieldSegment>>>
                     *)(this + 0x1b8),(RtWeakPtr *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        nop();
        FUN_03e0eb94(*(undefined4 *)(this + 0x21c),extraout_x0 + 0x1a8);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
        SetShieldParent(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        uVar6 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
        (**(code **)(*(long *)extraout_x0 + 0x78))(extraout_x0,uVar6);
        iVar7 = 3;
        if (this[0x220] == (GridItemProtectorShield)0x0) {
          iVar7 = 0;
        }
        Sexy::Point::Point((Point *)local_10,
                           ((int)((float)local_28 + (1.0 - fVar11) * 0.5) - local_28) + iVar7,
                           iVar1 - local_24);
        GridItemProtectorShieldSegment::SetGridOffset
                  ((GridItemProtectorShieldSegment *)extraout_x0,
                   (RtWeakPtr<Sexy::SoundResource> *)local_10);
        buildSlicesForRow(this,iVar1,iVar8 == 0,iVar8 == iVar2,(vector *)(this + 0x1e8),
                          (bool)this[0x200]);
      }
      iVar8 = iVar8 + 1;
      std::string::~string(asStack_20);
    } while (iVar8 <= iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShield::Activate() */

void __thiscall GridItemProtectorShield::Activate(GridItemProtectorShield *this)

{
  int iVar1;
  GridItemProtectorShieldProps *pGVar2;
  undefined4 uVar3;
  
  if (1 < *(int *)(this + 0x1a4) - 1U) {
    pGVar2 = GridItem::GetProps<GridItemProtectorShieldProps>();
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(pGVar2 + 0x98),0.0);
    iVar1 = *(int *)(this + 0x1a4);
    *(undefined4 *)(this + 0x1a4) = 1;
    if (iVar1 != 3) {
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x1a8) = uVar3;
      createChildren(this);
    }
    calculateShieldArea(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::onGridItemInitialize() */

void __thiscall GridItemProtectorShield::onGridItemInitialize(GridItemProtectorShield *this)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  FUN_03e0ed6c(this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e0eb8c(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  *(undefined4 *)(this + 0x1a0) = 0x447a0000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x198),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0x40400000;
  *(undefined4 *)(this + 0x1b0) = 0x40400000;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
  *(undefined8 *)(this + 0x1d0) = local_18;
  *(undefined8 *)(this + 0x1d8) = uStack_10;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1e0) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall
GridItemProtectorShield::SetPosition(GridItemProtectorShield *this,SexyVector3 *param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_18 = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  local_10 = *(undefined4 *)(param_1 + 8);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_10 = Board::calculateRoofOffsetZ(*(float *)param_1);
  }
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)&local_18);
  setChildPositions(this);
  calculateShieldArea(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShield::AddToRenderQueue(RenderQueue*) */

void __thiscall
GridItemProtectorShield::AddToRenderQueue(GridItemProtectorShield *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  ReceivedDataCallback *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::AddToRenderQueue((RealObject *)this,param_1);
  if (*(int *)(this + 0x1a4) != 0) {
    uVar4 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(this + 0x1e8);
      uVar3 = FUN_03e0ebc0(uVar5,*(undefined8 *)(this + 0x1f0));
      if (uVar3 <= uVar4) break;
      pRVar2 = (ReceivedDataCallback *)FUN_03e0ebe8(uVar5,uVar4);
      uVar1 = *(undefined4 *)(pRVar2 + 0xc);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (pRVar2,ProtectorShieldSlice::Draw);
      Sexy::Delegate1<Sexy::Graphics*>::
      Delegate1<ProtectorShieldSlice,void(ProtectorShieldSlice::*)(Sexy::Graphics*)>
                (aDStack_38,aCStack_50);
      RenderQueue::Add(param_1,uVar1,aDStack_38);
      uVar4 = uVar4 + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShield::setShieldTypeStr(std::string) */

void GridItemProtectorShield::setShieldTypeStr(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x208);
  return;
}

