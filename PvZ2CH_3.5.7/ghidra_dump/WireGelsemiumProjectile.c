// Class: WireGelsemiumProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProjectile::StaticClassInit() */

void WireGelsemiumProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WireGelsemiumProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_038ae994,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WireGelsemiumProjectile::StaticGetClass() */

long * WireGelsemiumProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"WireGelsemiumProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumProjectile::GetClass() const */

long * WireGelsemiumProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"WireGelsemiumProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumProjectile::CalcAngleForVector(Sexy::SexyVector2 const&) */

undefined1  [16] __thiscall
WireGelsemiumProjectile::CalcAngleForVector(WireGelsemiumProjectile *this,SexyVector2 *param_1)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar2;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 uVar5;
  undefined1 auVar4 [16];
  float fVar6;
  ulong uVar3;
  
  fVar2 = atanf(-*(float *)(param_1 + 4) / *(float *)param_1);
  uVar3 = CONCAT44(extraout_var,fVar2);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  uVar5 = extraout_var_00;
  if (fVar6 <= *pfVar1) {
    uVar3 = (ulong)(uint)(fVar2 + 3.1415927);
    uVar5 = 0;
  }
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProjectile::drawLightiningLine(Sexy::Graphics*) */

void WireGelsemiumProjectile::drawLightiningLine(Graphics *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar1;
  float *pfVar2;
  UIWidget *this_00;
  PopAnimRig *this_01;
  StandaloneEffect *this_02;
  Graphics *in_x1;
  undefined1 in_w4;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float local_6c;
  FastCurve aFStack_68 [8];
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
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1c0));
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar7 = pfVar2[1];
  fVar5 = *pfVar2;
  fVar6 = pfVar2[2];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,*pfVar1,pfVar1[1] - pfVar1[2]);
  Sexy::FastCurve::SetOutRange(aFStack_68,fVar5,fVar7 - fVar6);
  fVar6 = local_70 + 5.0;
  local_6c = local_6c - 20.0;
  local_70 = fVar6;
  fVar5 = (float)FUN_038a91c8();
  local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_70,fVar5);
  local_5c = fVar6;
  fVar5 = (float)FUN_038a91c8();
  local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_68,fVar5);
  uVar3 = 0;
  local_54 = fVar6;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,0.0);
  fVar5 = (float)FUN_038a91c8();
  local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar5);
  uVar4 = 0;
  local_4c = uVar3;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,68.0,0.0);
  fVar5 = (float)FUN_038a91c8();
  local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar5);
  local_44 = uVar4;
  local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
  local_3c = uVar4;
  fVar5 = (float)DVec2::getLength((DVec2 *)&local_40);
  local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
  local_34 = uVar4;
  fVar6 = (float)DVec2::getLength((DVec2 *)&local_38);
  fVar7 = (float)CalcAngleForVector((WireGelsemiumProjectile *)param_1,(SexyVector2 *)&local_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar5 / fVar6,1.0);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar7,(SexyVector2 *)&local_50,
             (SexyVector2 *)0x1,(bool)in_w4);
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1d0));
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  this_02 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1d0));
  StandaloneEffect::Draw(this_02,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProjectile::initProjectile(Sexy::RtWeakPtr<Plant>, Sexy::RtWeakPtr<BoardEntity>,
   int, int, float) */

void __thiscall
WireGelsemiumProjectile::initProjectile
          (undefined4 param_1,WireGelsemiumProjectile *this,RtWeakPtr *param_3,RtWeakPtr *param_4,
          undefined4 param_5,undefined4 param_6)

{
  string *this_00;
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),param_3);
  this_00 = (string *)(this + 0x1b8);
  *(undefined4 *)(this + 0x1ac) = param_5;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),param_4);
  *(undefined4 *)(this + 0x1a8) = param_6;
  *(undefined4 *)(this + 0x1b0) = param_1;
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1f0),pSVar2);
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 == 1) {
    std::string::append(this_00,"x1",(size_t)param_4);
  }
  else if (iVar1 == 2) {
    std::string::append(this_00,"x2",(size_t)param_4);
  }
  else if (iVar1 == 3) {
    std::string::append(this_00,"x3",(size_t)param_4);
  }
  else if (iVar1 == 4) {
    std::string::append(this_00,"x4",(size_t)param_4);
  }
  else if (iVar1 == 5) {
    std::string::append(this_00,"x5",(size_t)param_4);
  }
  std::string::string(asStack_18,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
  WireGelsemiumFence::LoadFenceEffect((string *)this,asStack_18);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1d0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProjectile::updateLineLevel() */

void __thiscall WireGelsemiumProjectile::updateLineLevel(WireGelsemiumProjectile *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  Effect_PopAnim *pEVar4;
  long lVar5;
  PlantWireGelsemium *this_00;
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
  if (bVar2) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    this_00 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar5 + 0xa8));
    uVar3 = PlantWireGelsemium::GetDamageRate(this_00);
    *(undefined4 *)(this + 0x1a8) = uVar3;
  }
  __n = auStack_18;
  std::string::string(asStack_10,"");
  nop();
  if (*(int *)(this + 0x1ac) == 0) {
    iVar1 = *(int *)(this + 0x1a8);
    if (iVar1 == 1) {
      std::string::append(asStack_10,"x1",(size_t)__n);
    }
    else if (iVar1 == 2) {
      std::string::append(asStack_10,"x2",(size_t)__n);
    }
    else if (iVar1 == 3) {
      std::string::append(asStack_10,"x3",(size_t)__n);
    }
    else if (iVar1 == 4) {
      std::string::append(asStack_10,"x4",(size_t)__n);
    }
    else if (iVar1 == 5) {
      std::string::append(asStack_10,"x5",(size_t)__n);
    }
  }
  bVar2 = std::operator!=((string *)(this + 0x1b8),asStack_10);
  if (bVar2) {
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_10,0);
    thunk_FUN_05475e00((string *)(this + 0x1b8),asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WireGelsemiumProjectile::WireGelsemiumProjectile() */

void __thiscall WireGelsemiumProjectile::WireGelsemiumProjectile(WireGelsemiumProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066b3600;
  *(undefined ***)(this + 0x10) = &PTR__WireGelsemiumProjectile_066b37f0;
  Set8BytesTo0(this + 0x1b8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  DVec3::DVec3((DVec3 *)(this + 0x1f0));
  return;
}


/* WireGelsemiumProjectile::StaticNew() */

WireGelsemiumProjectile * WireGelsemiumProjectile::StaticNew(void)

{
  WireGelsemiumProjectile *this;
  
  this = ::operator_new(0x200);
  WireGelsemiumProjectile(this);
  return this;
}


/* WireGelsemiumProjectile::~WireGelsemiumProjectile() */

void __thiscall WireGelsemiumProjectile::~WireGelsemiumProjectile(WireGelsemiumProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066b3600;
  *(undefined ***)(this + 0x10) = &PTR__WireGelsemiumProjectile_066b37f0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  std::string::~string((string *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WireGelsemiumProjectile::~WireGelsemiumProjectile() */

void __thiscall WireGelsemiumProjectile::~WireGelsemiumProjectile(WireGelsemiumProjectile *this)

{
  ~WireGelsemiumProjectile(this + -0x10);
  return;
}


/* WireGelsemiumProjectile::~WireGelsemiumProjectile() */

void __thiscall WireGelsemiumProjectile::~WireGelsemiumProjectile(WireGelsemiumProjectile *this)

{
  ~WireGelsemiumProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WireGelsemiumProjectile::~WireGelsemiumProjectile() */

void __thiscall WireGelsemiumProjectile::~WireGelsemiumProjectile(WireGelsemiumProjectile *this)

{
  ~WireGelsemiumProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProjectile::onUpdate(float) */

void WireGelsemiumProjectile::onUpdate(float param_1)

{
  RtMixedPtr<Sexy::Image> *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  WireGelsemiumProjectile *in_x0;
  long *plVar4;
  SexyVector3 *this_00;
  float *pfVar5;
  long lVar6;
  PlantWireGelsemium *pPVar7;
  GridItemLightningRod *pGVar8;
  RtObject *pRVar9;
  Plant *pPVar10;
  RtMixedPtrBase *this_01;
  float fVar11;
  float fVar12;
  float fVar13;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  this = (RtMixedPtr<Sexy::Image> *)(in_x0 + 0x1c0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
    cVar1 = PlantWireGelsemium::isCreateFence(pPVar7);
    if ((cVar1 == '\0') && (*(int *)(in_x0 + 0x1ac) == 1)) goto LAB_038b2d0c;
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(in_x0 + 0x1c8));
    if (cVar1 != '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
      if (bVar2) goto LAB_038b2f74;
      goto LAB_038b2d1c;
    }
  }
  else {
LAB_038b2d0c:
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
    if (bVar2) {
LAB_038b2f74:
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      if (*(long *)(lVar6 + 0xa8) != 0) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        bVar2 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
        if (bVar2) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
          PlantWireGelsemium::setState(pPVar7,1);
        }
      }
    }
LAB_038b2d1c:
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1d0));
    (**(code **)(*plVar4 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(in_x0 + 0x1d0),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(in_x0 + 0x1c8);
  updateLineLevel(in_x0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if ((cVar1 == '\0') && (cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this), cVar1 == '\0'))
  goto LAB_038b2e90;
  bVar2 = false;
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
  fVar12 = *(float *)this_00;
  if (fVar12 == *(float *)(in_x0 + 0x1f0)) {
    fVar12 = *(float *)(this_00 + 4);
    bVar2 = fVar12 == *(float *)(in_x0 + 500);
  }
  fVar11 = (float)Sexy::SexyVector3::operator-(this_00,(SexyVector3 *)(in_x0 + 0x1f0));
  local_18 = fVar11;
  local_14 = fVar12;
  if (fVar11 == 0.0) {
    pfVar5 = (float *)Projectile::GetVelocity((Projectile *)in_x0);
    fVar13 = *pfVar5;
    if (fVar13 != 0.0) goto LAB_038b2dd0;
    fVar13 = pfVar5[1];
    fVar11 = fVar12;
    if (0.0 < fVar13) goto joined_r0x038b2ef8;
joined_r0x038b2f00:
    if (((0.0 <= fVar13) || (0.0 < fVar11)) && (!bVar2)) goto LAB_038b2e90;
  }
  else {
    pfVar5 = (float *)Projectile::GetVelocity((Projectile *)in_x0);
    fVar13 = *pfVar5;
LAB_038b2dd0:
    if (fVar13 <= 0.0) goto joined_r0x038b2f00;
joined_r0x038b2ef8:
    if (fVar11 < 0.0) goto joined_r0x038b2f00;
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
  cVar1 = PlantWireGelsemium::isCreateFence(pPVar7);
  if (cVar1 == '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    PlantWireGelsemium::createFence((BoardEntity *)pPVar7);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    pRVar9 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    bVar2 = Sexy::RtObject::IsA<Plant>(pRVar9);
    if (bVar2) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = FUN_038a8c28(*(undefined4 *)(lVar6 + 0x50));
      if (iVar3 == 5) {
        pRVar9 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pPVar10 = Sexy::RtObject::Cast<Plant>(pRVar9);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
        PlantWireGelsemium::boostPlant(pPVar7,pPVar10);
      }
    }
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pPVar7 + 0x40));
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(pPVar7 + 0x40));
    iVar3 = FUN_038a8c84(*(undefined4 *)(lVar6 + 0x1a8));
    if (iVar3 == 0) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
      pGVar8 = (GridItemLightningRod *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(pPVar7 + 0x40));
      GridItemLightningRod::setState(pGVar8,1);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
      pGVar8 = (GridItemLightningRod *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(pPVar7 + 0x40));
      fVar11 = *(float *)(in_x0 + 0x1b0);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar12 = (float)FUN_038a8c38(*(undefined4 *)(lVar6 + 0x564));
      GridItemLightningRod::damageEntity(pGVar8,fVar12 * fVar11);
    }
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  pPVar7 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(lVar6 + 0xa8));
  FUN_038a8d60(pPVar7 + 0x58);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1d0));
  (**(code **)(*plVar4 + 0x48))();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(in_x0 + 0x1d0),(RtWeakPtr *)a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  (**(code **)(*(long *)in_x0 + 0x48))();
LAB_038b2e90:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
WireGelsemiumProjectile::OnCollideEntity(WireGelsemiumProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1d8);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_10 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar3,uVar4,aRStack_18);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar2 = 0;
    if (bVar1) goto LAB_038b3240;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_038b3240:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WireGelsemiumProjectile::onDraw(Sexy::Graphics*) */

void WireGelsemiumProjectile::onDraw(Graphics *param_1)

{
  bool bVar1;
  
  Projectile::onDraw(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x1c0));
  if (!bVar1) {
    return;
  }
  drawLightiningLine(param_1);
  return;
}

