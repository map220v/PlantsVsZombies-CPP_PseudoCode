// Class: PlantEagleclaw


/* PlantEagleclaw::PlantEagleclaw() */

void __thiscall PlantEagleclaw::PlantEagleclaw(PlantEagleclaw *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0682adc0;
  return;
}


/* PlantEagleclaw::StaticNew() */

PlantEagleclaw * PlantEagleclaw::StaticNew(void)

{
  PlantEagleclaw *this;
  
  this = ::operator_new(0x38);
  PlantEagleclaw(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::StaticClassInit() */

void PlantEagleclaw::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEagleclaw");
    (*pcVar2)(plVar1,asStack_10,FUN_042abffc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEagleclaw::StaticGetClass() */

long * PlantEagleclaw::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEagleclaw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEagleclaw::GetClass() const */

long * PlantEagleclaw::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEagleclaw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEagleclaw::~PlantEagleclaw() */

void __thiscall PlantEagleclaw::~PlantEagleclaw(PlantEagleclaw *this)

{
  *(undefined ***)this = &PTR_GetClass_0682adc0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEagleclaw::~PlantEagleclaw() */

void __thiscall PlantEagleclaw::~PlantEagleclaw(PlantEagleclaw *this)

{
  ~PlantEagleclaw(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::setState(int) */

void __thiscall PlantEagleclaw::setState(PlantEagleclaw *this,int param_1)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  PlantAnimRig *pPVar5;
  long *plVar6;
  PlantAnimRig_Eagleclaw *this_00;
  char *__s;
  UIEasyButtonWidget *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_01 + 200) == param_1) goto switchD_042adc5c_default;
  *(int *)(this_01 + 200) = param_1;
  switch(param_1) {
  case 0xb:
    plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
    (**(code **)(*plVar6 + 0x118))();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    Sexy::Color::Color((Color *)asStack_60,1);
    PopAnimRig::SetPAMColor(pPVar3,(Color *)asStack_60);
    break;
  case 0xc:
    cVar1 = FUN_042ab738(this_01);
    if (cVar1 == '\0') {
LAB_042addac:
      pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
      if (this[0x28] == (PlantEagleclaw)0x0) {
        __s = "attack";
      }
      else {
        __s = "attack_re";
      }
    }
    else {
      fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      if (*(float *)(*(long *)(this + 0x30) + 0x2c4) <= fVar10) {
        this_01 = *(UIEasyButtonWidget **)(this + 0x10);
        goto LAB_042addac;
      }
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      if (this[0x28] == (PlantEagleclaw)0x0) {
        __s = "attack_lv5";
      }
      else {
        __s = "attack_lv5_re";
      }
    }
    std::string::string(asStack_60,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
               asStack_68);
    PopAnimRig::PlayAndStop(pPVar3,asStack_60,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::string::~string(asStack_60);
    nop();
    pPVar5 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar5,0xe);
    break;
  case 0xd:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
    std::string::string(asStack_60,"recover_start");
    fVar10 = 4.0;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
               asStack_68);
    PopAnimRig::PlayAndStop(pPVar3,asStack_60,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::string::~string(asStack_60);
    nop();
    iVar2 = FUN_042ab730(*(undefined8 *)(this + 0x10));
    if (iVar2 < 3) {
      if (iVar2 == 2) {
        fVar10 = 2.0;
      }
      else {
        fVar10 = 0.0;
      }
    }
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    lVar4 = FUN_042ab8ec(*(undefined8 *)(lVar4 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    fVar7 = (float)RandRangeFloat(*(float *)(lVar4 + 0x24),*(float *)(lVar4 + 0x28));
    fVar8 = (float)PVZ_T();
    lVar4 = *(long *)(this + 0x10);
    fVar9 = (float)FUN_042ab704(*(undefined4 *)(lVar4 + 0x420));
    *(float *)(lVar4 + 0x128) = fVar8 + fVar9 * (fVar7 - fVar10);
    break;
  case 0xe:
    this_00 = (PlantAnimRig_Eagleclaw *)FUN_042ad264(this_01);
    PlantAnimRig_Eagleclaw::PlayRecoverEnd(this_00);
  }
switchD_042adc5c_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::Initialize() */

void __thiscall PlantEagleclaw::Initialize(PlantEagleclaw *this)

{
  RtObject *pRVar1;
  PlantEagleclawProps *pPVar2;
  PlantAnimRig_Eagleclaw *pPVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,0xb);
  this[0x28] = (PlantEagleclaw)0x0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar4;
  FUN_042ab70c(aRStack_10,*(undefined8 *)(this + 0x10));
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = Sexy::RtObject::Cast<PlantEagleclawProps>(pRVar1);
  *(PlantEagleclawProps **)(this + 0x30) = pPVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Eagleclaw>(pRVar1);
  uVar4 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  FUN_042ab758(pPVar3 + 0x3b8,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x042ae194 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantEagleclaw::UpdateActions() */

void __thiscall PlantEagleclaw::UpdateActions(PlantEagleclaw *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 extraout_var [12];
  float fVar9;
  float fVar10;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  iVar3 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0xd) {
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128) < fVar6) {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_18);
      setState(this,0xe);
    }
    else {
      iVar3 = FUN_042ab730();
      if (iVar3 < 3) {
        if (iVar3 == 2) {
          fVar6 = *(float *)(*(long *)(this + 0x30) + 700);
        }
        else {
          fVar6 = 0.0;
        }
      }
      else {
        fVar6 = *(float *)(*(long *)(this + 0x30) + 0x2c0);
      }
      Plant::GetProps();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar5 = FUN_042ab8ec(*(undefined8 *)(lVar5 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar10 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar7 = (float)PVZ_T();
      fVar9 = *(float *)(lVar5 + 0x28);
      fVar8 = (float)FUN_042ab704(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
      fVar6 = 1.0 - (fVar10 - fVar7) / ((fVar9 - fVar6) * fVar8);
      fVar6 = fVar6 * fVar6;
      fVar6 = fVar6 * fVar6 * 9.424778 + 3.1415927;
      cosf(fVar6);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar6;
      fVar6 = CurveEvaluate<float>
                        (auVar1,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar6 * 255.0);
      local_14 = local_18;
      local_10 = local_18;
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_18);
    }
  }
  else if (iVar3 == 0xe) {
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar4);
    if (cVar2 == '\0') {
      setState(this,0xb);
    }
  }
  else if (((iVar3 == 0xb) && (fVar6 = (float)PVZ_T(), *(float *)(this + 0x2c) < fVar6)) &&
          (cVar2 = (**(code **)(*(long *)this + 0x150))(this,0), cVar2 != '\0')) {
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar6 + 5.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEagleclaw::ClearCoolDown() */

void __thiscall PlantEagleclaw::ClearCoolDown(PlantEagleclaw *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    return;
  }
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::ApplyPlantfood() */

void __thiscall PlantEagleclaw::ApplyPlantfood(PlantEagleclaw *this)

{
  PopAnimRig *this_00;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::Color::Color(aCStack_18,1);
  PopAnimRig::SetPAMColor(this_00,aCStack_18);
  setState(this,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEagleclaw::CancelPlantfood() */

void __thiscall PlantEagleclaw::CancelPlantfood(PlantEagleclaw *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xe);
  return;
}


/* PlantEagleclaw::Idle() */

void __thiscall PlantEagleclaw::Idle(PlantEagleclaw *this)

{
  PlantAnimRig_Eagleclaw *pPVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  switch(*(undefined4 *)(lVar2 + 200)) {
  case 0xb:
    setState(this,0xb);
    return;
  case 0xc:
  case 0xd:
    pPVar1 = (PlantAnimRig_Eagleclaw *)FUN_042ad264(lVar2);
    PlantAnimRig_Eagleclaw::PlayRecoverLooped(pPVar1);
    return;
  case 0xe:
    pPVar1 = (PlantAnimRig_Eagleclaw *)FUN_042ad264(lVar2);
    PlantAnimRig_Eagleclaw::PlayRecoverEnd(pPVar1);
    return;
  default:
    setState(this,0xb);
    return;
  }
}


/* PlantEagleclaw::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEagleclaw::onAnimStoppedCallback(PlantEagleclaw *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Eagleclaw *this_00;
  
  bVar1 = std::operator==(param_1,"attack");
  if ((((!bVar1) && (bVar1 = std::operator==(param_1,"attack_lv5"), !bVar1)) &&
      (bVar1 = std::operator==(param_1,"attack_re"), !bVar1)) &&
     (bVar1 = std::operator==(param_1,"attack_lv5_re"), !bVar1)) {
    bVar1 = std::operator==(param_1,"recover_start");
    if (!bVar1) {
      return;
    }
    this_00 = (PlantAnimRig_Eagleclaw *)FUN_042ad264(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Eagleclaw::PlayRecoverLooped(this_00);
    return;
  }
  setState(this,0xd);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::GetTargetZombie() */

void PlantEagleclaw::GetTargetZombie(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  RtObject *this;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  SharkMinion *this_01;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042ab70c((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,*(undefined8 *)(in_x0 + 0x10));
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtObject::Cast<PlantEagleclawProps>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_40,0,iVar3,iVar4,1);
  this_01 = *(SharkMinion **)(in_x0 + 0x10);
  iVar3 = FUN_042ab730(this_01);
  if (iVar3 < 3) {
    if (iVar3 == 2) {
      iVar3 = SharkMinion::getRow(this_01);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets((Insets *)&local_20,0,iVar3 + -1,iVar4,3);
      local_40 = local_20;
      uStack_38 = uStack_18;
    }
  }
  else {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Insets::Insets((Insets *)&local_20,0,0,iVar3,iVar4);
    local_40 = local_20;
    uStack_38 = uStack_18;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,2,(Insets *)&local_40);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  Sexy::Point::Point((Point *)&local_48,0,0);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)asStack_30,(Point *)&local_48);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar5,uVar6,asStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
LAB_042b1bc8:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if ((((this_00 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')) &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
       ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
        (cVar2 = FUN_042ac59c(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')))) {
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
      }
      std::string::string(asStack_30,"EagleclawMark");
      cVar2 = Zombie::HasTag(this_00,asStack_30);
      std::string::~string(asStack_30);
      nop();
      if (cVar2 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
        goto LAB_042b1bc8;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::CreateLightingBall(bool) */

void __thiscall PlantEagleclaw::CreateLightingBall(PlantEagleclaw *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  EagleclawLightningBall *this_00;
  undefined8 *puVar5;
  int local_28;
  int iStack_24;
  RtWeakPtr<Sexy::SoundResource> local_20 [8];
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::RtClass::StaticGetClassNamed("EagleclawLightningBall");
  GameObject::Create(uVar4,0x28);
  nop();
  if (this_00 != (EagleclawLightningBall *)0x0) {
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_18 = *puVar5;
    local_10 = *(float *)(puVar5 + 1) + 50.0;
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_20,(RtWeakPtrBase *)&local_28);
    EagleclawLightningBall::SetPlant(this_00,local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    bVar1 = (bool)FUN_042ab738(*(undefined8 *)(this + 0x10));
    EagleclawLightningBall::SetLevel5Info(this_00,bVar1,param_1);
    bVar1 = (bool)(**(code **)(*(long *)this + 0x180))(this);
    bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    EagleclawLightningBall::SetIsPlantfood(this_00,bVar1,bVar2);
    EagleclawLightningBall::InitBallAnim(this_00);
    cVar3 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar3 == '\0') {
      GetTargetZombie();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_28);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_20,(RtWeakPtrBase *)&local_28);
        EagleclawLightningBall::FlyToZombie(this_00,local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      }
      else {
        EagleclawLightningBall::disappear(this_00);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    else {
      FUN_042af490((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      if ((local_28 == -1) || (iStack_24 == -1)) {
        BoardEntity::CalcGridPosition();
      }
      EagleclawLightningBall::FlyToGrid(this_00,(Point *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEagleclaw::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantEagleclaw::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"attack");
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"attack5");
    if (bVar1) {
      CreateLightingBall((PlantEagleclaw *)param_1,true);
      return 1;
    }
    bVar1 = std::operator==(param_2,"attack_pf");
    if ((!bVar1) && (bVar1 = std::operator==(param_2,"attack_pf2"), !bVar1)) {
      return 1;
    }
  }
  CreateLightingBall((PlantEagleclaw *)param_1,false);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEagleclaw::FindTargetAndFire(PlantWeapon) */

void PlantEagleclaw::FindTargetAndFire(PlantEagleclaw *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoardEntity *this;
  RtMixedPtr<Sexy::Image> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTargetZombie();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_10);
  if (cVar1 == '\0') {
    this = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar2 = BoardEntity::CalcColumnPosition(this);
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    param_1[0x28] = (PlantEagleclaw)(iVar2 <= iVar3);
    setState(param_1,0xc);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}

