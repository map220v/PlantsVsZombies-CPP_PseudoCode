// Class: PlantPokra


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::Initialize() */

void __thiscall PlantPokra::Initialize(PlantPokra *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  PlantFramework::Initialize((PlantFramework *)this);
  std::string::string(asStack_10,"pokra_new_avatar_1");
  uVar1 = NewAvatar::GetGeneralBoostValueByNewAvatarName(asStack_10);
  *(undefined4 *)(this + 0x38) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::PlantPokra() */

void __thiscall PlantPokra::PlantPokra(PlantPokra *this)

{
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0699e890;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (this_00 != (Board *)0x0) {
    std::string::string(asStack_10,"PlantStallia");
    Board::LoadResourceGroupForGameplay(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPokra::StaticNew() */

PlantPokra * PlantPokra::StaticNew(void)

{
  PlantPokra *this;
  
  this = ::operator_new(0x40);
  PlantPokra(this);
  return this;
}


/* PlantPokra::~PlantPokra() */

void __thiscall PlantPokra::~PlantPokra(PlantPokra *this)

{
  *(undefined ***)this = &PTR_GetClass_0699e890;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPokra::~PlantPokra() */

void __thiscall PlantPokra::~PlantPokra(PlantPokra *this)

{
  ~PlantPokra(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::createHitEffect(std::string&, BoardEntity*) */

void __thiscall PlantPokra::createHitEffect(PlantPokra *this,string *param_1,BoardEntity *param_2)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  PopAnim *pPVar4;
  char *__s;
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    std::string::string(asStack_18,"POPANIM_EFFECTS_POKRA_HIT");
    GetPAMByName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar3,pfVar3[1] - 20.0);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pPVar4 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Effect_PopAnim::CreatePopAnimRig(this_00,pPVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,local_20,local_1c,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
      iVar2 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      FUN_04cd2568(this_00 + 0x1c,iVar2 + 1);
      __s = (char *)FUN_0547429c(param_1);
      std::string::string(asStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
      std::string::~string(asStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::GetPlantFoodPlayCount() */

void __thiscall PlantPokra::GetPlantFoodPlayCount(PlantPokra *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04cd25a0(uVar4);
  lVar2 = FUN_04cd531c(uVar4);
  if (iVar1 == 1) {
    uVar3 = *(undefined4 *)(lVar2 + 0x2f0);
  }
  else if (iVar1 == 2) {
    uVar3 = *(undefined4 *)(lVar2 + 0x2f4);
  }
  else if (iVar1 == 3) {
    uVar3 = *(undefined4 *)(lVar2 + 0x2f8);
  }
  else if (iVar1 == 4) {
    uVar3 = *(undefined4 *)(lVar2 + 0x2fc);
  }
  else if (iVar1 == 5) {
    uVar3 = *(undefined4 *)(lVar2 + 0x300);
  }
  else {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = *(undefined4 *)(lVar2 + 0x3c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::setState(PokraState) */

void __thiscall PlantPokra::setState(PlantPokra *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  PlantAnimRig *pPVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  float local_58 [2];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 200) = param_2;
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlantAnimRig *)FUN_04cd5294(lVar4);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar2 != 0xb) {
    if (iVar2 == 0xc) {
      PlantAnimRig::SetState(pPVar3,1);
      fVar6 = (float)PVZ_T();
      lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x28) = fVar6 + *(float *)(lVar4 + 0x2b8);
    }
    else if (iVar2 == 10) {
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x34) = uVar5;
    }
    goto LAB_04cd5700;
  }
  PlantAnimRig::SetState(pPVar3,0xe);
  *(undefined4 *)(this + 0x30) = 0;
  lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
  iVar2 = FUN_04cd25a0(*(undefined8 *)(this + 0x10));
  if (iVar2 < 3) {
    if (iVar2 == 2) {
      local_58[0] = 1.0;
      goto LAB_04cd5858;
    }
    iVar2 = *(int *)(this + 0x30);
LAB_04cd579c:
    *(undefined4 *)(this + 0x2c) = 0;
    if (iVar2 == 1) goto LAB_04cd5894;
    lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
    (**(code **)(*(long *)pPVar3 + 0x80))(*(undefined4 *)(lVar4 + 0x2cc),pPVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,(string *)local_58);
    PlantAnimRig_Pokra::PlaySingleJabStart((PlantAnimRig_Pokra *)pPVar3,aRStack_50);
  }
  else {
    local_58[0] = 2.0;
LAB_04cd5858:
    local_58[0] = local_58[0] * (*(float *)(this + 0x38) + *(float *)(lVar4 + 0x2e4));
    cVar1 = FUN_04cd2670(local_58);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(this + 0x30);
      goto LAB_04cd579c;
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 1;
LAB_04cd5894:
    (**(code **)(*(long *)pPVar3 + 0x80))(0x3f800000,pPVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,(string *)local_58);
    PlantAnimRig_Pokra::PlayLevel2JabStart((PlantAnimRig_Pokra *)pPVar3,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)local_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04cd5700:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPokra::ApplyPlantfood() */

void __thiscall PlantPokra::ApplyPlantfood(PlantPokra *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  
  plVar1 = (long *)FUN_04cd5294(*(undefined8 *)(this + 0x10));
  pcVar3 = *(code **)(*plVar1 + 0x80);
  lVar2 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2e0),plVar1);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xd);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* PlantPokra::CancelPlantfood() */

void __thiscall PlantPokra::CancelPlantfood(PlantPokra *this)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_04cd5294(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar1 + 0x80))(0x3f800000);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::advanceAttackPhase() */

void __thiscall PlantPokra::advanceAttackPhase(PlantPokra *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PlantAnimRig *pPVar4;
  code *pcVar5;
  float fVar6;
  undefined4 uVar7;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  float local_58 [2];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 == 1) {
    uVar7 = *(undefined4 *)(lVar3 + 0x2d4);
  }
  else if (iVar2 == 0) {
    uVar7 = *(undefined4 *)(lVar3 + 0x2d0);
  }
  else if (iVar2 == 2) {
    uVar7 = *(undefined4 *)(lVar3 + 0x2d8);
  }
  else {
    uVar7 = 0x3f800000;
  }
  pPVar4 = (PlantAnimRig *)FUN_04cd5294(*(undefined8 *)(this + 0x10));
  PlantAnimRig::SetState(pPVar4,0xe);
  iVar2 = FUN_04cd25a0(*(undefined8 *)(this + 0x10));
  if (iVar2 < 3) {
    fVar6 = 1.0;
    if (1 < iVar2) goto LAB_04cd5b6c;
LAB_04cd5c4c:
    *(undefined4 *)(this + 0x30) = 0;
    if (2 < *(int *)(this + 0x2c)) goto LAB_04cd5c60;
LAB_04cd5ba4:
    (**(code **)(*(long *)pPVar4 + 0x80))(uVar7,pPVar4);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)local_58);
    PlantAnimRig_Pokra::PlayDoubleJabStart
              ((PlantAnimRig_Pokra *)pPVar4,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  }
  else {
    if (iVar2 < 5) {
      fVar6 = 2.0;
LAB_04cd5b6c:
      local_58[0] = fVar6 * (*(float *)(this + 0x38) + *(float *)(lVar3 + 0x2e4));
LAB_04cd5b80:
      cVar1 = FUN_04cd2670((string *)local_58);
      if (cVar1 == '\0') {
        *(undefined4 *)(this + 0x30) = 0;
        if (*(int *)(this + 0x2c) < 3) goto LAB_04cd5ba4;
      }
      else {
        *(undefined4 *)(this + 0x30) = 1;
        if (*(int *)(this + 0x2c) < 3) {
          (**(code **)(*(long *)pPVar4 + 0x80))(0x3f800000,pPVar4);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string((string *)local_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,(string *)local_58);
          PlantAnimRig_Pokra::PlayLevel2JabStart
                    ((PlantAnimRig_Pokra *)pPVar4,
                     (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
          goto LAB_04cd5c10;
        }
      }
    }
    else {
      if (*(int *)(this + 0x30) == 1) {
        cVar1 = FUN_04cd2670(lVar3 + 0x2e8);
        if (cVar1 == '\0') goto LAB_04cd5c4c;
      }
      else {
        cVar1 = FUN_04cd2670(lVar3 + 0x2ec);
        if (cVar1 == '\0') {
          local_58[0] = *(float *)(this + 0x38) + *(float *)(lVar3 + 0x2e4);
          local_58[0] = local_58[0] + local_58[0];
          goto LAB_04cd5b80;
        }
      }
      *(undefined4 *)(this + 0x30) = 2;
      if (*(int *)(this + 0x2c) < 3) {
        (**(code **)(*(long *)pPVar4 + 0x80))(0x3f800000,pPVar4);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)local_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,(string *)local_58);
        PlantAnimRig_Pokra::PlayLevel5((PlantAnimRig_Pokra *)pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)local_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        goto LAB_04cd5b18;
      }
    }
LAB_04cd5c60:
    pcVar5 = *(code **)(*(long *)pPVar4 + 0x80);
    lVar3 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
    (*pcVar5)(*(undefined4 *)(lVar3 + 0x2dc),pPVar4);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)local_58);
    PlantAnimRig_Pokra::PlayProjectileFire
              ((PlantAnimRig_Pokra *)pPVar4,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  }
LAB_04cd5c10:
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)local_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04cd5b18:
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPokra::onAnimStoppedCallback(PlantPokra *this,string *param_1)

{
  int iVar1;
  bool bVar2;
  PlantAnimRig_Pokra *pPVar3;
  long lVar4;
  float fVar5;
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlantAnimRig_Pokra *)FUN_04cd5294(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_98,aRStack_a8,
             asStack_a0);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  bVar2 = std::operator==(param_1,"attack1");
  if (bVar2) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(RtReflectionDelegate *)aRStack_98);
    PlantAnimRig_Pokra::PlaySingleJabLoop(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  else {
    bVar2 = std::operator==(param_1,"attack1loop");
    if (bVar2) {
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,(RtReflectionDelegate *)aRStack_98);
      PlantAnimRig_Pokra::PlaySingleJabEnd(pPVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    else {
      lVar4 = FUN_05474374(param_1,&DAT_055abc60,0);
      if (lVar4 == -1) {
        bVar2 = std::operator==(param_1,"attack2");
        if (bVar2) {
          iVar1 = *(int *)(this + 0x2c);
          if (iVar1 == 2) {
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,(RtReflectionDelegate *)aRStack_98);
            PlantAnimRig_Pokra::PlayTripleJabLoop(pPVar3,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
          else if (iVar1 == 3) {
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,(RtReflectionDelegate *)aRStack_98);
            PlantAnimRig_Pokra::PlayQuadrupleJabLoop(pPVar3,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
          else if (iVar1 == 1) {
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,(RtReflectionDelegate *)aRStack_98);
            PlantAnimRig_Pokra::PlayDoubleJabLoop(pPVar3,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
          goto LAB_04cd6184;
        }
        bVar2 = std::operator==(param_1,"attack2loop");
        if (bVar2) {
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50,(RtReflectionDelegate *)aRStack_98);
          PlantAnimRig_Pokra::PlayDoubleJabEnd(pPVar3,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          goto LAB_04cd6184;
        }
        bVar2 = std::operator==(param_1,"attack3");
        if (!bVar2) {
          bVar2 = std::operator==(param_1,"attack2_2");
          if (bVar2) {
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,(RtReflectionDelegate *)aRStack_98);
            PlantAnimRig_Pokra::PlayLevel2JabLoop(pPVar3,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
            goto LAB_04cd6184;
          }
          bVar2 = std::operator==(param_1,"attack2_2loop");
          if (bVar2) {
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,(RtReflectionDelegate *)aRStack_98);
            PlantAnimRig_Pokra::PlayLevel2JabEnd(pPVar3,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
            goto LAB_04cd6184;
          }
          bVar2 = std::operator==(param_1,"attack5");
          if (!bVar2) goto LAB_04cd6184;
        }
      }
      else {
        (**(code **)(*(long *)pPVar3 + 0x80))(0x3f800000,pPVar3);
        if (*(int *)(this + 0x2c) < 4) {
          if (*(int *)(*(long *)(this + 0x10) + 200) != 10) {
            (**(code **)(*(long *)pPVar3 + 0x118))(pPVar3);
            fVar5 = (float)PVZ_T();
            lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
            *(float *)(this + 0x34) = fVar5 + *(float *)(lVar4 + 0x2c8);
          }
          goto LAB_04cd6184;
        }
        if (*(int *)(this + 0x2c) != 4) goto LAB_04cd6184;
      }
      (**(code **)(*(long *)pPVar3 + 0x80))(0x3f800000,pPVar3);
    }
  }
LAB_04cd6184:
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::hasTarget() */

void __thiscall PlantPokra::hasTarget(PlantPokra *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long *extraout_x0;
  undefined8 *puVar5;
  Zombie *extraout_x0_00;
  undefined8 uVar6;
  RtObject *this_00;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar4,auStack_30,0xffffffff,0xffffffff);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) break;
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (RtObject *)*puVar5;
    bVar2 = Sexy::RtObject::IsA<GridItem>(this_00);
    if (bVar2) {
      nop();
      cVar3 = (**(code **)(*extraout_x0 + 0x200))();
      if (cVar3 != '\0') break;
    }
    else {
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
      if (bVar2) {
        nop();
        uVar6 = operator|(1,4);
        uVar6 = operator|(uVar6,0x80);
        uVar6 = operator|(uVar6,0x200);
        uVar6 = operator|(uVar6,0x800);
        uVar6 = operator|(uVar6,0x2000);
        uVar4 = operator|(uVar6,8);
        cVar3 = Zombie::MatchesAny(extraout_x0_00,uVar4,*(undefined8 *)(this + 0x10));
        if ((cVar3 == '\0') &&
           (cVar3 = FUN_04cd4720(*(undefined4 *)(extraout_x0_00 + 0xcc)), cVar3 == '\0')) break;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantPokra::UpdateActions() */

void __thiscall PlantPokra::UpdateActions(PlantPokra *this)

{
  bool bVar1;
  char cVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *this_01;
  long *plVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  iVar5 = *(int *)(this_00 + 200);
  do {
    if (iVar5 == 0xb) {
      fVar6 = (float)PVZ_T();
      if (fVar6 < *(float *)(this + 0x34)) goto LAB_04cd6688;
      cVar2 = hasTarget(this);
      if (cVar2 == '\0') goto LAB_04cd66e8;
      uVar7 = PVZ_EOT();
      *(undefined4 *)(this + 0x34) = uVar7;
      advanceAttackPhase(this);
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      iVar4 = *(int *)(this_00 + 200);
    }
    else {
      if (iVar5 == 0xc) {
        fVar6 = (float)PVZ_T();
        if (*(float *)(this + 0x28) <= fVar6) {
LAB_04cd66e8:
          setState(this,10);
        }
      }
      else {
        if (iVar5 != 10) {
          return;
        }
        this_01 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
        cVar2 = PopAnimRig::IsPlayingAnything(this_01);
        if (cVar2 == '\0') {
          plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar3 + 0x118))();
        }
        cVar2 = hasTarget(this);
        if (cVar2 != '\0') {
          setState(this,0xb);
          this_00 = *(UIEasyButtonWidget **)(this + 0x10);
          iVar4 = *(int *)(this_00 + 200);
          goto LAB_04cd6690;
        }
      }
LAB_04cd6688:
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      iVar4 = *(int *)(this_00 + 200);
    }
LAB_04cd6690:
    bVar1 = iVar5 == iVar4;
    iVar5 = iVar4;
    if (bVar1) {
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::fireProjectile() */

void __thiscall PlantPokra::fireProjectile(PlantPokra *this)

{
  char cVar1;
  bool bVar2;
  Projectile *pPVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  lVar5 = *(long *)(this + 0x10);
  uVar7 = 1;
  *(undefined4 *)(lVar5 + 0x150) = 1;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04cd531c(lVar5);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    uVar7 = 2;
    fVar8 = *(float *)(lVar5 + 0x2c0);
    uVar6 = 2;
  }
  else {
    fVar8 = *(float *)(lVar5 + 0x2c4);
    uVar6 = 1;
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar7;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_20);
  pPVar3 = (Projectile *)
           Plant::Fire(*(Plant **)(this + 0x10),
                       (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_20,
                       *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),uVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  if (pPVar3 != (Projectile *)0x0) {
    Projectile::GetDamageConditions();
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_38);
    while( true ) {
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_38);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
      if (!bVar2) break;
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      if (*piVar4 == 0x2d) {
        DVec2::DVec2((DVec2 *)local_20,fVar8,fVar8);
        *(undefined8 *)(piVar4 + 1) = local_20[0];
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_40);
    }
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::vector
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)local_20,
               (vector *)avStack_38);
    Projectile::SetDamageConditions
              (pPVar3,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_20);
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)local_20);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)avStack_38);
  }
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    setState(this,0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::doAttack() */

void __thiscall PlantPokra::doAttack(PlantPokra *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  Zombie *extraout_x0;
  undefined8 *puVar6;
  long *extraout_x0_00;
  size_t sVar7;
  undefined8 uVar8;
  int iVar9;
  RtObject *this_00;
  float fVar10;
  string asStack_b0 [8];
  string asStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_b0);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::CalcPlayingAnimLabelName();
  sVar7 = 0;
  lVar4 = FUN_05474374(asStack_a8,"attack1");
  if (lVar4 == -1) {
    sVar7 = 0;
    lVar4 = FUN_05474374(asStack_a8,"attack2");
    if (lVar4 == -1) {
      sVar7 = 0;
      lVar4 = FUN_05474374(asStack_a8,"attack5");
      if (lVar4 != -1) {
        std::string::append(asStack_b0,"hit_lv5",sVar7);
      }
    }
    else {
      std::string::append(asStack_b0,"hit2",sVar7);
    }
  }
  else {
    std::string::append(asStack_b0,"hit",sVar7);
  }
  (**(code **)(*(long *)this + 0x2b8))(auStack_90,this,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar3,auStack_90,0xffffffff,0xffffffff);
  FUN_04cd257c(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar4 = FUN_04cd2698(*(undefined8 *)(lVar4 + 0x70));
  iVar9 = *(int *)(lVar4 + 0x2c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (*(int *)(this + 0x30) == 2) {
    lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
    iVar9 = *(int *)(lVar4 + 0x308);
  }
  else if (*(int *)(this + 0x30) == 1) {
    lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
    iVar9 = *(int *)(lVar4 + 0x304);
  }
  fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar5 = operator|(0x4000000000,0x800000000000);
  uVar8 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)&local_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(float)(int)((float)iVar9 * fVar10),(undefined4)local_98,local_98._4_4_,
             aRStack_68,uVar5,uVar8,(Point *)&local_a0,0);
  lVar4 = FUN_04cd531c(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  DamageInfo::AddCondition(*(DamageInfo **)(lVar4 + 700),aRStack_68,0x2d);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    if (!bVar1) {
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      std::string::~string(asStack_a8);
      std::string::~string(asStack_b0);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_00 = (RtObject *)*puVar6;
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_00);
    if (bVar1) {
      nop();
      uVar5 = operator|(1,4);
      uVar5 = operator|(uVar5,0x80);
      uVar5 = operator|(uVar5,0x200);
      uVar5 = operator|(uVar5,0x800);
      uVar5 = operator|(uVar5,0x2000);
      uVar3 = operator|(uVar5,8);
      cVar2 = Zombie::MatchesAny(extraout_x0,uVar3,*(undefined8 *)(this + 0x10));
      if ((cVar2 == '\0') &&
         (cVar2 = FUN_04cd4720(*(undefined4 *)(extraout_x0 + 0xcc)), cVar2 == '\0'))
      goto LAB_04cd775c;
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>(this_00);
      if (bVar1) {
        nop();
        cVar2 = (**(code **)(*extraout_x0_00 + 0x200))();
        if (cVar2 == '\0') goto LAB_04cd7780;
      }
LAB_04cd775c:
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
      createHitEffect(this,asStack_b0,(BoardEntity *)this_00);
    }
LAB_04cd7780:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  } while( true );
}


/* PlantPokra::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantPokra::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    fireProjectile((PlantPokra *)param_1);
    return 1;
  }
  bVar1 = std::operator==(param_2,"use_hit");
  if (!bVar1) {
    return 1;
  }
  doAttack((PlantPokra *)param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPokra::StaticClassInit() */

void PlantPokra::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"phaseOne",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"phaseTwo",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"phaseThree",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"phaseFour",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"phaseMax",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"AttackPhase");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"normal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"level2",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"level5",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"AttackState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantPokra");
    (*pcVar3)(plVar2,avStack_20,FUN_04cd7cbc,0x40,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPokra::StaticGetClass() */

long * PlantPokra::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPokra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPokra::GetClass() const */

long * PlantPokra::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPokra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

