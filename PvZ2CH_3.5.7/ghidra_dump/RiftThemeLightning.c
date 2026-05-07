// Class: RiftThemeLightning


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::StaticClassInit() */

void RiftThemeLightning::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeLightning");
    (*pcVar2)(plVar1,asStack_10,FUN_0370c138,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeLightning::StaticGetClass() */

long * RiftThemeLightning::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeLightning",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeLightning::GetClass() const */

long * RiftThemeLightning::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeLightning",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeLightning::~RiftThemeLightning() */

void __thiscall RiftThemeLightning::~RiftThemeLightning(RiftThemeLightning *this)

{
  *(undefined ***)this = &PTR_GetClass_06688340;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeLightning::~RiftThemeLightning() */

void __thiscall RiftThemeLightning::~RiftThemeLightning(RiftThemeLightning *this)

{
  ~RiftThemeLightning(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeLightning::RiftThemeLightning() */

void __thiscall RiftThemeLightning::RiftThemeLightning(RiftThemeLightning *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  this[0x20] = (RiftThemeLightning)0x0;
  *(undefined ***)this = &PTR_GetClass_06688340;
  Sexy::Point::Point((Point *)(this + 0x24));
  *(undefined4 *)(this + 0x2c) = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x30),0.0,0.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x3c),0.0,-20.0,0.0);
  return;
}


/* RiftThemeLightning::StaticNew() */

RiftThemeLightning * RiftThemeLightning::StaticNew(void)

{
  RiftThemeLightning *this;
  
  this = ::operator_new(0x48);
  RiftThemeLightning(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::onGamePlayStarted() */

void __thiscall RiftThemeLightning::onGamePlayStarted(RiftThemeLightning *this)

{
  bool bVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1c) = fVar2 + 3.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::OnEffectDone1(StandaloneEffect*) */

void RiftThemeLightning::OnEffectDone1(StandaloneEffect *param_1)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  int in_w2;
  FastCurve aFStack_80 [8];
  int local_78;
  int local_74;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_80,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)*(uint *)(param_1 + 0x24),*(int *)(param_1 + 0x28),in_w2);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING1");
  GetPAMByName(asStack_68);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,(float)local_78 + *(float *)(param_1 + 0x3c),
             (float)local_74 + *(float *)(param_1 + 0x40),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_60,"OnEffectDone2");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::string((string *)aRStack_60,"start");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  FUN_036f7560(this + 0x1c,0x65130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::TakeLightningDamage(BoardEntity*, bool) */

void __thiscall
RiftThemeLightning::TakeLightningDamage(RiftThemeLightning *this,BoardEntity *param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Zombie *pZVar5;
  code *pcVar6;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  iVar4 = BoardEntity::CalcColumnPosition(param_1);
  DamageInfo::DamageInfo((DamageInfo *)&local_c8);
  iVar1 = *(int *)(this + 0x24);
  if ((iVar3 == iVar1) && (iVar4 == iVar1)) {
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar5 != (Zombie *)0x0) {
      if (param_2) {
        pcVar6 = *(code **)(*(long *)pZVar5 + 0x120);
        Sexy::Point::Point(aPStack_d8,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_d0,local_cc,aDStack_68,0x80,0,aPStack_d8,0);
        (*pcVar6)(pZVar5,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        goto LAB_0370cdc0;
      }
      local_c0 = 0x42c80000;
    }
  }
  else {
    uVar2 = iVar1 - iVar3 >> 0x1f;
    if ((iVar1 - iVar3 ^ uVar2) - uVar2 == 1) {
      local_c0 = 0x42a00000;
    }
    else {
      local_c0 = 0x42200000;
    }
  }
  local_c8 = 0;
  local_b8 = 0x80;
  (**(code **)(*(long *)param_1 + 0x110))(param_1,(DamageInfo *)&local_c8);
LAB_0370cdc0:
  DamageInfo::~DamageInfo((DamageInfo *)&local_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::DoDamage(int, int, float) */

void __thiscall
RiftThemeLightning::DoDamage(RiftThemeLightning *this,int param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Plant *this_00;
  long lVar7;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  Point *extraout_x1;
  code *pcVar8;
  RtObject *this_03;
  float fVar9;
  float fVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  string asStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  Plant *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_90,param_1,param_2,1,1);
  Sexy::Point::Point((Point *)&local_68,param_1,param_2);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_68,extraout_x1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar5 = operator|(2,4);
  uVar3 = operator|(uVar5,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
    this_03 = (RtObject *)*puVar6;
    this_00 = Sexy::RtObject::Cast<Plant>(this_03);
    if (this_00 == (Plant *)0x0) {
      this_01 = Sexy::RtObject::Cast<Zombie>(this_03);
      if (this_01 != (Zombie *)0x0) {
        cVar2 = Zombie::IsBoss(this_01);
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0')) {
          if (*(int *)(this + 0x28) == param_2) {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_58 = 0x80;
            (**(code **)(*(long *)this_01 + 0x120))(this_01,(Point *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          else {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            fVar9 = (float)FUN_036f759c(*(undefined4 *)(this_01 + 0x2ac));
            fVar10 = (float)FUN_036f7594(*(undefined4 *)(this_01 + 0x284));
            local_58 = 0x80;
            local_60 = (fVar10 + fVar9) * param_3 * 0.01;
            local_68 = this_00;
            (**(code **)(*(long *)this_01 + 0x110))(this_01,(Point *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
        else {
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          bVar1 = std::operator!=((string *)(lVar7 + 8),"zombossmech_iceage");
          if (bVar1) {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_68 = (Plant *)0x0;
            local_58 = 0x80;
            local_60 = 500.0;
            (**(code **)(*(long *)this_01 + 0x110))(this_01,(Point *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
      }
    }
    else {
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      FUN_05475d88(asStack_a8,lVar7 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      bVar1 = std::operator!=(asStack_a8,"anthurium");
      if ((((((bVar1) && (bVar1 = std::operator!=(asStack_a8,"electricblueberry"), bVar1)) &&
            (bVar1 = std::operator!=(asStack_a8,"nekotail"), bVar1)) &&
           ((bVar1 = std::operator!=(asStack_a8,"cactus"), bVar1 &&
            (bVar1 = std::operator!=(asStack_a8,"lightningreed"), bVar1)))) &&
          ((bVar1 = std::operator!=(asStack_a8,"electriccurrant"), bVar1 &&
           ((bVar1 = std::operator!=(asStack_a8,"electricitea"), bVar1 &&
            (bVar1 = std::operator!=(asStack_a8,"electricpeashooter"), bVar1)))))) &&
         ((bVar1 = std::operator!=(asStack_a8,"thundersnapdragon"), bVar1 &&
          (bVar1 = std::operator!=(asStack_a8,"mangosteen"), bVar1)))) {
        if ((*(int *)(this + 0x24) == param_1) && (*(int *)(this + 0x28) == param_2)) {
          pcVar8 = *(code **)(*(long *)this_00 + 0x120);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_98,local_94,(Point *)&local_68,4,aPStack_a0,0);
          (*pcVar8)(this_00,(Point *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
        else {
          DamageInfo::DamageInfo((DamageInfo *)&local_68);
          iVar4 = Plant::GetMaxHitpoints(this_00);
          local_68 = (Plant *)0x0;
          local_58 = 0x80;
          local_60 = (float)iVar4 * param_3 * 0.01;
          (**(code **)(*(long *)this_00 + 0x110))(this_00,(Point *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
      }
      std::string::~string(asStack_a8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::OnEffectDone2(StandaloneEffect*) */

void RiftThemeLightning::OnEffectDone2(StandaloneEffect *param_1)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  int in_w2;
  FastCurve aFStack_80 [8];
  int local_78;
  int local_74;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_80,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)*(uint *)(param_1 + 0x24),*(int *)(param_1 + 0x28),in_w2);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING2");
  GetPAMByName(asStack_68);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  Effect_PopAnim::SetCentered(pEVar1,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,(float)local_78 + *(float *)(param_1 + 0x3c),
             (float)local_74 + *(float *)(param_1 + 0x40),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_60,-1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_60,"OnEffectDone3");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::string((string *)aRStack_60,"diel2");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  FUN_036f7560(pEVar1 + 0x1c,0x65130);
  DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x28),100.0);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING1");
  GetPAMByName(asStack_68);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  Effect_PopAnim::SetCentered(pEVar1,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,(float)local_78 + *(float *)(param_1 + 0x3c),
             (float)local_74 + *(float *)(param_1 + 0x40),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_60,-1);
  std::string::string((string *)aRStack_60,"end");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  FUN_036f7560(pEVar1 + 0x1c,0x65130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::OnEffectDone3(StandaloneEffect*) */

void RiftThemeLightning::OnEffectDone3(StandaloneEffect *param_1)

{
  Point *pPVar1;
  char cVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  Effect_PopAnim *pEVar5;
  int in_w2;
  int iVar6;
  Board *this;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FastCurve aFStack_a0 [8];
  int local_98;
  int local_94;
  FastCurve aFStack_90 [8];
  int local_88;
  int local_84;
  FastCurve aFStack_80 [8];
  int local_78;
  int local_74;
  FastCurve aFStack_70 [8];
  int local_68;
  int local_64;
  FastCurve aFStack_60 [8];
  int local_58;
  int local_54;
  FastCurve aFStack_50 [8];
  int local_48;
  int local_44;
  FastCurve aFStack_40 [8];
  int local_38;
  int local_34;
  FastCurve aFStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = PVZ_T();
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  Sexy::FastCurve::SetOutRange(aFStack_a0,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)(*(int *)(param_1 + 0x24) - 1),*(int *)(param_1 + 0x28) + -1,
             in_w2);
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(pEVar3,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(local_98 + 0x1e),(float)local_94,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_036f7560(pEVar3 + 0x1c,0x65130);
  iVar6 = *(int *)(param_1 + 0x28) + -1;
  DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24) + -1,iVar6,80.0);
  Sexy::FastCurve::SetOutRange(aFStack_90,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)(*(int *)(param_1 + 0x24) + 1),*(int *)(param_1 + 0x28) + -1,
             iVar6);
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(pEVar3,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(local_88 + -0x14),(float)local_84,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_036f7560(pEVar3 + 0x1c,0x65130);
  fVar8 = (float)Sexy::SexyMath::DegToRad(270.0);
  Effect_PopAnim::SetOrientation(pEVar3,fVar8);
  iVar6 = *(int *)(param_1 + 0x28) + -1;
  DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24) + 1,iVar6,80.0);
  Sexy::FastCurve::SetOutRange(aFStack_80,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)(*(int *)(param_1 + 0x24) - 1),*(int *)(param_1 + 0x28) + 1,
             iVar6);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(pEVar5,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(local_78 + -0xf),(float)(local_74 + -0x28),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_036f7560(pEVar5 + 0x1c,0x65130);
  fVar9 = (float)Sexy::SexyMath::DegToRad(90.0);
  Effect_PopAnim::SetOrientation(pEVar5,fVar9);
  iVar6 = *(int *)(param_1 + 0x28) + 1;
  DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24) + -1,iVar6,80.0);
  Sexy::FastCurve::SetOutRange(aFStack_70,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)(*(int *)(param_1 + 0x24) + 1),*(int *)(param_1 + 0x28) + 1,
             iVar6);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(pEVar5,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(local_68 + 0x14),(float)(local_64 + -10),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_036f7560(pEVar5 + 0x1c,0x65130);
  fVar10 = (float)Sexy::SexyMath::DegToRad(180.0);
  Effect_PopAnim::SetOrientation(pEVar3,fVar10);
  iVar6 = *(int *)(param_1 + 0x28) + 1;
  DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24) + 1,iVar6,80.0);
  this = *(Board **)(gLawnApp + 0x9f0);
  if (this != (Board *)0x0) {
    pPVar1 = (Point *)(param_1 + 0x24);
    Sexy::FastCurve::SetOutRange(aFStack_60,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)(*(int *)(param_1 + 0x24) - 1),*(int *)(param_1 + 0x28),
               iVar6);
    cVar2 = Board::IsShallowWater(this,pPVar1);
    if (cVar2 != '\0') {
      iVar6 = *(int *)(param_1 + 0x28);
      Sexy::Point::Point((Point *)aRStack_18,*(int *)(param_1 + 0x24) + -1,iVar6);
      cVar2 = Board::IsShallowWater(this,(Point *)aRStack_18);
      if (cVar2 != '\0') {
        pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING3");
        GetPAMByName(asStack_20);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
        nop();
        Effect_PopAnim::SetCentered(pEVar3,true);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_18,(float)local_58 + *(float *)(param_1 + 0x30),
                   (float)(local_54 + -0x14),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
        std::string::string((string *)aRStack_18,"idle");
        Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
        FUN_036f7560(pEVar3 + 0x1c,0x65130);
        iVar6 = *(int *)(param_1 + 0x28);
        DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24) + -1,iVar6,80.0);
      }
    }
    Sexy::FastCurve::SetOutRange(aFStack_50,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)(*(int *)(param_1 + 0x24) + 1),*(int *)(param_1 + 0x28),
               iVar6);
    cVar2 = Board::IsShallowWater(this,pPVar1);
    if (cVar2 != '\0') {
      iVar6 = *(int *)(param_1 + 0x28);
      Sexy::Point::Point((Point *)aRStack_18,*(int *)(param_1 + 0x24) + 1,iVar6);
      cVar2 = Board::IsShallowWater(this,(Point *)aRStack_18);
      if (cVar2 != '\0') {
        pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING3");
        GetPAMByName(asStack_20);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
        nop();
        Effect_PopAnim::SetCentered(pEVar3,true);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_18,(float)local_48 + *(float *)(param_1 + 0x30),
                   (float)(local_44 + -0x14),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
        std::string::string((string *)aRStack_18,"idle");
        Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
        FUN_036f7560(pEVar3 + 0x1c,0x65130);
        Effect_PopAnim::SetOrientation(pEVar3,fVar10);
        iVar6 = *(int *)(param_1 + 0x28);
        DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24) + 1,iVar6,80.0);
      }
    }
    Sexy::FastCurve::SetOutRange(aFStack_40,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)*(uint *)(param_1 + 0x24),*(int *)(param_1 + 0x28) + -1,
               iVar6);
    cVar2 = Board::IsShallowWater(this,pPVar1);
    if (cVar2 != '\0') {
      iVar6 = *(int *)(param_1 + 0x28) + -1;
      Sexy::Point::Point((Point *)aRStack_18,*(int *)(param_1 + 0x24),iVar6);
      cVar2 = Board::IsShallowWater(this,(Point *)aRStack_18);
      if (cVar2 != '\0') {
        pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING3");
        GetPAMByName(asStack_20);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
        nop();
        Effect_PopAnim::SetCentered(pEVar3,true);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_18,(float)local_38 + *(float *)(param_1 + 0x30),
                   (float)(local_34 + -0x14),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
        std::string::string((string *)aRStack_18,"idle");
        Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
        FUN_036f7560(pEVar3 + 0x1c,0x65130);
        Effect_PopAnim::SetOrientation(pEVar3,fVar9);
        iVar6 = *(int *)(param_1 + 0x28) + -1;
        DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24),iVar6,80.0);
      }
    }
    Sexy::FastCurve::SetOutRange(aFStack_30,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)*(uint *)(param_1 + 0x24),*(int *)(param_1 + 0x28) + 1,
               iVar6);
    cVar2 = Board::IsShallowWater(this,pPVar1);
    if (cVar2 != '\0') {
      Sexy::Point::Point((Point *)aRStack_18,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x28) + 1);
      cVar2 = Board::IsShallowWater(this,(Point *)aRStack_18);
      if (cVar2 != '\0') {
        pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING3");
        GetPAMByName(asStack_20);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
        nop();
        Effect_PopAnim::SetCentered(pEVar3,true);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_18,(float)local_28 + *(float *)(param_1 + 0x30),
                   (float)(local_24 + -0x14),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
        std::string::string((string *)aRStack_18,"idle");
        Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
        FUN_036f7560(pEVar3 + 0x1c,0x65130);
        Effect_PopAnim::SetOrientation(pEVar3,fVar8);
        DoDamage((RiftThemeLightning *)param_1,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x28) + 1
                 ,80.0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::Activate() */

void __thiscall RiftThemeLightning::Activate(RiftThemeLightning *this)

{
  LevelModuleManager *pLVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftTheme::Activate((RiftTheme *)this);
  pLVar1 = (LevelModuleManager *)FUN_036f7590(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGamePlayStarted);
    Sexy::Delegate0::Delegate0<RiftThemeLightning,void(RiftThemeLightning::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::LightningTrigger() */

void RiftThemeLightning::LightningTrigger(void)

{
  long in_x0;
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  int iVar5;
  undefined8 in_x2;
  uint local_90;
  int iStack_8c;
  FastCurve aFStack_88 [8];
  int local_80;
  int local_7c;
  RtMixedPtr aRStack_78 [8];
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_90);
  local_90 = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  local_70._0_4_ = 1;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_68,(int *)&local_70);
    iVar5 = (int)in_x2;
    local_70._0_4_ = (int)local_70 + 1;
  } while ((int)local_70 < 0x2e);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_68);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_68);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar1,uVar2);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
  if (*piVar3 < 2) {
    local_90 = 0;
  }
  else {
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    if (*piVar3 < 4) {
      local_90 = 1;
    }
    else {
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_68);
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      if (*piVar3 < 7) {
        local_90 = 2;
      }
      else {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_68);
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
        if (*piVar3 < 0xb) {
          local_90 = 3;
        }
        else {
          local_70 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_68);
          piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
          if (*piVar3 < 0x10) {
            local_90 = 4;
          }
          else {
            local_70 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_68);
            piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
            if (*piVar3 < 0x16) {
              local_90 = 5;
            }
            else {
              local_70 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)avStack_68);
              piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_70);
              if (*piVar3 < 0x1d) {
                local_90 = 6;
              }
              else {
                local_70 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)avStack_68);
                piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_70);
                if (*piVar3 < 0x25) {
                  local_90 = 7;
                }
                else {
                  local_90 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  iStack_8c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_68);
  *(ulong *)(in_x0 + 0x24) = CONCAT44(iStack_8c,local_90);
  Sexy::FastCurve::SetOutRange(aFStack_88,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_90,iStack_8c,iVar5);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_70,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING2");
  GetPAMByName((string *)&local_70);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)avStack_68);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
  std::string::~string((string *)&local_70);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)avStack_68,(float)local_80 + *(float *)(in_x0 + 0x3c),
             (float)local_7c + *(float *)(in_x0 + 0x40),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)avStack_68,-1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)avStack_68,"OnEffectDone1");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
             (exception_ptr *)&local_70,avStack_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)avStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::string((string *)avStack_68,"idle");
  Effect_PopAnim::PlaySingleAnimation(this,avStack_68,0);
  std::string::~string((string *)avStack_68);
  nop();
  FUN_036f7560(this + 0x1c,0x65130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightning::Update() */

void RiftThemeLightning::Update(void)

{
  RiftThemeLightning *in_x0;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  int in_w2;
  int iVar3;
  float fVar4;
  float fVar5;
  FastCurve aFStack_60 [8];
  int local_58;
  int local_54;
  FastCurve aFStack_50 [8];
  int local_48;
  int local_44;
  FastCurve aFStack_40 [8];
  int local_38;
  int local_34;
  FastCurve aFStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x1c) < fVar4) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    fVar4 = (float)PVZ_T();
    in_x0[0x20] = (RiftThemeLightning)0x1;
    *(float *)(in_x0 + 0x1c) = fVar4 + 3.0;
    LightningTrigger();
    fVar4 = *(float *)(in_x0 + 0x2c);
  }
  else {
    fVar4 = *(float *)(in_x0 + 0x2c);
  }
  if ((fVar4 != 0.0) && (fVar5 = (float)PVZ_T(), fVar4 < fVar5 - 0.2)) {
    *(undefined4 *)(in_x0 + 0x2c) = 0;
    Sexy::FastCurve::SetOutRange(aFStack_60,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)(*(int *)(in_x0 + 0x24) - 2),*(int *)(in_x0 + 0x28) + -2,
               in_w2);
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(pEVar1,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(local_58 + 5),(float)(local_54 + -5),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(RtWeakPtr *)aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    FUN_036f7560(pEVar1 + 0x1c,0x65130);
    iVar3 = *(int *)(in_x0 + 0x28) + -2;
    DoDamage(in_x0,*(int *)(in_x0 + 0x24) + -2,iVar3,40.0);
    Sexy::FastCurve::SetOutRange(aFStack_50,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)(*(int *)(in_x0 + 0x24) + 2),*(int *)(in_x0 + 0x28) + -2,
               iVar3);
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(pEVar1,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(local_48 + -10),(float)(local_44 + -10),0.0)
    ;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(RtWeakPtr *)aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    FUN_036f7560(pEVar1 + 0x1c,0x65130);
    fVar4 = (float)Sexy::SexyMath::DegToRad(90.0);
    Effect_PopAnim::SetOrientation(pEVar1,fVar4);
    iVar3 = *(int *)(in_x0 + 0x28) + -2;
    DoDamage(in_x0,*(int *)(in_x0 + 0x24) + 2,iVar3,40.0);
    Sexy::FastCurve::SetOutRange(aFStack_40,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)(*(int *)(in_x0 + 0x24) - 2),*(int *)(in_x0 + 0x28) + 2,
               iVar3);
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(pEVar1,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_38,(float)(local_34 + -0x14),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(RtWeakPtr *)aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    FUN_036f7560(pEVar1 + 0x1c,0x65130);
    fVar4 = (float)Sexy::SexyMath::DegToRad(270.0);
    Effect_PopAnim::SetOrientation(pEVar1,fVar4);
    iVar3 = *(int *)(in_x0 + 0x28) + 2;
    DoDamage(in_x0,*(int *)(in_x0 + 0x24) + -2,iVar3,40.0);
    Sexy::FastCurve::SetOutRange(aFStack_30,0.0,0.0);
    BoardTransforms::GridToBoardSpacePos
              ((BoardTransforms *)(ulong)(*(int *)(in_x0 + 0x24) + 2),*(int *)(in_x0 + 0x28) + 2,
               iVar3);
    pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_HAMMERFLOWER_LIGHTING4");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(pEVar1,true);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)(local_28 + 10),(float)(local_24 + -0x28),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,(RtWeakPtr *)aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    FUN_036f7560(pEVar1 + 0x1c,0x65130);
    fVar4 = (float)Sexy::SexyMath::DegToRad(180.0);
    Effect_PopAnim::SetOrientation(pEVar1,fVar4);
    DoDamage(in_x0,*(int *)(in_x0 + 0x24) + 2,*(int *)(in_x0 + 0x28) + 2,40.0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

