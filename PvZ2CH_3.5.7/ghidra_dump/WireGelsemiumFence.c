// Class: WireGelsemiumFence


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::StaticClassInit() */

void WireGelsemiumFence::StaticClassInit(void)

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
    std::string::string(asStack_10,"WireGelsemiumFence");
    (*pcVar2)(plVar1,asStack_10,FUN_038aadb4,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WireGelsemiumFence::StaticGetClass() */

long * WireGelsemiumFence::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WireGelsemiumFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumFence::GetClass() const */

long * WireGelsemiumFence::GetClass(void)

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
  (*pcVar3)(plVar1,"WireGelsemiumFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumFence::WireGelsemiumFence() */

void __thiscall WireGelsemiumFence::WireGelsemiumFence(WireGelsemiumFence *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_066b3ba0;
  *(undefined ***)(this + 0x10) = &PTR__WireGelsemiumFence_066b3d88;
  Set8BytesTo0(this + 0xa8);
  Set8BytesTo0(this + 0xb0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  *(undefined4 *)(this + 0xa4) = 1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xb8) = uVar1;
  return;
}


/* WireGelsemiumFence::StaticNew() */

WireGelsemiumFence * WireGelsemiumFence::StaticNew(void)

{
  WireGelsemiumFence *this;
  
  this = ::operator_new(0xe8);
  WireGelsemiumFence(this);
  return this;
}


/* WireGelsemiumFence::GetEndEntity() */

void __thiscall WireGelsemiumFence::GetEndEntity(WireGelsemiumFence *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  return;
}


/* WireGelsemiumFence::canAttackTarget(BoardEntity*) */

ulong __thiscall WireGelsemiumFence::canAttackTarget(WireGelsemiumFence *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  Zombie *pZVar4;
  ulong uVar5;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if ((((bVar1) &&
         (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar4 != (Zombie *)0x0)) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar2 == '\0')) {
      bVar3 = RealObject::IsOnTeam(pZVar4,2);
      if (bVar3 != 0) {
        return (ulong)bVar3;
      }
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar1) {
      uVar5 = RealObject::IsOnTeam(param_1,2);
      return uVar5;
    }
  }
  return 0;
}


/* WireGelsemiumFence::setBoostPlantLevel(float) */

void __thiscall WireGelsemiumFence::setBoostPlantLevel(WireGelsemiumFence *this,float param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  Plant *pPVar4;
  float fVar5;
  
  this_00 = (RtMixedPtrBase *)(this + 200);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<Plant>(pRVar3);
    if (bVar2) {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar4 = Sexy::RtObject::Cast<Plant>(pRVar3);
      if (pPVar4 != (Plant *)0x0) {
        fVar5 = (float)FUN_038a8c38(*(undefined4 *)(pPVar4 + 0x564));
        fVar5 = fVar5 - param_1;
        if (fVar5 < 1.0) {
          fVar5 = 1.0;
        }
        FUN_038a8c30(fVar5,pPVar4 + 0x564);
        return;
      }
    }
  }
  return;
}


/* WireGelsemiumFence::CalcAngleForVector(Sexy::SexyVector2 const&) */

undefined1  [16] __thiscall
WireGelsemiumFence::CalcAngleForVector(WireGelsemiumFence *this,SexyVector2 *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  float *pfVar2;
  float fVar3;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  ulong uVar4;
  
  fVar3 = atanf(-*(float *)(param_1 + 4) / *(float *)param_1);
  uVar4 = CONCAT44(extraout_var,fVar3);
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var1);
  fVar7 = *pfVar2;
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var1);
  uVar6 = extraout_var_00;
  if (fVar7 <= *pfVar2) {
    if (*(float *)param_1 == 0.0) {
      if (0.0 < *(float *)(param_1 + 4)) {
        auVar5 = Sexy::SexyMath::DegToRad(-90.0);
        return auVar5;
      }
      auVar5 = Sexy::SexyMath::DegToRad(90.0);
      return auVar5;
    }
    uVar4 = (ulong)(uint)(fVar3 + 3.1415927);
    uVar6 = 0;
  }
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::canCollideEntity(BoardEntity*) */

void __thiscall WireGelsemiumFence::canCollideEntity(WireGelsemiumFence *this,BoardEntity *param_1)

{
  char cVar1;
  Insets *pIVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets((Insets *)&local_18,pIVar2);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 200));
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0xc0));
    if (cVar1 == '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      fVar6 = *(float *)(lVar3 + 0x1c);
      fVar4 = (float)FUN_038a8d7c(*(undefined4 *)(lVar3 + 0x18),fVar6,*(undefined4 *)(lVar3 + 0x20))
      ;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
      fVar7 = *(float *)(lVar3 + 0x1c);
      fVar5 = (float)FUN_038a8d7c(*(undefined4 *)(lVar3 + 0x18),fVar7,*(undefined4 *)(lVar3 + 0x20))
      ;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,(float)local_18,(float)local_14);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_60,(float)(local_18 + local_10),(float)(local_14 + local_c));
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_58,(float)local_18,(float)(local_14 + local_c));
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_50,(float)(local_18 + local_10),(float)local_14);
      local_38 = local_68;
      local_34 = local_64;
      local_30 = local_60;
      local_2c = local_5c;
      local_28 = local_58;
      local_24 = local_54;
      local_20 = local_50;
      local_1c = local_4c;
      local_48 = fVar4 + 5.0;
      local_44 = fVar6 - 20.0;
      local_40 = fVar5 + 5.0;
      local_3c = fVar7 - 20.0;
      cVar1 = Sexy::TRect<int>::Contains
                        ((TRect<int> *)&local_18,(int)(fVar4 + 5.0),(int)(fVar6 - 20.0));
      if (cVar1 == '\0') {
        cVar1 = Sexy::TRect<int>::Contains
                          ((TRect<int> *)&local_18,(int)(fVar5 + 5.0),(int)(fVar7 - 20.0));
        if (cVar1 == '\0') {
          cVar1 = FUN_038a85c0(&local_48,&local_40,&local_38,&local_30);
          if (cVar1 == '\0') {
            cVar1 = FUN_038a85c0(&local_48,&local_40,&local_28,&local_20);
          }
        }
      }
      goto LAB_038aba6c;
    }
  }
  cVar1 = '\0';
LAB_038aba6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WireGelsemiumFence::~WireGelsemiumFence() */

void __thiscall WireGelsemiumFence::~WireGelsemiumFence(WireGelsemiumFence *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  RtObject *pRVar4;
  Plant *pPVar5;
  float fVar6;
  
  this_00 = (RtMixedPtrBase *)(this + 0xd0);
  *(undefined ***)this = &PTR_GetClass_066b3ba0;
  *(undefined ***)(this + 0x10) = &PTR__WireGelsemiumFence_066b3d88;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd8));
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd8));
  }
  if (cVar1 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xd8));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xe0));
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xd8));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xe0));
  }
  if (cVar1 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xe0));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 200));
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xe0));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 200));
  }
  if (cVar1 != '\0') {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200))
    ;
    bVar2 = Sexy::RtObject::IsA<Plant>(pRVar4);
    if (bVar2) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
      pPVar5 = Sexy::RtObject::Cast<Plant>(pRVar4);
      if (pPVar5 != (Plant *)0x0) {
        fVar6 = (float)FUN_038a8c38(*(undefined4 *)(pPVar5 + 0x564));
        fVar6 = fVar6 - (float)*(int *)(this + 0xa4);
        if (fVar6 <= 0.0) {
          fVar6 = 1.0;
        }
        FUN_038a8c30(fVar6,pPVar5 + 0x564);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb0));
  std::string::~string((string *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to WireGelsemiumFence::~WireGelsemiumFence() */

void __thiscall WireGelsemiumFence::~WireGelsemiumFence(WireGelsemiumFence *this)

{
  ~WireGelsemiumFence(this + -0x10);
  return;
}


/* WireGelsemiumFence::~WireGelsemiumFence() */

void __thiscall WireGelsemiumFence::~WireGelsemiumFence(WireGelsemiumFence *this)

{
  ~WireGelsemiumFence(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WireGelsemiumFence::~WireGelsemiumFence() */

void __thiscall WireGelsemiumFence::~WireGelsemiumFence(WireGelsemiumFence *this)

{
  ~WireGelsemiumFence(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::drawFence(Sexy::Graphics*) */

void WireGelsemiumFence::drawFence(Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  UIWidget *pUVar5;
  PopAnimRig *pPVar6;
  StandaloneEffect *pSVar7;
  RtObject *pRVar8;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 200);
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
  fVar12 = *(float *)(lVar4 + 0x1c);
  local_70 = (float)FUN_038a8d7c(*(undefined4 *)(lVar4 + 0x18),fVar12,*(undefined4 *)(lVar4 + 0x20))
  ;
  local_6c = fVar12;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  fVar13 = *(float *)(lVar4 + 0x1c);
  fVar9 = (float)FUN_038a8d7c(*(undefined4 *)(lVar4 + 0x18),fVar13,*(undefined4 *)(lVar4 + 0x20));
  fVar10 = local_6c;
  fVar12 = local_70;
  local_6c = local_6c - 20.0;
  local_70 = local_70 + 5.0;
  fVar11 = fVar13;
  local_68 = fVar9;
  local_64 = fVar13;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1);
  if (cVar2 == '\0') goto LAB_038ac50c;
  pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  bVar3 = Sexy::RtObject::IsA<GridItem>(pRVar8);
  if (!bVar3) goto LAB_038ac50c;
  fVar9 = fVar9 - fVar12;
  fVar13 = fVar13 - fVar10;
  if (fVar9 == 0.0) {
    if (fVar13 <= 0.0) {
LAB_038ac7b8:
      local_68 = local_68 - 5.0;
LAB_038ac76c:
      fVar11 = 30.0;
      local_64 = local_64 - 30.0;
      goto LAB_038ac50c;
    }
  }
  else {
    if (fVar13 == 0.0) {
      if (fVar9 <= 0.0) goto LAB_038ac7b8;
      local_68 = local_68 + 5.0;
      goto LAB_038ac76c;
    }
    if (fVar9 <= 0.0) {
      fVar11 = 30.0;
      local_64 = local_64 - 30.0;
      if (fVar13 < 0.0) {
        local_68 = local_68 - 5.0;
      }
      goto LAB_038ac50c;
    }
  }
  fVar11 = 30.0;
  local_64 = local_64 - 30.0;
LAB_038ac50c:
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1);
  if (cVar2 != '\0') {
    pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar3 = Sexy::RtObject::IsA<Plant>(pRVar8);
    if (bVar3) {
      fVar11 = local_68 + 5.0;
      local_64 = local_64 - 20.0;
      local_68 = fVar11;
    }
  }
  fVar12 = (float)FUN_038a91c8();
  local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_70,fVar12);
  local_5c = fVar11;
  fVar12 = (float)FUN_038a91c8();
  local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_68,fVar12);
  uVar14 = 0;
  local_54 = fVar11;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,0.0);
  fVar12 = (float)FUN_038a91c8();
  local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar12);
  uVar15 = 0;
  local_4c = uVar14;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,68.0,0.0);
  fVar12 = (float)FUN_038a91c8();
  local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar12);
  local_44 = uVar15;
  local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
  local_3c = uVar15;
  fVar12 = (float)DVec2::getLength((DVec2 *)&local_40);
  local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
  local_34 = uVar15;
  fVar10 = (float)DVec2::getLength((DVec2 *)&local_38);
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8);
  fVar11 = (float)CalcAngleForVector((WireGelsemiumFence *)param_1,(SexyVector2 *)&local_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar12 / fVar10,1.0);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar11,(SexyVector2 *)&local_50,
             (SexyVector2 *)0x1,(bool)in_w4);
  pUVar5 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd0));
  pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar5);
  PopAnimRig::SetRenderTransform(pPVar6,aSStack_30);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd0));
  StandaloneEffect::Draw(pSVar7,in_x1);
  fVar10 = *(float *)(param_1 + 0xb8);
  fVar12 = (float)PVZ_T();
  if (fVar12 <= fVar10) {
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    StandaloneEffect::SetVisibility(pSVar7,true);
  }
  else {
    pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    StandaloneEffect::SetVisibility(pSVar7,false);
  }
  pUVar5 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar5);
  PopAnimRig::SetRenderTransform(pPVar6,aSStack_30);
  pSVar7 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  StandaloneEffect::Draw(pSVar7,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::LoadFenceEffect(std::string const&, std::string const&) */

void WireGelsemiumFence::LoadFenceEffect(string *param_1,string *param_2)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_2);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_038a8d6c(this + 0x1c);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,true);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::AddToRenderQueue(RenderQueue*) */

void __thiscall WireGelsemiumFence::AddToRenderQueue(WireGelsemiumFence *this,RenderQueue *param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::AddToRenderQueue((RealObject *)this,param_1);
  cVar1 = FUN_038ab3bc(*(undefined4 *)(this + 0x28));
  if ((cVar1 == '\0') &&
     (cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 200)),
     cVar1 == '\0')) {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0xc0));
    if (cVar1 == '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      lVar3 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
      uVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar3 + 4));
      uVar2 = Board::MakeRenderOrder(500000,uVar2,0xffffff9c);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,drawFence);
      Sexy::Delegate1<Sexy::Graphics*>::
      Delegate1<WireGelsemiumFence,void(WireGelsemiumFence::*)(Sexy::Graphics*)>
                (aDStack_38,aCStack_50);
      RenderQueue::Add(param_1,uVar2,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::findTarget() */

void __thiscall WireGelsemiumFence::findTarget(WireGelsemiumFence *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ResourceInfo *pRVar7;
  RtObject *pRVar8;
  GridItem *this_01;
  SharkMinion *this_02;
  undefined1 uVar9;
  BoardEntity *pBVar10;
  ResourceInfo *pRVar11;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 200);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  uVar3 = operator|(2,4);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_38,uVar3,
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,0xffffffff,
             0xffffffff);
  local_48[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_38);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_48,(__normal_iterator *)local_20),
        bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
    pBVar10 = (BoardEntity *)*puVar6;
    if ((((pBVar10 != (BoardEntity *)0x0) &&
         (pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00),
         pBVar10 != (BoardEntity *)pRVar7)) &&
        (cVar2 = canCollideEntity(this,pBVar10), cVar2 != '\0')) &&
       (cVar2 = canAttackTarget(this,pBVar10), cVar2 != '\0')) {
      uVar9 = 1;
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      goto joined_r0x038ae938;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_48);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  uVar9 = 0;
joined_r0x038ae938:
  if (cVar2 != '\0') {
    pRVar8 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar8);
    if (bVar1) {
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = Sexy::RtObject::Cast<GridItem>(pRVar8);
      bVar1 = Sexy::RtObject::IsA<GridItemLightningRod>((RtObject *)this_01);
      if (bVar1) {
        this_02 = (SharkMinion *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar4 = SharkMinion::getRow(this_02);
        pBVar10 = (BoardEntity *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar5 = BoardEntity::CalcColumnPosition(pBVar10);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
        Sexy::Insets::Insets((Insets *)local_48,iVar5 + -1,iVar4 + -1,3,3);
        EntityFinder::GetEntitiesInGridSquares
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,uVar3,
                   (generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_48);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_20);
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
              bVar1) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          pRVar11 = (ResourceInfo *)*puVar6;
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          if (pRVar11 != pRVar7) {
            uVar9 = 1;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
            goto LAB_038ae93c;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
      }
    }
  }
LAB_038ae93c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::DamageEntity(float) */

void __thiscall WireGelsemiumFence::DamageEntity(WireGelsemiumFence *this,float param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  RtWeakPtr aRStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 200));
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0xc0));
    if (cVar1 == '\0') {
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0xb8) = fVar7 + 0.5;
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_60 = param_1;
      operator|=(auStack_58,0x80);
      local_68 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      uVar3 = operator|(2,4);
      Board::GetGridBoundingRect();
      EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar3,aRStack_90,0xffffffff,0xffffffff);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)*puVar4;
        if (((this_01 !=
              (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) && (cVar1 = canCollideEntity(this,(BoardEntity *)this_01), cVar1 != '\0')) &&
           (cVar1 = canAttackTarget(this,(BoardEntity *)this_01), cVar1 != '\0')) {
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_01);
          fVar7 = *pfVar5;
          fVar8 = pfVar5[1];
          fVar9 = pfVar5[2];
          this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_98,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
          GetPAMByName(asStack_98);
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_90);
          Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          std::string::~string(asStack_98);
          nop();
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)aRStack_90,(float)(int)(fVar7 - 80.0),(float)(int)(fVar8 - 114.0),
                     (float)(int)fVar9);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_90,-1);
          FUN_038a8d6c(this_00 + 0x1c);
          std::string::string((string *)aRStack_90,"idle4");
          Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_90,0);
          std::string::~string((string *)aRStack_90);
          nop();
          (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)&local_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::onUpdate() */

void __thiscall WireGelsemiumFence::onUpdate(WireGelsemiumFence *this)

{
  RtWeakPtr *this_00;
  RtMixedPtrBase *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *pEVar5;
  RtObject *pRVar6;
  long lVar7;
  Plant *pPVar8;
  PlantWireGelsemium *pPVar9;
  undefined1 *__n;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar6);
    if (!bVar1) goto LAB_038b0990;
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar6);
    if (((pPVar8 == (Plant *)0x0) || (*(RtObject **)(pPVar8 + 0xa8) == (RtObject *)0x0)) ||
       (bVar1 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(pPVar8 + 0xa8)), !bVar1))
    goto LAB_038b0990;
    pPVar9 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(pPVar8 + 0xa8));
    iVar3 = PlantWireGelsemium::GetDamageRate(pPVar9);
  }
  else {
LAB_038b0990:
    iVar3 = 1;
  }
  this_01 = (RtMixedPtrBase *)(this + 200);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if ((cVar2 == '\0') && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00), bVar1)) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar6);
    if ((pPVar8 != (Plant *)0x0) &&
       ((*(RtObject **)(pPVar8 + 0xa8) != (RtObject *)0x0 &&
        (bVar1 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(pPVar8 + 0xa8)), bVar1)))) {
      pPVar9 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(pPVar8 + 0xa8));
      PlantWireGelsemium::setState(pPVar9,1);
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  __n = auStack_20;
  std::string::string(asStack_18,"x1");
  nop();
  std::string::string(asStack_10,"d1");
  nop();
  if (iVar3 == 1) {
    std::string::append(asStack_18,"x1",(size_t)__n);
    std::string::append(asStack_10,"d1",(size_t)__n);
  }
  else if (iVar3 == 2) {
    std::string::append(asStack_18,"x2",(size_t)__n);
    std::string::append(asStack_10,"d2",(size_t)__n);
  }
  else if (iVar3 == 3) {
    std::string::append(asStack_18,"x3",(size_t)__n);
    std::string::append(asStack_10,"d3",(size_t)__n);
  }
  else if (iVar3 == 4) {
    std::string::append(asStack_18,"x4",(size_t)__n);
    std::string::append(asStack_10,"d4",(size_t)__n);
  }
  else if (iVar3 == 5) {
    std::string::append(asStack_18,"x5",(size_t)__n);
    std::string::append(asStack_10,"d5",(size_t)__n);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = FUN_038a8c28(*(undefined4 *)(lVar7 + 0x50));
    if ((iVar4 != 5) || (cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01), cVar2 == '\0'))
    goto LAB_038b0a2c;
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar6);
    if ((!bVar1) || (*(int *)(this + 0xa4) == iVar3)) goto LAB_038b0a2c;
    setBoostPlantLevel(this,(float)(*(int *)(this + 0xa4) - iVar3));
    *(int *)(this + 0xa4) = iVar3;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) goto LAB_038b0b94;
  }
  else {
LAB_038b0a2c:
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
LAB_038b0b94:
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = FUN_038a8c28(*(undefined4 *)(lVar7 + 0x50));
      if ((iVar4 < 5) && (*(int *)(this + 0xa4) != iVar3)) {
        *(int *)(this + 0xa4) = iVar3;
        bVar1 = std::operator!=((string *)(this + 0xa8),asStack_18);
        goto joined_r0x038b0bd0;
      }
    }
  }
  bVar1 = std::operator!=((string *)(this + 0xa8),asStack_18);
joined_r0x038b0bd0:
  if (bVar1) {
    pEVar5 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar5,asStack_18,0);
    thunk_FUN_05475e00(this + 0xa8,asStack_18);
  }
  bVar1 = std::operator!=((string *)(this + 0xb0),asStack_10);
  if (bVar1) {
    pEVar5 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar5,asStack_10,0);
    thunk_FUN_05475e00((string *)(this + 0xb0),asStack_10);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumFence::initFence(Plant*, BoardEntity*) */

void WireGelsemiumFence::initFence(Plant *param_1,BoardEntity *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  string *this_01;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  PlantWireGelsemium *pPVar5;
  long lVar6;
  RtObject *pRVar7;
  Plant *pPVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  float *pfVar10;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar11;
  size_t in_x2;
  float fVar12;
  float fVar13;
  float fVar14;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xc0);
  ToolPacketData::GetProps();
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 200);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (((param_2 != (BoardEntity *)0x0) && (*(RtObject **)(param_2 + 0xa8) != (RtObject *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(param_2 + 0xa8)), bVar1)) {
    pPVar5 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(param_2 + 0xa8));
    uVar3 = PlantWireGelsemium::GetDamageRate(pPVar5);
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
  }
  fVar12 = (float)PVZ_T();
  *(float *)(param_1 + 0xb8) = fVar12 + 0.5;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar2 != '\0') {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar7);
    if (bVar1) {
      pRVar7 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar7);
      if (((pPVar8 != (Plant *)0x0) && (*(RtObject **)(pPVar8 + 0xa8) != (RtObject *)0x0)) &&
         (bVar1 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(pPVar8 + 0xa8)), bVar1)) {
        pPVar5 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(pPVar8 + 0xa8));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)asStack_20);
        std::
        vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>
        ::push_back((vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>
                     *)(pPVar5 + 0x28),(RtWeakPtr *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xa4);
  this_01 = (string *)(param_1 + 0xa8);
  if (iVar4 == 1) {
    std::string::append(this_01,"x1",in_x2);
    std::string::append((string *)(param_1 + 0xb0),"d1",in_x2);
  }
  else if (iVar4 == 2) {
    std::string::append(this_01,"x2",in_x2);
    std::string::append((string *)(param_1 + 0xb0),"d2",in_x2);
  }
  else if (iVar4 == 3) {
    std::string::append(this_01,"x3",in_x2);
    std::string::append((string *)(param_1 + 0xb0),"d3",in_x2);
  }
  else if (iVar4 == 4) {
    std::string::append(this_01,"x4",in_x2);
    std::string::append((string *)(param_1 + 0xb0),"d4",in_x2);
  }
  else if (iVar4 == 5) {
    std::string::append(this_01,"x5",in_x2);
    std::string::append((string *)(param_1 + 0xb0),"d5",in_x2);
  }
  std::string::string(asStack_20,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
  LoadFenceEffect((string *)param_1,asStack_20);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xd0),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
  LoadFenceEffect((string *)param_1,asStack_20);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xd8),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar4 = FUN_038a8c28(*(undefined4 *)(lVar6 + 0x50));
    if ((iVar4 == 5) &&
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0')) {
      pRVar7 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar1 = Sexy::RtObject::IsA<Plant>(pRVar7);
      if (bVar1) {
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar7);
        if (pPVar8 != (Plant *)0x0) {
          p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          pfVar10 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var9);
          fVar12 = *pfVar10;
          p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          lVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var9);
          fVar13 = *(float *)(lVar6 + 4);
          p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          lVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var9);
          fVar14 = *(float *)(lVar6 + 8);
          this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string(asStack_20,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
          GetPAMByName(asStack_20);
          pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
          Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar11,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          std::string::~string(asStack_20);
          nop();
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)aRStack_18,(float)(int)(fVar12 - 95.0),(float)(int)(fVar13 - 114.0),
                     (float)(int)fVar14);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,-1);
          FUN_038a8d6c(this_02 + 0x1c);
          std::string::string((string *)aRStack_18,"dl");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(this_02,aRStack_18,0);
          std::string::~string((string *)aRStack_18);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xe0),
                     (RtWeakPtrBase *)aRStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

