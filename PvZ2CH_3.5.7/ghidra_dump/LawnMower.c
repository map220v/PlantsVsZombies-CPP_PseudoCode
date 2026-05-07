// Class: LawnMower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::GetArtOffset() */

void LawnMower::GetArtOffset(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,118.0,135.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* LawnMower::CalcRenderOrder() const */

void __thiscall LawnMower::CalcRenderOrder(LawnMower *this)

{
  if (this[0xe8] == (LawnMower)0x0) {
    Board::MakeRenderOrder(0x64d48,*(undefined4 *)(this + 200));
    return;
  }
  Board::MakeGroundRenderOrder(*(int *)(this + 200),0);
  return;
}


/* non-virtual thunk to LawnMower::CalcRenderOrder() const */

void __thiscall LawnMower::CalcRenderOrder(LawnMower *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::StaticClassInit() */

void LawnMower::StaticClassInit(void)

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
    std::string::string(asStack_10,"LawnMower");
    (*pcVar2)(plVar1,asStack_10,FUN_03e66940,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMower::StaticGetClass() */

long * LawnMower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LawnMower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnMower::GetClass() const */

long * LawnMower::GetClass(void)

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
  (*pcVar3)(plVar1,"LawnMower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnMower::clearTouch() */

void __thiscall LawnMower::clearTouch(LawnMower *this)

{
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}


/* LawnMower::getRowToPixelY(int) */

float LawnMower::getRowToPixelY(int param_1)

{
  int iVar1;
  
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_1);
  return (float)iVar1 + 22.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::GetStartingLocation(int) */

void LawnMower::GetStartingLocation(int param_1)

{
  int iVar1;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_28 = 200.0 - (float)iVar1 * 0.5;
  uStack_24 = getRowToPixelY(param_1);
  local_18 = CONCAT44(uStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* LawnMower::GetAttackRect(Sexy::SexyVector2 const&) */

Insets * __thiscall LawnMower::GetAttackRect(LawnMower *this,SexyVector2 *param_1)

{
  Insets *in_x8;
  
  Sexy::Insets::Insets
            (in_x8,(int)(*(float *)this - 20.0),(int)(*(float *)(this + 4) - 60.0),0x2d,0x3c);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::GetAttackRect() */

void LawnMower::GetAttackRect(void)

{
  long in_x0;
  SexyVector2 *extraout_x1;
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar1 = *(undefined4 *)(in_x0 + 0x1c);
  local_8 = ___stack_chk_guard;
  local_10 = FUN_03e65104(*(undefined4 *)(in_x0 + 0x18),uVar1,*(undefined4 *)(in_x0 + 0x20));
  local_c = uVar1;
  GetAttackRect((LawnMower *)&local_10,extraout_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::GetAttackRect(int) */

void LawnMower::GetAttackRect(int param_1)

{
  SexyVector2 *extraout_x1;
  float in_s1;
  float in_s2;
  FastCurve aFStack_20 [8];
  float local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (float)GetStartingLocation(param_1);
  Sexy::FastCurve::SetOutRange(aFStack_20,local_18,in_s1 - in_s2);
  GetAttackRect((LawnMower *)aFStack_20,extraout_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMower::LawnMower() */

void __thiscall LawnMower::LawnMower(LawnMower *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678cf00;
  *(undefined ***)(this + 0x10) = &PTR__LawnMower_0678d0e8;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  Set8BytesTo0(this + 0xe0);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}


/* LawnMower::StaticNew() */

LawnMower * LawnMower::StaticNew(void)

{
  LawnMower *this;
  
  this = ::operator_new(0x108);
  LawnMower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::onAnimStopped(std::string const&) */

void __thiscall LawnMower::onAnimStopped(LawnMower *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"transition");
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    std::string::string(asStack_40,"attack");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::onTouchEvent(Sexy::Touch const&) */

void __thiscall LawnMower::onTouchEvent(LawnMower *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  if (((*(int *)(this + 0xcc) != 2) ||
      (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar2 = '\0', cVar1 == '\0')) ||
     (((*(long *)(this + 0xf8) != 0 || (*(int *)(param_1 + 0x30) != 0)) &&
      (cVar2 = '\0', *(long *)(this + 0xf8) != *(long *)param_1)))) goto LAB_03e6573c;
  fVar3 = (float)FUN_03e65250((float)*(int *)(param_1 + 0x10));
  fVar4 = (float)FUN_03e65250((float)*(int *)(param_1 + 0x14));
  GetAttackRect();
  cVar2 = Sexy::TRect<int>::Contains(aTStack_18,(int)fVar3,(int)fVar4);
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x9c8)) {
        uVar5 = PVZ_T();
        *(undefined8 *)(this + 0xf8) = *(undefined8 *)param_1;
        *(undefined4 *)(this + 0xf4) = uVar5;
      }
      goto LAB_03e6573c;
    }
    if (1 < *(int *)(param_1 + 0x30) - 3U) goto LAB_03e6573c;
  }
  clearTouch(this);
LAB_03e6573c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::onDraw(Sexy::Graphics*) */

void __thiscall LawnMower::onDraw(LawnMower *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_54;
  float local_50 [4];
  float local_40 [4];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xcc) != 1) {
    uVar7 = (ulong)*(uint *)(this + 0x1c);
    fVar3 = (float)FUN_03e65104(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
    fVar8 = *(float *)(param_1 + 0x18);
    if (*(long *)(this + 0xf8) == 0) {
      fVar9 = 0.0;
    }
    else {
      local_40[0] = 1.0;
      local_54 = (float)PVZ_T();
      local_54 = local_54 - *(float *)(this + 0xf4);
      local_50[0] = 0.0;
      pfVar2 = eastl::max_alt<float>(&local_54,local_50);
      pfVar2 = eastl::min_alt<float>(local_40,pfVar2);
      fVar9 = *pfVar2;
      fVar8 = fVar8 + fVar9 * 0.3;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0);
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar10 = *(float *)(param_1 + 0x20);
    fVar4 = (float)FUN_03e65240(fVar3 + 20.0);
    fVar11 = *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + fVar10 +
         (float)(int)((fVar4 - fVar10) * *(float *)(param_1 + 0x18));
    fVar4 = (float)FUN_03e65240(uVar7 & 0xffffffff);
    fVar10 = *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) + fVar11 + (float)(int)((fVar4 - fVar11) * fVar10);
    fVar4 = (float)GetArtOffset();
    if (fVar8 == 1.0) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
      fVar8 = (float)FUN_03e65240(fVar4);
      fVar4 = (float)FUN_03e65240(fVar10);
      Sexy::Graphics::Translate(param_1,(int)-fVar8,(int)-fVar4);
    }
    else {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      Sexy::SexyTransform2D::Scale(aSStack_30,fVar8,fVar8);
      fVar4 = (float)FUN_03e65240(fVar8 * fVar4);
      fVar8 = (float)FUN_03e65240(fVar8 * fVar10);
      FUN_03e64f3c(-fVar4,-fVar8,auStack_28,auStack_1c);
      pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
    }
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::Draw(pPVar1,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_40);
    if ((*(long *)(this + 0xf8) != 0) && (*(int *)(this + 0xcc) == 2)) {
      Sexy::Graphics::SetDrawMode(param_1,1);
      local_40[0] = 1.0;
      local_54 = (float)PVZ_T();
      local_54 = local_54 - *(float *)(this + 0xf4);
      local_50[0] = 0.0;
      pfVar2 = eastl::max_alt<float>(&local_54,local_50);
      pfVar2 = eastl::min_alt<float>(local_40,pfVar2);
      fVar4 = (fVar3 + 20.0) - 25.0;
      fVar3 = *pfVar2;
      fVar8 = fVar9 * 20.0 + 90.0;
      uVar5 = FUN_03e65240(fVar4);
      fVar9 = (float)uVar7 - 30.0;
      uVar6 = FUN_03e65240(fVar9);
      Sexy::Insets::Insets((Insets *)local_50,0x40,0,0,100);
      Sexy::Insets::Insets((Insets *)local_40,0xff,0xb4,0xb4,100);
      DrawRadialCooldown(fVar3,uVar5,uVar6,fVar8 - 10.0,param_1,(Insets *)local_50,
                         (GraphicsAutoState *)local_40);
      fVar3 = fVar3 - 3.0;
      uVar5 = FUN_03e65240(fVar4);
      uVar6 = FUN_03e65240(fVar9);
      Sexy::Insets::Insets((Insets *)local_50,0x40,0,0,100);
      Sexy::Insets::Insets((Insets *)local_40,0xff,0x80,0x80,100);
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      DrawRadialCooldown(fVar3,uVar5,uVar6,fVar8,param_1,(Insets *)local_50,
                         (GraphicsAutoState *)local_40);
      Sexy::Graphics::SetDrawMode(param_1,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::CreateSpawnEffect() */

void LawnMower::CreateSpawnEffect(void)

{
  int iVar1;
  long *in_x0;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)GetArtOffset();
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_MOWER_SPAWN");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  fVar4 = (float)FUN_03e65104((int)in_x0[3],*(undefined4 *)((long)in_x0 + 0x1c),(int)in_x0[4]);
  fVar5 = *(float *)((long)in_x0 + 0x1c);
  FUN_03e65104((int)in_x0[3],fVar5,(int)in_x0[4]);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(fVar4 + 20.0) - fVar3,(fVar5 + 5.0) - in_s1,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*in_x0 + 0x170))();
  FUN_03e65028(this + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::registerForEvents() */

void __thiscall LawnMower::registerForEvents(LawnMower *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<LawnMower,bool(LawnMower::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,1,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMower::onDestroy() */

void __thiscall LawnMower::onDestroy(LawnMower *this)

{
  bool bVar1;
  long *plVar2;
  
  MessageRouter::Post<LawnMower*,LawnMower*>((MessageRouter *)gMessageRouter,Message::MowerDie,this)
  ;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    (**(code **)(*plVar2 + 0x48))();
  }
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0xa8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::ResetStartingLocation() */

void LawnMower::ResetStartingLocation(void)

{
  long lVar1;
  LawnMower *in_x0;
  code *pcVar2;
  
  lVar1 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)in_x0 + 0x78);
  GetStartingLocation(*(int *)(in_x0 + 200));
  (*pcVar2)();
  in_x0[0xe8] = (LawnMower)0x0;
  *(undefined4 *)(in_x0 + 0xf0) = 0xbf800000;
  MessageRouter::Broadcast<LawnMower*,LawnMower*>
            ((MessageRouter *)gMessageRouter,Message::MowerReset,in_x0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::SpawnMower() */

void __thiscall LawnMower::SpawnMower(LawnMower *this)

{
  long *plVar1;
  code *pcVar2;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResetStartingLocation();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  pcVar2 = *(code **)(*plVar1 + 0x78);
  std::string::string(asStack_28,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar2)(plVar1,asStack_28,0,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  if (*(int *)(this + 0xcc) == 1) {
    CreateSpawnEffect();
    *(undefined4 *)(this + 0xcc) = 2;
    std::string::string((string *)avStack_20,"Play_UI_Game_Mower_Appear_Single");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)avStack_20,0.0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::onDrawShadow(Sexy::Graphics*) */

void __thiscall LawnMower::onDrawShadow(LawnMower *this,Graphics *param_1)

{
  Image *pIVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  uVar4 = *(undefined4 *)(this + 0x1c);
  uVar2 = FUN_03e65104(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_03e65240(uVar2);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_03e65240(uVar4);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar6 +
       (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,-2.0,-20.0);
  fVar3 = (float)FUN_03e65240(0x3f800000);
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_38,fVar3);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  FUN_03e64f3c(local_38,local_34,auStack_28,auStack_1c);
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf478);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar1,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::tryDestroy() */

void __thiscall LawnMower::tryDestroy(LawnMower *this)

{
  uchar uVar1;
  char cVar2;
  LawnMowerModule *this_00;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LawnMowerModule *)FUN_03e66544(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (LawnMowerModule *)0x0) {
    uVar1 = FUN_03e65030(*(undefined4 *)(this + 200));
    cVar2 = LawnMowerModule::ShouldRespawnMower(this_00,uVar1);
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0xcc) = 1;
      SpawnMower(this);
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      std::string::string(asStack_40,"idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      goto LAB_03e665c4;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_03e665c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::StartMower() */

void __thiscall LawnMower::StartMower(LawnMower *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xcc) != 3) {
    lVar3 = FUN_05474178((string *)(this + 0xe0));
    if (lVar3 != 0) {
      RealObject::PlayPositionalSound((RealObject *)this,(string *)(this + 0xe0),0.0);
    }
    MessageRouter::Post<LawnMower*,LawnMower*>
              ((MessageRouter *)gMessageRouter,Message::MowerTriggered,this);
    lVar3 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
    if (lVar3 != 0) {
      iVar1 = *(int *)(this + 200);
      lVar3 = *(long *)(gLawnApp + 0x9f0);
      uVar5 = PVZ_T();
      *(undefined4 *)(lVar3 + (long)iVar1 * 4 + 0x1e8) = uVar5;
    }
    *(undefined4 *)(this + 0xcc) = 3;
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    std::string::string(asStack_58,"transition");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    cVar2 = FUN_03e65594(*(undefined4 *)(this + 0x28));
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this + 0x80))(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::MowZombie(Zombie*) */

void __thiscall LawnMower::MowZombie(LawnMower *this,Zombie *param_1)

{
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xcc) - 2U < 2) {
    if (*(int *)(this + 0xcc) == 2) {
      StartMower(this);
      fVar1 = (float)PVZ_T();
      *(float *)(this + 0xd8) = fVar1 + 0.25;
    }
    else {
      fVar1 = (float)PVZ_T();
      *(float *)(this + 0xd8) = fVar1 + 0.5;
    }
    std::string::string(asStack_10,"Play_Splat");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    Zombie::MowDown(param_1);
    *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
    MessageRouter::Broadcast<LawnMower*,LawnMower*>
              ((MessageRouter *)gMessageRouter,Message::ZombieMowed,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::MowGridItem(GridItem*) */

void __thiscall LawnMower::MowGridItem(LawnMower *this,GridItem *param_1)

{
  code *pcVar1;
  float fVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xcc) == 3) {
    fVar2 = (float)PVZ_T();
    pcVar1 = *(code **)(*(long *)param_1 + 0x110);
    *(float *)(this + 0xd8) = fVar2 + 0.5;
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,2,aPStack_78,0);
    (*pcVar1)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::updateGroundEffect() */

void __thiscall LawnMower::updateGroundEffect(LawnMower *this)

{
  char cVar1;
  int iVar2;
  SexyVector3 *pSVar3;
  long lVar4;
  char *pcVar5;
  PopAnimRig *pPVar6;
  undefined8 uVar7;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03e64f64(this[0xb0]);
  if (cVar1 == '\0') {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar3);
    if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 == '\0')) ||
       (0.0 < *(float *)(pSVar3 + 8))) {
      uVar7 = 0xffffffff;
    }
    else {
      iVar2 = FUN_03e64f68(*(undefined4 *)(this + 0xb4));
      if (iVar2 == 0) {
        uVar7 = 0;
      }
      else {
        lVar4 = FUN_03e66538(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        if (lVar4 != 0) {
          pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          iVar2 = FUN_03e65034(*(undefined4 *)(lVar4 + 0x30));
          AudioMgr::SetRTPCValue(pcVar5,(double)iVar2,"Board_WaterOnTiles");
          std::string::string(asStack_40,"Play_UI_Game_Mower_Beach_TurnOn");
          RealObject::PlayPositionalSound((RealObject *)this,asStack_40,0.0);
          std::string::~string(asStack_40);
          nop();
        }
        pPVar6 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
        std::string::string(asStack_40,"attack2");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
        std::string::~string(asStack_40);
        nop();
        uVar7 = 0;
      }
    }
    EntityComponent_GroundEffect::SetGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0xa8),this,uVar7,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::onUpdate() */

void __thiscall LawnMower::onUpdate(LawnMower *this)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  PopAnimRig *this_00;
  undefined8 uVar5;
  PVZDB *pPVar6;
  RtDbTable *this_01;
  BoardEntity *this_02;
  TRect *pTVar7;
  GridItem *extraout_x0;
  long lVar8;
  undefined8 *puVar9;
  SexyVector3 *pSVar10;
  long *plVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  int extraout_w1_05;
  int extraout_w1_06;
  int extraout_w1_07;
  code *pcVar12;
  Board *this_03;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 local_50;
  undefined8 local_48;
  float local_40 [2];
  float local_38 [4];
  undefined8 local_28;
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa8))(this,0);
  if (((*(long *)(this + 0xf8) != 0) && (*(int *)(this + 0xcc) == 2)) &&
     (fVar13 = (float)PVZ_T(), 1.0 <= fVar13 - *(float *)(this + 0xf4))) {
    iVar4 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x9c8);
    if (0 < iVar4) {
      *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x9c8) = iVar4 + -1;
      StartMower(this);
      MessageRouter::Broadcast<LawnMower*,LawnMower*>
                ((MessageRouter *)gMessageRouter,Message::MowerLaunched,this);
    }
    clearTouch(this);
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0))
  ;
  fVar13 = (float)PVZ_T();
  fVar14 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar13,fVar14);
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  cVar1 = Board::IsPlaying(this_03);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(this + 0xcc);
  }
  else {
    GetAttackRect();
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar5,0x29);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar2) {
      pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_01 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x29);
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtDbTable::GetObjectForId(this_01,(RtId *)local_40);
      nop();
      Sexy::RtId::~RtId((RtId *)local_40);
      iVar4 = extraout_w1;
      if ((((this_02 != (BoardEntity *)0x0) &&
           (cVar1 = (**(code **)(*(long *)this_02 + 0x3d8))(this_02), iVar4 = extraout_w1_00,
           cVar1 != '\0')) &&
          ((cVar1 = BoardEntity::IsInRow(this_02,*(int *)(this + 200)), iVar4 = extraout_w1_01,
           cVar1 != '\0' &&
           (cVar1 = Zombie::IsControlled((Zombie *)this_02), iVar4 = extraout_w1_02, cVar1 == '\0'))
          )) && ((*(int *)(this + 0xcc) != 2 ||
                 ((cVar1 = (**(code **)(*(long *)this_02 + 0x328))(this_02), iVar4 = extraout_w1_06,
                  cVar1 == '\0' &&
                  (cVar1 = (**(code **)(*(long *)this_02 + 0x330))(this_02), iVar4 = extraout_w1_07,
                  cVar1 == '\0')))))) {
        uVar15 = operator|(8,7);
        cVar1 = (**(code **)(*(long *)this_02 + 0xb8))(this_02,uVar15);
        if (cVar1 == '\0') {
          if (*(code **)(*(long *)this_02 + 0x348) == Zombie::CollidesWithFlying) {
            cVar1 = Zombie::CollidesWithFlying();
          }
          else {
            cVar1 = (**(code **)(*(long *)this_02 + 0x348))(this_02);
          }
          if ((cVar1 == '\0') &&
             (cVar1 = Zombie::IsInvisible((Zombie *)this_02), iVar4 = extraout_w1_03, cVar1 == '\0')
             ) goto LAB_03e6738c;
        }
        pTVar7 = (TRect *)(**(code **)(*(long *)this_02 + 0x178))(this_02);
        cVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)local_38,pTVar7);
        iVar4 = extraout_w1_04;
        if (cVar1 != '\0') {
          MowZombie(this,(Zombie *)this_02);
          iVar4 = extraout_w1_05;
        }
      }
LAB_03e6738c:
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,iVar4);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_28);
    EntityFinder::GetEntitiesTouchingRectangle
              ((Iterator *)&local_28,4,(TRect<int> *)local_38,*(undefined4 *)(this + 200),
               *(undefined4 *)(this + 200));
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_28);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_28);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      nop();
      cVar1 = RealObject::IsOnTeam();
      if (cVar1 != '\0') {
        GridItem::GetProps();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        cVar1 = *(char *)(lVar8 + 100);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        if (cVar1 != '\0') {
          MowGridItem(this,extraout_x0);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_28);
    iVar4 = *(int *)(this + 0xcc);
  }
  if (iVar4 != 3) goto LAB_03e67324;
  updateGroundEffect(this);
  fVar13 = (float)FUN_03e65104(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                               *(undefined4 *)(this + 0x20));
  uVar3 = BoardTransforms::BoardSpaceToGridX(fVar13);
  if ((uint)(byte)this[0xe8] < ~uVar3 >> 0x1f) {
    iVar4 = Board::GetGridSquareType(this_03,uVar3,*(int *)(this + 200));
    if (iVar4 == 3) {
      this[0xe8] = (LawnMower)0x1;
      uVar15 = PVZ_T();
      *(undefined4 *)(this + 0xf0) = uVar15;
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      pcVar12 = *(code **)(*plVar11 + 0x78);
      std::string::string((string *)local_38,"animation");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_28);
      (*pcVar12)(plVar11,(string *)local_38,0,0,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_28);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_28);
      std::string::~string((string *)local_38);
      nop();
    }
    else {
LAB_03e675ec:
      if ((*(int *)(this + 0x100) <= (int)uVar3) && (0 < *(int *)(this + 0x100))) {
        CreateSpawnEffect();
        tryDestroy(this);
        goto LAB_03e67324;
      }
    }
    local_48 = CONCAT44(local_48._4_4_,0x43480000);
    fVar13 = (float)PVZ_T();
    fVar14 = *(float *)(this + 0xd8);
    if (fVar13 <= fVar14) {
      local_40[0] = (float)local_48 * 0.5;
      fVar13 = (float)PVZ_T();
      fVar14 = fVar14 - fVar13;
      local_28 = CONCAT44(local_28._4_4_,0x3f800000);
      local_38[0] = fVar14 + fVar14;
      eastl::min_alt<float>(local_38,(float *)&local_28);
      fVar13 = CurveEvaluate<float>(&local_48,local_40,10);
      local_48 = CONCAT44(local_48._4_4_,fVar13);
      fVar13 = (float)PVZ_T();
      if (*(float *)(this + 0xd8) < fVar13) {
        *(undefined4 *)(this + 0xd8) = 0xbf800000;
      }
    }
    puVar9 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_28 = *puVar9;
    local_20 = *(undefined4 *)(puVar9 + 1);
    if (this[0xe8] == (LawnMower)0x0) {
      fVar13 = (float)getRowToPixelY(*(int *)(this + 200));
      local_28._4_4_ = fVar13;
    }
    else {
      PVZ_T();
      local_40[0] = (float)getRowToPixelY(*(int *)(this + 200));
      local_38[0] = local_40[0] + 150.0;
      fVar13 = CurveEvaluate<float>(local_40,local_38,2);
      local_48 = CONCAT44(local_48._4_4_,(float)local_48 * 0.75);
      local_28._4_4_ = fVar13;
    }
    fVar13 = (float)PVZ_Dt();
    local_28 = CONCAT44(local_28._4_4_,(float)local_28 + (float)local_48 * fVar13);
    (**(code **)(*(long *)this + 0x78))(this,&local_28);
    if ((float)local_28 <= 800.0) goto LAB_03e67324;
  }
  else {
    if (((byte)this[0xe8] == 0) || (fVar13 = (float)PVZ_T(), fVar13 < *(float *)(this + 0xf0) + 0.5)
       ) goto LAB_03e675ec;
    pSVar10 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar10,(BoardEntity *)this);
  }
  tryDestroy(this);
LAB_03e67324:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::initializePAM(Sexy::PopAnim*, std::vector<int, std::allocator<int> >) */

void __thiscall LawnMower::initializePAM(LawnMower *this,PopAnim *param_1,vector *param_3)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtClass *pRVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  code *pcVar6;
  float fVar7;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xd0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar6 = *(code **)(*plVar3 + 0x78);
  std::string::string(asStack_28,"idle");
  lVar4 = FUN_03e6503c(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  uVar5 = 4;
  if (lVar4 == 0) {
    uVar5 = 2;
  }
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)aRStack_20,param_3);
  (*pcVar6)(plVar3,asStack_28,1,uVar5,aRStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar6 = *(code **)(*plVar3 + 0x80);
  fVar7 = (float)Sexy::Rand(20.0);
  (*pcVar6)((fVar7 + -10.0) * 0.01 + 1.0,plVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMower::LawnMowerInitialize(Sexy::PopAnim*, int, std::string const&, std::vector<int,
   std::allocator<int> >) */

void __thiscall
LawnMower::LawnMowerInitialize
          (LawnMower *this,undefined8 param_1,int param_2,undefined8 param_3,vector *param_5)

{
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DJump::setJumpCount((DJump *)this,param_2);
  *(undefined4 *)(this + 0xcc) = 1;
  thunk_FUN_05475e00(this + 0xe0,param_3);
  ResetStartingLocation();
  std::vector<int,std::allocator<int>>::vector(avStack_20,param_5);
  initializePAM(this,param_1,avStack_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  MessageRouter::Broadcast<LawnMower*,LawnMower*>
            ((MessageRouter *)gMessageRouter,Message::MowerInitialized,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMower::~LawnMower() */

void __thiscall LawnMower::~LawnMower(LawnMower *this)

{
  *(undefined ***)this = &PTR_GetClass_0678cf00;
  *(undefined ***)(this + 0x10) = &PTR__LawnMower_0678d0e8;
  std::string::~string((string *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to LawnMower::~LawnMower() */

void __thiscall LawnMower::~LawnMower(LawnMower *this)

{
  ~LawnMower(this + -0x10);
  return;
}


/* LawnMower::~LawnMower() */

void __thiscall LawnMower::~LawnMower(LawnMower *this)

{
  ~LawnMower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LawnMower::~LawnMower() */

void __thiscall LawnMower::~LawnMower(LawnMower *this)

{
  ~LawnMower(this + -0x10);
  return;
}


/* LawnMower::onInitialized() */

void __thiscall LawnMower::onInitialized(LawnMower *this)

{
  BoardEntity::onInitialized((BoardEntity *)this);
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xe8] = (LawnMower)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xd8) = 0xbf800000;
  *(undefined4 *)(this + 0xf0) = 0xbf800000;
  MessageRouter::Broadcast<LawnMower*,LawnMower*>
            ((MessageRouter *)gMessageRouter,Message::MowerCreated,this);
  return;
}


/* LawnMower::ShouldDrawShadow() const */

bool __thiscall LawnMower::ShouldDrawShadow(LawnMower *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = RealObject::ShouldDrawShadow((RealObject *)this);
  bVar2 = false;
  if ((cVar1 != '\0') && (bVar2 = false, this[0xe8] == (LawnMower)0x0)) {
    bVar2 = 2 < *(int *)(this + 0xcc) - 1U;
  }
  return bVar2;
}

