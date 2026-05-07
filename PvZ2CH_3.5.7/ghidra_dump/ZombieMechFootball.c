// Class: ZombieMechFootball


/* ZombieMechFootball::ApplyZombieFood() */

void __thiscall ZombieMechFootball::ApplyZombieFood(ZombieMechFootball *this)

{
  Zombie::ApplyZombieFood((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieMechFootball::ClearPlaybackParams(int) */

void __thiscall ZombieMechFootball::ClearPlaybackParams(ZombieMechFootball *this,int param_1)

{
  uchar uVar1;
  
  if (param_1 != 1) {
    return;
  }
  uVar1 = (char)this + '@';
  PlaybackController::RemoveParam(uVar1);
  PlaybackController::RemoveParam(uVar1);
  PlaybackController::RemoveParam(uVar1);
  PlaybackController::RemoveParam(uVar1);
  return;
}


/* ZombieMechFootball::shouldPush() */

bool __thiscall ZombieMechFootball::shouldPush(ZombieMechFootball *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = Zombie::isInState((Zombie *)this,4);
  bVar1 = false;
  if (cVar2 == '\0') {
    lVar3 = (**(code **)(*(long *)this + 0x228))(this);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


/* ZombieMechFootball::updateState_Walk() */

void __thiscall ZombieMechFootball::updateState_Walk(ZombieMechFootball *this)

{
  char cVar1;
  
  cVar1 = shouldPush(this);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* ZombieMechFootball::onAnimStopped(std::string const&) */

void __thiscall ZombieMechFootball::onAnimStopped(ZombieMechFootball *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"plantfood");
  if ((bVar1) && (cVar2 = Zombie::isInState((Zombie *)this,0x21), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x4b8))(this);
    Zombie::setZombieState((Zombie *)this,1,0);
    return;
  }
  return;
}


/* ZombieMechFootball::updateState_Push() */

void __thiscall ZombieMechFootball::updateState_Push(ZombieMechFootball *this)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsAnimFinished(uVar2,*(undefined4 *)(this + 0x814));
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::canPushPlant(Plant*) */

void __thiscall ZombieMechFootball::canPushPlant(ZombieMechFootball *this,Plant *param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==(asStack_18,"magicbeans");
  if (bVar1) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0;
    if (param_1 != (Plant *)0x0) {
      bVar2 = FUN_046a115c(*(undefined4 *)(param_1 + 0x1d0));
      bVar2 = bVar2 ^ 1;
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* ZombieMechFootball::CanTarget(BoardEntity*) */

byte __thiscall ZombieMechFootball::CanTarget(ZombieMechFootball *this,BoardEntity *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  Plant *this_00;
  long *extraout_x0;
  
  bVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1);
  if (bVar1 != 0) {
    if (param_1 == (BoardEntity *)0x0) {
      return bVar1;
    }
    bVar2 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar2) {
      nop();
      cVar3 = Plant::CanBeTargeted(this_00);
      if (cVar3 != '\0') {
        bVar1 = Plant::IsInvincible(this_00,false);
        return bVar1 ^ 1;
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (!bVar2) {
        Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        return bVar1;
      }
      nop();
      cVar3 = (**(code **)(*extraout_x0 + 0x218))();
      if (cVar3 != '\0') {
        bVar1 = (**(code **)(*extraout_x0 + 0x1f8))(extraout_x0);
        return bVar1 ^ 1;
      }
    }
  }
  return 0;
}


/* ZombieMechFootball::ZombieMechFootball() */

void __thiscall ZombieMechFootball::ZombieMechFootball(ZombieMechFootball *this)

{
  ZombieMech::ZombieMech((ZombieMech *)this);
  *(undefined4 *)(this + 0x814) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068a8740;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMechFootball_068a91a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x818));
  return;
}


/* ZombieMechFootball::StaticNew() */

ZombieMechFootball * ZombieMechFootball::StaticNew(void)

{
  ZombieMechFootball *this;
  
  this = ::operator_new(0x830);
  ZombieMechFootball(this);
  return this;
}


/* ZombieMechFootball::~ZombieMechFootball() */

void __thiscall ZombieMechFootball::~ZombieMechFootball(ZombieMechFootball *this)

{
  *(undefined ***)this = &PTR_GetClass_068a8740;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMechFootball_068a91a0;
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0x818));
  ZombieMech::~ZombieMech((ZombieMech *)this);
  return;
}


/* non-virtual thunk to ZombieMechFootball::~ZombieMechFootball() */

void __thiscall ZombieMechFootball::~ZombieMechFootball(ZombieMechFootball *this)

{
  ~ZombieMechFootball(this + -0x10);
  return;
}


/* ZombieMechFootball::~ZombieMechFootball() */

void __thiscall ZombieMechFootball::~ZombieMechFootball(ZombieMechFootball *this)

{
  ~ZombieMechFootball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMechFootball::~ZombieMechFootball() */

void __thiscall ZombieMechFootball::~ZombieMechFootball(ZombieMechFootball *this)

{
  ~ZombieMechFootball(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::onEnterState_Push(ZombieState) */

void ZombieMechFootball::onEnterState_Push(Zombie *param_1)

{
  undefined4 uVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombieMechFootballProps *pZVar3;
  code *pcVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x168);
  std::string::string(asStack_40,"eat");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = (*pcVar4)(pZVar2,asStack_40,0,aDStack_38);
  *(undefined4 *)(param_1 + 0x814) = uVar1;
  std::string::~string(asStack_40);
  nop();
  pZVar3 = Zombie::GetProps<ZombieMechFootballProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar3 + 0x230),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::ThrowBall(Sexy::SexyVector3 const&) */

void __thiscall ZombieMechFootball::ThrowBall(ZombieMechFootball *this,SexyVector3 *param_1)

{
  ZombieMechFootballProps *pZVar1;
  float *pfVar2;
  Projectile *this_00;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombieMechFootballProps>((Zombie *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,160.0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = pfVar2[2];
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(pZVar1 + 0x228));
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(local_18 + fVar4),fVar5,local_14 + fVar6,uVar3,aRStack_10,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this_00,param_1,*(float *)(pZVar1 + 0x244),*(float *)(pZVar1 + 0x248));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::findAndPushPlant() */

void __thiscall ZombieMechFootball::findAndPushPlant(ZombieMechFootball *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RtObject *this_00;
  PlantGroup *this_01;
  undefined8 *puVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar7;
  GridItem *this_03;
  CurlingItem *pCVar8;
  ZombieMechFootballProps *pZVar9;
  Zombie *this_04;
  undefined8 local_98;
  BoardEntityPusher aBStack_90 [40];
  ZombieMechFootball *local_68;
  undefined4 local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::isInState((Zombie *)this,4);
  if ((cVar2 != '\0') ||
     (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 == (RtObject *)0x0))
  goto LAB_046a1d3c;
  std::string::string((string *)&local_68,"Play_Zomb_Future_Football_Mvmt_Fling");
  BoardEntityPusher::BoardEntityPusher(aBStack_90,(BoardEntity *)this,(string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
  if (this_01 == (PlantGroup *)0x0) {
LAB_046a1e60:
    this_03 = Sexy::RtObject::Cast<GridItem>(this_00);
    if (this_03 == (GridItem *)0x0) {
      this_04 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (this_04 != (Zombie *)0x0) {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        pZVar9 = Zombie::GetProps<ZombieMechFootballProps>((Zombie *)this);
        local_60 = *(undefined4 *)(pZVar9 + 0x240);
        local_68 = this;
        iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_04);
        iVar5 = SharkMinion::getRow((SharkMinion *)this);
        Sexy::Point::Point((Point *)&local_98,iVar4,iVar5);
        local_50 = local_98;
        (**(code **)(*(long *)this_04 + 0x110))(this_04,(string *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    else {
      pCVar8 = Sexy::RtObject::Cast<CurlingItem>((RtObject *)this_03);
      if (pCVar8 == (CurlingItem *)0x0) {
        iVar4 = FUN_046a1168(*(undefined4 *)(this_03 + 0x130));
        iVar5 = FUN_046a116c(*(undefined4 *)(this_03 + 0x134));
        BoardEntityPusher::PushRowLeft(aBStack_90,iVar4,iVar5);
      }
      else {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        pZVar9 = Zombie::GetProps<ZombieMechFootballProps>((Zombie *)this);
        local_60 = *(undefined4 *)(pZVar9 + 0x240);
        (**(code **)(*(long *)this_03 + 0x110))(this_03,(string *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
  }
  else {
    puVar6 = (undefined8 *)PlantGroup::Plants();
    local_98 = FUN_046a189c(*puVar6);
    local_68 = (ZombieMechFootball *)FUN_046a18ec(puVar6[1]);
    bVar1 = false;
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_98,(__normal_iterator *)&local_68), bVar3)
    {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      if (*(long *)(lVar7 + 0xa8) != 0) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        bVar3 = Sexy::RtObject::IsA<PlantOlivePit>(*(RtObject **)(lVar7 + 0xa8));
        if (bVar3) {
          bVar1 = true;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
    }
    cVar2 = PlantGroup::CanAttackRelocateGroup(this_01,(BoardEntity *)this);
    if ((cVar2 == '\0') && (!bVar1)) goto LAB_046a1e60;
    iVar4 = FUN_046a1174(*(undefined4 *)(this_01 + 0xa4));
    iVar5 = FUN_046a1178(*(undefined4 *)(this_01 + 0xa8));
    BoardEntityPusher::PushRowLeft(aBStack_90,iVar4,iVar5);
  }
  BoardEntityPusher::~BoardEntityPusher(aBStack_90);
LAB_046a1d3c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieMechFootball::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  ZombieMechFootballProps *pZVar2;
  SexyVector3 *pSVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"push");
  if (bVar1) {
    findAndPushPlant((ZombieMechFootball *)param_1);
  }
  else {
    bVar1 = std::operator==(param_4,"fire");
    if (bVar1) {
      pZVar2 = Zombie::GetProps<ZombieMechFootballProps>((Zombie *)param_1);
      RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar2 + 0x238),0.0);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x818));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x818));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        pSVar3 = (SexyVector3 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        ThrowBall((ZombieMechFootball *)param_1,pSVar3);
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_18);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::pushGridItem(GridItem*) */

void __thiscall ZombieMechFootball::pushGridItem(ZombieMechFootball *this,GridItem *param_1)

{
  int iVar1;
  GridItemBrain *pGVar2;
  GridItemPlantShield *this_00;
  long lVar3;
  ZombieMechFootball *local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (GridItem *)0x0) {
    pGVar2 = Sexy::RtObject::Cast<GridItemBrain>((RtObject *)param_1);
    if ((pGVar2 == (GridItemBrain *)0x0) ||
       (iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this), 0 < iVar1)) {
      this_00 = Sexy::RtObject::Cast<GridItemPlantShield>((RtObject *)param_1);
      if (this_00 != (GridItemPlantShield *)0x0) {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        lVar3 = *(long *)this_00;
        local_68 = this;
        if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
          local_60 = GridItem::GetHitpoints((GridItem *)this_00);
        }
        else {
          local_60 = (**(code **)(lVar3 + 0x1d8))();
          lVar3 = *(long *)this_00;
        }
        local_58 = 0x20;
        (**(code **)(lVar3 + 0x110))(this_00,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    else {
      (**(code **)(*(long *)param_1 + 0x230))(param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::pushRow(int, int) */

void __thiscall ZombieMechFootball::pushRow(ZombieMechFootball *this,int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  Plant *pPVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  Board *pBVar9;
  int iVar10;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar10 = param_1;
  if (-1 < param_1) {
    iVar3 = param_1;
    do {
      iVar1 = iVar3;
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_20,"");
      pPVar5 = (Plant *)Board::GetPlantAt(pBVar9,iVar1,param_2,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      if (pPVar5 == (Plant *)0x0) break;
      cVar4 = canPushPlant(this,pPVar5);
      if (cVar4 == '\0') goto LAB_046a2354;
      iVar3 = iVar1 + -1;
      iVar10 = iVar1;
    } while (iVar1 != 0);
    if (param_1 < iVar10) goto LAB_046a2354;
  }
  do {
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_20,"");
    pPVar5 = (Plant *)Board::GetPlantAt(pBVar9,iVar10,param_2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if ((pPVar5 != (Plant *)0x0) &&
       (cVar4 = FUN_046a115c(*(undefined4 *)(pPVar5 + 0x1d0)), cVar4 == '\0')) {
      ZombieModernSolarTruck::pushPlant((ZombieModernSolarTruck *)this,pPVar5);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar10,param_2,(vector *)&local_20);
    uVar8 = 0;
    while( true ) {
      uVar2 = local_20;
      uVar7 = FUN_046a1184(local_20,local_18);
      if (uVar7 <= uVar8) break;
      puVar6 = (undefined8 *)FUN_046a1190(uVar2,uVar8);
      pushGridItem(this,(GridItem *)*puVar6);
      uVar8 = uVar8 + 1;
    }
    iVar10 = iVar10 + 1;
    std::vector<GridItem*,std::allocator<GridItem*>>::~vector
              ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
  } while (iVar10 <= param_1);
LAB_046a2354:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::FindFireTarget() */

void ZombieMechFootball::FindFireTarget(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Zombie *in_x0;
  float *pfVar5;
  int *piVar6;
  undefined8 uVar7;
  BoardEntity **ppBVar8;
  ulong uVar9;
  undefined8 uVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [2];
  int local_28;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_30,200,0xa0,800,600);
  iVar3 = Zombie::GetFacing(in_x0);
  if (iVar3 == 0) {
    local_38 = (ulong)local_38._4_4_ << 0x20;
    local_30[0] = 200;
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)in_x0);
    local_20[0] = (int)(*pfVar5 - 280.0);
    piVar6 = eastl::max_alt<int>((int *)&local_38,local_20);
    local_28 = *piVar6;
  }
  else {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)in_x0);
    local_38 = (ulong)local_38._4_4_ << 0x20;
    local_30[0] = (int)(*pfVar5 + 80.0);
    local_20[0] = (int)(800.0 - *pfVar5);
    piVar6 = eastl::max_alt<int>((int *)&local_38,local_20);
    local_28 = *piVar6;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  uVar7 = operator|(1,4);
  uVar4 = operator|(uVar7,2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,uVar4,
             (Insets *)local_30,0xffffffff,0xffffffff);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    ppBVar8 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    cVar2 = CanTarget((ZombieMechFootball *)in_x0,*ppBVar8);
    if (cVar2 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,ppBVar8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  uVar9 = FUN_046a1198(*(undefined8 *)in_x8,*(undefined8 *)(in_x8 + 8));
  if (3 < uVar9) {
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)in_x8);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar7,uVar10);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)in_x8);
    local_50 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_58,3);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_50);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_38,(__normal_iterator *)&local_48);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase();
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::onEnterState_Throw(ZombieState) */

void ZombieMechFootball::onEnterState_Throw
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,Zombie *param_4)

{
  vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  SexyVector3 *pSVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  RtMixedPtr aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(param_4 + 0x818);
  plVar4 = (long *)Zombie::GetAnimRig(param_4);
  pcVar7 = *(code **)(*plVar4 + 0x170);
  std::string::string((string *)&local_68,"plantfood");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string((string *)local_78,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtId *)&local_80,(string *)local_78);
  (*pcVar7)(plVar4,(string *)&local_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)local_78);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  std::string::~string((string *)&local_68);
  nop();
  std::string::string((string *)&local_68,"Play_Zomb_PVP_Football_Skill");
  RealObject::PlayPositionalSound((RealObject *)param_4,(string *)&local_68,0.0);
  std::string::~string((string *)&local_68);
  nop();
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::clear(this);
  cVar1 = FUN_046a1170(param_4[0x174]);
  if (cVar1 == '\0') {
    uVar9 = 10;
    FindFireTarget();
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_68);
    local_78[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)local_78), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
      ;
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)*puVar5);
      PlaybackController::SetParam((PlaybackController *)(param_4 + 0x140),(uchar)uVar9,pSVar6);
      uVar9 = uVar9 + 1 & 0xff;
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)*puVar5);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back(this,pSVar6);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    PlaybackController::SetParam((PlaybackController *)(param_4 + 0x140),'\x01',uVar9 - 10);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  }
  else {
    iVar8 = 0;
    DVec3::DVec3((DVec3 *)local_78);
    iVar3 = PlaybackController::GetParamInt((PlaybackController *)(param_4 + 0x140),'\x01');
    if (0 < iVar3) {
      do {
        cVar1 = (char)iVar8;
        iVar8 = iVar8 + 1;
        local_68 = PlaybackController::GetParamVector3
                             ((PlaybackController *)(param_4 + 0x140),cVar1 + '\n');
        local_64 = param_2;
        local_60 = param_3;
        Sexy::SexyVector3::operator=((SexyVector3 *)local_78,(SexyVector3 *)&local_68);
        std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                  (this,(SexyVector3 *)local_78);
      } while (iVar8 != iVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechFootball::StaticClassInit() */

void ZombieMechFootball::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieMechFootball");
      (*pcVar4)(plVar1,asStack_150,FUN_046a2bac,0x830,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMechFootball,void(ZombieMechFootball::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieMechFootball,void(ZombieMechFootball::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMechFootball,void(ZombieMechFootball::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MF_Push");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a28a8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMechFootball,void(ZombieMechFootball::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieMechFootball,void(ZombieMechFootball::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMechFootball,void(ZombieMechFootball::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MF_Throw");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a28a8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMechFootball::StaticGetClass() */

long * ZombieMechFootball::StaticGetClass(void)

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
  uVar2 = ZombieMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechFootball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechFootball::GetClass() const */

long * ZombieMechFootball::GetClass(void)

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
  uVar2 = ZombieMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechFootball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

