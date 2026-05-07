// Class: Card


/* Card::longPress(Sexy::Touch const&) */

void __thiscall Card::longPress(Card *this,Touch *param_1)

{
  long *plVar1;
  
  DButton::longPress((DButton *)this,param_1);
  plVar1 = *(long **)(this + 0x240);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  }
  return;
}


/* Card::GetCardObject() */

RtWeakPtr<Sexy::SoundResource> * Card::GetCardObject(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x260));
  return in_x8;
}


/* Card::SetTutorialGrid(Sexy::Point const&) */

void __thiscall Card::SetTutorialGrid(Card *this,Point *param_1)

{
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)param_1;
  return;
}


/* Card::TryUse(int, int) */

undefined1 __thiscall Card::TryUse(Card *this,int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if ((param_1 < iVar2) && (-1 < param_1)) {
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    if ((param_2 < iVar2) && (-1 < param_2)) {
      uVar1 = (**(code **)(*(long *)this + 0x420))(this,param_1);
      return uVar1;
    }
  }
  return 0;
}


/* Card::GetManager() */

undefined8 __thiscall Card::GetManager(Card *this)

{
  return *(undefined8 *)(this + 0x2a8);
}


/* Card::SetHandPosition(int) */

void __thiscall Card::SetHandPosition(Card *this,int param_1)

{
  *(int *)(this + 0x2b0) = param_1;
  (**(code **)(*(long *)this + 0x100))();
  return;
}


/* Card::~Card() */

void __thiscall Card::~Card(Card *this)

{
  *(undefined ***)this = &PTR__Card_0665c4c0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665c908;
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)(this + 0x268));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  DButton::~DButton((DButton *)this);
  return;
}


/* Card::~Card() */

void __thiscall Card::~Card(Card *this)

{
  ~Card(this);
  AK::FreeHook(this);
  return;
}


/* Card::getRect() */

void Card::getRect(void)

{
  long in_x0;
  Rectangle *in_x8;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Sexy::SexyMath::Fabs(*(float *)(in_x0 + 0xf0));
  fVar2 = (float)Sexy::SexyMath::Fabs(*(float *)(in_x0 + 0xf4));
  EA::Text::Rectangle::Rectangle
            (in_x8,(*(float *)(in_x0 + 0xe8) + fVar1 * 20.0) -
                   fVar1 * *(float *)(in_x0 + 0xe0) * *(float *)(in_x0 + 0xc0),
             *(float *)(in_x0 + 0xec) - fVar2 * *(float *)(in_x0 + 0xe4) * *(float *)(in_x0 + 0xc4),
             fVar1 * (*(float *)(in_x0 + 0xe0) + -10.0),fVar2 * *(float *)(in_x0 + 0xe4));
  return;
}


/* Card::gatherCardInfo(CardUIInfo&) */

void __thiscall Card::gatherCardInfo(Card *this,CardUIInfo *param_1)

{
  CardObject *this_00;
  CardUIInfo *pCVar1;
  
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  pCVar1 = (CardUIInfo *)CardObject::GetCardUIInfo(this_00);
  CardUIInfo::operator=(param_1,pCVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::generate(CardUIInfo const&) */

void __thiscall Card::generate(Card *this,CardUIInfo *param_1)

{
  DTransformNode *pDVar1;
  long *plVar2;
  undefined8 uVar3;
  DRefPtr<DSpriteNode> aDStack_28 [8];
  DRefPtr<DSpriteNode> aDStack_20 [8];
  DRefPtr<DSpriteNode> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_28);
  pDVar1 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_28);
  std::string::string(asStack_10,"cardNormalNode");
  plVar2 = (long *)DTransformNode::setName(pDVar1,asStack_10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x110))(0,0);
  std::string::~string(asStack_10);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_20);
  pDVar1 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  std::string::string(asStack_10,"cardSelectNode");
  plVar2 = (long *)DTransformNode::setName(pDVar1,asStack_10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,param_1 + 0x28);
  (**(code **)(*plVar2 + 0x110))(0,0);
  std::string::~string(asStack_10);
  nop();
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_18);
  pDVar1 = (DTransformNode *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  std::string::string(asStack_10,"cardTouchMoveNode");
  plVar2 = (long *)DTransformNode::setName(pDVar1,asStack_10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,param_1 + 0x30);
  (**(code **)(*plVar2 + 0x110))(0,0);
  std::string::~string(asStack_10);
  nop();
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_20);
  *(undefined8 *)(this + 0x2c0) = uVar3;
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_28);
  (**(code **)(*(long *)this + 0x388))(this,uVar3);
  (**(code **)(*(long *)this + 0x3b8))(this,1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_20);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::Use(Sexy::FPoint) */

void __thiscall Card::Use(Card *this,float *param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  EASquaredImpl *this_01;
  CardObject *this_02;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x260);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (EASquaredImpl *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = EASquaredImpl::IsEnabledForUser(this_01);
    if (cVar2 != '\0') {
      fVar5 = *param_2;
      fVar4 = param_2[1];
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::Point::Point(aPStack_10,(int)fVar5,(int)fVar4);
      CardObject::SetTargetPosition(uVar3,aPStack_10);
    }
    this_02 = (CardObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    CardObject::UseCard(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Card::GetCost() */

void __thiscall Card::GetCost(Card *this)

{
  bool bVar1;
  CardObject *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x260));
  if (!bVar1) {
    return;
  }
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  CardObject::GetCost(this_00);
  return;
}


/* Card::DisplayCursor(Sexy::Touch const&) */

void __thiscall Card::DisplayCursor(Card *this,Touch *param_1)

{
  bool bVar1;
  CardObject *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x260));
  if (!bVar1) {
    return;
  }
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  CardObject::TryToAddCursor(this_00,param_1);
  return;
}


/* Card::IsConsumable() */

void __thiscall Card::IsConsumable(Card *this)

{
  bool bVar1;
  CardObject *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x260));
  if (!bVar1) {
    return;
  }
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  CardObject::IsExhaust(this_00);
  return;
}


/* Card::SetCursorVisible(bool) */

void __thiscall Card::SetCursorVisible(Card *this,bool param_1)

{
  bool bVar1;
  CardObject *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x260));
  if (!bVar1) {
    return;
  }
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  CardObject::SetCursorVisible(this_00,param_1);
  return;
}


/* Card::GetValidRange(Sexy::TRect<int>&) */

void __thiscall Card::GetValidRange(Card *this,TRect *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long extraout_x0;
  RtObject *this_00;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x260));
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
    this_00 = *(RtObject **)(lVar3 + 0x18);
    if ((this_00 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<GridTargetAdaptor>(this_00), bVar2)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x10));
      nop();
      if (extraout_x0 != 0) {
        uVar1 = *(undefined8 *)(extraout_x0 + 0x2c);
        *(undefined8 *)param_1 = *(undefined8 *)(extraout_x0 + 0x24);
        *(undefined8 *)(param_1 + 8) = uVar1;
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::InsideTouch(Sexy::Touch const&) */

void __thiscall Card::InsideTouch(Card *this,Touch *param_1)

{
  long *plVar1;
  float local_20;
  float local_1c;
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x238) == DTransformNode::getParent) {
    plVar1 = (long *)DTransformNode::getParent((DTransformNode *)this);
  }
  else {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x238))();
  }
  (**(code **)(*plVar1 + 0xb0))(&local_20,plVar1,param_1);
  (**(code **)(*(long *)this + 0x3c8))(aTStack_18,this);
  Sexy::TRect<float>::Contains(aTStack_18,local_20,local_1c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Card::Card() */

void __thiscall Card::Card(Card *this)

{
  DButton::DButton((DButton *)this);
  *(undefined ***)this = &PTR__Card_0665c4c0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665c908;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x260));
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)(this + 0x268));
  Sexy::Point::Point((Point *)(this + 0x2b8));
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2b0) = 0xffffffff;
  *(undefined4 *)(this + 0x2b4) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::Init(CardBoardMgr*, int, int) */

void __thiscall Card::Init(Card *this,CardBoardMgr *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x2b0) = param_3;
  *(CardBoardMgr **)(this + 0x2a8) = param_1;
  *(int *)(this + 0x2b4) = param_2;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::CreateCardObject(iVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x260),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2b8) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::TryUse(Sexy::FPoint) */

void __thiscall Card::TryUse(Card *this,TPoint *param_2)

{
  char cVar1;
  undefined1 uVar2;
  CardBoardMgr *this_00;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x2b8) == -1) || (*(int *)(this + 700) == -1)) {
LAB_0357d734:
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
    plVar4 = *(long **)(lVar3 + 0x18);
    if (plVar4 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar4 + 0x60);
      Sexy::Point::Point((Point *)&local_10,(int)*(float *)param_2,(int)*(float *)(param_2 + 4));
      cVar1 = (*pcVar5)(plVar4,(Point *)&local_10);
      if (cVar1 != '\0') {
        pcVar5 = *(code **)(*(long *)this + 0x428);
        Sexy::FPoint::FPoint((FPoint *)&local_10,param_2);
        uVar2 = (*pcVar5)(this,(Point *)&local_10);
        goto LAB_0357d6fc;
      }
    }
  }
  else {
    this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    CardBoardMgr::ConvertBoardPositionIntoBoardGrid
              (this_00,*(float *)param_2,*(float *)(param_2 + 4));
    if ((*(int *)(this + 0x2b8) == local_10) && (*(int *)(this + 700) == local_c))
    goto LAB_0357d734;
  }
  uVar2 = 0;
LAB_0357d6fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::Use(int, int) */

void __thiscall Card::Use(Card *this,int param_1,int param_2)

{
  UINewPVPTopZombieQueue *this_00;
  CardBoardMgr *pCVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    UINewPVPTopZombieQueue::gettItem(this_00,0);
    pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::GetPlantType();
    CardBoardMgr::TryAddPlantAt(pCVar1,aRStack_10,param_1,param_2,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::setDisableEffect(DTransformNode*) */

void __thiscall Card::setDisableEffect(Card *this,DTransformNode *param_1)

{
  bool bVar1;
  long lVar2;
  vector *pvVar3;
  undefined8 *puVar4;
  RenderEffectDefinition *pRVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)param_1 + 0x220) == DTransformNode::getChildrenCount) {
    lVar2 = DTransformNode::getChildrenCount(param_1);
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1 + 0x220))();
  }
  if (lVar2 != 0) {
    if (*(code **)(*(long *)param_1 + 0x228) == DTransformNode::getChildren) {
      pvVar3 = (vector *)DTransformNode::getChildren(param_1);
    }
    else {
      pvVar3 = (vector *)(**(code **)(*(long *)param_1 + 0x228))();
    }
    local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar3);
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar3);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar6 = (long *)*puVar4;
      pcVar7 = *(code **)(*plVar6 + 0x2d8);
      pRVar5 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                         ((CachedResourcePtr *)&DAT_06aa6e20);
      (*pcVar7)(plVar6,pRVar5);
      setDisableEffect(this,(DTransformNode *)*puVar4);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Card::_copy() const */

DSpriteNode * __thiscall Card::_copy(Card *this)

{
  DSpriteNode *this_00;
  
  this_00 = ::operator_new(0x158);
  DSpriteNode::DSpriteNode(this_00);
  DSpriteNode::operator=(this_00,*(DSpriteNode **)(this + 0x2c0));
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::Generate(Sexy::RtWeakPtr<CardType>) */

void Card::Generate(DRefPtr<DSpriteNode> *param_1,undefined8 param_2,RtWeakPtr *param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  DTransformNode *pDVar5;
  long *plVar6;
  char *pcVar7;
  CardGameBoardConfig *pCVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  string asStack_170 [8];
  string asStack_168 [8];
  string asStack_160 [8];
  DRefPtr<DSpriteNode> aDStack_158 [8];
  DRefPtr<DSpriteNode> aDStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  DRefPtr<DSpriteNode> aDStack_138 [8];
  string asStack_130 [8];
  DRefPtr<DSpriteNode> aDStack_128 [8];
  DRefPtr<DStringNode> aDStack_120 [8];
  DRefPtr<DStringNode> aDStack_118 [8];
  string asStack_110 [8];
  DRefPtr<DSpriteNode> aDStack_108 [8];
  string asStack_100 [8];
  DRefPtr<DSpriteNode> aDStack_f8 [8];
  DRefPtr<DStringNode> aDStack_f0 [8];
  DRefPtr<DStringNode> aDStack_e8 [8];
  DVec2 aDStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  float local_c0;
  float local_bc;
  DString aDStack_b8 [16];
  DString aDStack_a8 [16];
  DString aDStack_98 [16];
  string asStack_88 [16];
  string asStack_78 [16];
  float local_68;
  float local_64;
  string asStack_58 [4];
  float local_54;
  TGALogPurchaseData aTStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSpriteNode>::DRefPtr(param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3);
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    TGALogPurchaseData::TGALogPurchaseData(aTStack_48,(TGALogPurchaseData *)(lVar3 + 200));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    uVar1 = *(uint *)(lVar3 + 0x40);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardRarityPrefix");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_RARITY_");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_170,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DString::DString(aDStack_b8);
    uVar4 = FUN_0547429c(asStack_170);
    DString::format((char *)aDStack_b8,&DAT_055b5ce0,uVar4,(ulong)uVar1);
    pDVar5 = (DTransformNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1)
    ;
    std::string::string((string *)&local_68,"cardBackgroundNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,(string *)&local_68);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)DString::c_str(aDStack_b8);
    std::string::string(asStack_58,pcVar7);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_58);
    (**(code **)(*plVar6 + 0x110))(0,0);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    uVar1 = *(uint *)(lVar3 + 0x20);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardCostPrefix");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_COST_");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_168,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DString::DString(aDStack_a8);
    uVar4 = FUN_0547429c(asStack_168);
    DString::format((char *)aDStack_a8,&DAT_055b5ce0,uVar4,(ulong)uVar1);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardCostLabel");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_COST_LABEL");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_160,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_158);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    std::string::string(asStack_88,"costLabelNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,asStack_88);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)FUN_0547429c(asStack_160);
    std::string::string(asStack_78,pcVar7);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_78);
    pcVar11 = *(code **)(*plVar6 + 0x110);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardCostLabelOffsetX");
    uVar12 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_68,10.0);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_58,"CardCostLabelOffsetY");
    uVar13 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_58,10.0);
    plVar6 = (long *)(*pcVar11)(uVar12,uVar13,plVar6);
    (**(code **)(*plVar6 + 0x130))(0,0);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_88);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_150);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
    std::string::string(asStack_78,"costNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,asStack_78);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)DString::c_str(aDStack_a8);
    std::string::string((string *)&local_68,pcVar7);
    plVar6 = (long *)(*pcVar11)(plVar6,(string *)&local_68);
    pcVar11 = *(code **)(*plVar6 + 0x108);
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    (**(code **)(*plVar9 + 0xd0))(asStack_58,0x3f000000,0x3f000000);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_58);
    (**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
    std::string::~string((string *)&local_68);
    nop();
    std::string::~string(asStack_78);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_150);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_158);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    FUN_05475d88(asStack_148,lVar3 + 0x18);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardHeadshotrefix");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_HEADSHOT_");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_140,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DString::DString(aDStack_98);
    uVar4 = FUN_0547429c(asStack_140);
    DString::DString((DString *)&local_68,asStack_148);
    DString::makeUpper();
    uVar10 = DString::c_str((DString *)asStack_58);
    DString::format((char *)aDStack_98,&DAT_055b5df8,uVar4,uVar10);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)&local_68);
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_138);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_138);
    std::string::string((string *)&local_68,"headshotNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,(string *)&local_68);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)DString::c_str(aDStack_98);
    std::string::string(asStack_58,pcVar7);
    (*pcVar11)(plVar6,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_138);
    (**(code **)(*plVar6 + 0x218))(asStack_58);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_138);
    pcVar11 = *(code **)(*plVar6 + 0x108);
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    (**(code **)(*plVar9 + 0xd0))(asStack_88,0x3f000000,0x3f000000);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_78,"CardHeadshotOffsetY");
    fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_78,25.0);
    DVec2::DVec2((DVec2 *)&local_68,0.0,fVar14 - local_54);
    DVec2::operator+((DVec2 *)asStack_88,(DVec2 *)&local_68);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_58);
    (**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
    std::string::~string(asStack_78);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_138);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardNameLabel");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_NAME_LABEL");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_130,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_128);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
    std::string::string(asStack_d0,"nameLabelNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,asStack_d0);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)FUN_0547429c(asStack_130);
    std::string::string(asStack_c8,pcVar7);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_c8);
    pcVar11 = *(code **)(*plVar6 + 0x108);
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    (**(code **)(*plVar9 + 0xd0))((DVec2 *)&local_c0,0x3f000000,0x3f000000);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_88,"CardNameLabelOffsetX");
    fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_88,7.0);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_78,"CardNameLabelOffsetY");
    fVar15 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_78,-15.0);
    DVec2::DVec2((DVec2 *)&local_68,fVar14,fVar15);
    DVec2::operator+((DVec2 *)&local_c0,(DVec2 *)&local_68);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_58);
    (**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_88);
    nop();
    std::string::~string(asStack_c8);
    nop();
    std::string::~string(asStack_d0);
    nop();
    DString::DString((DString *)asStack_88);
    DString::DString((DString *)&local_68,asStack_148);
    DString::makeUpper();
    uVar4 = DString::c_str((DString *)asStack_58);
    DString::format((char *)asStack_88,&DAT_055b5ea0,uVar4);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)&local_68);
    DRefPtr<DStringNode>::DRefPtr(aDStack_120);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
    pcVar11 = *(code **)(*plVar6 + 0x330);
    uVar4 = DString::c_str((DString *)asStack_88);
    plVar6 = (long *)(*pcVar11)(plVar6,uVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x348))
                               (plVar6,PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,1);
    pcVar11 = *(code **)(*plVar6 + 0x108);
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
    (**(code **)(*plVar9 + 0xd0))(asStack_d0,0x3f000000,0x3f000000);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_c8,"CardNameStringOffsetY");
    fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_c8,17.0);
    DVec2::DVec2((DVec2 *)&local_c0,0.0,fVar14);
    DVec2::operator+((DVec2 *)asStack_d0,(DVec2 *)&local_c0);
    plVar6 = (long *)(*pcVar11)(plVar6,asStack_78);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
    pcVar11 = *(code **)(*plVar6 + 0x138);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardNameStringWidth");
    uVar12 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_68,200.0);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_58,"CardNameStringHeight");
    uVar13 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_58,60.0);
    plVar6 = (long *)(*pcVar11)(0,0,uVar12,uVar13,plVar6);
    (**(code **)(*plVar6 + 600))(plVar6,1);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    std::string::~string(asStack_c8);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_120);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_128);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    DString::DString((DString *)asStack_78);
    DString::DString((DString *)&local_68,asStack_148);
    DString::makeUpper();
    uVar4 = DString::c_str((DString *)asStack_58);
    DString::format((char *)asStack_78,"[%s_DES]",uVar4);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)&local_68);
    DRefPtr<DStringNode>::DRefPtr(aDStack_118);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_118);
    pcVar11 = *(code **)(*plVar6 + 0x330);
    uVar4 = DString::c_str((DString *)asStack_78);
    plVar6 = (long *)(*pcVar11)(plVar6,uVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x348))(plVar6,PrimeText_Game::Typeface_FZCuYuan_18);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,1);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x358))(plVar6,1);
    pcVar11 = *(code **)(*plVar6 + 0x108);
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    (**(code **)(*plVar9 + 0xd0))(aDStack_e0,0x3f000000,0x3f000000);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_d8,"CardDesStringOffsetX");
    fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_d8,8.0);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_d0,"CardDesStringOffsetY");
    fVar15 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_d0,58.0);
    DVec2::DVec2((DVec2 *)asStack_c8,fVar14,fVar15);
    DVec2::operator+(aDStack_e0,(DVec2 *)asStack_c8);
    plVar6 = (long *)(*pcVar11)(plVar6,(DVec2 *)&local_c0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x270))(plVar6,0x66,0x37,0,0xff);
    pcVar11 = *(code **)(*plVar6 + 0x138);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardDesStringWidth");
    uVar12 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_68,150.0);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_58,"CardDesStringHeight");
    uVar13 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_58,130.0);
    plVar6 = (long *)(*pcVar11)(0,0,uVar12,uVar13,plVar6);
    (**(code **)(*plVar6 + 600))(plVar6,1);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    std::string::~string(asStack_d0);
    nop();
    std::string::~string(asStack_d8);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_118);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    fVar15 = *(float *)(lVar3 + 0x108);
    fVar16 = *(float *)(lVar3 + 0x10c);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardAttack");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_ATTACK");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_110,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_108);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
    std::string::string((string *)&local_68,"attackLabelNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,(string *)&local_68);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)FUN_0547429c(asStack_110);
    std::string::string(asStack_58,pcVar7);
    (*pcVar11)(plVar6,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    (**(code **)(*plVar6 + 0x218))((DVec2 *)&local_c0);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
    (**(code **)(*plVar6 + 0x218))((string *)&local_68);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_58,"CardAttackLabelOffsetY");
    fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_58,10.0);
    fVar14 = (local_bc - local_64) - fVar14;
    std::string::~string(asStack_58);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
    pcVar11 = *(code **)(*plVar6 + 0x110);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_58,"CardAttackLabelOffsetX");
    uVar4 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_58,24.0);
    plVar6 = (long *)(*pcVar11)(uVar4,fVar14,plVar6);
    (**(code **)(*plVar6 + 0x130))(0,0);
    std::string::~string(asStack_58);
    nop();
    if (fVar15 != 0.0) {
      DRefPtr<DStringNode>::DRefPtr(aDStack_e8);
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
      pcVar11 = *(code **)(*plVar6 + 0x338);
      DString::DString((DString *)asStack_58,(int)fVar15);
      uVar4 = DString::c_str((DString *)asStack_58);
      plVar6 = (long *)(*pcVar11)(plVar6,uVar4);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x348))
                                 (plVar6,PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,1);
      pcVar11 = *(code **)(*plVar6 + 0x108);
      plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
      (**(code **)(*plVar9 + 0xd0))(aDStack_e0,0x3f000000,0x3f000000);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string(asStack_d8,"CardAttackStringOffsetY");
      fVar15 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_d8,19.0);
      DVec2::DVec2((DVec2 *)asStack_d0,0.0,fVar15);
      DVec2::operator+(aDStack_e0,(DVec2 *)asStack_d0);
      plVar6 = (long *)(*pcVar11)(plVar6,asStack_c8);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
      pcVar11 = *(code **)(*plVar6 + 0x138);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_c0,"CardAttackStringWidth");
      uVar12 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_c0,100.0);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_68,"CardAttackStringHeight");
      uVar13 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_68,60.0);
      plVar6 = (long *)(*pcVar11)(0,0,uVar12,uVar13,plVar6);
      (**(code **)(*plVar6 + 600))(plVar6,1);
      std::string::~string((string *)&local_68);
      nop();
      std::string::~string((string *)&local_c0);
      nop();
      std::string::~string(asStack_d8);
      nop();
      DString::~DString((DString *)asStack_58);
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
      (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_e8);
    }
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_108);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    uVar4 = CardBoardMgr::GetConfig();
    std::string::string((string *)&local_68,"CardLife");
    std::string::string(asStack_58,"IMAGE_UI_CARD_GAME_CARDS_LIFE");
    CardGameBoardConfig::GetCardUIConfigValue(asStack_100,uVar4,(string *)&local_68,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_f8);
    pDVar5 = (DTransformNode *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
    std::string::string((string *)&local_68,"lifeLabelNode");
    plVar6 = (long *)DTransformNode::setName(pDVar5,(string *)&local_68);
    pcVar11 = *(code **)(*plVar6 + 0x2e8);
    pcVar7 = (char *)FUN_0547429c(asStack_100);
    std::string::string(asStack_58,pcVar7);
    (*pcVar11)(plVar6,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string((string *)&local_68);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    (**(code **)(*plVar6 + 0x218))((DVec2 *)&local_c0);
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
    (**(code **)(*plVar6 + 0x218))((string *)&local_68);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
    std::string::string(asStack_58,"CardLifeLabelOffsetX");
    fVar15 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_58,13.0);
    std::string::~string(asStack_58);
    nop();
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x110))((local_c0 - local_68) - fVar15,fVar14);
    (**(code **)(*plVar6 + 0x130))(0,0);
    if (fVar16 != 0.0) {
      DRefPtr<DStringNode>::DRefPtr(aDStack_f0);
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
      pcVar11 = *(code **)(*plVar6 + 0x338);
      DString::DString((DString *)&local_68,(int)fVar16);
      uVar4 = DString::c_str((DString *)&local_68);
      plVar6 = (long *)(*pcVar11)(plVar6,uVar4);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x348))
                                 (plVar6,PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x350))(plVar6,1);
      pcVar11 = *(code **)(*plVar6 + 0x108);
      plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
      (**(code **)(*plVar9 + 0xd0))(aDStack_e8,0x3f000000,0x3f000000);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)aDStack_e0,"CardLifeStringOffsetY");
      fVar14 = (float)CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)aDStack_e0,18.0);
      DVec2::DVec2((DVec2 *)asStack_d8,0.0,fVar14);
      DVec2::operator+((DVec2 *)aDStack_e8,(DVec2 *)asStack_d8);
      plVar6 = (long *)(*pcVar11)(plVar6,asStack_d0);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x130))(0x3f000000,0x3f000000);
      pcVar11 = *(code **)(*plVar6 + 0x268);
      Sexy::Color::Color((Color *)asStack_58,4);
      plVar6 = (long *)(*pcVar11)(plVar6,asStack_58);
      pcVar11 = *(code **)(*plVar6 + 0x138);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string(asStack_c8,"CardLifeStringWidth");
      uVar12 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,asStack_c8,100.0);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      pCVar8 = (CardGameBoardConfig *)CardBoardMgr::GetConfig();
      std::string::string((string *)&local_c0,"CardLifeStringHeight");
      uVar13 = CardGameBoardConfig::GetCommonConfigValue(pCVar8,(string *)&local_c0,60.0);
      plVar6 = (long *)(*pcVar11)(0,0,uVar12,uVar13,plVar6);
      (**(code **)(*plVar6 + 600))(plVar6,1);
      std::string::~string((string *)&local_c0);
      nop();
      std::string::~string(asStack_c8);
      nop();
      std::string::~string((string *)aDStack_e0);
      nop();
      DString::~DString((DString *)&local_68);
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
      (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_f0);
    }
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
    (**(code **)(*plVar6 + 0x30))(plVar6,uVar4);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_f8);
    std::string::~string(asStack_100);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_108);
    std::string::~string(asStack_110);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_118);
    DString::~DString((DString *)asStack_78);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_120);
    DString::~DString((DString *)asStack_88);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_128);
    std::string::~string(asStack_130);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_138);
    DString::~DString(aDStack_98);
    std::string::~string(asStack_140);
    std::string::~string(asStack_148);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_150);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_158);
    std::string::~string(asStack_160);
    DString::~DString(aDStack_a8);
    std::string::~string(asStack_168);
    DString::~DString(aDStack_b8);
    std::string::~string(asStack_170);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aTStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::CloneImgNode() */

void Card::CloneImgNode(void)

{
  long *in_x0;
  long lVar1;
  long *plVar2;
  exception_ptr *in_x8;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x4c));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar1 + 0x10));
  Generate();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get(in_x8);
  pcVar3 = *(code **)(*plVar2 + 0x110);
  uVar4 = (**(code **)(*in_x0 + 0x1c0))();
  uVar5 = (**(code **)(*in_x0 + 0x1c8))();
  (*pcVar3)(uVar4,uVar5,plVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::SetDisabledNode(bool) */

void __thiscall Card::SetDisabledNode(Card *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  RenderEffectDefinition *pRVar6;
  code *pcVar7;
  exception_ptr aeStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar1 + 0x10));
  Generate(aeStack_18,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
  (**(code **)(*plVar2 + 0x110))(0,0);
  if (param_1) {
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
    std::string::string((string *)aRStack_10,"costNode");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)aRStack_10);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      pcVar7 = *(code **)(*(long *)pDVar5 + 0x2d8);
      pRVar6 = CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                         ((CachedResourcePtr *)&DAT_06aa6e20);
      (*pcVar7)(pDVar5,pRVar6);
    }
  }
  uVar3 = std::__exception_ptr::exception_ptr::_M_get(aeStack_18);
  (**(code **)(*(long *)this + 0x3a0))(this,uVar3);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::GeneratePreview(Sexy::RtWeakPtr<CardType>) */

void __thiscall Card::GeneratePreview(Card *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  undefined8 uVar2;
  CompiledMap aCStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Generate(aCStack_18,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_18);
  if (cVar1 != '\0') {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_18);
    (**(code **)(*(long *)this + 0x388))(this,uVar2);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::InitPreview(int) */

void __thiscall Card::InitPreview(Card *this,int param_1)

{
  bool bVar1;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x2b4) = param_1;
  local_8 = ___stack_chk_guard;
  CardUtils::GetCardType((CardUtils *)(ulong)(uint)param_1,(int)___stack_chk_guard);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    GeneratePreview(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Card::Generate() */

void __thiscall Card::Generate(Card *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  long lVar2;
  DTransformNode *this_01;
  long *plVar3;
  CardObject *this_02;
  undefined8 uVar4;
  code *pcVar5;
  CompiledMap aCStack_28 [8];
  exception_ptr aeStack_20 [8];
  DRefPtr<DSpriteNode> aDStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x260);
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar2 + 0x10));
  Generate(aCStack_28,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar2 + 0x10));
  Generate(aeStack_20,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_28);
  if (cVar1 != '\0') {
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_18);
    this_01 = (DTransformNode *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
    std::string::string((string *)aRStack_10,"cardTouchMoveNode");
    plVar3 = (long *)DTransformNode::setName(this_01,(string *)aRStack_10);
    pcVar5 = *(code **)(*plVar3 + 0x2e8);
    this_02 = (CardObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar2 = CardObject::GetCardUIInfo(this_02);
    plVar3 = (long *)(*pcVar5)(plVar3,lVar2 + 0x30);
    (**(code **)(*plVar3 + 0x110))(0,0);
    std::string::~string((string *)aRStack_10);
    nop();
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_28);
    *(undefined8 *)(this + 0x2c0) = uVar4;
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_28);
    (**(code **)(*(long *)this + 0x388))(this,uVar4);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get(aeStack_20);
    (**(code **)(*(long *)this + 0x390))(this,uVar4);
    (**(code **)(*(long *)this + 0x3b8))(this,1);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_20);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

