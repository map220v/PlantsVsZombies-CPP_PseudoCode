// Class: CarrotMissile


/* CarrotMissile::onDraw(Sexy::Graphics*) */

void __thiscall CarrotMissile::onDraw(CarrotMissile *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0xb8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xb8),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::StaticClassInit() */

void CarrotMissile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarrotMissile");
    (*pcVar2)(plVar1,asStack_10,FUN_0408e418,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarrotMissile::StaticGetClass() */

long * CarrotMissile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CarrotMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarrotMissile::GetClass() const */

long * CarrotMissile::GetClass(void)

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
  (*pcVar3)(plVar1,"CarrotMissile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarrotMissile::CarrotMissile() */

void __thiscall CarrotMissile::CarrotMissile(CarrotMissile *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067ccb20;
  *(undefined ***)(this + 0x10) = &PTR__CarrotMissile_067ccd08;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc0));
  this[0xa1] = (CarrotMissile)0x0;
  this[0xa2] = (CarrotMissile)0x0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0xd4] = (CarrotMissile)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  return;
}


/* CarrotMissile::StaticNew() */

CarrotMissile * CarrotMissile::StaticNew(void)

{
  CarrotMissile *this;
  
  this = ::operator_new(0xd8);
  CarrotMissile(this);
  return this;
}


/* CarrotMissile::~CarrotMissile() */

void __thiscall CarrotMissile::~CarrotMissile(CarrotMissile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_067ccb20;
  *(undefined ***)(this + 0x10) = &PTR__CarrotMissile_067ccd08;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 0x18))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to CarrotMissile::~CarrotMissile() */

void __thiscall CarrotMissile::~CarrotMissile(CarrotMissile *this)

{
  ~CarrotMissile(this + -0x10);
  return;
}


/* CarrotMissile::~CarrotMissile() */

void __thiscall CarrotMissile::~CarrotMissile(CarrotMissile *this)

{
  ~CarrotMissile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CarrotMissile::~CarrotMissile() */

void __thiscall CarrotMissile::~CarrotMissile(CarrotMissile *this)

{
  ~CarrotMissile(this + -0x10);
  return;
}


/* CarrotMissile::canDamage(BoardEntity const*) const */

bool __thiscall CarrotMissile::canDamage(CarrotMissile *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if (param_1 == (BoardEntity *)0x0) {
    return false;
  }
  bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  if (bVar1) {
    return true;
  }
  bVar1 = Sexy::RtObject::IsA<GridItemArmrack>((RtObject *)param_1);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::createDropEffect(bool) */

void __thiscall CarrotMissile::createDropEffect(CarrotMissile *this,bool param_1)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  PopAnimRig *pPVar2;
  char *__s;
  StandaloneEffect *pSVar3;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xb8) = this_00;
  if (this[0xd4] == (CarrotMissile)0x0) {
    __s = "POPANIM_EFFECTS_CARROT_MISSILE_DROP";
  }
  else {
    __s = "POPANIM_EFFECTS_CARROT_MISSILE_DROP_AVATAR";
  }
  std::string::string(asStack_70,__s);
  GetPAMByName(asStack_70);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xb8),true);
  pSVar3 = *(StandaloneEffect **)(this + 0xb8);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,*(float *)(this + 0xc0),*(float *)(this + 0xc4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar3,(SexyVector3 *)aRStack_68,800000);
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0xb8),false);
  pSVar3 = *(StandaloneEffect **)(this + 0xb8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_70,
             aRStack_68);
  StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (param_1) {
    Effect_PopAnim::GetPopAnimRigPtr();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::string::string(asStack_70,"missle_boom");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onMissileAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<CarrotMissile,void(CarrotMissile::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aRStack_50,aRStack_68);
  }
  else {
    Effect_PopAnim::GetPopAnimRigPtr();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::string::string(asStack_70,"missle_in");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onMissileAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<CarrotMissile,void(CarrotMissile::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aRStack_50,aRStack_68);
  }
  PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::setState(CarrotMissile::MissileState) */

void __thiscall CarrotMissile::setState(CarrotMissile *this,undefined4 param_2)

{
  StandaloneEffect *pSVar1;
  Effect_PopAnim *pEVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0xa4) = param_2;
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(pSVar1,true);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string((string *)aVStack_18,"anim");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,(string *)aVStack_18,0);
    std::string::~string((string *)aVStack_18);
    nop();
    break;
  case 1:
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    EATextSquish::Vec3::Vec3(aVStack_18,*(float *)(this + 0xc0),*(float *)(this + 0xc4),0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)aVStack_18,800000);
    break;
  case 2:
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(pSVar1,false);
    createDropEffect(this,true);
    break;
  case 3:
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(pSVar1,false);
    createDropEffect(this,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::Activate(bool, float, int, int, float, bool) */

void __thiscall
CarrotMissile::Activate
          (CarrotMissile *this,bool param_1,float param_2,int param_3,int param_4,float param_5,
          bool param_6)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  char *__s;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xa2] != (CarrotMissile)param_1) {
    if (param_1) {
      *(float *)(this + 0xac) = param_2;
      this[0xa2] = (CarrotMissile)0x1;
      this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0);
      *(undefined4 *)(this + 0xa8) = 0;
      iVar1 = BoardTransforms::GridToBoardSpaceX(param_4);
      *(float *)(this + 0xc0) = (float)(iVar1 + -5);
      iVar1 = BoardTransforms::GridToBoardSpaceY(param_3);
      *(int *)(this + 200) = param_4;
      *(int *)(this + 0xcc) = param_3;
      this[0xd4] = (CarrotMissile)param_6;
      *(float *)(this + 0xd0) = param_5;
      *(float *)(this + 0xc4) = (float)(iVar1 + -0x1c);
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (this[0xd4] == (CarrotMissile)0x0) {
        pEVar2 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        __s = "POPANIM_EFFECTS_CARROT_MISSILE";
      }
      else {
        pEVar2 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        __s = "POPANIM_EFFECTS_CARROT_MISSILE_AVATAR";
      }
      std::string::string(asStack_18,__s);
      GetPAMByName(asStack_18);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
      Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      nop();
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Effect_PopAnim::SetCentered(pEVar2,true);
      pSVar4 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(pSVar4,false);
      pSVar4 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar4,false);
      setState(this,0);
    }
    this[0xa2] = (CarrotMissile)param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::onMissileAnimStopped(std::string const&) */

void __thiscall CarrotMissile::onMissileAnimStopped(CarrotMissile *this,string *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  StandaloneEffect *this_00;
  PlantCarrotMissile *this_01;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa4) == 1) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(this_00,false);
    setState(this,2);
    bVar3 = std::operator==(param_1,"missle_boom");
    if (!bVar3) goto LAB_0408ed64;
LAB_0408ecc8:
    bVar3 = std::operator==(param_1,"missle_in");
    if (bVar3) {
LAB_0408ed8c:
      iVar1 = *(int *)(this + 200);
      iVar2 = *(int *)(this + 0xcc);
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"carrotmissile");
      Board::AddPlant(this_02,iVar1,iVar2,asStack_10,-1,false,false,false,false);
      std::string::~string(asStack_10);
      nop();
      nop();
      PlantCarrotMissile::PlayIdleAnim(this_01,(bool)this[0xd4]);
    }
  }
  else {
    bVar3 = std::operator==(param_1,"missle_boom");
    if (bVar3) goto LAB_0408ecc8;
LAB_0408ed64:
    bVar3 = std::operator==(param_1,"missle_in");
    if (!bVar3) goto LAB_0408ecf8;
    bVar3 = std::operator==(param_1,"missle_in");
    if (bVar3) goto LAB_0408ed8c;
  }
  MessageRouter::Post<CarrotMissile*,CarrotMissile*>
            ((MessageRouter *)gMessageRouter,Message::MissileDropped,this);
LAB_0408ecf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::onAnimStopped(StandaloneEffect*) */

void __thiscall CarrotMissile::onAnimStopped(CarrotMissile *this,StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  StandaloneEffect *this_00;
  UIWidget *this_01;
  long lVar4;
  PlantCarrotMissile *this_02;
  Board *this_03;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa4) == 1) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(this_00,false);
    setState(this,2);
  }
  nop();
  lVar4 = UIWidget::GetAtlasImage(this_01);
  lVar4 = FUN_0408bf38(*(undefined8 *)(lVar4 + 0x20));
  FUN_05475d88(asStack_18,lVar4 + 0x48);
  bVar3 = std::operator==(asStack_18,"missle_boom");
  if (bVar3) {
    bVar3 = std::operator==(asStack_18,"missle_in");
    if (bVar3) {
LAB_0408ef44:
      iVar1 = *(int *)(this + 200);
      iVar2 = *(int *)(this + 0xcc);
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"carrotmissile");
      Board::AddPlant(this_03,iVar1,iVar2,asStack_10,-1,false,false,false,false);
      std::string::~string(asStack_10);
      nop();
      nop();
      PlantCarrotMissile::PlayIdleAnim(this_02,(bool)this[0xd4]);
    }
  }
  else {
    bVar3 = std::operator==(asStack_18,"missle_in");
    if (!bVar3) goto LAB_0408eee0;
    bVar3 = std::operator==(asStack_18,"missle_in");
    if (bVar3) goto LAB_0408ef44;
  }
  MessageRouter::Post<CarrotMissile*,CarrotMissile*>
            ((MessageRouter *)gMessageRouter,Message::MissileDropped,this);
LAB_0408eee0:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarrotMissile::onUpdate() */

void __thiscall CarrotMissile::onUpdate(CarrotMissile *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  string *psVar7;
  StandaloneEffect *this_00;
  PopAnimRig *this_01;
  ulong uVar8;
  undefined8 *puVar9;
  Zombie *this_02;
  Zombie *extraout_x0;
  CarrotMissileSubsystem *pCVar10;
  ulong uVar11;
  Board *pBVar12;
  float fVar13;
  float fVar14;
  DamageInfo *pDVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Point aPStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0xb8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xb8));
  }
  if (this[0xa2] == (CarrotMissile)0x0) goto LAB_0408f0d4;
  if (*(int *)(this + 0xa4) != 0) {
    if ((*(int *)(this + 0xa4) == 2) && (this[0xa1] == (CarrotMissile)0x0)) {
      fVar13 = *(float *)(this + 0xc0);
      fVar14 = *(float *)(this + 0xc4);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      pDVar15._0_4_ = (DamageInfo *)(*(float *)(this + 0xd0) * 1800.0);
      if (this[0xd4] != (CarrotMissile)0x0) {
        pDVar15._0_4_ = (DamageInfo *)((float)pDVar15._0_4_ * 1.5);
      }
      uVar11 = 0;
      Sexy::Point::Point((Point *)aRStack_88,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar15._0_4_,local_80,uStack_7c,(DamageInfo *)asStack_68,1,0,(Point *)aRStack_88,0
                );
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar4 = operator|(2,4);
      Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_88,(float)(int)fVar13,(float)(int)fVar14);
      EntityFinder::GetEntitiesTouchingCircle2D
                ((float)iVar3 * 1.44,(FastCurve *)&local_80,uVar4,(Point *)aRStack_88,
                 *(int *)(this + 0xcc) + -1,*(int *)(this + 0xcc) + 1);
      while( true ) {
        uVar1 = CONCAT44(uStack_7c,local_80);
        uVar8 = FUN_0408bf90(uVar1,local_78);
        if (uVar8 <= uVar11) break;
        puVar9 = (undefined8 *)FUN_0408bf9c(uVar1,uVar11);
        this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
        if (this_02 == (Zombie *)0x0) {
          FUN_0408bf9c(CONCAT44(uStack_7c,local_80),uVar11);
          nop();
          cVar2 = (**(code **)(*(long *)extraout_x0 + 0x200))();
          this_02 = extraout_x0;
          if (cVar2 != '\0') goto LAB_0408f3f0;
          uVar11 = uVar11 + 1;
        }
        else {
          cVar2 = Zombie::IsOnGround(this_02);
          if ((((cVar2 == '\0') || (cVar2 = RealObject::IsOnTeam(this_02,2), cVar2 == '\0')) ||
              (cVar2 = (**(code **)(*(long *)this_02 + 0x328))(this_02), cVar2 != '\0')) ||
             (cVar2 = (**(code **)(*(long *)this_02 + 0x330))(this_02), cVar2 != '\0')) {
            uVar11 = uVar11 + 1;
          }
          else {
LAB_0408f3f0:
            uVar11 = uVar11 + 1;
            (**(code **)(*(long *)this_02 + 0x110))(this_02,(DamageInfo *)asStack_68);
          }
        }
      }
      this[0xa1] = (CarrotMissile)0x1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    goto LAB_0408f0d4;
  }
  lVar5 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar13 = (float)FUN_0408be9c(*(undefined4 *)(lVar5 + 0x3c));
  fVar14 = *(float *)(this + 0xac);
  fVar13 = fVar13 + *(float *)(this + 0xa8);
  *(float *)(this + 0xa8) = fVar13;
  if (fVar13 < fVar14) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_68,*(float *)(this + 0xc0),
               (fVar13 / fVar14) * *(float *)(this + 0xc4),0.0);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)asStack_68,800000);
  }
  else {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Plant_Squash_Impact");
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_68,"carrotmissile");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
    std::string::~string(asStack_68);
    nop();
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_90,*(int *)(this + 200),*(int *)(this + 0xcc));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_98);
    cVar2 = Board::CanPlantAt(pBVar12,aPStack_90,aRStack_88);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
LAB_0408f1dc:
      setState(this,2);
    }
    else {
      pCVar10 = Board::GetGameSubSystem<CarrotMissileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)&local_80);
      cVar2 = CarrotMissileSubsystem::HasMissileOnSameSquare(pCVar10,asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      if (cVar2 != '\0') goto LAB_0408f1dc;
      setState(this,3);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Effect_PopAnim::GetPopAnimRigPtr();
  this_01 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  lVar5 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar13 = (float)FUN_0408be98(*(undefined4 *)(lVar5 + 0x38));
  lVar5 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar14 = (float)FUN_0408be9c(*(undefined4 *)(lVar5 + 0x3c));
  PopAnimRig::UpdateAnim(this_01,fVar13,fVar14);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
LAB_0408f0d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

