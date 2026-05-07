// Class: AddCthulhuEnergyEffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddCthulhuEnergyEffect::StaticClassInit() */

void AddCthulhuEnergyEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"AddCthulhuEnergyEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_04ac63bc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddCthulhuEnergyEffect::StaticGetClass() */

long * AddCthulhuEnergyEffect::StaticGetClass(void)

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
  uVar2 = AddEnergyEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddCthulhuEnergyEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddCthulhuEnergyEffect::GetClass() const */

long * AddCthulhuEnergyEffect::GetClass(void)

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
  uVar2 = AddEnergyEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddCthulhuEnergyEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddCthulhuEnergyEffect::~AddCthulhuEnergyEffect() */

void __thiscall AddCthulhuEnergyEffect::~AddCthulhuEnergyEffect(AddCthulhuEnergyEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_06949370;
  AddEnergyEffect::~AddEnergyEffect((AddEnergyEffect *)this);
  return;
}


/* AddCthulhuEnergyEffect::~AddCthulhuEnergyEffect() */

void __thiscall AddCthulhuEnergyEffect::~AddCthulhuEnergyEffect(AddCthulhuEnergyEffect *this)

{
  ~AddCthulhuEnergyEffect(this);
  AK::FreeHook(this);
  return;
}


/* AddCthulhuEnergyEffect::AddCthulhuEnergyEffect() */

void __thiscall AddCthulhuEnergyEffect::AddCthulhuEnergyEffect(AddCthulhuEnergyEffect *this)

{
  AddEnergyEffect::AddEnergyEffect((AddEnergyEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06949370;
  return;
}


/* AddCthulhuEnergyEffect::StaticNew() */

AddCthulhuEnergyEffect * AddCthulhuEnergyEffect::StaticNew(void)

{
  AddCthulhuEnergyEffect *this;
  
  this = ::operator_new(0x78);
  AddCthulhuEnergyEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddCthulhuEnergyEffect::Play() */

void __thiscall AddCthulhuEnergyEffect::Play(AddCthulhuEnergyEffect *this)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)(**(code **)(*(long *)this + 0xb8))();
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)(this + 0x14),0xdbba1);
  std::string::string(asStack_10,"start");
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
/* AddCthulhuEnergyEffect::Update() */

void __thiscall AddCthulhuEnergyEffect::Update(AddCthulhuEnergyEffect *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *pEVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_20 [2];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  long local_8;
  
  iVar2 = *(int *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 2) {
    fVar9 = *(float *)(this + 0x20);
    fVar7 = (float)Distance2D(*(float *)(this + 0x1c),fVar9,*(float *)(this + 0x2c),
                              *(float *)(this + 0x30));
    iVar2 = FUN_04ac5e08(0x14);
    fVar11 = (float)iVar2 * 0.5;
    if (fVar11 <= fVar7) {
      uVar8 = PVZ_T();
      *(undefined4 *)(this + 0x40) = uVar8;
      local_10 = Sexy::SexyVector2::operator-
                           ((SexyVector2 *)(this + 0x2c),(SexyVector2 *)(this + 0x14));
      local_c = fVar9;
      local_18 = Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
      local_14 = fVar9;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
      if (bVar1) {
        pSVar4 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
        StandaloneEffect::SetScreenSpaceOrigin(pSVar4,(SexyVector2 *)(this + 0x1c),900000);
      }
      local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_18,(float)iVar2);
      local_c = fVar9;
      fVar7 = (float)Sexy::SexyVector2::operator+
                               ((SexyVector2 *)(this + 0x1c),(SexyVector2 *)&local_10);
      fVar10 = *(float *)(this + 0x2c);
      *(float *)(this + 0x20) = fVar9;
      fVar9 = fVar10 - *(float *)(this + 0x14);
      *(float *)(this + 0x1c) = fVar7;
      local_20[0] = 0.0;
      if ((int)fVar9 != 0) {
        local_20[0] = (fVar7 - *(float *)(this + 0x14)) / fVar9;
      }
      local_10 = 0x3f800000;
      pfVar6 = eastl::min_alt<float>((float *)&local_10,local_20);
      local_20[0] = *pfVar6;
      fVar9 = 1.0 - local_20[0];
      fVar9 = (local_20[0] * *(float *)(this + 0x30) +
              fVar9 * (*(float *)(this + 0x28) + *(float *)(this + 0x28))) * local_20[0] +
              *(float *)(this + 0x18) * fVar9 * fVar9;
      *(float *)(this + 0x20) = fVar9;
      fVar7 = (float)Distance2D(fVar7,fVar9,fVar10,*(float *)(this + 0x30));
      if (fVar11 <= fVar7) goto LAB_04ac6834;
    }
    *(undefined4 *)(this + 0x10) = 4;
    uVar8 = PVZ_T();
    *(undefined4 *)(this + 0x40) = uVar8;
  }
  else if (iVar2 == 4) {
    fVar7 = (float)PVZ_T();
    if (0.1 < fVar7 - *(float *)(this + 0x40)) {
      *(undefined4 *)(this + 0x10) = 0;
      iVar2 = FUN_04ac58ec(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x60));
      if (iVar2 != 0) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x48));
      }
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
      if (bVar1) {
        pSVar4 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
        StandaloneEffect::SetVisibility(pSVar4,false);
      }
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  else if ((iVar2 == 1) && (fVar7 = (float)PVZ_T(), 0.2 < fVar7 - *(float *)(this + 0x40))) {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
    iVar2 = FUN_04ac5e2c(0x32);
    iVar3 = FUN_04ac5e08(0xffffffe2);
    fVar7 = (float)iVar3;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar2,fVar7);
    Sexy::TPoint<float>::operator+=((TPoint<float> *)(this + 0x14),(TPoint *)&local_10);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(this + 0x14);
    *(undefined4 *)(this + 0x10) = 2;
    uVar8 = PVZ_T();
    *(undefined4 *)(this + 0x40) = uVar8;
    local_10 = Sexy::SexyVector2::operator-
                         ((SexyVector2 *)(this + 0x2c),(SexyVector2 *)(this + 0x14));
    local_c = fVar7;
    local_18 = Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
    local_14 = fVar7;
    (**(code **)(*(long *)this + 0xb8))(this);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetScreenSpaceOrigin(pSVar4,(SexyVector2 *)(this + 0x1c),900000);
    pEVar5 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string((string *)&local_10,"loop");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar5,(FastCurve *)&local_10,0);
    std::string::~string((string *)&local_10);
    nop();
    pEVar5 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetOrientation(pEVar5,(SexyVector2 *)&local_18);
  }
LAB_04ac6834:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddCthulhuEnergyEffect::CreateEffect() */

void AddCthulhuEnergyEffect::CreateEffect(void)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"POPANIM_EFFECTS_CTHULHUACTINIA_POWER");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

