// Class: PlantTristerixAphyllus


/* PlantTristerixAphyllus::PlantTristerixAphyllus() */

void __thiscall PlantTristerixAphyllus::PlantTristerixAphyllus(PlantTristerixAphyllus *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06829f40;
  return;
}


/* PlantTristerixAphyllus::StaticNew() */

PlantTristerixAphyllus * PlantTristerixAphyllus::StaticNew(void)

{
  PlantTristerixAphyllus *this;
  
  this = ::operator_new(0x30);
  PlantTristerixAphyllus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::StaticClassInit() */

void PlantTristerixAphyllus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTristerixAphyllus");
    (*pcVar2)(plVar1,asStack_10,FUN_042a584c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTristerixAphyllus::StaticGetClass() */

long * PlantTristerixAphyllus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTristerixAphyllus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTristerixAphyllus::GetClass() const */

long * PlantTristerixAphyllus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTristerixAphyllus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTristerixAphyllus::~PlantTristerixAphyllus() */

void __thiscall PlantTristerixAphyllus::~PlantTristerixAphyllus(PlantTristerixAphyllus *this)

{
  *(undefined ***)this = &PTR_GetClass_06829f40;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTristerixAphyllus::~PlantTristerixAphyllus() */

void __thiscall PlantTristerixAphyllus::~PlantTristerixAphyllus(PlantTristerixAphyllus *this)

{
  ~PlantTristerixAphyllus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::CreateBird(int) */

void __thiscall PlantTristerixAphyllus::CreateBird(PlantTristerixAphyllus *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  TristerixAphyllusBird *this_00;
  RtObject *this_01;
  PlantTristerixAphyllusProps *pPVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::RtClass::StaticGetClassNamed("TristerixAphyllusBird");
  GameObject::Create(uVar2,0x28);
  nop();
  if (this_00 != (TristerixAphyllusBird *)0x0) {
    uVar2 = *(undefined8 *)(this + 0x10);
    iVar8 = 1;
    iVar1 = FUN_042a52f0(uVar2);
    FUN_042a52cc(aRStack_18,uVar2);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pPVar3 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar2 = *(undefined8 *)(pPVar3 + 0x2e8);
    uVar4 = FUN_042a5350(uVar2,*(undefined8 *)(pPVar3 + 0x2f0));
    if ((ulong)(long)(iVar1 + -1) < uVar4) {
      piVar5 = (int *)FUN_042a5364(uVar2,(long)(iVar1 + -1));
      iVar8 = *piVar5;
    }
    iVar6 = (int)*(float *)(pPVar3 + 0x2c8);
    if (iVar1 < 3) {
      if (iVar1 == 2) {
        iVar6 = (int)((float)iVar6 + *(float *)(pPVar3 + 0x2cc));
      }
    }
    else {
      iVar6 = (int)((float)iVar6 + *(float *)(pPVar3 + 0x2d0));
    }
    fVar11 = *(float *)(pPVar3 + 0x2d4);
    fVar9 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    fVar12 = *(float *)(pPVar3 + 0x2b8);
    fVar10 = (float)RandRangeFloat(0.9,1.1);
    TristerixAphyllusBird::SetBirdSpeed(this_00,fVar10 * fVar12,*(float *)(pPVar3 + 700));
    TristerixAphyllusBird::SetBirdInfo(this_00,param_1,iVar8,(float)iVar6,fVar9 * fVar11);
    pcVar7 = *(code **)(*(long *)this_00 + 0x78);
    fVar9 = (float)RandRangeFloat(-80.0,20.0);
    fVar10 = (float)RandRangeFloat(-20.0,200.0);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar9,fVar10,0.0);
    (*pcVar7)(this_00,aRStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
    TristerixAphyllusBird::FlyToPlant(this_00,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::PlayDragged() */

void __thiscall PlantTristerixAphyllus::PlayDragged(PlantTristerixAphyllus *this)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_58,"pull");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::setState(int) */

void __thiscall PlantTristerixAphyllus::setState(PlantTristerixAphyllus *this,int param_1)

{
  char cVar1;
  int iVar2;
  UIEasyButtonWidget *this_00;
  PlantAnimRig_Mandrake *this_01;
  long lVar3;
  RtObject *pRVar4;
  PlantTristerixAphyllusProps *pPVar5;
  PopAnimRig *pPVar6;
  PlantAnimRig *pPVar7;
  PlantAnimRig_TristerixAphyllus *pPVar8;
  long *plVar9;
  PlantAnimRig_Eagleclaw *this_02;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) != param_1) {
    *(int *)(this_00 + 200) = param_1;
    switch(param_1) {
    case 0xb:
      plVar9 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar9 + 0x118))();
      pPVar6 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)aRStack_60,1);
      PopAnimRig::SetPAMColor(pPVar6,(Color *)aRStack_60);
      break;
    case 0xc:
      pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      std::string::string((string *)aRStack_60,"blssom_on");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
      std::string::string(asStack_68,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
                 asStack_68);
      PopAnimRig::PlayAndStop(pPVar6,(string *)aRStack_60,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtId::~RtId(aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      std::string::~string((string *)aRStack_60);
      nop();
      pPVar7 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar7,0xe);
      cVar1 = FUN_042a52f8(*(undefined8 *)(this + 0x10));
      if (cVar1 != '\0') {
        fVar11 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        FUN_042a52cc((string *)aRStack_60,*(undefined8 *)(this + 0x10));
        pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        pPVar5 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(pRVar4);
        fVar12 = *(float *)(pPVar5 + 0x2d8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        if (fVar11 < fVar12) {
          CreateBird(this,1);
          pPVar8 = (PlantAnimRig_TristerixAphyllus *)FUN_042a81bc(*(undefined8 *)(this + 0x10));
          PlantAnimRig_TristerixAphyllus::ChangeBlssomLayer(pPVar8,2);
          break;
        }
      }
      CreateBird(this,0);
      pPVar8 = (PlantAnimRig_TristerixAphyllus *)FUN_042a81bc(*(undefined8 *)(this + 0x10));
      PlantAnimRig_TristerixAphyllus::ChangeBlssomLayer(pPVar8,0);
      break;
    case 0xd:
      this_01 = (PlantAnimRig_Mandrake *)FUN_042a81bc();
      PlantAnimRig_Mandrake::PlayRecoverLooped(this_01);
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      lVar3 = FUN_042a53f8(*(undefined8 *)(lVar3 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      fVar11 = (float)RandRangeFloat(*(float *)(lVar3 + 0x24),*(float *)(lVar3 + 0x28));
      uVar10 = *(undefined8 *)(this + 0x10);
      iVar2 = FUN_042a52f0(uVar10);
      if (iVar2 < 3) {
        if (iVar2 == 2) {
          FUN_042a52cc(aRStack_60,uVar10);
          pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          pPVar5 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(pRVar4);
          fVar11 = fVar11 - *(float *)(pPVar5 + 0x2c0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        }
      }
      else {
        FUN_042a52cc(aRStack_60,uVar10);
        pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        pPVar5 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(pRVar4);
        fVar11 = fVar11 - *(float *)(pPVar5 + 0x2c4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
      fVar12 = (float)PVZ_T();
      lVar3 = *(long *)(this + 0x10);
      fVar13 = (float)FUN_042a52c8(*(undefined4 *)(lVar3 + 0x420));
      *(float *)(lVar3 + 0x128) = fVar12 + fVar11 * fVar13;
      break;
    case 0xe:
      this_02 = (PlantAnimRig_Eagleclaw *)FUN_042a81bc();
      PlantAnimRig_Eagleclaw::PlayRecoverEnd(this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTristerixAphyllus::Initialize() */

void __thiscall PlantTristerixAphyllus::Initialize(PlantTristerixAphyllus *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,0xb);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x042a9948 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantTristerixAphyllus::UpdateActions() */

void __thiscall PlantTristerixAphyllus::UpdateActions(PlantTristerixAphyllus *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined1 extraout_var [12];
  float fVar9;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xd) {
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128)) {
      Plant::GetProps();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar5 = FUN_042a53f8(*(undefined8 *)(lVar5 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar9 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar7 = (float)PVZ_T();
      fVar8 = (float)FUN_042a52c8(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
      fVar7 = 1.0 - (fVar9 - fVar7) / (fVar8 * *(float *)(lVar5 + 0x28));
      fVar7 = fVar7 * fVar7;
      fVar7 = fVar7 * fVar7 * 9.424778 + 3.1415927;
      cosf(fVar7);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar2._4_12_ = extraout_var;
      auVar2._0_4_ = fVar7;
      fVar7 = CurveEvaluate<float>
                        (auVar2,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar7 * 255.0);
      local_14 = local_18;
      local_10 = local_18;
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_18);
    }
    else {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_18);
      setState(this,0xe);
    }
  }
  else if (iVar1 == 0xe) {
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar3 = PopAnimRig::IsPlayingAnything(pPVar4);
    if (cVar3 == '\0') {
      setState(this,0xb);
    }
  }
  else if (iVar1 == 0xb) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x28) < fVar7) {
      pcVar6 = *(code **)(*(long *)this + 0x150);
      *(float *)(this + 0x28) = *(float *)(this + 0x28) + 0.5;
      cVar3 = (*pcVar6)(this,0);
      if (cVar3 != '\0') {
        *(float *)(this + 0x28) = *(float *)(this + 0x28) + 5.0;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTristerixAphyllus::CancelPlantfood() */

void __thiscall PlantTristerixAphyllus::CancelPlantfood(PlantTristerixAphyllus *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xe);
  return;
}


/* PlantTristerixAphyllus::Idle() */

void __thiscall PlantTristerixAphyllus::Idle(PlantTristerixAphyllus *this)

{
  PlantAnimRig_Mandrake *this_00;
  PlantAnimRig_Eagleclaw *this_01;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  switch(*(undefined4 *)(lVar1 + 200)) {
  case 0xb:
    setState(this,0xb);
    return;
  case 0xc:
  case 0xd:
    this_00 = (PlantAnimRig_Mandrake *)FUN_042a81bc(lVar1);
    PlantAnimRig_Mandrake::PlayRecoverLooped(this_00);
    return;
  case 0xe:
    this_01 = (PlantAnimRig_Eagleclaw *)FUN_042a81bc(lVar1);
    PlantAnimRig_Eagleclaw::PlayRecoverEnd(this_01);
    return;
  default:
    setState(this,0xb);
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantTristerixAphyllus::onAnimStoppedCallback(PlantTristerixAphyllus *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  PlantAnimRig_TristerixAphyllus *this_00;
  PopAnimRig *pPVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"blssom_on");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"pull");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"blssom_off");
      if (bVar1) {
        setState(this,0xd);
      }
      goto LAB_042a9ac4;
    }
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"blssom_off");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      goto LAB_042a9ac4;
    }
    if (*(int *)(this + 0x2c) == 0) {
      (**(code **)(*(long *)this + 0x228))(this);
      goto LAB_042a9ac4;
    }
  }
  this_00 = (PlantAnimRig_TristerixAphyllus *)FUN_042a81bc(*(undefined8 *)(this + 0x10));
  PlantAnimRig_TristerixAphyllus::PlayBlssomLoop(this_00);
LAB_042a9ac4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::ApplyPlantfood() */

void __thiscall PlantTristerixAphyllus::ApplyPlantfood(PlantTristerixAphyllus *this)

{
  char cVar1;
  bool bVar2;
  PopAnimRig *this_00;
  RtObject *pRVar3;
  PlantTristerixAphyllusProps *pPVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  int *piVar7;
  PlantAnimRig_TristerixAphyllus *this_01;
  long lVar8;
  long lVar9;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::Color::Color((Color *)aRStack_20,1);
  PopAnimRig::SetPAMColor(this_00,(Color *)aRStack_20);
  setState(this,5);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    FUN_042a52cc(aRStack_20,*(undefined8 *)(this + 0x10));
    pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pPVar4 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(pRVar3);
    local_38 = *(int *)(pPVar4 + 0x2dc);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    FUN_042a52cc(aRStack_20,*(undefined8 *)(this + 0x10));
    pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pPVar4 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(pRVar3);
    local_38 = *(int *)(pPVar4 + 0x2e0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  local_34 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  EntityFinder::GetEntitiesOnBoard(aRStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if ((pZVar6 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnOpposingTeam(pZVar6,1), cVar1 != '\0')
       ) {
      local_34 = local_34 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  piVar7 = eastl::min_alt<int>(&local_38,&local_34);
  local_38 = *piVar7;
  if (local_38 == 0) {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  else {
    lVar9 = (long)local_38;
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 1;
      CreateBird(this,0);
      this_01 = (PlantAnimRig_TristerixAphyllus *)FUN_042a81bc(*(undefined8 *)(this + 0x10));
      PlantAnimRig_TristerixAphyllus::ChangeBlssomLayer(this_01,1);
    } while (lVar8 != lVar9);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::GetTargetZombie() */

void PlantTristerixAphyllus::GetTargetZombie(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  long in_x0;
  RtObject *this_00;
  PlantTristerixAphyllusProps *pPVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *this_01;
  undefined8 uVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  code *pcVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042a52cc(aRStack_20,*(undefined8 *)(in_x0 + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar3 = Sexy::RtObject::Cast<PlantTristerixAphyllusProps>(this_00);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(pPVar3 + 0x300);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  EntityFinder::GetEntitiesOnBoard(aRStack_20,2);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  Sexy::Point::Point((Point *)&local_38,0,2);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)&local_38);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar4,uVar5,(RtWeakPtr<Sexy::SoundResource> *)local_30);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
LAB_042ab1d4:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if (((((this_01 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this_01,2), cVar2 != '\0'))
         && (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 == '\0')) &&
        ((((cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 == '\0' &&
           (cVar2 = FUN_042a62dc(*(undefined4 *)(this_01 + 0xcc)), cVar2 == '\0')) &&
          ((cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0' &&
           ((cVar2 = Zombie::HasCondition(this_01,0x2e), cVar2 == '\0' &&
            (cVar2 = Zombie::HasCondition(this_01,0x27), cVar2 == '\0')))))) &&
         (cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0')))) &&
       (cVar2 = Zombie::HasFogImmune(this_01), cVar2 == '\0')) {
      cVar2 = Zombie::IsBerserk(this_01);
      if (cVar2 == '\0') {
        pcVar8 = *(code **)(*(long *)this_01 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
        cVar2 = (*pcVar8)(this_01,(RtWeakPtr<Sexy::SoundResource> *)local_30,0);
        if (((cVar2 == '\0') ||
            (cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar2 != '\0')) ||
           (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), bVar1)) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        }
        else {
          bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          if (!bVar1) {
            uVar4 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(this);
            uVar5 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this);
            uVar7 = Zombie::GetTypeName(this_01);
            local_38 = std::
                       find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                 (uVar4,uVar5,uVar7);
            local_30[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end(this);
            bVar1 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
            if (!bVar1) {
              cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8);
              if (cVar2 != '\0') {
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                          ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)local_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
              }
              std::string::string((string *)local_30,"TristerixAphyllusMark");
              cVar2 = Zombie::HasTag(this_01,(string *)local_30);
              std::string::~string((string *)local_30);
              nop();
              if (cVar2 == '\0') {
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                          ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)local_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                goto LAB_042ab1d4;
              }
            }
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllus::FindTargetAndFire(PlantWeapon) */

void PlantTristerixAphyllus::FindTargetAndFire(PlantTristerixAphyllus *param_1)

{
  char cVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTargetZombie();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    setState(param_1,0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}

