// Class: AddEnergyEffect


/* AddEnergyEffect::SetEndPosition(Sexy::SexyVector2 const&) */

void __thiscall AddEnergyEffect::SetEndPosition(AddEnergyEffect *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)param_1;
  return;
}


/* AddEnergyEffect::SetStartPosition(Sexy::SexyVector2 const&) */

void __thiscall AddEnergyEffect::SetStartPosition(AddEnergyEffect *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  return;
}


/* AddEnergyEffect::SetEnergy(float) */

void __thiscall AddEnergyEffect::SetEnergy(AddEnergyEffect *this,float param_1)

{
  *(float *)(this + 0x44) = param_1;
  return;
}


/* AddEnergyEffect::OnEffectDone(StandaloneEffect*) */

void AddEnergyEffect::OnEffectDone(StandaloneEffect *param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(code **)(*(long *)param_1 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddEnergyEffect::CalacBezierParameter() */

void AddEnergyEffect::CalacBezierParameter(void)

{
  SexyVector2 *this;
  uint uVar1;
  uint uVar2;
  long in_x0;
  float fVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  this = (SexyVector2 *)(in_x0 + 0x14);
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector2::operator-((SexyVector2 *)(in_x0 + 0x2c),this);
  local_10[0] = Sexy::SexyVector2::operator/((SexyVector2 *)local_18,2.0);
  fVar3 = (float)Sexy::SexyVector2::operator+(this,(SexyVector2 *)local_10);
  local_10[0] = Sexy::SexyVector2::operator-((SexyVector2 *)(in_x0 + 0x2c),this);
  fVar4 = (float)DVec2::getLength((DVec2 *)local_10);
  fVar5 = *(float *)(in_x0 + 0x2c) - *(float *)(in_x0 + 0x14);
  fVar4 = fVar4 * 0.25;
  uVar2 = (uint)fVar5;
  uVar1 = (int)uVar2 >> 0x1f;
  if ((double)(int)((uVar2 ^ uVar1) - uVar1) <= 0.1) {
    fVar3 = fVar3 + fVar4;
  }
  else {
    fVar5 = (*(float *)(in_x0 + 0x30) - *(float *)(in_x0 + 0x18)) / fVar5;
    uVar2 = (uint)fVar5;
    uVar1 = (int)uVar2 >> 0x1f;
    if ((double)(int)((uVar2 ^ uVar1) - uVar1) <= 0.1) {
      in_s1 = in_s1 - fVar4;
    }
    else {
      fVar3 = fVar3 + fVar4;
      in_s1 = in_s1 + (-1.0 / fVar5) * fVar4;
    }
  }
  *(float *)(in_x0 + 0x24) = fVar3;
  *(float *)(in_x0 + 0x28) = in_s1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddEnergyEffect::SetDelegate(Sexy::Delegate1<float> const&) */

void __thiscall AddEnergyEffect::SetDelegate(AddEnergyEffect *this,Delegate1 *param_1)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x48),(Delegate2 *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddEnergyEffect::StaticClassInit() */

void AddEnergyEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"AddEnergyEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_04ac79d0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddEnergyEffect::StaticGetClass() */

long * AddEnergyEffect::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AddEnergyEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddEnergyEffect::GetClass() const */

long * AddEnergyEffect::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AddEnergyEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddEnergyEffect::~AddEnergyEffect() */

void __thiscall AddEnergyEffect::~AddEnergyEffect(AddEnergyEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_069492a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* AddEnergyEffect::~AddEnergyEffect() */

void __thiscall AddEnergyEffect::~AddEnergyEffect(AddEnergyEffect *this)

{
  ~AddEnergyEffect(this);
  AK::FreeHook(this);
  return;
}


/* AddEnergyEffect::AddEnergyEffect() */

void __thiscall AddEnergyEffect::AddEnergyEffect(AddEnergyEffect *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_069492a0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 0x48));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  return;
}


/* AddEnergyEffect::StaticNew() */

AddEnergyEffect * AddEnergyEffect::StaticNew(void)

{
  AddEnergyEffect *this;
  
  this = ::operator_new(0x78);
  AddEnergyEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddEnergyEffect::Play() */

void __thiscall AddEnergyEffect::Play(AddEnergyEffect *this)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)(**(code **)(*(long *)this + 0xb8))();
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)(this + 0x14),0xdbba1);
  std::string::string(asStack_10,"idle2");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x10) = 1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x40) = uVar1;
  (**(code **)(*(long *)this + 0xb0))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddEnergyEffect::Update() */

void __thiscall AddEnergyEffect::Update(AddEnergyEffect *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FastCurve aFStack_70 [8];
  float local_68 [2];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x10)) {
  case 1:
    fVar6 = (float)PVZ_T();
    if (0.2 < fVar6 - *(float *)(this + 0x40)) {
      iVar1 = FUN_04ac5e2c(0x32);
      iVar2 = FUN_04ac5e08(0xffffffe2);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)iVar1,(float)iVar2);
      Sexy::TPoint<float>::operator+=((TPoint<float> *)(this + 0x14),(TPoint *)&local_58);
      *(undefined8 *)(this + 0x1c) = *(undefined8 *)(this + 0x14);
      *(undefined4 *)(this + 0x10) = 2;
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar7;
    }
    break;
  case 2:
    fVar6 = (float)Distance2D(*(float *)(this + 0x1c),*(float *)(this + 0x20),
                              *(float *)(this + 0x2c),*(float *)(this + 0x30));
    iVar1 = FUN_04ac5e08(0x32);
    fVar12 = (float)iVar1 * 0.5;
    if (fVar6 < fVar12) {
      pSVar4 = (StandaloneEffect *)(**(code **)(*(long *)this + 0xb8))(this);
      StandaloneEffect::SetScreenSpaceOrigin(pSVar4,(SexyVector2 *)(this + 0x2c),900000);
      std::string::string((string *)&local_58,"idle3");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)pSVar4,(string *)&local_58,0);
      std::string::~string((string *)&local_58);
      nop();
      *(undefined4 *)(this + 0x10) = 3;
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar7;
    }
    else {
      fVar6 = (float)PVZ_T();
      fVar9 = *(float *)(this + 0x40);
      fVar6 = fVar6 - fVar9;
      if (0.08 < fVar6) {
        while( true ) {
          fVar6 = fVar6 - 0.08;
          fVar9 = fVar9 + fVar6;
          *(float *)(this + 0x40) = fVar9;
          local_58 = Sexy::SexyVector2::operator-
                               ((SexyVector2 *)(this + 0x2c),(SexyVector2 *)(this + 0x14));
          local_54 = fVar9;
          local_60 = Sexy::SexyVector2::Normalize((SexyVector2 *)&local_58);
          local_5c = fVar9;
          pSVar4 = (StandaloneEffect *)(**(code **)(*(long *)this + 0xb8))(this);
          StandaloneEffect::SetScreenSpaceOrigin(pSVar4,(SexyVector2 *)(this + 0x1c),900000);
          std::string::string((string *)&local_58,"idle1");
          Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)pSVar4,(SexyVector2 *)&local_58,0);
          std::string::~string((string *)&local_58);
          nop();
          Effect_PopAnim::SetOrientation((Effect_PopAnim *)pSVar4,(SexyVector2 *)&local_60);
          local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_60,(float)iVar1);
          local_54 = fVar9;
          fVar8 = (float)Sexy::SexyVector2::operator+
                                   ((SexyVector2 *)(this + 0x1c),(SexyVector2 *)&local_58);
          fVar10 = *(float *)(this + 0x2c);
          *(float *)(this + 0x1c) = fVar8;
          fVar11 = fVar10 - *(float *)(this + 0x14);
          *(float *)(this + 0x20) = fVar9;
          local_68[0] = 0.0;
          if ((int)fVar11 != 0) {
            local_68[0] = (fVar8 - *(float *)(this + 0x14)) / fVar11;
          }
          local_58 = 0x3f800000;
          pfVar5 = eastl::min_alt<float>((float *)&local_58,local_68);
          local_68[0] = *pfVar5;
          fVar9 = 1.0 - local_68[0];
          fVar9 = (local_68[0] * *(float *)(this + 0x30) +
                  fVar9 * (*(float *)(this + 0x28) + *(float *)(this + 0x28))) * local_68[0] +
                  *(float *)(this + 0x18) * fVar9 * fVar9;
          *(float *)(this + 0x20) = fVar9;
          fVar9 = (float)Distance2D(fVar8,fVar9,fVar10,*(float *)(this + 0x30));
          if (fVar9 < fVar12) {
            pSVar4 = (StandaloneEffect *)(**(code **)(*(long *)this + 0xb8))(this);
            StandaloneEffect::SetScreenSpaceOrigin(pSVar4,(SexyVector2 *)(this + 0x2c),900000);
            std::string::string((string *)&local_58,"idle3");
            Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)pSVar4,(SexyVector2 *)&local_58,0)
            ;
            std::string::~string((string *)&local_58);
            nop();
            *(undefined4 *)(this + 0x10) = 3;
            uVar7 = PVZ_T();
            *(undefined4 *)(this + 0x40) = uVar7;
          }
          if (fVar6 <= 0.08) break;
          fVar9 = *(float *)(this + 0x40);
        }
      }
    }
    break;
  case 3:
    fVar6 = (float)PVZ_T();
    if (0.5 < fVar6 - *(float *)(this + 0x40)) {
      iVar1 = FUN_04ac5e2c(0x48);
      iVar2 = FUN_04ac5e2c(0);
      fVar6 = (float)iVar2;
      Sexy::FastCurve::SetOutRange(aFStack_70,(float)iVar1,fVar6);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)&local_60,"POPANIM_UI_PVP_INBATTLEANIM_WORD_EFFECT");
      GetPAMByName((string *)&local_60);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      std::string::~string((string *)&local_60);
      nop();
      Effect_PopAnim::SetCentered(this_00,true);
      local_58 = Sexy::SexyVector2::operator+
                           ((SexyVector2 *)(this + 0x2c),(SexyVector2 *)aFStack_70);
      local_54 = fVar6;
      StandaloneEffect::SetScreenSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector2 *)&local_58,900000);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_68);
      std::string::string((string *)&local_58,"OnEffectDone");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (string *)&local_60,(RtWeakPtr *)&local_58);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_58);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      std::string::string((string *)&local_58,"idle1");
      Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_58,0);
      std::string::~string((string *)&local_58);
      nop();
      *(undefined4 *)(this + 0x10) = 4;
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar7;
    }
    break;
  case 4:
    fVar6 = (float)PVZ_T();
    if (0.2 < fVar6 - *(float *)(this + 0x40)) {
      *(undefined4 *)(this + 0x10) = 0;
      iVar1 = FUN_04ac58ec(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x60));
      if (iVar1 != 0) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x48));
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
/* AddEnergyEffect::CreateEffect() */

void AddEnergyEffect::CreateEffect(void)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_60,"POPANIM_UI_PVP_INBATTLEANIM_ADD_ENERGY");
  GetPAMByName(asStack_60);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  std::string::~string(asStack_60);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  (**(code **)(*(long *)this + 0x80))(0x3f333333,this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"OnEffectDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
             aRStack_58);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

