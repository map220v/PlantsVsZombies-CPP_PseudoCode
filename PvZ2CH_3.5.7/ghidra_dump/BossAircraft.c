// Class: BossAircraft


/* BossAircraft::onTakeDamage(DamageInfo const&) */

void BossAircraft::onTakeDamage(DamageInfo *param_1)

{
  param_1[0x1b4] = (DamageInfo)0x1;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}


/* BossAircraft::onAircraftSeparateDone(int) */

void __thiscall BossAircraft::onAircraftSeparateDone(BossAircraft *this,int param_1)

{
  if ((*(int *)(this + 0x198) == 0) && (*(int *)(this + 0x1a8) == param_1)) {
    *(undefined4 *)(this + 0x198) = 1;
    return;
  }
  return;
}


/* BossAircraft::CollidesWithType(CollisionTypeFlags) const */

bool BossAircraft::CollidesWithType(long param_1)

{
  return (*(uint *)(param_1 + 0x198) & 0xfffffffd) == 1;
}


/* BossAircraft::CalcRenderOrder() const */

undefined8 BossAircraft::CalcRenderOrder(void)

{
  return 0x7a121;
}


/* non-virtual thunk to BossAircraft::CalcRenderOrder() const */

void __thiscall BossAircraft::CalcRenderOrder(BossAircraft *this)

{
  CalcRenderOrder();
  return;
}


/* BossAircraft::CanBeTargetedBy(BoardEntity const*) const */

undefined8 BossAircraft::CanBeTargetedBy(BoardEntity *param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x198) & 0xfffffffd) == 1) {
    uVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)param_1);
    return uVar1;
  }
  return 0;
}


/* BossAircraft::IsDamageable() const */

undefined8 __thiscall BossAircraft::IsDamageable(BossAircraft *this)

{
  undefined8 uVar1;
  
  if ((*(uint *)(this + 0x198) & 0xfffffffd) != 1) {
    return 0;
  }
  uVar1 = GridItem::IsDamageable((GridItem *)this);
  return uVar1;
}


/* BossAircraft::IsDamageableByPlants() const */

undefined8 __thiscall BossAircraft::IsDamageableByPlants(BossAircraft *this)

{
  undefined8 uVar1;
  
  if ((*(uint *)(this + 0x198) & 0xfffffffd) != 1) {
    return 0;
  }
  uVar1 = GridItem::IsDamageableByPlants((GridItem *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossAircraft::StaticClassInit() */

void BossAircraft::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossAircraft");
    (*pcVar2)(plVar1,asStack_10,FUN_03b7a670,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossAircraft::StaticGetClass() */

long * BossAircraft::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"BossAircraft",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossAircraft::GetClass() const */

long * BossAircraft::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"BossAircraft",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossAircraft::GetAttackRect() */

Insets * BossAircraft::GetAttackRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  Sexy::Insets::Insets(in_x8,0x24,0x3c,0x40,0x46);
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_03b78cf0(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  *(int *)in_x8 = (int)(((float)*(int *)in_x8 + fVar1) - (float)(*(int *)(in_x8 + 8) / 2));
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar2) - (float)*(int *)(in_x8 + 0xc));
  return in_x8;
}


/* BossAircraft::~BossAircraft() */

void __thiscall BossAircraft::~BossAircraft(BossAircraft *this)

{
  *(undefined ***)this = &PTR_GetClass_06734460;
  *(undefined ***)(this + 0x10) = &PTR__BossAircraft_067346f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to BossAircraft::~BossAircraft() */

void __thiscall BossAircraft::~BossAircraft(BossAircraft *this)

{
  ~BossAircraft(this + -0x10);
  return;
}


/* BossAircraft::~BossAircraft() */

void __thiscall BossAircraft::~BossAircraft(BossAircraft *this)

{
  ~BossAircraft(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BossAircraft::~BossAircraft() */

void __thiscall BossAircraft::~BossAircraft(BossAircraft *this)

{
  ~BossAircraft(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossAircraft::onDraw(Sexy::Graphics*) */

void __thiscall BossAircraft::onDraw(BossAircraft *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x198) - 2U < 2) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    this_00 = (RtWeakPtr *)(this + 0x1a0);
    fVar3 = (float)FUN_03b78cf0(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar5 = *(float *)(param_1 + 0x20);
    fVar3 = (float)FUN_03b78f20(fVar3 + 20.0);
    fVar6 = *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + fVar5 +
         (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
    fVar3 = (float)FUN_03b78f20(uVar4 & 0xffffffff);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) + fVar6 +
         (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
      fVar3 = (float)FUN_03b78f20(0xc2b40000);
      fVar5 = (float)FUN_03b78f20(0xc28c0000);
      Sexy::Graphics::Translate(param_1,(int)fVar3,(int)fVar5);
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::Draw(pPVar2,param_1);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossAircraft::onTransformAnimDone(std::string const&) */

void BossAircraft::onTransformAnimDone(string *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x198) = 3;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x1b0) = fVar2 + 1.0;
  if (*(int *)(param_1 + 0x194) == 0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a0));
    std::string::string(asStack_40,"dian06");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else if (*(int *)(param_1 + 0x194) == 1) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a0));
    std::string::string(asStack_40,"dian06");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
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
/* BossAircraft::BossAircraftInitialize(EBossAircraftType, int, float, float) */

void __thiscall
BossAircraft::BossAircraftInitialize
          (undefined4 param_1,undefined4 param_2,BossAircraft *this,undefined4 param_4,
          undefined4 param_5)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long *plVar5;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_58 [8];
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03b78cd0(this + 300);
  this_00 = (RtWeakPtr *)(this + 0x1a0);
  FUN_03b78cd8(param_1,this + 0x128);
  *(undefined4 *)(this + 0x194) = param_4;
  *(undefined4 *)(this + 0x1a8) = param_5;
  *(undefined4 *)(this + 0x1ac) = param_2;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::string::string(asStack_58,"");
  nop();
  __n = aRStack_40;
  std::string::string(asStack_50,"");
  nop();
  if ((*(int *)(this + 0x194) == 0) || (*(int *)(this + 0x194) != 1)) {
    std::string::append(asStack_58,"POPANIM_EFFECTS_ZOMBOSS_AIRCRAFT1",(size_t)__n);
    std::string::append(asStack_50,"dian01",(size_t)__n);
  }
  else {
    std::string::append(asStack_58,"POPANIM_EFFECTS_ZOMBOSS_AIRCRAFT2",(size_t)__n);
    std::string::append(asStack_50,"dian02",(size_t)__n);
  }
  GetPAMByName(asStack_58);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,asStack_50,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossAircraft::onKilled() */

void __thiscall BossAircraft::onKilled(BossAircraft *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  float fVar2;
  float fVar3;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  fVar3 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_03b78cf0(*(undefined4 *)(this + 0x18),fVar3,*(undefined4 *)(this + 0x20));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBOSS_AIRCRAFT_EXPLODE");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar2 - 85.0,fVar3 - 135.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_03b78cc8(this_00 + 0x1c,0x64961);
  std::string::string((string *)aRStack_18,"dian08");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossAircraft::BossAircraft() */

void __thiscall BossAircraft::BossAircraft(BossAircraft *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06734460;
  *(undefined ***)(this + 0x10) = &PTR__BossAircraft_067346f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  uVar2 = PVZ_EOT();
  this[0x1b4] = (BossAircraft)0x0;
  *(undefined4 *)(this + 0x1b0) = uVar2;
  *(undefined4 *)(this + 0x1ac) = 0x42c80000;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0x3f000000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAircraftSeparateDone);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<BossAircraft,void(BossAircraft::*)(int)>>
            ((MessageRouter *)puVar1,Message::AircraftSeparateDone,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAircraftDisconnect);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<BossAircraft,void(BossAircraft::*)(int)>>
            ((MessageRouter *)puVar1,Message::AircraftDisconnect,&local_50);
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* BossAircraft::StaticNew() */

BossAircraft * BossAircraft::StaticNew(void)

{
  BossAircraft *this;
  
  this = ::operator_new(0x1c0);
  BossAircraft(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossAircraft::onAircraftDisconnect(int) */

void __thiscall BossAircraft::onAircraftDisconnect(BossAircraft *this,int param_1)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x198) == 1) && (*(int *)(this + 0x1a8) == param_1)) {
    *(undefined4 *)(this + 0x198) = 2;
    if (*(int *)(this + 0x194) == 0) {
      pPVar1 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      std::string::string(asStack_58,"dian04");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onTransformAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else if (*(int *)(this + 0x194) == 1) {
      pPVar1 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      std::string::string(asStack_58,"dian05");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onTransformAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03b7b490 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BossAircraft::onUpdate() */

void __thiscall BossAircraft::onUpdate(BossAircraft *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  PopAnimRig *pPVar7;
  undefined8 uVar8;
  PVZDB *pPVar9;
  RtDbTable *this_00;
  long *extraout_x0;
  TRect *pTVar10;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar11;
  char *pcVar12;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar13;
  float fVar14;
  float fVar15;
  undefined1 extraout_var [12];
  DamageInfo *pDVar17;
  undefined1 auVar16 [12];
  Point aPStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b4] != (BossAircraft)0x0) {
    fVar14 = (float)PVZ_Dt();
    fVar14 = fVar14 + *(float *)(this + 0x1b8);
    *(float *)(this + 0x1b8) = fVar14;
    if (*(float *)(this + 0x1bc) < fVar14) {
      this[0x1b4] = (BossAircraft)0x0;
      pPVar7 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar7);
    }
    else {
      Sexy::Color::Color((Color *)&local_88,1);
      local_98[0] = 0x3f800000;
      local_68[0] = 0x3f000000;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar14;
      fVar14 = CurveLerp<float>(auVar1,*(undefined4 *)(this + 0x1bc),*(undefined4 *)(this + 0x1b8),
                                local_98,(Color *)local_68,3);
      pPVar7 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      Sexy::Color::Color((Color *)local_68,(int)(fVar14 * (float)local_88),
                         (int)(fVar14 * (float)local_84),(int)(fVar14 * (float)local_80));
      PopAnimRig::SetMultiplicativeOverlayColor(pPVar7,(Color *)local_68);
    }
  }
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_a8 = *puVar6;
  local_a0 = *(undefined4 *)(puVar6 + 1);
  if (*(int *)(this + 0x198) - 1U < 3) {
    fVar14 = (float)FUN_03b78f20(0x41a00000);
    fVar15 = (float)PVZ_Dt();
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8 - fVar14 * fVar15);
    (**(code **)(*(long *)this + 0x78))(this,&local_a8);
  }
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (((cVar2 != '\0') && (*(int *)(this + 0x198) == 3)) &&
     (fVar14 = (float)PVZ_T(), *(float *)(this + 0x1b0) < fVar14)) {
    fVar14 = (float)PVZ_T();
    bVar3 = false;
    *(float *)(this + 0x1b0) = fVar14 + 1.0;
    GetAttackRect();
    uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_88,uVar8,0x2c);
    while (bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_88), bVar4) {
      pPVar9 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_00 = (RtDbTable *)PVZDB::GetTable(pPVar9,0x2c);
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_88);
      Sexy::RtDbTable::GetObjectForId(this_00,(RtId *)local_68);
      nop();
      Sexy::RtId::~RtId((RtId *)local_68);
      iVar5 = extraout_w1;
      if (extraout_x0 != (long *)0x0) {
        pTVar10 = (TRect *)(**(code **)(*extraout_x0 + 0x178))(extraout_x0);
        auVar16 = Sexy::TRect<int>::Intersects((TRect<int> *)local_98,pTVar10);
        iVar5 = auVar16._8_4_;
        if ((auVar16._0_8_ & 0xff) != 0) {
                    /* WARNING: Load size is inaccurate */
          pDVar17._0_4_ = *(DamageInfo **)(this + 0x1ac);
          bVar3 = true;
          pcVar13 = *(code **)(*extraout_x0 + 0x110);
          Sexy::Point::Point(aPStack_b8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar17._0_4_,local_b0,local_ac,(RtId *)local_68,aPStack_b8,0);
          (*pcVar13)(extraout_x0,(RtId *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
          iVar5 = extraout_w1_00;
        }
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_88,iVar5);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_88);
    if (bVar3) {
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)&local_88,"POPANIM_EFFECTS_ZOMBOSS_AIRCRAFT_HIT");
      GetPAMByName((string *)&local_88);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar11,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      std::string::~string((string *)&local_88);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)local_68,(float)local_a8 - 78.0,local_a8._4_4_ - 82.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_68,-1);
      FUN_03b78cc8(this_01 + 0x1c,0xdbba1);
      std::string::string((string *)local_68,"dian07");
      Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr *)local_68,0);
      std::string::~string((string *)local_68);
      nop();
      pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar12,"Play_Zomb_SkyCity_Zomboss_Attack_Shoot_Hit");
    }
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar3) {
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
    fVar14 = (float)PVZ_T();
    fVar15 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar7,fVar14,fVar15);
  }
  iVar5 = FUN_03b78f0c();
  if ((float)local_a8 < (float)-iVar5) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossAircraft::onDestroy() */

void __thiscall BossAircraft::onDestroy(BossAircraft *this)

{
  bool bVar1;
  long *plVar2;
  
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::AircraftDisconnect,*(int *)(this + 0x1a8));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
    (**(code **)(*plVar2 + 0x48))();
  }
  GridItem::onDestroy((GridItem *)this);
  return;
}

