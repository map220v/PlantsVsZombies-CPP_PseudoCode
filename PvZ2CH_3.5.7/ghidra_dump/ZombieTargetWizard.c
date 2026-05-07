// Class: ZombieTargetWizard


/* ZombieTargetWizard::~ZombieTargetWizard() */

void __thiscall ZombieTargetWizard::~ZombieTargetWizard(ZombieTargetWizard *this)

{
  *(undefined ***)this = &PTR_GetClass_06895d70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTargetWizard_068967b0;
  ZombieTarget::~ZombieTarget((ZombieTarget *)this);
  return;
}


/* non-virtual thunk to ZombieTargetWizard::~ZombieTargetWizard() */

void __thiscall ZombieTargetWizard::~ZombieTargetWizard(ZombieTargetWizard *this)

{
  ~ZombieTargetWizard(this + -0x10);
  return;
}


/* ZombieTargetWizard::~ZombieTargetWizard() */

void __thiscall ZombieTargetWizard::~ZombieTargetWizard(ZombieTargetWizard *this)

{
  ~ZombieTargetWizard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTargetWizard::~ZombieTargetWizard() */

void __thiscall ZombieTargetWizard::~ZombieTargetWizard(ZombieTargetWizard *this)

{
  ~ZombieTargetWizard(this + -0x10);
  return;
}


/* ZombieTargetWizard::ZombieTargetWizard() */

void __thiscall ZombieTargetWizard::ZombieTargetWizard(ZombieTargetWizard *this)

{
  ZombieTarget::ZombieTarget((ZombieTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06895d70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTargetWizard_068967b0;
  return;
}


/* ZombieTargetWizard::StaticNew() */

ZombieTargetWizard * ZombieTargetWizard::StaticNew(void)

{
  ZombieTargetWizard *this;
  
  this = ::operator_new(0x820);
  ZombieTargetWizard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetWizard::StaticClassInit() */

void ZombieTargetWizard::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTargetWizard");
    (*pcVar2)(plVar1,asStack_10,FUN_046749b0,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetWizard::StaticGetClass() */

long * ZombieTargetWizard::StaticGetClass(void)

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
  uVar2 = ZombieTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetWizard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetWizard::GetClass() const */

long * ZombieTargetWizard::GetClass(void)

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
  uVar2 = ZombieTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetWizard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetWizard::onEnterState_RiseFromGround(ZombieState) */

void ZombieTargetWizard::onEnterState_RiseFromGround(Zombie *param_1)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_78,-0x28,-0x3a);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar5 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar5)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_70 = *(undefined8 *)pfVar3;
  local_68 = 0xc2f00000;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_70);
  RealObject::SetUseGroundClipRect((RealObject *)param_1,true);
  fVar7 = *pfVar3;
  fVar6 = pfVar3[1];
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetDirtSpawnEffect();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,fVar7 + (float)local_78,(float)local_74 + -10.0 + fVar6,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_04674734(this + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_60,"tomb_dirt_anim");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  std::string::string((string *)aRStack_60,"Play_Gravestone_rumble");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_60,0.0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetWizard::onEnterState_TargetAttack(ZombieState) */

void ZombieTargetWizard::onEnterState_TargetAttack(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTargetAttackAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_FairyTaleWitch::StartCasting((ZombieAnimRig_FairyTaleWitch *)pZVar1,aRStack_50);
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
/* ZombieTargetWizard::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieTargetWizard::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  PopAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  long lVar7;
  LightningBolt *this_00;
  ZombieTargetProps *pZVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  string asStack_90 [8];
  Vec3 aVStack_88 [16];
  Insets aIStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')
       ) && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) &&
     (plVar5 = (long *)ZombieTarget::getValidTargetPlant(), plVar5 != (long *)0x0)) {
    Sexy::Insets::Insets(aIStack_78);
    this = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    std::string::string((string *)&local_68,"wizard_staff_ball");
    PopAnimRig::CalcSymbolRect(this,(string *)&local_68,(TRect *)aIStack_78);
    std::string::~string((string *)&local_68);
    nop();
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar9 = (float)FUN_04674758(*(undefined4 *)(param_1 + 0x18),fVar11,
                                *(undefined4 *)(param_1 + 0x20));
    Sexy::TRect<int>::GetCenter();
    iVar3 = FUN_046747b4(local_68);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    fVar10 = *(float *)(lVar7 + 0xc4);
    Sexy::TRect<int>::GetCenter();
    iVar4 = FUN_046747b4(local_64);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    EATextSquish::Vec3::Vec3
              (aVStack_88,(float)(int)((fVar9 - fVar10) + (float)iVar3),
               (float)(int)((fVar11 - *(float *)(lVar7 + 200)) + (float)iVar4),0.0);
    this_00 = GameObject::Create<LightningBolt>();
    pZVar8 = Zombie::GetProps<ZombieTargetProps>((Zombie *)param_1);
    std::string::string(asStack_90,"");
    std::string::string((string *)&local_68,"POPANIM_EFFECTS_ZOMBIE_DARK_WIZARD_PROJECTILE_HIT");
    LightningBolt::SetPopAnim(this_00,(string *)(pZVar8 + 0x220),asStack_90,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    std::string::~string(asStack_90);
    nop();
    FUN_04674750(this_00 + 0x118);
    FUN_0467473c(this_00 + 0x11c,this_00 + 0x120);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)asStack_90);
    TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_00,(string *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_90,(RtWeakPtrBase *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)asStack_90);
    LightningBolt::SetInitialTarget(this_00,(string *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    pZVar8 = Zombie::GetProps<ZombieTargetProps>((Zombie *)param_1);
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar8 + 0x228),0.0);
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    local_60 = *(undefined4 *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x110))(plVar5,(string *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

