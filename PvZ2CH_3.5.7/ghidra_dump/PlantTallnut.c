// Class: PlantTallnut


/* PlantTallnut::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantTallnut::TakeSmashAttack(long *param_1)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = Plant::IsInvincible((Plant *)param_1[2],false);
  if (cVar1 == '\0') {
    if (*(float *)(param_1 + 5) <= 0.0) {
      Plant::KillPlant((Plant *)param_1[2],0,0,1);
      return;
    }
    pcVar2 = *(code **)(*param_1 + 0x528);
    *(undefined4 *)(param_1 + 5) = 0;
    (*pcVar2)(param_1);
  }
  return;
}


/* PlantTallnut::CanBeWatered() */

byte __thiscall PlantTallnut::CanBeWatered(PlantTallnut *this)

{
  char cVar1;
  Plant *this_00;
  
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_040719d0(*(undefined4 *)(this_00 + 0x1d0));
  if (((cVar1 == '\0') && (*(int *)(this_00 + 200) != 3)) &&
     (cVar1 = Plant::IsSuspended(this_00), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    return (byte)this[0x30] ^ 1;
  }
  return 0;
}


/* PlantTallnut::Initialize() */

void __thiscall PlantTallnut::Initialize(PlantTallnut *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantTallnut)0x0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  uVar1 = PVZ_EOT();
  this[0x38] = (PlantTallnut)0x0;
  *(undefined4 *)(this + 0x34) = uVar1;
  (**(code **)(*(long *)this + 0x528))(this);
  return;
}


/* PlantTallnut::PlantTallnut() */

void __thiscall PlantTallnut::PlantTallnut(PlantTallnut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c73e0;
  return;
}


/* PlantTallnut::StaticNew() */

PlantTallnut * PlantTallnut::StaticNew(void)

{
  PlantTallnut *this;
  
  this = ::operator_new(0x40);
  PlantTallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTallnut::StaticClassInit() */

void PlantTallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_04071c8c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTallnut::StaticGetClass() */

long * PlantTallnut::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTallnut::GetClass() const */

long * PlantTallnut::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTallnut::~PlantTallnut() */

void __thiscall PlantTallnut::~PlantTallnut(PlantTallnut *this)

{
  *(undefined ***)this = &PTR_GetClass_067c73e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTallnut::~PlantTallnut() */

void __thiscall PlantTallnut::~PlantTallnut(PlantTallnut *this)

{
  ~PlantTallnut(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTallnut::TryBlockZombossRush(Zombie*) */

void PlantTallnut::TryBlockZombossRush(Zombie *param_1)

{
  code *pcVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  fVar2 = *(float *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  if (0.0 < fVar2) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x310);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar1)(param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0.0 < fVar2);
}


/* PlantTallnut::updateShieldLayers() */

void __thiscall PlantTallnut::updateShieldLayers(PlantTallnut *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  plVar3 = (long *)FUN_04072110(*(undefined8 *)(this + 0x10));
  iVar2 = (**(code **)(*plVar3 + 600))();
  lVar4 = FUN_04072198(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar4 + 0x2b8);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    lVar4 = FUN_04072198(*(undefined8 *)(this + 0x10));
    fVar5 = *(float *)(lVar4 + 0x2b8) * 1.5;
  }
  iVar2 = (int)(((fVar5 - *(float *)(this + 0x28)) / fVar5) * (float)iVar2);
  if (*(int *)(this + 0x2c) != iVar2) {
    *(int *)(this + 0x2c) = iVar2;
    plVar3 = (long *)FUN_04072110(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar3 + 0x260))(plVar3,*(undefined4 *)(this + 0x2c));
  }
  return;
}


/* PlantTallnut::CanApplyPlantfood() */

bool __thiscall PlantTallnut::CanApplyPlantfood(PlantTallnut *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  if (this[0x30] != (PlantTallnut)0x0) {
    return false;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    fVar3 = *(float *)(this + 0x28);
    lVar2 = FUN_04072198(*(undefined8 *)(this + 0x10));
    return fVar3 != *(float *)(lVar2 + 0x2b8) * 1.5;
  }
  fVar3 = *(float *)(this + 0x28);
  lVar2 = FUN_04072198(*(undefined8 *)(this + 0x10));
  return fVar3 != *(float *)(lVar2 + 0x2b8);
}


/* PlantTallnut::ApplyPlantfood() */

void __thiscall PlantTallnut::ApplyPlantfood(PlantTallnut *this)

{
  char cVar1;
  long lVar2;
  
  Plant::Heal(*(Plant **)(this + 0x10));
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = FUN_04072198(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 0x2b8);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    lVar2 = FUN_04072198(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = *(float *)(lVar2 + 0x2b8) * 1.5;
  }
  (**(code **)(*(long *)this + 0x528))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTallnut::onKilled(bool) */

void __thiscall PlantTallnut::onKilled(PlantTallnut *this,bool param_1)

{
  char cVar1;
  PlantTallnut PVar2;
  int iVar3;
  PlantAnimRig_Pinecone *this_00;
  PopAnimRig *pPVar4;
  UIEasyButtonWidget *this_01;
  Plant *this_02;
  long lVar5;
  float fVar6;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) || (this[0x30] != (PlantTallnut)0x0)) goto LAB_04072418;
  this_02 = *(Plant **)(this + 0x10);
  std::string::string(asStack_58,"NoDiedMsg");
  cVar1 = Plant::HasTag(this_02,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if ((cVar1 != '\0') || (cVar1 = Plant::IsInPlantDefence(*(Plant **)(this + 0x10)), cVar1 != '\0'))
  goto LAB_04072418;
  cVar1 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar5 = *(long *)(this + 0x10);
    iVar3 = FUN_04071a64(lVar5);
    if (iVar3 == 2) {
      fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar5 = *(long *)(this + 0x10);
      if (fVar6 < 0.5) goto LAB_040725dc;
    }
    else if (2 < iVar3) {
LAB_040725dc:
      this[0x30] = (PlantTallnut)0x1;
    }
  }
  else {
    PVar2 = (PlantTallnut)Plant::IsSkillActivate(*(Plant **)(this + 0x10));
    lVar5 = *(long *)(this + 0x10);
    this[0x30] = PVar2;
  }
  FUN_04071a8c(lVar5 + 0x551);
  if (this[0x30] != (PlantTallnut)0x0) {
    this_00 = (PlantAnimRig_Pinecone *)FUN_04072110(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Pinecone::SetElec(this_00,true);
    this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    *(undefined4 *)(this_01 + 0xd8) = 0x3f800000;
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
    std::string::string(asStack_58,"dead");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
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
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x34) = fVar6 + 1.5;
  }
LAB_04072418:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTallnut::onAnimStoppedCallback(std::string const&) */

void PlantTallnut::onAnimStoppedCallback(string *param_1)

{
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantDied,*(Plant **)(param_1 + 0x10));
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTallnut::DamageZombieAtGrid(int, int) */

void __thiscall PlantTallnut::DamageZombieAtGrid(PlantTallnut *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_03;
  ulong uVar7;
  RtObject *this_04;
  NewAvatarGeneralSkillBoost *pNVar8;
  ulong uVar9;
  undefined8 uVar10;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_68,"tallnut_new_avatar_2");
  iVar3 = NameMapperBase::GetIdForName(this_02,asStack_68);
  std::string::~string(asStack_68);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_80);
    if (!bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      iVar3 = 0;
      goto LAB_040726f0;
    }
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    this_04 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    pNVar8 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_04);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    if (pNVar8 != (NewAvatarGeneralSkillBoost *)0x0) {
      iVar3 = (int)*(float *)(pNVar8 + 100);
      goto LAB_040726f0;
    }
  }
  iVar3 = 0;
LAB_040726f0:
  uVar9 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  Sexy::Insets::Insets((Insets *)asStack_68,param_1,param_2,2,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2,asStack_68
            );
  uVar10 = local_80;
  lVar5 = FUN_04071a78(local_80,local_78);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_04071a84(uVar10,uVar9);
      this_03 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if ((((this_03 != (Zombie *)0x0) && (cVar1 = Zombie::IsOnGround(this_03), cVar1 != '\0')) &&
          (cVar1 = (**(code **)(*(long *)this_03 + 0x328))(this_03), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)this_03 + 0x330))(this_03), cVar1 == '\0')) {
        iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_03);
        lVar5 = *(long *)(this + 0x10);
        Sexy::Point::Point(aPStack_90,iVar4,*(int *)(lVar5 + 0x110));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((float)iVar3 + 600.0),local_88,local_84,asStack_68,1,lVar5,
                   aPStack_90,0);
        (**(code **)(*(long *)this_03 + 0x110))(this_03,asStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
      }
      uVar10 = local_80;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_04071a78(local_80,local_78);
    } while (uVar9 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTallnut::UpdateActions() */

void __thiscall PlantTallnut::UpdateActions(PlantTallnut *this)

{
  RealObject *this_00;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x30] != (PlantTallnut)0x0) &&
      (fVar1 = (float)PVZ_T(), *(float *)(this + 0x34) < fVar1)) &&
     (this[0x38] == (PlantTallnut)0x0)) {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Plant_Squash_Impact");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    DamageZombieAtGrid(this,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    this[0x38] = (PlantTallnut)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTallnut::TakeDamage(DamageInfo const&) */

void PlantTallnut::TakeDamage(DamageInfo *param_1)

{
  float *pfVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_80 [8];
  RtWeakPtr aRStack_78 [16];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = 0.0;
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    DamageInfo::DamageInfo(in_x8,in_x1);
  }
  else {
    DamageInfo::DamageInfo(aDStack_68,in_x1);
    fVar3 = *(float *)(param_1 + 0x28) - *(float *)(in_x1 + 8);
    *(float *)(param_1 + 0x28) = fVar3;
    if (fVar3 < 0.0) {
      fVar5 = -fVar3;
      *(undefined4 *)(param_1 + 0x28) = 0;
      pfVar1 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_80,"POPANIM_EFFECTS_TALLNUT_DAMAGE");
      GetPAMByName(asStack_80);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_78);
      Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      std::string::~string(asStack_80);
      nop();
      Effect_PopAnim::SetCentered(this,true);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,(float)(int)fVar3,(float)(int)fVar4,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_78,-1);
      FUN_04071a9c(this + 0x1c);
      std::string::string((string *)aRStack_78,"animation");
      Effect_PopAnim::PlaySingleAnimation(this,aRStack_78,0);
      std::string::~string((string *)aRStack_78);
      nop();
    }
    (**(code **)(*(long *)param_1 + 0x528))(param_1);
    if (*(float *)(param_1 + 0x28) <= 0.0) {
      local_60 = fVar5;
      if (param_1[0x30] != (DamageInfo)0x0) {
        local_60 = 0.0;
      }
      DamageInfo::DamageInfo(in_x8,aDStack_68);
    }
    else {
      local_60 = 0.0;
      DamageInfo::DamageInfo(in_x8,aDStack_68);
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

