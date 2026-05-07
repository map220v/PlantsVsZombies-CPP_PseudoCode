// Class: PlantHotDate


/* PlantHotDate::IsInvincible() const */

PlantHotDate __thiscall PlantHotDate::IsInvincible(PlantHotDate *this)

{
  return this[0x28];
}


/* PlantHotDate::CanBeTargeted() */

byte __thiscall PlantHotDate::CanBeTargeted(PlantHotDate *this)

{
  byte bVar1;
  
  if (*(code **)(*(long *)this + 0x348) == IsInvincible) {
    bVar1 = IsInvincible(this);
    return bVar1 ^ 1;
  }
  bVar1 = (**(code **)(*(long *)this + 0x348))();
  return bVar1 ^ 1;
}


/* PlantHotDate::AddAttractionEffect(Zombie*) */

PlantHotDate * __thiscall PlantHotDate::AddAttractionEffect(PlantHotDate *this,Zombie *param_1)

{
  byte bVar1;
  PlantHotDate *pPVar2;
  
  if (param_1 != (Zombie *)0x0) {
    bVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    this = (PlantHotDate *)(ulong)bVar1;
    if (bVar1 == 0) {
      pPVar2 = (PlantHotDate *)Zombie::IsSuspended(param_1);
      return pPVar2;
    }
  }
  return this;
}


/* PlantHotDate::CancelPlantfood() */

void __thiscall PlantHotDate::CancelPlantfood(PlantHotDate *this)

{
  char cVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  Plant::SetInvincible(*(Plant **)(this + 0x10),true,true,3.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotDate::StaticClassInit() */

void PlantHotDate::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHotDate");
    (*pcVar2)(plVar1,asStack_10,FUN_03986714,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHotDate::StaticGetClass() */

long * PlantHotDate::StaticGetClass(void)

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
  uVar2 = PlantSweetPotato::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHotDate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHotDate::GetClass() const */

long * PlantHotDate::GetClass(void)

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
  uVar2 = PlantSweetPotato::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHotDate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHotDate::isBursting() */

bool __thiscall PlantHotDate::isBursting(PlantHotDate *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x2c) <= fVar1;
}


/* PlantHotDate::CanApplyPlantfood() */

byte __thiscall PlantHotDate::CanApplyPlantfood(PlantHotDate *this)

{
  byte bVar1;
  
  bVar1 = isBursting(this);
  return bVar1 ^ 1;
}


/* PlantHotDate::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantHotDate::onAnimStoppedCallback(PlantHotDate *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig *pPVar2;
  
  bVar1 = std::operator==(param_1,"death");
  if (!bVar1) {
    return;
  }
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar2,0xe);
  return;
}


/* PlantHotDate::PlantHotDate() */

void __thiscall PlantHotDate::PlantHotDate(PlantHotDate *this)

{
  PlantSweetPotato::PlantSweetPotato((PlantSweetPotato *)this);
  *(undefined ***)this = &PTR_GetClass_066db680;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* PlantHotDate::StaticNew() */

PlantHotDate * PlantHotDate::StaticNew(void)

{
  PlantHotDate *this;
  
  this = ::operator_new(0x58);
  PlantHotDate(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0398738c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantHotDate::Initialize() */

void __thiscall PlantHotDate::Initialize(PlantHotDate *this)

{
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  long lVar1;
  ulong uVar2;
  Plant *pPVar3;
  undefined4 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantSweetPotato::Initialize((PlantSweetPotato *)this);
  this[0x28] = (PlantHotDate)0x0;
  this[0x29] = (PlantHotDate)0x0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar4;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x38));
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  lVar1 = FUN_039861d0(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar1 + 0x2f8));
  pPVar3 = *(Plant **)(this + 0x10);
  FUN_03984d0c(pPVar3);
  if ((int)lVar1 == 2) {
    fVar5 = (float)Plant::GetMaxHealth(pPVar3);
    lVar1 = FUN_039861d0(*(undefined8 *)(this + 0x10));
    pPVar3 = *(Plant **)(this + 0x10);
    fVar5 = *(float *)(lVar1 + 0x410) * fVar5 + fVar5;
  }
  else {
    if ((int)lVar1 < 3) goto LAB_03987408;
    fVar5 = (float)Plant::GetMaxHealth(pPVar3);
    lVar1 = FUN_039861d0(*(undefined8 *)(this + 0x10));
    pPVar3 = *(Plant **)(this + 0x10);
    fVar5 = fVar5 * (*(float *)(lVar1 + 0x410) * 2.0 + 1.0);
  }
  Plant::SetMaxHealth(pPVar3,fVar5);
  Plant::SetHealth(*(Plant **)(this + 0x10),fVar5);
  pPVar3 = *(Plant **)(this + 0x10);
LAB_03987408:
  uVar2 = Plant::GetAvatarEnable(pPVar3);
  Sexy::OutputDebugStrF
            ((wchar_t *)"Fail to retrieve local file content: is Avatar = %d \n",uVar2 & 0xff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHotDate::~PlantHotDate() */

void __thiscall PlantHotDate::~PlantHotDate(PlantHotDate *this)

{
  *(undefined ***)this = &PTR_GetClass_066db680;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x38));
  PlantSweetPotato::~PlantSweetPotato((PlantSweetPotato *)this);
  return;
}


/* PlantHotDate::~PlantHotDate() */

void __thiscall PlantHotDate::~PlantHotDate(PlantHotDate *this)

{
  ~PlantHotDate(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotDate::DoFlameBlast() */

void __thiscall PlantHotDate::DoFlameBlast(PlantHotDate *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Effect_PopAnim *pEVar5;
  PopAnim *pPVar6;
  RtClass *pRVar7;
  EffectAnimRig_JackOLanternFireSquare *this_00;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  undefined8 extraout_x0;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  EffectAnimRig_JackOLanternFireSquare *this_03;
  undefined8 extraout_x0_00;
  char *pcVar8;
  PlantAnimRig_HotDate *extraout_x0_01;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  int local_88;
  int local_84;
  Point aPStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined4 local_70;
  float local_6c;
  float local_68;
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  if (((DAT_06abe290 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06abe290), iVar4 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06abe200,-98.0,-120.0,0.0);
    __cxa_guard_release(&DAT_06abe290);
  }
  std::string::string(asStack_60,"POPANIM_EFFECTS_JALAPENO_FIRE");
  GetPAMByName(asStack_60);
  std::string::~string(asStack_60);
  nop();
  lVar9 = *(long *)(this + 0x10);
  iVar4 = *(int *)(lVar9 + 0x114);
  if (-1 < iVar4) {
    fVar13 = 0.0;
    do {
      while( true ) {
        Sexy::Point::Point((Point *)asStack_60,iVar4,*(int *)(lVar9 + 0x110));
        BoardTransforms::GridToBoardSpace((Point *)asStack_60);
        fVar10 = 0.0;
        if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
          fVar10 = (float)Board::calculateRoofOffsetZ((float)local_88);
        }
        fVar11 = (float)local_84;
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)local_88,fVar11,fVar10);
        local_70 = Sexy::SexyVector3::operator+
                             ((SexyVector3 *)&DAT_06abe200,(SexyVector3 *)asStack_60);
        local_6c = fVar11;
        local_68 = fVar10;
        pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        pRVar7 = (RtClass *)EffectAnimRig_HotDateFireSquare::StaticGetClass();
        Effect_PopAnim::CreatePopAnimRig(pEVar5,pPVar6,pRVar7);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_70,-1);
        FUN_03984cb0(pEVar5 + 0x1c,uVar3);
        UIWidget::GetAtlasImage((UIWidget *)pEVar5);
        nop();
        EffectAnimRig_JackOLanternFireSquare::SetFireDelay(this_00,fVar13);
        UIWidget::GetAtlasImage((UIWidget *)pEVar5);
        nop();
        EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,pEVar5);
        lVar9 = *(long *)(this + 0x10);
        cVar2 = FUN_03984d14(lVar9);
        if (cVar2 != '\0') break;
        iVar4 = iVar4 + -1;
        fVar13 = fVar13 + 0.075;
        if (iVar4 == -1) goto LAB_039877b4;
      }
      UIWidget::GetAtlasImage((UIWidget *)pEVar5);
      nop();
      lVar9 = FUN_039861d0(*(undefined8 *)(this + 0x10));
      fVar11 = *(float *)(lVar9 + 0x418);
      fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      lVar9 = FUN_039861d0(*(undefined8 *)(this + 0x10));
      uVar12 = *(undefined4 *)(lVar9 + 0x414);
      iVar1 = iVar4 + -1;
      Sexy::Point::Point(aPStack_80,iVar4,*(int *)(*(long *)(this + 0x10) + 0x110));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)aRStack_78);
      EffectAnimRig_HotDateFireSquare::setLastFireInfo
                ((EffectAnimRig_HotDateFireSquare *)(fVar10 * fVar11),uVar12,extraout_x0,aPStack_80,
                 asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      lVar9 = *(long *)(this + 0x10);
      fVar13 = fVar13 + 0.075;
      iVar4 = iVar1;
    } while (iVar1 != -1);
LAB_039877b4:
    iVar4 = *(int *)(lVar9 + 0x114);
  }
  iVar4 = iVar4 + 1;
  if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= iVar4) {
LAB_039879c0:
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x30) = 0xffffffff;
    *(undefined4 *)(this + 0x2c) = uVar3;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x38));
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar8,"Play_Plant_HotDate_Explosion");
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_78);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)&local_70,asStack_60);
    PlantAnimRig_HotDate::PlayDeathAnimation(extraout_x0_01,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  fVar13 = 0.075;
  do {
    Sexy::Point::Point((Point *)asStack_60,iVar4,*(int *)(lVar9 + 0x110));
    BoardTransforms::GridToBoardSpace((Point *)asStack_60);
    fVar10 = 0.0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      fVar10 = (float)Board::calculateRoofOffsetZ((float)local_88);
    }
    fVar11 = (float)local_84;
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)local_88,fVar11,fVar10);
    local_70 = Sexy::SexyVector3::operator+((SexyVector3 *)&DAT_06abe200,(SexyVector3 *)asStack_60);
    local_6c = fVar11;
    local_68 = fVar10;
    pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    pRVar7 = (RtClass *)EffectAnimRig_HotDateFireSquare::StaticGetClass();
    Effect_PopAnim::CreatePopAnimRig(pEVar5,pPVar6,pRVar7);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_70,-1);
    FUN_03984cb0(pEVar5 + 0x1c,uVar3);
    UIWidget::GetAtlasImage((UIWidget *)pEVar5);
    nop();
    EffectAnimRig_JackOLanternFireSquare::SetFireDelay(this_02,fVar13);
    UIWidget::GetAtlasImage((UIWidget *)pEVar5);
    nop();
    EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_03,pEVar5);
    cVar2 = FUN_03984d14(*(undefined8 *)(this + 0x10));
    if (cVar2 == '\0') {
      if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= iVar4 + 1) goto LAB_039879c0;
    }
    else {
      UIWidget::GetAtlasImage((UIWidget *)pEVar5);
      nop();
      lVar9 = FUN_039861d0(*(undefined8 *)(this + 0x10));
      fVar11 = *(float *)(lVar9 + 0x418);
      fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      lVar9 = FUN_039861d0(*(undefined8 *)(this + 0x10));
      uVar12 = *(undefined4 *)(lVar9 + 0x414);
      Sexy::Point::Point(aPStack_80,iVar4,*(int *)(*(long *)(this + 0x10) + 0x110));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)aRStack_78);
      EffectAnimRig_HotDateFireSquare::setLastFireInfo
                ((EffectAnimRig_HotDateFireSquare *)(fVar10 * fVar11),uVar12,extraout_x0_00,
                 aPStack_80,asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= iVar4 + 1) goto LAB_039879c0;
    }
    iVar4 = iVar4 + 1;
    fVar13 = fVar13 + 0.075;
    lVar9 = *(long *)(this + 0x10);
  } while( true );
}


/* PlantHotDate::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantHotDate::TakeSmashAttack(PlantHotDate *param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if (cVar1 == '\0') {
    DoFlameBlast(param_1);
    param_1[0x28] = (PlantHotDate)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotDate::TakeDamage(DamageInfo const&) */

void PlantHotDate::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this;
  undefined8 uVar3;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(float *)(*(long *)(param_1 + 0x10) + 0xd8) < 0.0) ||
     (0.0 < *(float *)(*(long *)(param_1 + 0x10) + 0xd8) - *(float *)(in_x1 + 8))) {
    DamageInfo::DamageInfo(in_x8,in_x1);
  }
  else {
    bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x40000);
    if ((bVar1) &&
       ((*(RtObject **)in_x1 != (RtObject *)0x0 &&
        (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1), bVar1)))) {
      nop();
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_68 = *(undefined8 *)in_x1;
      uVar3 = operator|(0x20,0x400);
      local_58 = operator|(uVar3,0x1000);
      cVar2 = (**(code **)(*(long *)this + 0x4d8))(this);
      if ((cVar2 == '\0') &&
         ((cVar2 = (**(code **)(*(long *)this + 0x508))(this), cVar2 == '\0' &&
          (cVar2 = Zombie::CanTakeFatalDamage(this), cVar2 != '\0')))) {
        (**(code **)(*(long *)this + 0x120))(this,(DamageInfo *)&local_68);
      }
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    DoFlameBlast((PlantHotDate *)param_1);
    DamageInfo::DamageInfo((DamageInfo *)&local_68,in_x1);
    param_1[0x28] = (DamageInfo)0x1;
    local_60 = 0;
    Plant::ClearConditions(*(Plant **)(param_1 + 0x10));
    DamageInfo::DamageInfo(in_x8,(DamageInfo *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotDate::UpdateFlameBurst() */

void __thiscall PlantHotDate::UpdateFlameBurst(PlantHotDate *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PlantHotDate PVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  PopAnimRig *this_00;
  int *piVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  Zombie *pZVar13;
  GridItem *pGVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  int local_98;
  int local_94;
  int local_90 [2];
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  Insets aIStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  PVar4 = this[0x29];
  local_8 = ___stack_chk_guard;
  if (PVar4 != (PlantHotDate)0x0) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar5 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar5 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),*(long *)(*(Plant **)(this + 0x10) + 0x108) != 0,0,1
                      );
      goto LAB_039889c0;
    }
  }
  PVar4 = (PlantHotDate)isBursting(this);
  if (PVar4 != (PlantHotDate)0x0) {
    if (this[0x29] == (PlantHotDate)0x0) {
      local_98 = -1;
      iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1;
      local_94 = iVar1;
      fVar20 = (float)PVZ_T();
      iVar6 = *(int *)(this + 0x30);
      iVar16 = (int)((fVar20 - *(float *)(this + 0x2c)) * 13.333333);
      if (iVar6 < iVar16) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
        iVar6 = *(int *)(this + 0x30);
        if (iVar6 < iVar16) {
          uVar7 = operator|(2,4);
          do {
            lVar19 = *(long *)(this + 0x10);
            iVar6 = iVar6 + 1;
            *(int *)(this + 0x30) = iVar6;
            iVar2 = *(int *)(lVar19 + 0x114);
            local_90[0] = iVar2 - iVar6;
            piVar8 = eastl::max_alt<int>(local_90,&local_98);
            iVar3 = *piVar8;
            local_88[0] = iVar6 + iVar2;
            piVar8 = eastl::min_alt<int>(local_88,&local_94);
            Sexy::Insets::Insets(aIStack_68,iVar3,*(int *)(lVar19 + 0x110),*piVar8 - iVar3,1);
            EntityFinder::GetEntitiesInGridSquares
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,
                       uVar7,aIStack_68);
            iVar6 = *(int *)(this + 0x30);
          } while (iVar6 < iVar16);
        }
        Plant::GetProps();
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_68);
        FUN_03984e84(*(undefined8 *)(lVar19 + 0x70));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_68)
        ;
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        SetFlag<DamageTypeFlags>(auStack_58,0x200,1);
        uVar17 = local_80;
        uVar18 = 0;
LAB_03988be4:
        uVar9 = FUN_03984d40(uVar17,local_78);
        if (uVar18 < uVar9) {
          uVar9 = 0;
          do {
            uVar15 = *(undefined8 *)(this + 0x38);
            uVar11 = FUN_03984d4c(uVar15,*(undefined8 *)(this + 0x40));
            if (uVar11 <= uVar9) {
              puVar12 = (undefined8 *)FUN_03984d60(uVar17,uVar18);
              pZVar13 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
              if ((pZVar13 == (Zombie *)0x0) ||
                 (cVar5 = Zombie::MatchesAny(pZVar13,0x400,*(undefined8 *)(this + 0x10)),
                 uVar17 = local_80, cVar5 != '\0')) {
                puVar12 = (undefined8 *)FUN_03984d60(local_80,uVar18);
                pGVar14 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar12);
                if ((pGVar14 == (GridItem *)0x0) ||
                   (cVar5 = (**(code **)(*(long *)pGVar14 + 0x200))(), uVar17 = local_80,
                   cVar5 != '\0')) {
                  puVar12 = (undefined8 *)FUN_03984d60(local_80,uVar18);
                  (**(code **)(*(long *)*puVar12 + 0x110))
                            ((long *)*puVar12,(RtWeakPtr<Sexy::ResourceInfo> *)aIStack_68);
                  FUN_03984d60(local_80,uVar18);
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)local_90);
                  std::
                  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                               *)(this + 0x38),(RtWeakPtr *)local_88);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
                  uVar17 = local_80;
                  uVar18 = uVar18 + 1;
                  goto LAB_03988be4;
                }
              }
              break;
            }
            this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03984d58(uVar15,uVar9);
            lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            uVar17 = local_80;
            plVar10 = (long *)FUN_03984d60(local_80,uVar18);
            uVar9 = uVar9 + 1;
          } while (lVar19 != *plVar10);
          uVar18 = uVar18 + 1;
          goto LAB_03988be4;
        }
        DamageInfo::~DamageInfo((DamageInfo *)aIStack_68);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
        iVar6 = *(int *)(this + 0x30);
      }
      if ((*(int *)(*(long *)(this + 0x10) + 0x114) - iVar6 < -1) &&
         (iVar1 < *(int *)(*(long *)(this + 0x10) + 0x114) + iVar6)) {
        this[0x29] = (PlantHotDate)0x1;
      }
    }
    else {
      PVar4 = (PlantHotDate)0x0;
    }
  }
LAB_039889c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(PVar4);
  }
  return;
}


/* PlantHotDate::UpdateActions() */

void __thiscall PlantHotDate::UpdateActions(PlantHotDate *this)

{
  char cVar1;
  
  cVar1 = UpdateFlameBurst(this);
  if (cVar1 != '\0') {
    return;
  }
  PlantSweetPotato::UpdateActions((PlantSweetPotato *)this);
  return;
}

