// Class: PlantGardenerGrass


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGardenerGrass::StaticClassInit() */

void PlantGardenerGrass::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGardenerGrass");
    (*pcVar2)(plVar1,asStack_10,FUN_03b16ba8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGardenerGrass::StaticGetClass() */

long * PlantGardenerGrass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGardenerGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGardenerGrass::GetClass() const */

long * PlantGardenerGrass::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGardenerGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGardenerGrass::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantGardenerGrass::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0xa8))(param_1,0);
  }
  return 1;
}


/* PlantGardenerGrass::PlantGardenerGrass() */

void __thiscall PlantGardenerGrass::PlantGardenerGrass(PlantGardenerGrass *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672c690;
  Sexy::Insets::Insets((Insets *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  DVec3::DVec3((DVec3 *)(this + 0x50));
  return;
}


/* PlantGardenerGrass::StaticNew() */

PlantGardenerGrass * PlantGardenerGrass::StaticNew(void)

{
  PlantGardenerGrass *this;
  
  this = ::operator_new(0x60);
  PlantGardenerGrass(this);
  return this;
}


/* PlantGardenerGrass::~PlantGardenerGrass() */

void __thiscall PlantGardenerGrass::~PlantGardenerGrass(PlantGardenerGrass *this)

{
  *(undefined ***)this = &PTR_GetClass_0672c690;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGardenerGrass::~PlantGardenerGrass() */

void __thiscall PlantGardenerGrass::~PlantGardenerGrass(PlantGardenerGrass *this)

{
  ~PlantGardenerGrass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGardenerGrass::DoSpecial(int) */

void PlantGardenerGrass::DoSpecial(int param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong __n;
  RtObject *pRVar5;
  EffectObject_GardenerGrass *pEVar6;
  TRect *extraout_x1;
  TRect *extraout_x1_00;
  TRect *extraout_x1_01;
  SawDes *pSVar7;
  size_t in_x2;
  Board *pBVar8;
  Plant *local_260;
  float local_258;
  SawDes aSStack_200 [8];
  float local_1f8;
  undefined1 auStack_1f0 [96];
  byte local_190;
  byte local_18f;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  string asStack_178 [8];
  string asStack_170 [8];
  string asStack_168 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_160 [8];
  SawDes aSStack_158 [168];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [168];
  long local_8;
  
  plVar3 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03b165a8(plVar3[2]);
  EffectObject_GardenerGrass::SawDes::SawDes(aSStack_200);
  EffectObject_GardenerGrass::SawDes::SawDes(aSStack_158);
  local_188 = *(undefined4 *)(lVar4 + 0x2b8);
  DamageInfo::DamageInfo((DamageInfo *)&local_260);
  local_260 = (Plant *)plVar3[2];
  local_258 = (float)Plant::GetTotalDamageRate(local_260);
  local_258 = local_258 * *(float *)(lVar4 + 0x2d4);
  DamageInfo::operator=((DamageInfo *)aSStack_200,(DamageInfo *)&local_260);
  local_184 = 1;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_160,(RtWeakPtrBase *)aRStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  std::string::append(asStack_168,"",in_x2);
  std::string::append(asStack_178,"POPANIM_EFFECTS_GARDENERGRASS_EFFECT",in_x2);
  local_18f = (**(code **)(*plVar3 + 0x180))(plVar3);
  __n = (ulong)local_18f;
  if (local_18f == 0) {
    std::string::append(asStack_170,"saw_loop",0);
    local_190 = 1;
    local_18c = *(undefined4 *)(lVar4 + 0x2cc);
    Sexy::Insets::Insets
              ((Insets *)aRStack_b0,*(int *)(plVar3[2] + 0x114) + 1,*(int *)(plVar3[2] + 0x110) + -1
               ,3,3);
    BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aRStack_b0,extraout_x1_01);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aRStack_b0,"EffectObject_GardenerGrass");
    pRVar5 = (RtObject *)
             Board::AddEffectObject
                       (pBVar8,(string *)aRStack_b0,*(int *)(plVar3[2] + 0x114) + 2,
                        *(int *)(plVar3[2] + 0x110));
    pEVar6 = Sexy::RtObject::Cast<EffectObject_GardenerGrass>(pRVar5);
    std::string::~string((string *)aRStack_b0);
    nop();
    pSVar7 = aSStack_200;
  }
  else {
    local_188 = *(undefined4 *)(lVar4 + 0x2e0);
    bVar1 = Plant::GetAvatarEnable((Plant *)plVar3[2]);
    if (bVar1 == 0) {
      local_18f = bVar1;
      std::string::append(asStack_170,"saw_loop",__n);
      local_18c = *(undefined4 *)(lVar4 + 0x2d0);
      local_190 = bVar1;
      iVar2 = FUN_03b14d58(*(undefined4 *)(plVar3[2] + 0x50));
      local_1f8 = (float)iVar2 * *(float *)(lVar4 + 0x2d8);
    }
    else {
      std::string::append(asStack_178,"POPANIM_EFFECTS_GARDENERGRASS_EFFECT2",__n);
      local_18f = 1;
      std::string::append(asStack_170,"saw_loop",__n);
      local_190 = 0;
      local_18c = *(undefined4 *)(lVar4 + 0x2d0);
      iVar2 = FUN_03b14d58(*(undefined4 *)(plVar3[2] + 0x50));
      local_1f8 = (float)iVar2 * *(float *)(lVar4 + 0x2d8);
      operator|=(auStack_1f0,0x400);
      local_180 = *(undefined4 *)(lVar4 + 0x2dc);
    }
    EffectObject_GardenerGrass::SawDes::operator=(aSStack_158,aSStack_200);
    Sexy::Insets::Insets
              ((Insets *)aRStack_b0,*(int *)(plVar3[2] + 0x114) + 1,*(int *)(plVar3[2] + 0x110) + -2
               ,3,3);
    BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aRStack_b0,extraout_x1);
    Sexy::Insets::Insets
              ((Insets *)aRStack_b0,*(int *)(plVar3[2] + 0x114) + 1,*(int *)(plVar3[2] + 0x110),3,3)
    ;
    BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aRStack_b0,extraout_x1_00);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aRStack_b0,"EffectObject_GardenerGrass");
    pRVar5 = (RtObject *)
             Board::AddEffectObject
                       (pBVar8,(string *)aRStack_b0,*(int *)(plVar3[2] + 0x114) + 2,
                        *(int *)(plVar3[2] + 0x110) + -1);
    pEVar6 = Sexy::RtObject::Cast<EffectObject_GardenerGrass>(pRVar5);
    std::string::~string((string *)aRStack_b0);
    nop();
    EffectObject_GardenerGrass::SawDes::SawDes((SawDes *)aRStack_b0,aSStack_200);
    EffectObject_GardenerGrass::setValues(pEVar6,aRStack_b0);
    EffectObject_GardenerGrass::SawDes::~SawDes((SawDes *)aRStack_b0);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aRStack_b0,"EffectObject_GardenerGrass");
    pRVar5 = (RtObject *)
             Board::AddEffectObject
                       (pBVar8,(string *)aRStack_b0,*(int *)(plVar3[2] + 0x114) + 2,
                        *(int *)(plVar3[2] + 0x110) + 1);
    pEVar6 = Sexy::RtObject::Cast<EffectObject_GardenerGrass>(pRVar5);
    std::string::~string((string *)aRStack_b0);
    nop();
    pSVar7 = aSStack_158;
  }
  EffectObject_GardenerGrass::SawDes::SawDes((SawDes *)aRStack_b0,pSVar7);
  EffectObject_GardenerGrass::setValues(pEVar6,aRStack_b0);
  EffectObject_GardenerGrass::SawDes::~SawDes((SawDes *)aRStack_b0);
  DamageInfo::~DamageInfo((DamageInfo *)&local_260);
  EffectObject_GardenerGrass::SawDes::~SawDes(aSStack_158);
  EffectObject_GardenerGrass::SawDes::~SawDes(aSStack_200);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGardenerGrass::setState(unsigned int) */

void __thiscall PlantGardenerGrass::setState(PlantGardenerGrass *this,uint param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  SexyVector3 *pSVar3;
  RtObject *this_00;
  EffectObject_GardenerGrass *pEVar4;
  char *__s;
  size_t __n;
  Board *this_01;
  undefined4 uVar5;
  DummyInit aDStack_1e8 [48];
  Plant *local_1b8;
  float local_1b0;
  string asStack_158 [96];
  size_t local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_b8 [8];
  string asStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) == param_1) goto switchD_03b18908_caseD_5;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar5;
  lVar1 = FUN_03b165a8(*(undefined8 *)(this + 0x10));
  switch(param_1) {
  case 4:
  case 10:
    pPVar2 = (PopAnimRig *)FUN_03b16688(*(undefined8 *)(this + 0x10));
    __s = "idle";
    break;
  default:
    goto switchD_03b18908_caseD_5;
  case 0xb:
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x50),pSVar3);
    pPVar2 = (PopAnimRig *)FUN_03b16688(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_b0,"attack_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_1e8);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_b0,0,aDStack_1e8);
    std::string::~string(asStack_b0);
    nop();
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_158,"EffectObject_GardenerGrass");
    this_00 = (RtObject *)
              Board::AddEffectObject
                        (this_01,asStack_158,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
                         *(int *)(*(long *)(this + 0x10) + 0x110));
    Sexy::RtObject::Cast<EffectObject_GardenerGrass>(this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)asStack_b0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_b0);
    std::string::~string(asStack_158);
    nop();
    EffectObject_GardenerGrass::SawDes::SawDes((SawDes *)asStack_158);
    local_e0 = *(undefined4 *)(lVar1 + 0x2b8);
    local_e4 = *(undefined4 *)(lVar1 + 0x2c8);
    DamageInfo::DamageInfo((DamageInfo *)&local_1b8);
    local_1b8 = *(Plant **)(this + 0x10);
    local_1b0 = (float)Plant::GetTotalDamageRate(local_1b8);
    local_1b0 = local_1b0 * *(float *)(lVar1 + 0x2d4);
    DamageInfo::operator=((DamageInfo *)asStack_158,(DamageInfo *)&local_1b8);
    local_f8 = *(size_t *)(this + 0x38);
    uStack_f0 = *(undefined8 *)(this + 0x40);
    std::string::append(asStack_c0,"",local_f8);
    local_e7 = 0;
    __n = 1;
    local_e8 = 1;
    local_dc = 0;
    std::string::append(asStack_c8,"",1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_b8,(RtWeakPtrBase *)asStack_b0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_b0);
    std::string::append(asStack_d0,"POPANIM_EFFECTS_GARDENERGRASS_EFFECT",__n);
    pEVar4 = (EffectObject_GardenerGrass *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    EffectObject_GardenerGrass::SawDes::SawDes((SawDes *)asStack_b0,(SawDes *)asStack_158);
    EffectObject_GardenerGrass::setValues(pEVar4,asStack_b0);
    EffectObject_GardenerGrass::SawDes::~SawDes((SawDes *)asStack_b0);
    DamageInfo::~DamageInfo((DamageInfo *)&local_1b8);
    EffectObject_GardenerGrass::SawDes::~SawDes((SawDes *)asStack_158);
    goto switchD_03b18908_caseD_5;
  case 0xc:
    pPVar2 = (PopAnimRig *)FUN_03b16688(*(undefined8 *)(this + 0x10));
    __s = "cooldown";
  }
  std::string::string(asStack_b0,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_1e8);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_b0,0,aDStack_1e8);
  std::string::~string(asStack_b0);
  nop();
switchD_03b18908_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGardenerGrass::Initialize() */

void __thiscall PlantGardenerGrass::Initialize(PlantGardenerGrass *this)

{
  int iVar1;
  long lVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_03b165a8(*(undefined8 *)(this + 0x10));
  setState(this,10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 0x2b8);
  iVar1 = FUN_03b14d5c(*(undefined8 *)(this + 0x10));
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar2 + 0x2c0);
    }
    else {
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar2 + 700);
    }
  }
  else {
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar2 + 0x2c4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGardenerGrass::ApplyPlantfood() */

void __thiscall PlantGardenerGrass::ApplyPlantfood(PlantGardenerGrass *this)

{
  bool bVar1;
  long *plVar2;
  
  setState(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* PlantGardenerGrass::CancelPlantfood() */

void __thiscall PlantGardenerGrass::CancelPlantfood(PlantGardenerGrass *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* PlantGardenerGrass::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantGardenerGrass::onAnimStoppedCallback(PlantGardenerGrass *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"fire_level5");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"attack_end"), bVar1)) {
    setState(this,0xc);
    return;
  }
  bVar1 = std::operator==(param_1,"fire_plantfood");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"fire_plantfood2"), !bVar1)) {
    bVar1 = std::operator==(param_1,"attack_start");
    if (!bVar1) {
      return;
    }
    setState(this,0xb);
    return;
  }
  setState(this,10);
  return;
}


/* PlantGardenerGrass::onApplyCondition(PlantConditions) */

void __thiscall PlantGardenerGrass::onApplyCondition(PlantGardenerGrass *this,int param_2)

{
  bool bVar1;
  long *plVar2;
  
  if (param_2 != 0x17) {
    return;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    (**(code **)(*plVar2 + 0x48))();
  }
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGardenerGrass::findTargets() */

void __thiscall PlantGardenerGrass::findTargets(PlantGardenerGrass *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  GridItem *pGVar12;
  PlantAnimRig_GardenerGrass *pPVar13;
  char *__s;
  RtObject *this_00;
  code *pcVar14;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  int local_30;
  int iStack_2c;
  int local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar8 = time((time_t *)0x0);
  Sexy::SRand(uVar8);
  iVar4 = FUN_03b14d5c(*(undefined8 *)(this + 0x10));
  if (4 < iVar4) {
    iVar4 = PlantFramework::Rand((PlantFramework *)this);
    bVar1 = iVar4 % 100 < 0x19;
  }
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar4 = *(int *)(*(long *)(this + 0x10) + 0x114);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = *(int *)(*(long *)(this + 0x10) + 0x110);
  local_30 = iVar4 * iVar5 + 200;
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  iStack_2c = iVar6 * iVar4 + 0xa0;
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
  local_28 = iVar6 / 2 + iVar4 * 2;
  local_24 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = local_30 + local_28;
  lVar9 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  if (*(float *)(lVar9 + 0x10) < (float)iVar4) {
    lVar9 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
    local_28 = (int)(*(float *)(lVar9 + 0x10) - (float)local_30);
  }
  *(ulong *)(this + 0x38) = CONCAT44(iStack_2c,local_30);
  *(ulong *)(this + 0x40) = CONCAT44(local_24,local_28);
  uVar7 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_20,uVar7,(Insets *)&local_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (bVar2) {
    do {
      puVar10 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      this_00 = (RtObject *)*puVar10;
      pZVar11 = Sexy::RtObject::Cast<Zombie>(this_00);
      pGVar12 = Sexy::RtObject::Cast<GridItem>(this_00);
      if (pZVar11 != (Zombie *)0x0) {
        pcVar14 = *(code **)(*(long *)pZVar11 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar3 = (*pcVar14)(pZVar11,aRStack_38,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        if (cVar3 == '\0') goto LAB_03b18fcc;
LAB_03b19050:
        setState(this,0xd);
        if (bVar1) {
          lVar9 = FUN_03b165a8(*(undefined8 *)(this + 0x10));
          *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar9 + 0x2e4);
          pPVar13 = (PlantAnimRig_GardenerGrass *)FUN_03b16688(*(undefined8 *)(this + 0x10));
          __s = "fire_level5";
        }
        else {
          *(undefined4 *)(this + 0x30) = 0;
          pPVar13 = (PlantAnimRig_GardenerGrass *)FUN_03b16688(*(undefined8 *)(this + 0x10));
          __s = "attack_start";
        }
        std::string::string((string *)aRStack_40,__s);
        std::string::string((string *)aRStack_38,"onAnimStoppedCallback");
        PlantAnimRig_GardenerGrass::playAndStopAnimWithCallback
                  (pPVar13,(string *)aRStack_40,(string *)aRStack_38);
        std::string::~string((string *)aRStack_38);
        nop();
        std::string::~string((string *)aRStack_40);
        nop();
        break;
      }
LAB_03b18fcc:
      if ((pGVar12 != (GridItem *)0x0) &&
         (cVar3 = (**(code **)(*(long *)pGVar12 + 0x200))(pGVar12), cVar3 != '\0'))
      goto LAB_03b19050;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    } while (bVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGardenerGrass::UpdateActions() */

void __thiscall PlantGardenerGrass::UpdateActions(PlantGardenerGrass *this)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  PlantAnimRig_GardenerGrass *pPVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    switch(*(undefined4 *)
            (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10) + 200)) {
    case 4:
    case 10:
      findTargets(this);
      break;
    case 0xb:
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      if (((*pfVar3 != *(float *)(this + 0x50)) || (pfVar3[1] != *(float *)(this + 0x54))) ||
         (pfVar3[2] != *(float *)(this + 0x58))) {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
        if (bVar2) {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
          (**(code **)(*plVar5 + 0x48))();
        }
        setState(this,0xc);
      }
      fVar6 = *(float *)(this + 0x28);
      fVar8 = *(float *)(this + 0x34);
      fVar7 = (float)PVZ_T();
      if (fVar6 + fVar8 < fVar7) {
        setState(this,0xd);
        pPVar4 = (PlantAnimRig_GardenerGrass *)FUN_03b16688(*(undefined8 *)(this + 0x10));
        std::string::string(asStack_18,"attack_end");
        std::string::string(asStack_10,"onAnimStoppedCallback");
        PlantAnimRig_GardenerGrass::playAndStopAnimWithCallback(pPVar4,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
      }
      break;
    case 0xc:
      fVar6 = *(float *)(this + 0x30);
      if (fVar6 == 0.0) {
        fVar6 = *(float *)(this + 0x2c);
      }
      fVar8 = *(float *)(this + 0x34);
      fVar7 = (float)PVZ_T();
      if (fVar6 + fVar8 < fVar7) {
        setState(this,10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

