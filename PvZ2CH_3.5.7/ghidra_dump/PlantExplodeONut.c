// Class: PlantExplodeONut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantExplodeONut::StaticClassInit() */

void PlantExplodeONut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantExplodeONut");
    (*pcVar2)(plVar1,asStack_10,FUN_039045f4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantExplodeONut::StaticGetClass() */

long * PlantExplodeONut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantExplodeONut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantExplodeONut::GetClass() const */

long * PlantExplodeONut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantExplodeONut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantExplodeONut::PlantExplodeONut() */

void __thiscall PlantExplodeONut::PlantExplodeONut(PlantExplodeONut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_066bfc70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantExplodeONut::StaticNew() */

PlantExplodeONut * PlantExplodeONut::StaticNew(void)

{
  PlantExplodeONut *this;
  
  this = ::operator_new(0x40);
  PlantExplodeONut(this);
  return this;
}


/* PlantExplodeONut::~PlantExplodeONut() */

void __thiscall PlantExplodeONut::~PlantExplodeONut(PlantExplodeONut *this)

{
  *(undefined ***)this = &PTR_GetClass_066bfc70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantExplodeONut::~PlantExplodeONut() */

void __thiscall PlantExplodeONut::~PlantExplodeONut(PlantExplodeONut *this)

{
  ~PlantExplodeONut(this);
  AK::FreeHook(this);
  return;
}


/* PlantExplodeONut::HasPlantfoodShield() */

void __thiscall PlantExplodeONut::HasPlantfoodShield(PlantExplodeONut *this)

{
  Shield *this_00;
  
  this_00 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  Shield::hasShield(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantExplodeONut::TakeDamage(DamageInfo const&) */

void __thiscall PlantExplodeONut::TakeDamage(PlantExplodeONut *this,DamageInfo *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  Shield *pSVar7;
  DamageInfo *pDVar8;
  long extraout_x0;
  long extraout_x0_00;
  long in_x8;
  long lVar9;
  Board *this_01;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  pSVar7 = (Shield *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar4 = Shield::hasShield(pSVar7);
  pDVar8 = (DamageInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Shield::ReduceDamage(pDVar8);
  if (cVar4 == '\0') {
LAB_03903abc:
    fVar10 = (float)FUN_03902cf8(*(undefined4 *)(*(long *)(this + 0x10) + 0xd8));
    if (*(float *)(in_x8 + 8) < fVar10) goto LAB_03903ad4;
  }
  else {
    pSVar7 = (Shield *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar4 = Shield::hasShield(pSVar7);
    if (cVar4 != '\0') goto LAB_03903abc;
  }
  (**(code **)(*(long *)this + 0x528))(this);
  lVar9 = *(long *)(this + 0x10);
  fVar10 = (float)FUN_03902cf8(*(undefined4 *)(lVar9 + 0xd8));
  if (*(float *)(in_x8 + 8) < fVar10) goto LAB_03903ad4;
  bVar2 = false;
  iVar5 = FUN_03902d20(lVar9);
  if (iVar5 == 2) {
    fVar10 = (float)RandRangeFloat(0.0,1.0);
    FUN_03902cfc(aRStack_18,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    nop();
    if (*(float *)(this + 0x3c) + *(float *)(extraout_x0_00 + 0x2b8) <= fVar10) {
      bVar2 = true;
      iVar5 = FUN_03902d20(*(undefined8 *)(this + 0x10));
      goto LAB_03903b5c;
    }
    bVar3 = true;
LAB_03903bf4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
LAB_03903b5c:
    bVar3 = false;
    if (2 < iVar5) {
      fVar10 = (float)RandRangeFloat(0.0,1.0);
      FUN_03902cfc((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,*(undefined8 *)(this + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      nop();
      bVar3 = fVar10 < *(float *)(this + 0x3c) + *(float *)(extraout_x0 + 700);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    if (bVar2) goto LAB_03903bf4;
  }
  if (bVar3) {
    iVar5 = *(int *)(*(long *)(this + 0x10) + 0x114);
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"potatomine");
    iVar6 = FUN_03902d20(*(undefined8 *)(this + 0x10));
    Board::AddPlant(this_01,iVar5,iVar1,asStack_10,0,true,iVar6 != 0,false,false);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03903ad4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantExplodeONut::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantExplodeONut::TakeSmashAttack(PlantExplodeONut *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long extraout_x0;
  long extraout_x0_00;
  Board *this_00;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar4 != '\0') goto LAB_03903d00;
  (**(code **)(*(long *)this + 0x528))(this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  PlantTupistraStalker::TakeSmashAttack(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  iVar5 = FUN_03902d20(*(undefined8 *)(this + 0x10));
  bVar2 = false;
  if (iVar5 == 2) {
    fVar7 = (float)RandRangeFloat(0.0,1.0);
    FUN_03902cfc(aRStack_18,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    nop();
    if (*(float *)(this + 0x3c) + *(float *)(extraout_x0_00 + 0x2b8) <= fVar7) {
      bVar2 = true;
      iVar5 = FUN_03902d20(*(undefined8 *)(this + 0x10));
      goto LAB_03903d7c;
    }
    bVar3 = true;
LAB_03903e0c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
LAB_03903d7c:
    if (iVar5 < 3) {
      bVar3 = false;
    }
    else {
      fVar7 = (float)RandRangeFloat(0.0,1.0);
      FUN_03902cfc(aRStack_10,*(undefined8 *)(this + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      nop();
      bVar3 = fVar7 < *(float *)(this + 0x3c) + *(float *)(extraout_x0 + 700);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    if (bVar2) goto LAB_03903e0c;
  }
  if (bVar3) {
    iVar5 = *(int *)(*(long *)(this + 0x10) + 0x114);
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aRStack_10,"potatomine");
    iVar6 = FUN_03902d20(*(undefined8 *)(this + 0x10));
    Board::AddPlant(this_00,iVar5,iVar1,(string *)aRStack_10,0,true,iVar6 != 0,false,false);
    std::string::~string((string *)aRStack_10);
    nop();
  }
LAB_03903d00:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantExplodeONut::explode() */

void __thiscall PlantExplodeONut::explode(PlantExplodeONut *this)

{
  ComponentDamageRadius *this_00;
  float *pfVar1;
  Effect_PopAnim *this_01;
  PopAnim *pPVar2;
  RealObject *this_02;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  fVar5 = 0.0;
  local_8 = ___stack_chk_guard;
  this_00 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  ComponentDamageRadius::StartApply(this_00);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  if ((*(Board **)(gLawnApp + 0x9f0))[0x119] != (Board)0x0) {
    fVar5 = (float)(int)pfVar1[2];
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_GENERIC_EXPLOSION_BACK");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)this_01 + 0x80))(0x3fc00000,this_01);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(fVar3 - 145.0),(float)(int)(fVar4 - 200.0),fVar5);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
  FUN_03902d94(this_01 + 0x1c);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_18,"Play_Potato_Mine");
  RealObject::PlayPositionalSound(this_02,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantExplodeONut::UpdateActions() */

void __thiscall PlantExplodeONut::UpdateActions(PlantExplodeONut *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  Plant *this_00;
  long lVar5;
  float fVar6;
  
  this_00 = *(Plant **)(this + 0x10);
  if (*(int *)(this_00 + 0x148) == *(int *)(this_00 + 0x144)) {
    iVar3 = Plant::GetMaxHitpoints(this_00);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = (float)FUN_03902cf8(*(undefined4 *)(lVar5 + 0xd8));
    iVar1 = *(int *)(lVar5 + 0x144);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    if (fVar6 / ((float)iVar2 * 0.125) < 8.0 - (float)*(int *)(this + 0x38)) {
      *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_Plant_ExplodeONut_Blink");
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantExplodeONut::HandleDamageStateChanged() */

void __thiscall PlantExplodeONut::HandleDamageStateChanged(PlantExplodeONut *this)

{
  Plant *this_00;
  GameObjectDictionary *pGVar1;
  AttachedGameObjectNode *this_01;
  char *pcVar2;
  AttachedEffect *this_02;
  PopAnim *pPVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 0x148) == *(int *)(this_00 + 0x144)) {
    *(undefined4 *)(this + 0x38) = 0;
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Plant_ExplodeONut_Blink_Reset");
    pGVar1 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_18,"blink");
    this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_EXPLODEONUT_BLINK");
    GetPAMByName(asStack_20);
    pPVar3 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    AttachedEffect::InitializeWithAnimation(this_02,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar4 = *(undefined8 *)(this + 0x10);
    pcVar5 = *(code **)(*(long *)this_02 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-30.0,0.0);
    (*pcVar5)(this_02,uVar4,asStack_18,0xffffffff);
    std::string::string(asStack_18,"animation");
    AttachedEffect::PlayAnimLooped(this_02,asStack_18,2);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    pGVar1 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(this_00);
    std::string::string(asStack_18,"blink");
    this_01 = (AttachedGameObjectNode *)GameObjectDictionary::FindOrCreate(pGVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    AttachedGameObjectNode::Destroy(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03904e50 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantExplodeONut::Initialize() */

void __thiscall PlantExplodeONut::Initialize(PlantExplodeONut *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  PlantPropertySheet *pPVar4;
  BoardEntity *this_01;
  long lVar5;
  ComponentDamageRadius *this_02;
  PowerPropsDamageRadius *pPVar6;
  Shield *pSVar7;
  PowerPropsShield *pPVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  std::string::string(asStack_20,"explodeonut_new_avatar_1");
  uVar10 = NewAvatar::GetGeneralBoostValueByNewAvatarName(asStack_20);
  *(undefined4 *)(this + 0x3c) = uVar10;
  std::string::~string(asStack_20);
  nop();
  GameObject::Create<Shield>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  FUN_03902cfc(asStack_20,*(undefined8 *)(this + 0x10));
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  pPVar4 = Sexy::RtObject::Cast<PlantPropertySheet>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar9 = 9;
  if (cVar1 == '\0') {
    uVar9 = 4;
  }
  PowerSet::Find(aRStack_30,pPVar4 + 0x58,uVar9);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar2) {
    pSVar7 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pPVar8 = Sexy::RtObject::Cast<PowerPropsShield_const>(pRVar3);
    ShieldProps::ShieldProps((ShieldProps *)asStack_20,*(int *)(pPVar8 + 0x18));
    Shield::SetProps(pSVar7,(ShieldProps *)asStack_20);
    pSVar7 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)asStack_28);
    Shield::SetAnimRig(pSVar7,asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  this_01 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
  std::string::string(asStack_28,"ExplodeRadius");
  ComponentRunner::Add<ComponentDamageRadius>((ComponentRunner *)this_01,aRStack_30,asStack_28);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  FUN_03902cfc(asStack_28,*(undefined8 *)(this + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  PowerSet::PowerSet((PowerSet *)asStack_20,(PowerSet *)(lVar5 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar9 = 10;
  if (cVar1 == '\0') {
    uVar9 = 5;
  }
  PowerSet::Find(asStack_28,asStack_20,uVar9);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_28);
  if (bVar2) {
    this_02 = (ComponentDamageRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    pPVar6 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(pRVar3);
    ComponentDamageRadius::SetRadiusProps(this_02,(ComponentDamageRadiusProps *)(pPVar6 + 0x18));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  *(undefined4 *)(this + 0x38) = 0;
  PowerSet::~PowerSet((PowerSet *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

