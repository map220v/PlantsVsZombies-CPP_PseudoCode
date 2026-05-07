// Class: ZombossDinoLaserActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::StaticClassInit() */

void ZombossDinoLaserActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDinoLaserActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047f6ef8,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDinoLaserActionHandler::StaticGetClass() */

long * ZombossDinoLaserActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDinoLaserActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDinoLaserActionHandler::GetClass() const */

long * ZombossDinoLaserActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDinoLaserActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDinoLaserActionHandler::fireOnLaserTargets(Sexy::SexyVector3, Sexy::SexyVector3) */

void ZombossDinoLaserActionHandler::fireOnLaserTargets
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  EyeLaserTracker::StartFiring((SexyVector3 *)(param_4 + 0x60),(SexyVector3 *)&local_10);
  return;
}


/* ZombossDinoLaserActionHandler::cleanup() */

void __thiscall ZombossDinoLaserActionHandler::cleanup(ZombossDinoLaserActionHandler *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::drawLaserFromTo(Sexy::Graphics*, Sexy::SexyVector3 const&,
   Sexy::SexyVector3 const&) */

void __thiscall
ZombossDinoLaserActionHandler::drawLaserFromTo
          (ZombossDinoLaserActionHandler *this,Graphics *param_1,SexyVector3 *param_2,
          SexyVector3 *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  UIWidget *pUVar2;
  long lVar3;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *this_01;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            (aFStack_20,*(float *)param_2,*(float *)(param_2 + 4) - *(float *)(param_2 + 8));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0);
  fVar9 = *(float *)(param_3 + 4) - *(float *)(param_3 + 8);
  Sexy::FastCurve::SetOutRange(aFStack_18,*(float *)param_3,fVar9);
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_18,(SexyVector2 *)aFStack_20);
  local_c = fVar9;
  fVar6 = (float)DVec2::getLength((DVec2 *)&local_10);
  pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = UIWidget::GetAtlasImage(pUVar2);
  lVar3 = FUN_047f3838(*(undefined8 *)(lVar3 + 0x20));
  iVar1 = *(int *)(lVar3 + 0x3c);
  pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = UIWidget::GetAtlasImage(pUVar2);
  lVar3 = FUN_047f3838(*(undefined8 *)(lVar3 + 0x20));
  fVar7 = (float)FUN_047f3a7c((float)iVar1 * *(float *)(lVar3 + 0x28));
  fVar8 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
  fVar8 = acosf(fVar8);
  if (0.0 <= fVar9) {
    fVar8 = -fVar8;
  }
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar4,param_2,-1);
  this_01 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Effect_PopAnim::SetOrientation(this_01,fVar8 + 3.1415927);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar5 + 0xb8))(fVar6 / fVar7,0x3f800000);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar4,true);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::Draw(pSVar4,param_1);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar4,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar8 + 3.1415927);
}


/* ZombossDinoLaserActionHandler::onLaserEndEnded(std::string const&) */

void ZombossDinoLaserActionHandler::onLaserEndEnded(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *pZVar1;
  
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pZVar1 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  (**(code **)(*(long *)pZVar1 + 0xa80))(pZVar1,0x24);
  cleanup((ZombossDinoLaserActionHandler *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombossDinoLaserActionHandler::AddToRenderQueue
          (ZombossDinoLaserActionHandler *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLaser);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ZombossDinoLaserActionHandler,void(ZombossDinoLaserActionHandler::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,500000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::spawnLaserFireAt(Sexy::Point) */

void __thiscall
ZombossDinoLaserActionHandler::spawnLaserFireAt(ZombossDinoLaserActionHandler *this,TPoint *param_2)

{
  GridSquareLaser *this_00;
  ZombossHydraSprayActionDefinition *pZVar1;
  undefined8 uVar2;
  GridSquareLaser *pGVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::Create<GridSquareLaser>();
  Sexy::Point::Point(aPStack_10,param_2);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
                    /* WARNING: Load size is inaccurate */
  pGVar3._0_4_ = *(GridSquareLaser **)(pZVar1 + 0x38);
  uVar2 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  GridSquareLaser::StartLaserEffect(pGVar3._0_4_,this_00,aPStack_10,uVar2);
  GridSquareLaser::doDamage(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDinoLaserActionHandler::ZombossDinoLaserActionHandler() */

void __thiscall
ZombossDinoLaserActionHandler::ZombossDinoLaserActionHandler(ZombossDinoLaserActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068f6d40;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x28));
  this[0x5c] = (ZombossDinoLaserActionHandler)0x0;
  *(undefined4 *)(this + 0x58) = 10;
  EyeLaserTracker::EyeLaserTracker((EyeLaserTracker *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  return;
}


/* ZombossDinoLaserActionHandler::StaticNew() */

ZombossDinoLaserActionHandler * ZombossDinoLaserActionHandler::StaticNew(void)

{
  ZombossDinoLaserActionHandler *this;
  
  this = ::operator_new(0xb8);
  ZombossDinoLaserActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::initLaser() */

void __thiscall ZombossDinoLaserActionHandler::initLaser(ZombossDinoLaserActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMechDinoProps *pZVar1;
  Effect_PopAnim *pEVar2;
  PopAnim *pPVar3;
  Effect_PopAnim *pEVar4;
  float local_20;
  float local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetProps<ZombieZombossMechDinoProps>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)&local_20);
                    /* WARNING: Load size is inaccurate */
  EyeLaserTracker::SetOwningZombie
            (*(EyeLaserTracker **)(pZVar1 + 0x2a8),*(undefined4 *)(pZVar1 + 0x2ac),this + 0x60,
             aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBOSS_DINO_BEAM");
  GetPAMByName((string *)&local_20);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(pEVar2,1.0,0.5);
  std::string::string((string *)aRStack_18,"laser_beam");
  pEVar4._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar2,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBOSS_DINO_BEAM_HIT");
  GetPAMByName((string *)&local_20);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"laser_hit");
  Effect_PopAnim::PlayLoopingAnimation(pEVar4._0_4_,pEVar2,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar2,false);
  FUN_047f391c(pEVar2 + 0x1c);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.5,0.55);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(pEVar2,local_20,local_1c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::onLaserStartEnded(std::string const&) */

void ZombossDinoLaserActionHandler::onLaserStartEnded(string *param_1)

{
  uint uVar1;
  uint uVar2;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieZombossMechDinoProps *pZVar3;
  ZombieHydraHeadAnimRig *this_01;
  int iVar4;
  long lVar5;
  code *pcVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_18 [4];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  initLaser((ZombossDinoLaserActionHandler *)param_1);
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar3 = Zombie::GetProps<ZombieZombossMechDinoProps>((Zombie *)this_00);
  lVar5 = *(long *)this_00;
  uVar1 = *(uint *)(pZVar3 + 0x2b8);
  param_1[0x5c] = (string)0x1;
  pcVar6 = *(code **)(lVar5 + 400);
  *(uint *)(param_1 + 0x58) = uVar1 + 1;
  uVar2 = *(uint *)(pZVar3 + 700);
  (*pcVar6)(auStack_18,this_00);
  iVar4 = (int)pcVar6;
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)uVar1,local_14 + 1,iVar4);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)uVar2,local_14 + 1,iVar4);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_38,(float)local_48,(float)local_44,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)local_40,(float)local_3c,0.0);
  fireOnLaserTargets(local_38,local_34,local_30,local_28,local_24,local_20,param_1);
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ZombieAnimRig_ZombossMech_Dino::PlayLaserLoop((ZombieAnimRig_ZombossMech_Dino *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDinoLaserActionHandler::calculateLaserBeamStartPosition(Sexy::Point&) */

void __thiscall
ZombossDinoLaserActionHandler::calculateLaserBeamStartPosition
          (ZombossDinoLaserActionHandler *this,Point *param_1)

{
  int iVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieZombossMechDinoProps *pZVar2;
  float *pfVar3;
  float fVar4;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar2 = Zombie::GetProps<ZombieZombossMechDinoProps>((Zombie *)this_01);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_01);
  iVar1 = *(int *)(pZVar2 + 0x2b4);
  fVar4 = pfVar3[1];
  *(int *)param_1 = (int)((float)*(int *)(pZVar2 + 0x2b0) + *pfVar3);
  *(int *)(param_1 + 4) = (int)(fVar4 + (float)iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::drawLaser(Sexy::Graphics*) */

void __thiscall
ZombossDinoLaserActionHandler::drawLaser(ZombossDinoLaserActionHandler *this,Graphics *param_1)

{
  EyeLaserTracker *this_00;
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  DVec3 aDStack_68 [16];
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x5c] != (ZombossDinoLaserActionHandler)0x0) {
    this_00 = (EyeLaserTracker *)(this + 0x60);
    Sexy::Point::Point((Point *)&local_90);
    calculateLaserBeamStartPosition(this,(Point *)&local_90);
    uVar5 = 0;
    fVar4 = (float)local_8c;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_88,(float)local_90,fVar4,0.0);
    cVar1 = EyeLaserTracker::IsActive(this_00);
    if (cVar1 != '\0') {
      local_78 = local_88;
      local_74 = local_84;
      local_70 = local_80;
      DVec3::DVec3(aDStack_68);
      fVar2 = (float)EyeLaserTracker::GetBeamExtent(this_00);
      local_58 = EyeLaserTracker::GetCurrentFireLocationBoardSpace(this_00);
      local_54 = fVar4;
      local_50 = uVar5;
      local_48 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_58,(SexyVector3 *)&local_78);
      local_44 = fVar4;
      local_40 = uVar5;
      fVar3 = (float)DVec3::getLength((DVec3 *)&local_48);
      if (fVar2 <= fVar3) {
        local_38 = Sexy::SexyVector3::operator/((SexyVector3 *)&local_48,fVar3);
        local_34 = fVar4;
        local_30 = uVar5;
        local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,fVar2);
        local_24 = fVar4;
        local_20 = uVar5;
        local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_78,(SexyVector3 *)&local_28);
        local_14 = fVar4;
        local_10 = uVar5;
        Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_68,(SexyVector3 *)&local_18);
      }
      else {
        Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_68,(SexyVector3 *)&local_58);
      }
      drawLaserFromTo(this,param_1,(SexyVector3 *)&local_78,(SexyVector3 *)aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::onStartAction() */

void __thiscall ZombossDinoLaserActionHandler::onStartAction(ZombossDinoLaserActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_01);
  this[0x5c] = (ZombossDinoLaserActionHandler)0x0;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLaserStartEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Dino::PlayLaserStart
            ((ZombieAnimRig_ZombossMech_Dino *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler::onUpdateAction() */

void ZombossDinoLaserActionHandler::onUpdateAction(void)

{
  EyeLaserTracker *this;
  char cVar1;
  ZombieActionHandler *in_x0;
  StandaloneEffect *this_00;
  RtObject *this_01;
  ZombieZombossMech *this_02;
  ZombossHydraSprayActionDefinition *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  float fVar5;
  float in_s1;
  float fVar6;
  int local_7c;
  int local_78 [2];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  float local_60 [4];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
  this_01 = (RtObject *)ZombieActionHandler::getZombie(in_x0);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech>(this_01);
  cVar1 = (**(code **)(*(long *)this_02 + 0xa90))();
  if (cVar1 == '\0') {
    fVar4 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_02);
    pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar6 = *(float *)(pZVar2 + 0x40);
    fVar5 = (float)ZombieZombossMech::GetStunHpFactor(this_02);
    if (fVar4 <= fVar5 * fVar6) {
      cVar1 = Zombie::IsSuspended((Zombie *)this_02);
      if (cVar1 == '\0') {
        fVar4 = (float)PVZ_Dt();
        EyeLaserTracker::Update((EyeLaserTracker *)(in_x0 + 0x60),fVar4);
        cVar1 = EyeLaserTracker::IsSweeping((EyeLaserTracker *)(in_x0 + 0x60));
      }
      else {
        this = (EyeLaserTracker *)(in_x0 + 0x60);
        EyeLaserTracker::FiringInterrupted(this);
        fVar4 = (float)PVZ_Dt();
        EyeLaserTracker::Update(this,fVar4);
        cVar1 = EyeLaserTracker::IsSweeping(this);
      }
      if (cVar1 == '\0') {
        if ((in_x0[0x5c] == (ZombieActionHandler)0x0) ||
           (cVar1 = EyeLaserTracker::IsActive((EyeLaserTracker *)(in_x0 + 0x60)), cVar1 != '\0')) {
          if (this_00 != (StandaloneEffect *)0x0) {
            StandaloneEffect::SetVisibility(this_00,false);
          }
        }
        else {
          in_x0[0x5c] = (ZombieActionHandler)0x0;
          pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_02);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string((string *)local_60,"onLaserEndEnded");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_68,(string *)local_60);
          ZombieAnimRig_ZombossMech_Dino::PlayLaserEnd
                    ((ZombieAnimRig_ZombossMech_Dino *)pZVar3,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)local_60);
          nop();
          Sexy::RtId::~RtId(aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
        }
      }
      else {
        local_60[0] = (float)EyeLaserTracker::GetCurrentFireLocationBoardSpace
                                       ((EyeLaserTracker *)(in_x0 + 0x60));
        BoardTransforms::BoardSpaceToGrid(local_60[0],in_s1,&local_7c,local_78);
        if ((local_7c < *(int *)(in_x0 + 0x58)) &&
           (*(int *)(in_x0 + 0x58) = local_7c, -1 < local_7c)) {
          Sexy::Point::Point((Point *)aRStack_70,local_7c,local_78[0]);
          Sexy::Point::Point((Point *)aRStack_68,(TPoint *)aRStack_70);
          spawnLaserFireAt();
        }
        StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)local_60,-1);
        StandaloneEffect::SetVisibility(this_00,true);
      }
      goto LAB_047f68fc;
    }
    ZombieZombossMech::DoStun(this_02);
  }
  Zombie::IsSuspended((Zombie *)this_02);
  EyeLaserTracker::FiringInterrupted((EyeLaserTracker *)(in_x0 + 0x60));
  cleanup((ZombossDinoLaserActionHandler *)in_x0);
LAB_047f68fc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombossDinoLaserActionHandler::~ZombossDinoLaserActionHandler() */

void __thiscall
ZombossDinoLaserActionHandler::~ZombossDinoLaserActionHandler(ZombossDinoLaserActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6d40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  EyeLaserTracker::~EyeLaserTracker((EyeLaserTracker *)(this + 0x60));
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossDinoLaserActionHandler::~ZombossDinoLaserActionHandler() */

void __thiscall
ZombossDinoLaserActionHandler::~ZombossDinoLaserActionHandler(ZombossDinoLaserActionHandler *this)

{
  ~ZombossDinoLaserActionHandler(this);
  AK::FreeHook(this);
  return;
}

