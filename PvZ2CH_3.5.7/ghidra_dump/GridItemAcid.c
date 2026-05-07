// Class: GridItemAcid


/* GridItemAcid::CalcRenderOrder() const */

void __thiscall GridItemAcid::CalcRenderOrder(GridItemAcid *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemAcid::CalcRenderOrder() const */

void __thiscall GridItemAcid::CalcRenderOrder(GridItemAcid *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::StaticClassInit() */

void GridItemAcid::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAcid");
    (*pcVar2)(plVar1,asStack_10,FUN_0376004c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAcid::StaticGetClass() */

long * GridItemAcid::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAcid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAcid::GetClass() const */

long * GridItemAcid::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAcid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAcid::IsDevouring() */

bool __thiscall GridItemAcid::IsDevouring(GridItemAcid *this)

{
  return *(int *)(this + 0x1a8) - 3U < 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::getTransformType(Zombie*) */

void GridItemAcid::getTransformType(Zombie *param_1)

{
  long lVar1;
  int iVar2;
  Zombie *in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = Zombie::GetSizeType(in_x1);
  if (iVar2 == 0) {
    std::string::string(in_x8,"artifact_acid_small");
    nop();
  }
  else {
    iVar2 = Zombie::GetSizeType(in_x1);
    if (iVar2 == 2) {
      std::string::string(in_x8,"artifact_acid_large");
      nop();
    }
    else {
      std::string::string(in_x8,"artifact_acid_mid");
      nop();
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::GetStateAnimLabelName(GridItemAcidState) */

void GridItemAcid::GetStateAnimLabelName(string *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  char *__s;
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"idle1");
  nop();
  uVar1 = FUN_03723bf8(*(undefined4 *)(param_2 + 0x200));
  switch(uVar1) {
  case 1:
    if (param_3 == 1) {
      __s = "birth2";
    }
    else if (param_3 == 6) {
      __s = "over2";
    }
    else {
      __s = "idle2";
    }
    break;
  case 2:
    if (param_3 == 1) {
      __s = "birth3";
    }
    else if (param_3 == 6) {
      __s = "over3";
    }
    else {
      __s = "idle3";
    }
    break;
  case 3:
    if (param_3 == 1) {
      __s = "birth4";
    }
    else if (param_3 == 6) {
      __s = "over4";
    }
    else {
      __s = "idle4";
    }
    break;
  case 4:
    if (param_3 == 1) {
      __s = "birth1";
    }
    else if (param_3 == 6) {
      __s = "over1";
    }
    else {
      __s = "idle1";
    }
    break;
  default:
    goto switchD_0372d04c_default;
  }
  std::string::append(param_1,__s,(size_t)__n);
switchD_0372d04c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::createTransformEffect(Sexy::SexyVector3 const&) */

void GridItemAcid::createTransformEffect(SexyVector3 *param_1)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  SexyVector3 *in_x1;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector3::operator+(in_x1,(SexyVector3 *)&DAT_06aaf6a0);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"fumeshroom_appear");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(in_x1 + 4));
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  FUN_03723aa0(this + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::playDropEffect(bool) */

void __thiscall GridItemAcid::playDropEffect(GridItemAcid *this,bool param_1)

{
  Effect_PopAnim *this_00;
  PopAnim *pPVar1;
  char *__s;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,(float)(local_2c + -10),0.0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ACID_EFFECT");
  GetPAMByName(asStack_28);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  if (param_1) {
    __s = "drop_big";
  }
  else {
    __s = "drop";
  }
  std::string::string((string *)aRStack_20,__s);
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_18,-1);
  FUN_03723aa0(this_00 + 0x1c,0x65131);
  Effect_PopAnim::SetCentered(this_00,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAcid::GridItemAcid() */

void __thiscall GridItemAcid::GridItemAcid(GridItemAcid *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0668e2f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAcid_0668e5a8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x1b8));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x1d0));
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  return;
}


/* GridItemAcid::StaticNew() */

GridItemAcid * GridItemAcid::StaticNew(void)

{
  GridItemAcid *this;
  
  this = ::operator_new(0x208);
  GridItemAcid(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::isStraightDevouredZombie(Zombie*) */

void __thiscall GridItemAcid::isStraightDevouredZombie(GridItemAcid *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  GridItemAcidProps *pGVar3;
  undefined8 uVar4;
  string *psVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemAcidProps>();
  local_18 = FUN_037450a8(*(undefined8 *)(pGVar3 + 0x108));
  local_10 = FUN_037450f8(*(undefined8 *)(pGVar3 + 0x110));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar4);
    psVar5 = (string *)Zombie::GetTypeName(param_1);
    cVar1 = std::operator==(asStack_20,psVar5);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_03752178;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (param_1 != (Zombie *)0x0) {
    bVar2 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)param_1);
    cVar1 = '\x01';
    if (bVar2) goto LAB_03752178;
  }
  cVar1 = '\0';
LAB_03752178:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* GridItemAcid::canTransform(Zombie*) */

byte __thiscall GridItemAcid::canTransform(GridItemAcid *this,Zombie *param_1)

{
  byte bVar1;
  
  bVar1 = isStraightDevouredZombie(this,param_1);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::isZombieTypeBlacklisted(std::string const&) */

void __thiscall GridItemAcid::isZombieTypeBlacklisted(GridItemAcid *this,string *param_1)

{
  char cVar1;
  GridItemAcidProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemAcidProps>();
  local_18 = FUN_037450a8(*(undefined8 *)(pGVar2 + 0xe0));
  local_10 = FUN_037450f8(*(undefined8 *)(pGVar2 + 0xe8));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03752278:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_03752278;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* GridItemAcid::registerForEvents() */

void __thiscall GridItemAcid::registerForEvents(GridItemAcid *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAcidChanged);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GridItemAcid,void(GridItemAcid::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyAcidChanged,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyAcidReturn);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<GridItemAcid,void(GridItemAcid::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyAcidReturn,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::checkNearbyAcid(bool) */

void __thiscall GridItemAcid::checkNearbyAcid(GridItemAcid *this,bool param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar1 = iVar1 + 1;
  }
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point((Point *)&local_10,iVar1,iVar2);
  lVar3 = FUN_03755edc(local_10,local_c);
  if (lVar3 == 0) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    FUN_03723bf8(*(undefined4 *)(lVar3 + 0x200));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::initAcidType() */

void __thiscall GridItemAcid::initAcidType(GridItemAcid *this)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = checkNearbyAcid(this,true);
  iVar2 = checkNearbyAcid(this,false);
  if (iVar2 == 0 && iVar1 == 0) {
    FUN_03723bfc(this + 0x200,4);
  }
  else if ((iVar2 == 0) || (iVar1 == 0)) {
    if ((iVar2 == 0) && (iVar1 != 0)) {
      FUN_03723bfc(this + 0x200,2);
      iVar1 = *(int *)(this + 0x1a8);
      goto joined_r0x0375611c;
    }
    FUN_03723bfc(this + 0x200,1);
  }
  else {
    FUN_03723bfc(this + 0x200,3);
  }
  iVar1 = *(int *)(this + 0x1a8);
joined_r0x0375611c:
  if (iVar1 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    GetStateAnimLabelName(asStack_40,this,2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemAcid::onNotifyAcidChanged(int, int) */

void __thiscall GridItemAcid::onNotifyAcidChanged(GridItemAcid *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if ((iVar1 == param_1) && (iVar1 = SharkMinion::getRow((SharkMinion *)this), iVar1 == param_2)) {
    return;
  }
  initAcidType(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::setState(GridItemAcidState) */

void __thiscall GridItemAcid::setState(GridItemAcid *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
    initAcidType(this);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    GetStateAnimLabelName(asStack_58,this,1);
    pcVar2 = onCreated;
    goto LAB_037562ac;
  case 2:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    GetStateAnimLabelName(asStack_50,this,2);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    break;
  case 6:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    GetStateAnimLabelName(asStack_58,this,6);
    pcVar2 = onReturned;
LAB_037562ac:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar2);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemAcid,void(GridItemAcid::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
    std::string::~string(asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    break;
  case 7:
    (**(code **)(*(long *)this + 0x48))(this);
  }
  *(undefined4 *)(this + 0x1a8) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAcid::onGridItemInitialize() */

void __thiscall GridItemAcid::onGridItemInitialize(GridItemAcid *this)

{
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  return;
}


/* GridItemAcid::SetIdle() */

void __thiscall GridItemAcid::SetIdle(GridItemAcid *this)

{
  setState(this,2);
  return;
}


/* GridItemAcid::SetOccupied(bool) */

void __thiscall GridItemAcid::SetOccupied(GridItemAcid *this,bool param_1)

{
  if (!param_1) {
    SetIdle(this);
    return;
  }
  setState(this,8);
  return;
}


/* GridItemAcid::OnNotifyAcidReturn(int, int, bool) */

void __thiscall
GridItemAcid::OnNotifyAcidReturn(GridItemAcid *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if ((((iVar2 == param_1) && (iVar2 = SharkMinion::getRow((SharkMinion *)this), iVar2 == param_2))
      && (!param_3)) && (cVar1 = IsDevouring(this), cVar1 == '\0')) {
    setState(this,6);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::occupyNearbyAcid(bool) */

void __thiscall GridItemAcid::occupyNearbyAcid(GridItemAcid *this,bool param_1)

{
  int iVar1;
  int iVar2;
  GridItemAcid *this_00;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point((Point *)&local_10,iVar1 + 1,iVar2);
  this_00 = (GridItemAcid *)FUN_03755edc(local_10,local_c);
  if (this_00 != (GridItemAcid *)0x0) {
    SetOccupied(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::isNearbyAcidDevouring(bool) */

void __thiscall GridItemAcid::isNearbyAcidDevouring(GridItemAcid *this,bool param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  GridItemAcid *this_00;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = iVar2 + 1;
  }
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point((Point *)&local_10,iVar2,iVar3);
  this_00 = (GridItemAcid *)FUN_03755edc(local_10,local_c);
  if (this_00 == (GridItemAcid *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = IsDevouring(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* GridItemAcid::canDevour(Zombie*) */

ulong __thiscall GridItemAcid::canDevour(GridItemAcid *this,Zombie *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = Zombie::GetSizeType(param_1);
  if ((iVar1 == 2) || (iVar1 = Zombie::GetSizeType(param_1), iVar1 == 1)) {
    uVar3 = checkNearbyAcid(this,false);
    if ((int)uVar3 != 0) {
      uVar2 = isNearbyAcidDevouring(this,false);
      return (ulong)(uVar2 & 0xff ^ 1);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* GridItemAcid::~GridItemAcid() */

void __thiscall GridItemAcid::~GridItemAcid(GridItemAcid *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e2f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAcid_0668e5a8;
  CurveSequence<Sexy::SexyVector3>::~CurveSequence
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x1d0));
  CurveSequence<Sexy::SexyVector3>::~CurveSequence
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemAcid::~GridItemAcid() */

void __thiscall GridItemAcid::~GridItemAcid(GridItemAcid *this)

{
  ~GridItemAcid(this + -0x10);
  return;
}


/* GridItemAcid::~GridItemAcid() */

void __thiscall GridItemAcid::~GridItemAcid(GridItemAcid *this)

{
  ~GridItemAcid(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAcid::~GridItemAcid() */

void __thiscall GridItemAcid::~GridItemAcid(GridItemAcid *this)

{
  ~GridItemAcid(this + -0x10);
  return;
}


/* GridItemAcid::onCreated(std::string const&) */

void GridItemAcid::onCreated(string *param_1)

{
  undefined *this;
  int iVar1;
  int iVar2;
  
  SetIdle((GridItemAcid *)param_1);
  this = gMessageRouter;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  MessageRouter::Post<int,int,int,int>((MessageRouter *)this,Message::NotifyAcidChanged,iVar1,iVar2)
  ;
  return;
}


/* GridItemAcid::onReturned(std::string const&) */

void GridItemAcid::onReturned(string *param_1)

{
  undefined *this;
  int iVar1;
  int iVar2;
  
  setState((GridItemAcid *)param_1,7);
  this = gMessageRouter;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  MessageRouter::Post<int,int,int,int>((MessageRouter *)this,Message::NotifyAcidChanged,iVar1,iVar2)
  ;
  return;
}


/* GridItemAcid::ManualDestroy() */

void __thiscall GridItemAcid::ManualDestroy(GridItemAcid *this)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = gMessageRouter;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  MessageRouter::Post<int,int,bool,int,int,bool>
            ((MessageRouter *)puVar1,Message::NotifyAcidReturn,iVar2,iVar3,true);
  setState(this,7);
  puVar1 = gMessageRouter;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)puVar1,Message::NotifyAcidChanged,iVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::killZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall GridItemAcid::killZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  Zombie *this;
  long *plVar1;
  code *pcVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(this,false);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar1 + 0x80))(plVar1,1);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar2 = *(code **)(*plVar1 + 0x120);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
  (*pcVar2)(plVar1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::transform(Zombie*) */

void __thiscall GridItemAcid::transform(GridItemAcid *this,Zombie *param_1)

{
  string *psVar1;
  ZombieType *this_00;
  int *piVar2;
  SexyVector3 *this_01;
  SexyVector3 *pSVar3;
  long *plVar4;
  code *pcVar5;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined4 local_38 [2];
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  getTransformType((Zombie *)this);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  std::string::~string((string *)local_38);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_44 = FUN_03723b28(*(undefined4 *)(param_1 + 0x50));
  local_38[0] = 5;
  piVar2 = eastl::min_alt<int>(&local_44,(int *)local_38);
  local_30[0] = *piVar2;
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)aRStack_40);
  this_01 = (SexyVector3 *)
            (*pcVar5)(plVar4,(string *)local_38,0,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  if (this_01 != (SexyVector3 *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    BoardEntity::PlaceOnBoard(this_01);
    RealObject::JoinTeam((RealObject *)this_01,1);
    Zombie::SetFacing((Zombie *)this_01,1);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_01);
    Zombie::RiseFromGround((Zombie *)this_01,pSVar3,true);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAcid::tryTransform(Zombie*) */

char __thiscall GridItemAcid::tryTransform(GridItemAcid *this,Zombie *param_1)

{
  char cVar1;
  
  cVar1 = canTransform(this,param_1);
  if (cVar1 != '\0') {
    transform(this,param_1);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::beginDevour() */

void __thiscall GridItemAcid::beginDevour(GridItemAcid *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  GridItemAcidProps *pGVar2;
  float fVar3;
  float fVar4;
  CurveSequence<Sexy::SexyVector3> *pCVar5;
  undefined8 local_40;
  float local_38;
  Vec3 aVStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  fVar4 = *(float *)(this + 0x1e8);
  local_40 = *puVar1;
  local_38 = *(float *)(puVar1 + 1);
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  fVar3 = (float)PVZ_T();
  CurveSequence<Sexy::SexyVector3>::StartSequence
            ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar3,(SexyVector3 *)&local_40);
  pGVar2 = GridItem::GetProps<GridItemAcidProps>();
                    /* WARNING: Load size is inaccurate */
  pCVar5._0_4_ = *(CurveSequence<Sexy::SexyVector3> **)(pGVar2 + 0xf8);
  EATextSquish::Vec3::Vec3(aVStack_30,(float)local_40,local_40._4_4_,local_38 - fVar4 * 0.6666667);
  CurveSequence<Sexy::SexyVector3>::AddCurve
            (pCVar5._0_4_,aPStack_20,(SexyVector3 *)&local_40,aVStack_30,1);
  CurveSequence<Sexy::SexyVector3>::operator=
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x1b8),(CurveSequence *)aPStack_20);
  setState(this,3);
  CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::devouring() */

void __thiscall GridItemAcid::devouring(GridItemAcid *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Zombie *pZVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  undefined8 *puVar4;
  GridItemAcidProps *pGVar5;
  float fVar6;
  CurveSequence<Sexy::SexyVector3> *pCVar8;
  float fVar7;
  undefined8 local_40;
  float local_38;
  Vec3 aVStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 == '\0') || (*(float *)(this + 0x1e8) <= 0.0)) {
    SetIdle(this);
  }
  else {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = isStraightDevouredZombie(this,pZVar2);
    if (cVar1 == '\0') {
      fVar7 = *(float *)(this + 0x1e8) * 0.33333334;
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var3);
      local_40 = *puVar4;
      local_38 = *(float *)(puVar4 + 1);
      Sexy::PIInterpolator::PIInterpolator(aPStack_20);
      fVar6 = (float)PVZ_T();
      CurveSequence<Sexy::SexyVector3>::StartSequence
                ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar6,(SexyVector3 *)&local_40);
      pGVar5 = GridItem::GetProps<GridItemAcidProps>();
      fVar6 = *(float *)(pGVar5 + 0xfc);
      pGVar5 = GridItem::GetProps<GridItemAcidProps>();
      pCVar8._0_4_ = (CurveSequence<Sexy::SexyVector3> *)
                     (fVar6 - *(float *)(pGVar5 + 0xfc) * *(float *)(this + 0x1ec));
    }
    else {
      fVar7 = *(float *)(this + 0x1e8);
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var3);
      local_40 = *puVar4;
      local_38 = *(float *)(puVar4 + 1);
      Sexy::PIInterpolator::PIInterpolator(aPStack_20);
      fVar6 = (float)PVZ_T();
      CurveSequence<Sexy::SexyVector3>::StartSequence
                ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar6,(SexyVector3 *)&local_40);
      pGVar5 = GridItem::GetProps<GridItemAcidProps>();
                    /* WARNING: Load size is inaccurate */
      pCVar8._0_4_ = *(CurveSequence<Sexy::SexyVector3> **)(pGVar5 + 0x100);
    }
    EATextSquish::Vec3::Vec3(aVStack_30,(float)local_40,local_40._4_4_,local_38 - fVar7);
    CurveSequence<Sexy::SexyVector3>::AddCurve
              (pCVar8._0_4_,(CurveSequence<Sexy::SexyVector3> *)aPStack_20,&local_40,aVStack_30,1);
    CurveSequence<Sexy::SexyVector3>::operator=
              ((CurveSequence<Sexy::SexyVector3> *)(this + 0x1d0),(CurveSequence *)aPStack_20);
    setState(this,4);
    CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aPStack_20)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::tryBeginDevour(Zombie*) */

void __thiscall GridItemAcid::tryBeginDevour(GridItemAcid *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Zombie::GetSizeType(param_1);
  if ((iVar2 == 2) || (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 1)) {
    occupyNearbyAcid(this,true);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
  GridItemWaterHole::setupZombieToBeDevoured((GridItemWaterHole *)this,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::Insets::Insets((Insets *)aRStack_18);
  plVar3 = (long *)Zombie::GetAnimRig(param_1);
  (**(code **)(*plVar3 + 0x90))(plVar3,aRStack_18);
  fVar5 = (float)FUN_03728ad0(0x3f800000);
  pcVar4 = *(code **)(*(long *)param_1 + 0x378);
  *(float *)(this + 0x1e8) = fVar5 * (float)local_c;
  cVar1 = (*pcVar4)(param_1);
  if (cVar1 == '\0') {
    *(float *)(this + 0x1e8) = *(float *)(this + 0x1e8) * 0.9;
    cVar1 = isStraightDevouredZombie(this,param_1);
  }
  else {
    *(float *)(this + 0x1e8) = *(float *)(this + 0x1e8) * 0.3;
    cVar1 = isStraightDevouredZombie(this,param_1);
  }
  if (cVar1 == '\0') {
    beginDevour(this);
  }
  else {
    devouring(this);
  }
  iVar2 = Zombie::GetSizeType(param_1);
  playDropEffect(this,iVar2 == 2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::applyAcid() */

void __thiscall GridItemAcid::applyAcid(GridItemAcid *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  GridItemAcidProps *pGVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar8;
  int in_w4;
  float fVar9;
  FastCurve aFStack_48 [4];
  float local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange(aFStack_48,*pfVar5,pfVar5[1]);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar3,1,1,in_w4);
  local_44 = (float)(local_2c + local_24 / 2);
  pGVar6 = GridItem::GetProps<GridItemAcidProps>();
  fVar9 = *(float *)(pGVar6 + 0x120);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  pGVar6 = GridItem::GetProps<GridItemAcidProps>();
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar4 * SQRT(*(float *)(pGVar6 + 0x120)),avStack_20,2,aFStack_48,
             iVar3 - (int)fVar9 / 2,iVar3 + (int)fVar9 / 2);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
LAB_0378e5e4:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar7,(RealObject *)this);
    if (cVar2 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar2 = isZombieTypeBlacklisted(this,(string *)(lVar8 + 8));
      if (((((((cVar2 == '\0') &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
             (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
            (((fVar9 = (float)FUN_03723b88(*(undefined4 *)(this_00 + 0x280)), 0.0 < fVar9 &&
              (cVar2 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar2 == '\0')) &&
             ((cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0' &&
              ((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
               (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')))))))) &&
           ((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
            (((bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar1 &&
              (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1)) &&
             (cVar2 = Zombie::HasCondition(this_00,0x81), cVar2 == '\0')))))) &&
          (((bVar1 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar1 &&
            (bVar1 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00), !bVar1)) &&
           (((bVar1 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this_00), !bVar1 &&
             ((bVar1 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this_00), !bVar1 &&
              (bVar1 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this_00), !bVar1)))) &&
            (bVar1 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this_00), !bVar1))))))
         && ((((bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this_00), !bVar1 &&
               (bVar1 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this_00), !bVar1)) &&
              (bVar1 = Sexy::RtObject::IsA<ZombieAirbubble>((RtObject *)this_00), !bVar1)) &&
             (cVar2 = canDevour(this,this_00), cVar2 != '\0')))) {
        tryBeginDevour(this,this_00);
        goto LAB_0378e5e4;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcid::onUpdate() */

void GridItemAcid::onUpdate(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  GridItemAnimation *in_x0;
  ResourceInfo *pRVar3;
  Zombie *pZVar4;
  long *plVar5;
  code *pcVar6;
  CurveSequence<Sexy::SexyVector3> *this_00;
  float fVar7;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate(in_x0);
  switch(*(undefined4 *)(in_x0 + 0x1a8)) {
  case 2:
    applyAcid((GridItemAcid *)in_x0);
    break;
  case 3:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1b0));
    if (cVar1 == '\0') break;
    fVar7 = (float)PVZ_T();
    this_00 = (CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x1b8);
    cVar1 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(this_00,fVar7);
    if (cVar1 == '\0') {
      devouring((GridItemAcid *)in_x0);
      break;
    }
    goto LAB_0378e798;
  case 4:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1b0));
    if (cVar1 == '\0') break;
    fVar7 = (float)PVZ_T();
    this_00 = (CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x1d0);
    cVar1 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(this_00,fVar7);
    if (cVar1 == '\0') {
      setState();
      break;
    }
LAB_0378e798:
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1b0));
    pcVar6 = *(code **)(*plVar5 + 0x78);
    fVar7 = (float)PVZ_T();
    local_18[0] = CurveSequence<Sexy::SexyVector3>::GetValueAt(this_00,fVar7);
    (*pcVar6)(plVar5,local_18);
    break;
  case 5:
    this = (RtMixedPtrBase *)(in_x0 + 0x1b0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 == '\0') break;
    if (0.0 < *(float *)(in_x0 + 0x1f0)) {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
      tryTransform((GridItemAcid *)in_x0,(Zombie *)pRVar3);
    }
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar2 = Zombie::GetSizeType(pZVar4);
    if (iVar2 == 2) {
LAB_0378e7d4:
      occupyNearbyAcid((GridItemAcid *)in_x0,false);
    }
    else {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar2 = Zombie::GetSizeType(pZVar4);
      if (iVar2 == 1) goto LAB_0378e7d4;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this);
    killZombie();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    SetIdle((GridItemAcid *)in_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

