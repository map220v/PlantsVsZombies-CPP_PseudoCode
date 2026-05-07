// Class: EliminateItem


/* EliminateItem::onBlockDamge1(StandaloneEffect*) */

void EliminateItem::onBlockDamge1(StandaloneEffect *param_1)

{
  return;
}


/* EliminateItem::CalcRenderOrder() const */

undefined8 EliminateItem::CalcRenderOrder(void)

{
  return 0x61e68;
}


/* non-virtual thunk to EliminateItem::CalcRenderOrder() const */

void __thiscall EliminateItem::CalcRenderOrder(EliminateItem *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::StaticClassInit() */

void EliminateItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"EliminateItem");
    (*pcVar2)(plVar1,asStack_10,FUN_049fb098,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateItem::StaticGetClass() */

long * EliminateItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EliminateItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateItem::GetClass() const */

long * EliminateItem::GetClass(void)

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
  (*pcVar3)(plVar1,"EliminateItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateItem::IsSelect() */

EliminateItem __thiscall EliminateItem::IsSelect(EliminateItem *this)

{
  return this[0xb0];
}


/* EliminateItem::setAlpha(bool) */

void __thiscall EliminateItem::setAlpha(EliminateItem *this,bool param_1)

{
  this[0xb2] = (EliminateItem)param_1;
  return;
}


/* EliminateItem::IsBlock() */

EliminateItem __thiscall EliminateItem::IsBlock(EliminateItem *this)

{
  return this[0xb1];
}


/* EliminateItem::CanTouchable() */

byte __thiscall EliminateItem::CanTouchable(EliminateItem *this)

{
  if (*(int *)(this + 0xac) != 5) {
    return (byte)this[0xb1] ^ 1;
  }
  return 0;
}


/* EliminateItem::IsNearByPlantFood(EliminateItem*) */

bool __thiscall EliminateItem::IsNearByPlantFood(EliminateItem *this,EliminateItem *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0xac) != 5) {
    return false;
  }
  iVar1 = *(int *)(this + 0xa8);
  iVar2 = *(int *)(param_1 + 0xa8);
  iVar3 = *(int *)(this + 0xa4);
  iVar4 = *(int *)(param_1 + 0xa4);
  if ((iVar1 != iVar2) || ((iVar3 + 1 != iVar4 && (iVar4 != iVar3 + -1)))) {
    if (iVar3 != iVar4) {
      return false;
    }
    if (iVar2 != iVar1 + 1) {
      return iVar2 == iVar1 + -1;
    }
  }
  return true;
}


/* EliminateItem::GetAttackRect() */

void EliminateItem::GetAttackRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_049f95b8(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)fVar1,(int)fVar2,0x3c,0x3c);
  return;
}


/* EliminateItem::~EliminateItem() */

void __thiscall EliminateItem::~EliminateItem(EliminateItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d1b0;
  *(undefined ***)(this + 0x10) = &PTR__EliminateItem_0692d398;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to EliminateItem::~EliminateItem() */

void __thiscall EliminateItem::~EliminateItem(EliminateItem *this)

{
  ~EliminateItem(this + -0x10);
  return;
}


/* EliminateItem::~EliminateItem() */

void __thiscall EliminateItem::~EliminateItem(EliminateItem *this)

{
  ~EliminateItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EliminateItem::~EliminateItem() */

void __thiscall EliminateItem::~EliminateItem(EliminateItem *this)

{
  ~EliminateItem(this + -0x10);
  return;
}


/* EliminateItem::EliminateItem() */

void __thiscall EliminateItem::EliminateItem(EliminateItem *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0692d1b0;
  *(undefined ***)(this + 0x10) = &PTR__EliminateItem_0692d398;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  this[0xb0] = (EliminateItem)0x0;
  this[0xb1] = (EliminateItem)0x0;
  *(undefined4 *)(this + 0xac) = 2;
  this[0xb2] = (EliminateItem)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  return;
}


/* EliminateItem::StaticNew() */

EliminateItem * EliminateItem::StaticNew(void)

{
  EliminateItem *this;
  
  this = ::operator_new(0xd0);
  EliminateItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::onDraw(Sexy::Graphics*) */

void __thiscall EliminateItem::onDraw(EliminateItem *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_48 [8];
  Color aCStack_40 [12];
  undefined4 local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar3 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_049f95b8(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_049f96f4(fVar2 + 20.0);
  fVar5 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar4 +
       (float)(int)((fVar2 - fVar4) * *(float *)(param_1 + 0x18));
  fVar2 = (float)FUN_049f96f4(uVar3 & 0xffffffff);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar5 +
       (float)(int)((fVar2 - fVar5) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  fVar2 = (float)FUN_049f96f4(0xc2b40000);
  fVar4 = (float)FUN_049f96f4(0xc28c0000);
  Sexy::Graphics::Translate(param_1,(int)fVar2,(int)fVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::GetPAMColor();
  local_34 = 0x7d;
  if (this[0xb2] == (EliminateItem)0x0) {
    local_34 = 0xff;
  }
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetPAMColor(pPVar1,aCStack_40);
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::Draw(pPVar1,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::playShowTip(bool) */

void __thiscall EliminateItem::playShowTip(EliminateItem *this,bool param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xb1] == (EliminateItem)0x0) {
    this_00 = (RtWeakPtr *)(this + 0xc0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      if (param_1) {
        pPVar2 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        std::string::string(asStack_40,"idle04");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
        std::string::~string(asStack_40);
        nop();
      }
      else {
        if (*(int *)(this + 0xac) == 5) {
          pPVar2 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          __s = "idle";
        }
        else {
          pPVar2 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          __s = "idle03";
        }
        std::string::string(asStack_40,__s);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
        std::string::~string(asStack_40);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateItem::onDestroy() */

void __thiscall EliminateItem::onDestroy(EliminateItem *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = (RtWeakPtr *)(this + 200);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* EliminateItem::onBlockDamge2(StandaloneEffect*) */

void EliminateItem::onBlockDamge2(StandaloneEffect *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  long *plVar2;
  
  this = (RtWeakPtr *)(param_1 + 200);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::onUpdate() */

void __thiscall EliminateItem::onUpdate(EliminateItem *this)

{
  bool bVar1;
  StandaloneEffect *this_00;
  PopAnimRig *this_01;
  float fVar2;
  float fVar3;
  float local_28;
  float local_24;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
  if (bVar1) {
    this_01 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_01,fVar2,fVar3);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
  if (bVar1) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,-68.0,-68.0,0.0);
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
    fVar2 = (float)FUN_049f95b8(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    fVar3 = *(float *)(this + 0x1c);
    FUN_049f95b8(*(undefined4 *)(this + 0x18),fVar3,*(undefined4 *)(this + 0x20));
    EATextSquish::Vec3::Vec3(aVStack_18,fVar2 + local_28,fVar3 + local_24,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)aVStack_18,-1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::EliminateItemInitialize(EEliminateType) */

void __thiscall EliminateItem::EliminateItemInitialize(EliminateItem *this,undefined4 param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long *plVar5;
  char *__s;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0xac) = param_2;
  this_00 = (RtWeakPtr *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  __n = aRStack_40;
  std::string::string(asStack_50,"");
  nop();
  switch(*(undefined4 *)(this + 0xac)) {
  case 0:
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_ITEM_RED",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_ITEM_BROWN",(size_t)__n);
    break;
  default:
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_ITEM_GREEN",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_ITEM_BLUE",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_ITEM_PURPLE",(size_t)__n);
    break;
  case 5:
    std::string::append(asStack_50,"POPANIM_ELIMINATE_ELIMINATE_ITEM_PLANTFOOD",(size_t)__n);
  }
  GetPAMByName(asStack_50);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (*(int *)(this + 0xac) == 5) {
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    __s = "idle";
  }
  else {
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    __s = "idle03";
  }
  std::string::string((string *)aRStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::setBlock() */

void __thiscall EliminateItem::setBlock(EliminateItem *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  long lVar6;
  PopAnimRig *pPVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float local_54;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xb1] == (EliminateItem)0x0) {
    this_00 = (RtWeakPtr *)(this + 200);
    this[0xb1] = (EliminateItem)0x1;
    *(undefined4 *)(this + 0xb4) = 2;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar8 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    }
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string((string *)&local_58,"POPANIM_ELIMINATE_ELIMINATE_ICECUBE");
    GetPAMByName((string *)&local_58);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::string::~string((string *)&local_58);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_58,-68.0,-68.0,0.0);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar9 = (float)FUN_049f95b8(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    fVar10 = *(float *)(this + 0x1c);
    FUN_049f95b8(*(undefined4 *)(this + 0x18),fVar10,*(undefined4 *)(this + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_48,fVar9 + local_58,fVar10 + local_54,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)aRStack_48,-1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_049f95a4(lVar6 + 0x1c,iVar2 + 1);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetVisibility(pSVar5,true);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string((string *)aRStack_48,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar3,aRStack_48,0);
    std::string::~string((string *)aRStack_48);
    nop();
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetKeepAlive(pSVar5,true);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
    if (bVar1) {
      pPVar7 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      std::string::string((string *)aRStack_48,"idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar7,aRStack_48,0,aDStack_38);
      std::string::~string((string *)aRStack_48);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::setSelect(bool) */

void __thiscall EliminateItem::setSelect(EliminateItem *this,bool param_1)

{
  PopAnimRig *pPVar1;
  long *plVar2;
  char *__s;
  code *pcVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0xb0] = (EliminateItem)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
    pcVar3 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_58,"idle02");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    (*pcVar3)(plVar2,asStack_58,0,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  else if (this[0xb1] == (EliminateItem)0x0) {
    if (*(int *)(this + 0xac) == 5) {
      pPVar1 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      __s = "idle";
    }
    else {
      pPVar1 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      __s = "idle03";
    }
    std::string::string(asStack_50,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::IsNearBy(EliminateItem*) */

void __thiscall EliminateItem::IsNearBy(EliminateItem *this,EliminateItem *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  EliminateModule *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar5;
  int *piVar6;
  bool bVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (EliminateItem *)0x0) <= (byte)this[0xb1]) ||
     (param_1[0xb1] != (EliminateItem)0x0)) {
    bVar7 = false;
    goto LAB_049fa71c;
  }
  bVar4 = false;
  bVar7 = bVar4;
  if ((1.0 < ABS((float)(*(int *)(param_1 + 0xa4) - *(int *)(this + 0xa4)))) ||
     (1.0 < ABS((float)(*(int *)(param_1 + 0xa8) - *(int *)(this + 0xa8))))) goto LAB_049fa71c;
  this_00 = (EliminateModule *)FUN_049fa6a4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(this + 0xa4);
  if (iVar1 == iVar2) {
    if (*(int *)(param_1 + 0xa8) + -1 == *(int *)(this + 0xa8)) {
      if (this_00 != (EliminateModule *)0x0) {
        pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)EliminateModule::GetEliminateFence(this_00);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar5);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar5);
        while (bVar4 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar4) {
          piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (((*(int *)(this + 0xa4) == piVar6[1]) && (*(int *)(this + 0xa8) == piVar6[2])) &&
             (*piVar6 == 1)) goto LAB_049fa71c;
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_18);
        }
        bVar7 = true;
        goto LAB_049fa71c;
      }
    }
    else {
      if (*(int *)(this + 0xa8) != *(int *)(param_1 + 0xa8) + 1) goto LAB_049fa79c;
      if (this_00 != (EliminateModule *)0x0) {
        pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)EliminateModule::GetEliminateFence(this_00);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar5);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar5);
        while (bVar4 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar4) {
          piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (((*(int *)(param_1 + 0xa4) == piVar6[1]) && (*(int *)(param_1 + 0xa8) == piVar6[2]))
             && (*piVar6 == 1)) goto LAB_049fa71c;
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_18);
        }
        bVar7 = true;
        goto LAB_049fa71c;
      }
    }
  }
  else {
LAB_049fa79c:
    if (iVar1 == iVar2 + 1) {
      if ((*(int *)(param_1 + 0xa8) == *(int *)(this + 0xa8)) && (this_00 != (EliminateModule *)0x0)
         ) {
        pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)EliminateModule::GetEliminateFence(this_00);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar5);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar5);
        while (bVar4 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar4) {
          piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (((piVar6[1] == *(int *)(this + 0xa4)) && (*(int *)(this + 0xa8) == piVar6[2])) &&
             (*piVar6 == 0)) goto LAB_049fa71c;
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_18);
        }
        bVar7 = true;
        goto LAB_049fa71c;
      }
    }
    else if ((iVar1 == iVar2 + -1) &&
            (iVar1 = *(int *)(this + 0xa8), iVar2 = *(int *)(param_1 + 0xa8),
            this_00 != (EliminateModule *)0x0 && iVar2 == iVar1)) {
      pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)EliminateModule::GetEliminateFence(this_00);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar5);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar5);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar7 = this_00 != (EliminateModule *)0x0 && iVar2 == iVar1, bVar3) {
        piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (((*(int *)(param_1 + 0xa4) == piVar6[1]) && (*(int *)(param_1 + 0xa8) == piVar6[2])) &&
           (bVar7 = bVar4, *piVar6 == 0)) break;
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_18);
      }
      goto LAB_049fa71c;
    }
  }
  bVar7 = true;
LAB_049fa71c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::playPlantFood() */

void __thiscall EliminateItem::playPlantFood(EliminateItem *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
    std::string::string(asStack_58,"idle03");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onPlantFoodAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::onPlantFoodAnimDone(std::string const&) */

void EliminateItem::onPlantFoodAnimDone(string *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  XMLParser *this;
  ActionSubSystem *pAVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (XMLParser *)FUN_049fa6a4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (XMLParser *)0x0) {
    DVec3::DVec3((DVec3 *)&local_60);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    local_60 = (float)((100 - iVar1) * 2);
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar2 = Sexy::XMLParser::GetCurrentLineNum(this);
    iVar3 = EliminateModule::GetPlantIndexStart((EliminateModule *)this);
    local_58 = 0;
    local_5c = (float)iVar1 * ((float)(iVar2 + iVar3) + 0.5) + 160.0;
    pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
    std::string::string(asStack_70,"onPlantFoodEliminateDone");
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
              (aRStack_50,aRStack_78,asStack_70);
    ActionSubSystem::AddActionMoveTo
              ((ActionSubSystem *)0x3e4ccccd,pAVar4,aRStack_68,(DVec3 *)&local_60,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_70);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateItem::takeBlockDamge() */

void __thiscall EliminateItem::takeBlockDamge(EliminateItem *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  PlantOlivePit *this_01;
  Effect_PopAnim *pEVar4;
  StandaloneEffect *pSVar5;
  PopAnimRig *pPVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (PlantOlivePit *)FUN_049fa6a4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_01 == (PlantOlivePit *)0x0) {
    if (*(int *)(this + 0xb4) < 1) goto LAB_049fae0c;
    *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + -1;
  }
  else {
    iVar2 = PlantOlivePit::CalcRenderOrder(this_01);
    if ((iVar2 == *(int *)(this + 0xb8)) || (*(int *)(this + 0xb4) < 1)) goto LAB_049fae0c;
    *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + -1;
    uVar3 = PlantOlivePit::CalcRenderOrder(this_01);
    *(undefined4 *)(this + 0xb8) = uVar3;
  }
  this_00 = (RtWeakPtr *)(this + 200);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (*(int *)(this + 0xb4) == 1) {
      pEVar4 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"idle02");
      Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      pSVar5 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(pSVar5,true);
      pSVar5 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onBlockDamge1");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
                 asStack_58);
      StandaloneEffect::SetCompletionCallback(pSVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else if (*(int *)(this + 0xb4) == 0) {
      this[0xb1] = (EliminateItem)0x0;
      pEVar4 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"idle03");
      Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      pSVar5 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(pSVar5,true);
      pSVar5 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onBlockDamge2");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
                 asStack_58);
      StandaloneEffect::SetCompletionCallback(pSVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
      if (bVar1) {
        pPVar6 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
        std::string::string(asStack_58,"idle03");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
                  ((DummyInit *)aRStack_50);
        PopAnimRig::PlayAndContinue(pPVar6,asStack_58,0,aRStack_50);
        std::string::~string(asStack_58);
        nop();
      }
    }
  }
LAB_049fae0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

