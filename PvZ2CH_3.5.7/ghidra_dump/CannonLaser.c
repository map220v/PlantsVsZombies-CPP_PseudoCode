// Class: CannonLaser


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::StaticClassInit() */

void CannonLaser::StaticClassInit(void)

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
    std::string::string(asStack_10,"CannonLaser");
    (*pcVar2)(plVar1,asStack_10,FUN_047c4c28,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonLaser::StaticGetClass() */

long * CannonLaser::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonLaser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonLaser::GetClass() const */

long * CannonLaser::GetClass(void)

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
  (*pcVar3)(plVar1,"CannonLaser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonLaser::GetCross(Sexy::SexyVector3 const&) */

float CannonLaser::GetCross(SexyVector3 *param_1)

{
  SexyVector3 *in_x1;
  float fVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  
  fVar1 = (float)Sexy::SexyVector3::operator-(in_x1,param_1 + 0x1b8);
  fVar3 = in_s1;
  fVar2 = (float)Sexy::SexyVector3::operator-(in_x1,param_1 + 0x1c4);
  return fVar3 * fVar1 - fVar2 * in_s1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::Accept(BoardEntity*) */

void __thiscall CannonLaser::Accept(CannonLaser *this,BoardEntity *param_1)

{
  bool bVar1;
  Insets *pIVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets((Insets *)&local_18,pIVar2);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_18,(float)local_14,0.0);
  fVar3 = (float)GetCross((SexyVector3 *)this);
  if (fVar3 != 0.0) {
    EATextSquish::Vec3::Vec3(aVStack_28,(float)local_18,(float)(local_14 + local_c),0.0);
    fVar4 = (float)GetCross((SexyVector3 *)this);
    if ((fVar4 != 0.0) && (0.0 < fVar4 == 0.0 < fVar3)) {
      EATextSquish::Vec3::Vec3(aVStack_28,(float)(local_18 + local_10),(float)local_14,0.0);
      fVar3 = (float)GetCross((SexyVector3 *)this);
      if ((fVar3 != 0.0) && (0.0 < fVar3 == 0.0 < fVar4)) {
        EATextSquish::Vec3::Vec3
                  (aVStack_28,(float)(local_18 + local_10),(float)(local_14 + local_c),0.0);
        fVar4 = (float)GetCross((SexyVector3 *)this);
        if (fVar4 != 0.0) {
          bVar1 = 0.0 < fVar3 != 0.0 < fVar4;
          goto LAB_047c3e0c;
        }
      }
    }
  }
  bVar1 = true;
LAB_047c3e0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* CannonLaser::~CannonLaser() */

void __thiscall CannonLaser::~CannonLaser(CannonLaser *this)

{
  *(undefined ***)this = &PTR_GetClass_068e42f0;
  *(undefined ***)(this + 0x10) = &PTR__CannonLaser_068e44e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CannonLaser::~CannonLaser() */

void __thiscall CannonLaser::~CannonLaser(CannonLaser *this)

{
  ~CannonLaser(this + -0x10);
  return;
}


/* CannonLaser::~CannonLaser() */

void __thiscall CannonLaser::~CannonLaser(CannonLaser *this)

{
  ~CannonLaser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CannonLaser::~CannonLaser() */

void __thiscall CannonLaser::~CannonLaser(CannonLaser *this)

{
  ~CannonLaser(this + -0x10);
  return;
}


/* CannonLaser::CannonLaser() */

void __thiscall CannonLaser::CannonLaser(CannonLaser *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068e42f0;
  *(undefined ***)(this + 0x10) = &PTR__CannonLaser_068e44e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  DVec3::DVec3((DVec3 *)(this + 0x1b8));
  DVec3::DVec3((DVec3 *)(this + 0x1c4));
  uVar1 = PVZ_EOT();
  this[0x1d8] = (CannonLaser)0x0;
  *(undefined4 *)(this + 0x1d0) = uVar1;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  return;
}


/* CannonLaser::StaticNew() */

CannonLaser * CannonLaser::StaticNew(void)

{
  CannonLaser *this;
  
  this = ::operator_new(0x1e0);
  CannonLaser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::Draw(Sexy::Graphics*) */

void CannonLaser::Draw(Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  long extraout_x0;
  UIWidget *pUVar2;
  PopAnimRig *pPVar3;
  StandaloneEffect *pSVar4;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  FastCurve aFStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::getProps((Projectile *)param_1);
  nop();
  local_68[0] = boardToScreenSpace((SexyVector3 *)(param_1 + 0x1b8));
  local_60[0] = boardToScreenSpace((SexyVector3 *)(param_1 + 0x1c4));
  local_58[0] = artPointToScreenPoint((Point *)(extraout_x0 + 0x1e8));
  local_50[0] = artPointToScreenPoint((Point *)(extraout_x0 + 0x1f0));
  local_48[0] = Sexy::SexyVector2::operator-((SexyVector2 *)local_60,(SexyVector2 *)local_68);
  if (*(int *)(param_1 + 0x1dc) == 1) {
    fVar5 = (float)DVec2::getLength((DVec2 *)local_48);
    pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1b0);
    local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)local_50,(SexyVector2 *)local_58);
    fVar6 = (float)DVec2::getLength((DVec2 *)&local_38);
    fVar7 = (float)CalcAngleForVectorRepg((SexyVector2 *)local_48);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar5 / fVar6,1.0);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)local_68,(SexyVector2 *)&local_38,fVar7,(SexyVector2 *)local_58,
               (SexyVector2 *)0x1,(bool)in_w4);
    pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
    PopAnimRig::SetRenderTransform(pPVar3,aSStack_30);
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    StandaloneEffect::SetVisibility(pSVar4,true);
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    StandaloneEffect::Draw(pSVar4,in_x1);
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    StandaloneEffect::SetVisibility(pSVar4,false);
  }
  uVar8 = 0x42c00000;
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a8);
  Sexy::FastCurve::SetOutRange(aFStack_40,100.0,96.0);
  fVar5 = (float)CalcAngleForVectorRepg((SexyVector2 *)local_48);
  fVar6 = (float)FUN_047c3ab8();
  local_38 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_40,fVar6);
  local_34 = uVar8;
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)local_68,fVar5,1.0,(SexyVector2 *)&local_38,true);
  pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
  PopAnimRig::SetRenderTransform(pPVar3,aSStack_30);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  StandaloneEffect::SetVisibility(pSVar4,true);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  StandaloneEffect::Draw(pSVar4,in_x1);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  StandaloneEffect::SetVisibility(pSVar4,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to CannonLaser::Draw(Sexy::Graphics*) */

void __thiscall CannonLaser::Draw(CannonLaser *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* CannonLaser::SetTarget(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void __thiscall CannonLaser::SetTarget(CannonLaser *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  Projectile::getProps((Projectile *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b8),param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1c4),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::LoadPopanimEffect(std::string, int) */

void CannonLaser::LoadPopanimEffect
               (undefined8 param_1,undefined8 param_2,string *param_3,undefined4 param_4)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_047c3914(this + 0x1c,param_4);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::Initialise() */

void __thiscall CannonLaser::Initialise(CannonLaser *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long extraout_x0;
  UIWidget *this_00;
  PopAnimRig *pPVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::getProps((Projectile *)this);
  nop();
  FUN_05475d88(asStack_60,extraout_x0 + 0xe8);
  uVar2 = (**(code **)(*(long *)this + 200))(this);
  LoadPopanimEffect(aRStack_58,this,asStack_60,uVar2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  std::string::~string(asStack_60);
  FUN_05475d88(asStack_60,extraout_x0 + 0x1e0);
  iVar3 = (**(code **)(*(long *)this + 200))(this);
  LoadPopanimEffect(aRStack_58,this,asStack_60,iVar3 + 1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  std::string::~string(asStack_60);
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string((string *)aRStack_58,"idle");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar4,aRStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aRStack_58);
  nop();
  *(undefined4 *)(this + 0x1dc) = 0;
  fVar6 = *(float *)(extraout_x0 + 0x1f8);
  fVar5 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1d0) = fVar5 + fVar6;
  *(undefined4 *)(this + 0x1d4) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::onAnimationDone(std::string const&) */

void CannonLaser::onAnimationDone(string *param_1)

{
  int iVar1;
  UIWidget *pUVar2;
  PopAnimRig *pPVar3;
  Effect_PopAnim *pEVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x1dc);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x1dc) = 2;
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a8));
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
    std::string::string(asStack_58,"end");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop
              (pPVar3,asStack_58,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  else if (iVar1 == 2) {
    (**(code **)(*(long *)param_1 + 0x48))();
  }
  else if (iVar1 == 0) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a8));
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
    std::string::string(asStack_58,"keep");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_58,0,aDStack_50);
    std::string::~string(asStack_58);
    nop();
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1b0));
    std::string::string(asStack_58,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_58,0);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    fVar5 = (float)PVZ_T();
    *(float *)(param_1 + 0x1d0) = fVar5 + 1.6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::onUpdate(float) */

void CannonLaser::onUpdate(float param_1)

{
  string *in_x0;
  code *pcVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  pcVar1 = *(code **)(*(long *)in_x0 + 0x78);
  in_x0[0x1d8] = (string)0x0;
  local_8 = ___stack_chk_guard;
  (*pcVar1)(in_x0,in_x0 + 0x1b8);
  fVar3 = *(float *)(in_x0 + 0x1d0);
  fVar2 = (float)PVZ_T();
  if (fVar3 < fVar2) {
    std::string::string(asStack_10,"");
    onAnimationDone(in_x0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    fVar3 = *(float *)(in_x0 + 0x1d4);
    fVar2 = (float)PVZ_T();
    if ((fVar3 < fVar2) && (*(int *)(in_x0 + 0x1dc) == 1)) {
      fVar2 = (float)PVZ_T();
      in_x0[0x1d8] = (string)0x1;
      *(float *)(in_x0 + 0x1d4) = fVar2 + 0.5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaser::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   Sexy::TRect<int> const&) const */

void CannonLaser::getCollisionEntities(vector *param_1,TRect *param_2)

{
  char cVar1;
  undefined4 local_74;
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x1d8] == (vector)0x0) goto LAB_047c527c;
  local_74 = 0;
  cVar1 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,8);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,7);
    if (cVar1 != '\0') goto LAB_047c5380;
LAB_047c52dc:
    cVar1 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,0xf0);
  }
  else {
    operator|=(&local_74,4);
    cVar1 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,7);
    if (cVar1 == '\0') goto LAB_047c52dc;
LAB_047c5380:
    operator|=(&local_74,2);
    cVar1 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,0xf0);
  }
  if (cVar1 != '\0') {
    operator|=(&local_74,1);
  }
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<CannonLaser,bool(CannonLaser::*)(BoardEntity*)>(aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  EntityFinder::GetEntities(param_2,local_74,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
LAB_047c527c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

