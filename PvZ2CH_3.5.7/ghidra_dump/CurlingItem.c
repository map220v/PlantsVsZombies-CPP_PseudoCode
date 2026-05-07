// Class: CurlingItem


/* CurlingItem::SetGenerateIceLane(bool) */

void __thiscall CurlingItem::SetGenerateIceLane(CurlingItem *this,bool param_1)

{
  this[0x1c4] = (CurlingItem)param_1;
  return;
}


/* CurlingItem::CalcRenderOrder() const */

void __thiscall CurlingItem::CalcRenderOrder(CurlingItem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8b,uVar1,uVar2);
  return;
}


/* non-virtual thunk to CurlingItem::CalcRenderOrder() const */

void __thiscall CurlingItem::CalcRenderOrder(CurlingItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingItem::StaticClassInit() */

void CurlingItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"CurlingItem");
    (*pcVar2)(plVar1,asStack_10,FUN_04238c14,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurlingItem::StaticGetClass() */

long * CurlingItem::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"CurlingItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingItem::GetClass() const */

long * CurlingItem::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"CurlingItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingItem::~CurlingItem() */

void __thiscall CurlingItem::~CurlingItem(CurlingItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06813a90;
  *(undefined ***)(this + 0x10) = &PTR__CurlingItem_06813d70;
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to CurlingItem::~CurlingItem() */

void __thiscall CurlingItem::~CurlingItem(CurlingItem *this)

{
  ~CurlingItem(this + -0x10);
  return;
}


/* CurlingItem::~CurlingItem() */

void __thiscall CurlingItem::~CurlingItem(CurlingItem *this)

{
  ~CurlingItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CurlingItem::~CurlingItem() */

void __thiscall CurlingItem::~CurlingItem(CurlingItem *this)

{
  ~CurlingItem(this + -0x10);
  return;
}


/* CurlingItem::CurlingItem() */

void __thiscall CurlingItem::CurlingItem(CurlingItem *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  this[0x1c4] = (CurlingItem)0x0;
  *(undefined ***)this = &PTR_GetClass_06813a90;
  *(undefined ***)(this + 0x10) = &PTR__CurlingItem_06813d70;
  *(undefined4 *)(this + 0x1c8) = 0xffffffff;
  *(undefined4 *)(this + 0x1cc) = 0x3f800000;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x1d0),0.0,0.0);
  return;
}


/* CurlingItem::StaticNew() */

CurlingItem * CurlingItem::StaticNew(void)

{
  CurlingItem *this;
  
  this = ::operator_new(0x1d8);
  CurlingItem(this);
  return this;
}


/* CurlingItem::SetRenderAndCollisionOffset(Sexy::SexyVector2 const&) */

void __thiscall CurlingItem::SetRenderAndCollisionOffset(CurlingItem *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)param_1;
  return;
}


/* CurlingItem::SetDamageRate(float) */

void __thiscall CurlingItem::SetDamageRate(CurlingItem *this,float param_1)

{
  *(float *)(this + 0x1cc) = param_1;
  return;
}


/* CurlingItem::GetDamageRate() */

undefined4 __thiscall CurlingItem::GetDamageRate(CurlingItem *this)

{
  return *(undefined4 *)(this + 0x1cc);
}


/* CurlingItem::GetGenerateIceLane() */

CurlingItem __thiscall CurlingItem::GetGenerateIceLane(CurlingItem *this)

{
  return this[0x1c4];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingItem::onGridItemInitialize() */

void __thiscall CurlingItem::onGridItemInitialize(CurlingItem *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  std::string::string(asStack_10,"custom_01_big");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  std::string::string(asStack_10,"custom_01_small");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  RealObject::JoinTeam((RealObject *)this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingItem::SetAvatarIndex(int) */

void __thiscall CurlingItem::SetAvatarIndex(CurlingItem *this,int param_1)

{
  int iVar1;
  string *psVar2;
  ulong uVar3;
  PopAnimRig *pPVar4;
  char *__s;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1c8) = param_1;
  local_8 = ___stack_chk_guard;
  for (uVar5 = 0; uVar3 = FUN_04234b44(DAT_06af4400,DAT_06af4408), uVar5 < uVar3; uVar5 = uVar5 + 1)
  {
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    psVar2 = (string *)FUN_04234b50(DAT_06af4400,uVar5);
    PopAnimRig::SetLayerVisibility(pPVar4,psVar2,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  iVar1 = *(int *)(this + 0x1c8);
  if (iVar1 == 0) {
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    std::string::string((string *)aRStack_10,"custom_01_big");
    PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,true);
    std::string::~string((string *)aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    __s = "custom_01_small";
  }
  else {
    if (iVar1 == 1) {
      GridItemAnimation::GetAnimRig();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      std::string::string((string *)aRStack_10,"custom_02_big");
      PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,true);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      GridItemAnimation::GetAnimRig();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      std::string::string((string *)aRStack_10,"custom_02_small");
      PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,true);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_04236ef4;
    }
    if (iVar1 != 2) goto LAB_04236ef4;
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    std::string::string((string *)aRStack_10,"custom_03_big");
    PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,true);
    std::string::~string((string *)aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    __s = "custom_03_small";
  }
  std::string::string((string *)aRStack_10,__s);
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,true);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
LAB_04236ef4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurlingItem::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall
CurlingItem::OverrideProjectileCollision(CurlingItem *this,Projectile *param_1)

{
  CurlingCollidableProjectile *pCVar1;
  undefined8 uVar2;
  
  if (param_1 != (Projectile *)0x0) {
    pCVar1 = Sexy::RtObject::Cast<CurlingCollidableProjectile>((RtObject *)param_1);
    if (pCVar1 != (CurlingCollidableProjectile *)0x0) {
      return 0;
    }
  }
  uVar2 = BoardEntity::OverrideProjectileCollision((BoardEntity *)this,param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingItem::calcCollisionRect() */

void CurlingItem::calcCollisionRect(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_x0;
  GridItemPropertySheet *pGVar7;
  Insets *in_x8;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_10);
  iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(local_c);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (in_x8,(int)((float)iVar3 - *(float *)(in_x0 + 0x1d0)) - iVar5 / 2,
             (iVar4 + -0x19) - iVar6 / 2,iVar5,iVar6);
  pGVar7 = GridItem::GetProps<GridItemPropertySheet>();
  lVar2 = ___stack_chk_guard;
  iVar3 = *(int *)(pGVar7 + 0x18);
  iVar4 = *(int *)(pGVar7 + 0x1c);
  iVar5 = *(int *)(pGVar7 + 0x20);
  *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar7 + 0x14);
  *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar3;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar4;
  *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) + iVar5;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurlingItem::getRenderOffset() */

undefined4 __thiscall CurlingItem::getRenderOffset(CurlingItem *this)

{
  GridItemAnimationProps *pGVar1;
  undefined4 uVar2;
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  uVar2 = Sexy::SexyVector2::operator+((SexyVector2 *)(pGVar1 + 0xa8),(SexyVector2 *)(this + 0x1d0))
  ;
  return uVar2;
}

