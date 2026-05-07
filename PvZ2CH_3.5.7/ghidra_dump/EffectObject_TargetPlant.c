// Class: EffectObject_TargetPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::StaticClassInit() */

void EffectObject_TargetPlant::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_TargetPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_041a571c,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_TargetPlant::StaticGetClass() */

long * EffectObject_TargetPlant::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_TargetPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_TargetPlant::GetClass() const */

long * EffectObject_TargetPlant::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_TargetPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::PlayRetract() */

void __thiscall EffectObject_TargetPlant::PlayRetract(EffectObject_TargetPlant *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"unwrap_quick2");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::PlayEmerge() */

void __thiscall EffectObject_TargetPlant::PlayEmerge(EffectObject_TargetPlant *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"recover");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_TargetPlant::onUpdate() */

void __thiscall EffectObject_TargetPlant::onUpdate(EffectObject_TargetPlant *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Plant *pPVar2;
  long lVar3;
  
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  this_00 = (RtMixedPtrBase *)(this + 0x118);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = Plant::IsSwapping(pPVar2);
    if (cVar1 == '\0') {
      pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      if (*(code **)(*(long *)pPVar2 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(pPVar2);
      }
      else {
        cVar1 = (**(code **)(*(long *)pPVar2 + 0x1f8))();
      }
      if (cVar1 == '\0') goto LAB_041a20b4;
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(int *)(lVar3 + 0x114) != *(int *)(this + 0x124)) {
      return;
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(int *)(lVar3 + 0x110) != *(int *)(this + 0x128)) {
      return;
    }
  }
LAB_041a20b4:
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* EffectObject_TargetPlant::EffectObject_TargetPlant() */

void __thiscall EffectObject_TargetPlant::EffectObject_TargetPlant(EffectObject_TargetPlant *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_067fe6d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  Sexy::Point::Point((Point *)(this + 0x124));
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x130));
  return;
}


/* EffectObject_TargetPlant::StaticNew() */

EffectObject_TargetPlant * EffectObject_TargetPlant::StaticNew(void)

{
  EffectObject_TargetPlant *this;
  
  this = ::operator_new(0x178);
  EffectObject_TargetPlant(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::ShowLayerSet(std::string) */

void __thiscall
EffectObject_TargetPlant::ShowLayerSet(EffectObject_TargetPlant *this,undefined8 param_2)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UIWidget::GetAtlasImage((UIWidget *)this);
  FUN_05475d88(asStack_10,param_2);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(this + 0x130),uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::showCorrectPlant() */

void __thiscall EffectObject_TargetPlant::showCorrectPlant(EffectObject_TargetPlant *this)

{
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(asStack_18,"");
  nop();
  switch(*(undefined4 *)(this + 0x120)) {
  case 0:
    std::string::append(asStack_18,"potatomine",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_18,"primalpotatomine",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_18,"cherrybomb",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_18,"grapeshot",(size_t)__n);
  }
  FUN_05475d88(asStack_10,asStack_18);
  ShowLayerSet(this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void EffectObject_TargetPlant::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  Plant *this;
  PlantEscapeRoot *this_00;
  long *plVar3;
  Board *pBVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"houdini");
  if (bVar1) {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_10,*(int *)(param_1 + 0x124),*(int *)(param_1 + 0x128));
    this = (Plant *)Board::GetPlantAt(pBVar4,aPStack_10,1);
    if (this != (Plant *)0x0) {
      (**(code **)(*(long *)this + 0x80))(this,1);
      cVar2 = Plant::IsIceblocked(this);
      if (cVar2 != '\0') {
        plVar3 = (long *)FUN_041a4b08(*(undefined4 *)(param_1 + 0x124),
                                      *(undefined4 *)(param_1 + 0x128));
        (**(code **)(*plVar3 + 0x80))(plVar3,1);
      }
    }
  }
  else {
    bVar1 = std::operator==(param_4,"start_wrap");
    if (bVar1) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x118));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x118))
        ;
        nop();
        PlantEscapeRoot::RevealSwappedPlant(this_00);
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
/* EffectObject_TargetPlant::AddLayerSet(std::string, std::vector<std::string,
   std::allocator<std::string > >) */

void __thiscall
EffectObject_TargetPlant::AddLayerSet
          (EffectObject_TargetPlant *this,undefined8 param_2,vector *param_3)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_3);
  AnimRigLayerSet::AddSet((AnimRigLayerSet *)(this + 0x130),asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>, int,
   int) */

void __thiscall
EffectObject_TargetPlant::onEffectObjectInitialize
          (EffectObject_TargetPlant *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  PopAnimRig *pPVar1;
  string *psVar2;
  string *psVar3;
  RtMixedPtr aRStack_1a0 [8];
  RtId aRStack_198 [8];
  undefined8 local_190 [2];
  string asStack_180 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_178 [8];
  string asStack_170 [8];
  string asStack_168 [8];
  string asStack_160 [8];
  string asStack_158 [8];
  string asStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  string asStack_100 [8];
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_190,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_190);
  *(undefined4 *)(this + 0x120) = 0;
  Sexy::Point::Point((Point *)local_190,param_3,param_4);
  *(undefined8 *)(this + 0x124) = local_190[0];
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x118));
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  psVar2 = asStack_f8;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_1a0);
  std::string::string((string *)local_190,"onPopAnimCommand");
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::RtReflectionDelegate(aRStack_178,aRStack_198,(RtWeakPtr<Sexy::SoundResource> *)local_190);
  PopAnimRig::SetPopAnimCommandDelegate(pPVar1,aRStack_178);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_178);
  std::string::~string((string *)local_190);
  nop();
  Sexy::RtId::~RtId(aRStack_198);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_1a0);
  std::string::string((string *)aRStack_198,"potatomine");
  std::string::string((string *)aRStack_178,"potatomine_stem");
  std::string::string(asStack_170,"potatomine_rock_03");
  std::string::string(asStack_168,"potatomine_rock_02");
  std::string::string(asStack_160,"potatomine_rock_01");
  std::string::string(asStack_158,"potatomine_mouth");
  std::string::string(asStack_150,"potatomine_eye");
  std::string::string(asStack_148,"potatomine_dirt_right");
  std::string::string(asStack_140,"potatomine_dirt_left");
  std::string::string(asStack_138,"potatomine_dirt_front");
  std::string::string(asStack_130,"potatomine_dirt_back");
  std::string::string(asStack_128,"potatomine_bulb_lit");
  std::string::string(asStack_120,"potatomine_bulb");
  std::string::string(asStack_118,"potatomine_base");
  std::string::string(asStack_110,"_potatomine_attack");
  std::string::string(asStack_108,"_potatomine_antenna_idle");
  std::string::string(asStack_100,"_potatomine_antenna_attack");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,aRStack_178,0x10,
             aRStack_1a0);
  AddLayerSet(this,aRStack_198,(RtWeakPtr<Sexy::SoundResource> *)local_190);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  do {
    psVar2 = psVar2 + -8;
    std::string::~string(psVar2);
  } while (psVar2 != (string *)aRStack_178);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string((string *)aRStack_198);
  nop();
  std::string::string((string *)aRStack_198,"primalpotatomine");
  std::string::string((string *)aRStack_178,"prpotato_spike4_light");
  std::string::string(asStack_170,"prpotato_spike4");
  std::string::string(asStack_168,"prpotato_spike3_light");
  std::string::string(asStack_160,"prpotato_spike3");
  std::string::string(asStack_158,"prpotato_spike2_light");
  std::string::string(asStack_150,"prpotato_spike2");
  std::string::string(asStack_148,"prpotato_spike1_light");
  std::string::string(asStack_140,"prpotato_spike1");
  std::string::string(asStack_138,"prpotato_mouth");
  std::string::string(asStack_130,"prpotato_eyer");
  std::string::string(asStack_128,"prpotato_eyel");
  std::string::string(asStack_120,"prpotato_body");
  std::string::string(asStack_118,"prpotato_attack");
  std::string::string(asStack_110,"potatomine_dirt_right2");
  std::string::string(asStack_108,"potatomine_dirt_left2");
  std::string::string(asStack_100,"potatomine_dirt_front2");
  std::string::string(asStack_f8,"potatomine_dirt_back2");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,aRStack_178,0x11,
             aRStack_1a0);
  AddLayerSet(this,aRStack_198,(RtWeakPtr<Sexy::SoundResource> *)local_190);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  psVar2 = asStack_f8;
  do {
    psVar3 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar3;
  } while (psVar3 != asStack_180);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string((string *)aRStack_198);
  nop();
  std::string::string((string *)aRStack_198,"cherrybomb");
  std::string::string((string *)aRStack_178,"mc_cherrybomb_stem");
  std::string::string(asStack_170,"mc_cherrybomb_spark");
  std::string::string(asStack_168,"mc_cherrybomb_pupil");
  std::string::string(asStack_160,"mc_cherrybomb_mouth_04");
  std::string::string(asStack_158,"mc_cherrybomb_mouth_03");
  std::string::string(asStack_150,"mc_cherrybomb_mouth_02");
  std::string::string(asStack_148,"mc_cherrybomb_mouth_01");
  std::string::string(asStack_140,"mc_cherrybomb_leaf");
  std::string::string(asStack_138,"mc_cherrybomb_head_right");
  std::string::string(asStack_130,"mc_cherrybomb_head_left");
  std::string::string(asStack_128,"mc_cherrybomb_eye_wide");
  std::string::string(asStack_120,"mc_cherrybomb_eye_right");
  std::string::string(asStack_118,"mc_cherrybomb_eye_left");
  std::string::string(asStack_110,"mc_cherrybomb_brow_wide_03");
  std::string::string(asStack_108,"mc_cherrybomb_brow_wide_02");
  std::string::string(asStack_100,"mc_cherrybomb_brow_wide_01");
  std::string::string(asStack_f8,"mc_cherrybomb_brow_right");
  std::string::string(asStack_f0,"mc_cherrybomb_brow_left");
  std::string::string(asStack_e8,"_CherryBomb_attack");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,aRStack_178,0x13,
             aRStack_1a0);
  AddLayerSet(this,aRStack_198,(RtWeakPtr<Sexy::SoundResource> *)local_190);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  psVar2 = asStack_e8;
  do {
    psVar3 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar3;
  } while (psVar3 != asStack_180);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string((string *)aRStack_198);
  nop();
  std::string::string((string *)aRStack_198,"grapeshot");
  std::string::string((string *)aRStack_178,"grapeshotface7_white");
  std::string::string(asStack_170,"grapeshotface7");
  std::string::string(asStack_168,"grapeshotface_white");
  std::string::string(asStack_160,"grapeshotfac");
  std::string::string(asStack_158,"grapeshot_stem");
  std::string::string(asStack_150,"grapeshot_shine");
  std::string::string(asStack_148,"grapeshot_pupil2");
  std::string::string(asStack_140,"grapeshot_pupil");
  std::string::string(asStack_138,"grapeshot_mid_burst");
  std::string::string(asStack_130,"grapeshot_leaf");
  std::string::string(asStack_128,"grapeshot_graperight2_right");
  std::string::string(asStack_120,"grapeshot_graperight2_mouth");
  std::string::string(asStack_118,"grapeshot_graperight2_eyeleft");
  std::string::string(asStack_110,"grapeshot_graperight_mouth");
  std::string::string(asStack_108,"grapeshot_graperight_eye");
  std::string::string(asStack_100,"grapeshot_grapeleft2_mouth");
  std::string::string(asStack_f8,"grapeshot_grapeleft2_eyeleft");
  std::string::string(asStack_f0,"grapeshot_grapecenter_mouth");
  std::string::string(asStack_e8,"grapeshot_grapebottom_eyeright");
  std::string::string(asStack_e0,"grapeshot_face8_white");
  std::string::string(asStack_d8,"grapeshot_face8");
  std::string::string(asStack_d0,"grapeshot_face6_white");
  std::string::string(asStack_c8,"grapeshot_face6");
  std::string::string(asStack_c0,"grapeshot_face5_white");
  std::string::string(asStack_b8,"grapeshot_face5");
  std::string::string(asStack_b0,"grapeshot_face4_white");
  std::string::string(asStack_a8,"grapeshot_face4");
  std::string::string(asStack_a0,"grapeshot_centergrape_eyeright");
  std::string::string(asStack_98,"grapeshot_centergrape_eyeleft");
  std::string::string(asStack_90,"grapeshot_bodyshadow2");
  std::string::string(asStack_88,"grapeshot_bodyshadow1");
  std::string::string(asStack_80,"grapeshot_base");
  std::string::string(asStack_78,"grapeshot_backgrape");
  std::string::string(asStack_70,"grapeshot_attack");
  std::string::string(asStack_68,"grape2_eyeblink2");
  std::string::string(asStack_60,"grape2_body");
  std::string::string(asStack_58,"grape1_face");
  std::string::string(asStack_50,"grape1_explode");
  std::string::string(asStack_48,"grape_mouth1");
  std::string::string(asStack_40,"front blink");
  std::string::string(asStack_38,"eyelid4");
  std::string::string(asStack_30,"eyelid3");
  std::string::string(asStack_28,"eyelid2");
  std::string::string(asStack_20,"eyelid1");
  std::string::string(asStack_18,"eyeblink4");
  std::string::string(asStack_10,"eyeblink3");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_190,aRStack_178,0x2e,
             aRStack_1a0);
  AddLayerSet(this,aRStack_198,(RtWeakPtr<Sexy::SoundResource> *)local_190);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_190);
  psVar2 = asStack_10;
  do {
    psVar3 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar3;
  } while (psVar3 != asStack_180);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::~string((string *)aRStack_198);
  nop();
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x124),*(int *)(this + 0x128),true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::enableCorrectCostume() */

void __thiscall EffectObject_TargetPlant::enableCorrectCostume(EffectObject_TargetPlant *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  string *psVar7;
  PlantType *pPVar8;
  long lVar9;
  string *psVar10;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(*(long *)(lVar6 + 0xa8) + 0x10));
  PlantAnimRig::GetCustomizableLayers();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Plant::GetType();
  psVar7 = (string *)ProfileUtils::Profile();
  cVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  uVar5 = PlayerInfo::GetPlantAvatar(psVar7,(bool)(cVar2 + '\b'));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pPVar8 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  PlantType::GetAvatarLayers
            (pPVar8,uVar5,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20
            );
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
  if (bVar3) {
    do {
      psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      uVar1 = local_20;
      lVar9 = FUN_041a071c(local_20,local_18);
      lVar6 = 0;
      do {
        if (lVar6 == lVar9) {
          bVar3 = false;
          goto LAB_041a7920;
        }
        psVar10 = (string *)FUN_041a0728(uVar1,lVar6);
        cVar2 = std::operator==(psVar10,psVar7);
        lVar6 = lVar6 + 1;
      } while (cVar2 == '\0');
      bVar3 = true;
LAB_041a7920:
      local_48 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                           ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                            (psVar7 + 8));
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(psVar7 + 8));
      while (bVar4 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40),
            bVar4) {
        psVar7 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
        this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
        PopAnimRig::SetLayerVisibility(this_00,psVar7,bVar3);
        std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                  ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_58);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    } while (bVar3);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  std::vector<PlantCustomLayers,std::allocator<PlantCustomLayers>>::~vector
            ((vector<PlantCustomLayers,std::allocator<PlantCustomLayers>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_TargetPlant::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
EffectObject_TargetPlant::SetOwner(EffectObject_TargetPlant *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118),param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  if (cVar1 == '\0') {
    return;
  }
  enableCorrectCostume(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_TargetPlant::onAnimStopped(std::string const&) */

void __thiscall
EffectObject_TargetPlant::onAnimStopped(EffectObject_TargetPlant *this,string *param_1)

{
  bool bVar1;
  PlantEscapeRoot *extraout_x0;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"wrap");
  if (bVar1) {
    std::string::string((string *)aPStack_10,"burrow");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,(string *)aPStack_10,0);
    std::string::~string((string *)aPStack_10);
    nop();
    goto LAB_041a9358;
  }
  bVar1 = std::operator==(param_1,"unwrap_quick2");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"recover");
    if (bVar1) {
      showCorrectPlant(this);
      std::string::string((string *)aPStack_10,"unwrap");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,(string *)aPStack_10,0);
      std::string::~string((string *)aPStack_10);
      nop();
      goto LAB_041a9358;
    }
    bVar1 = std::operator==(param_1,"unwrap");
    if (!bVar1) goto LAB_041a9358;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    nop();
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x124));
    PlantEscapeRoot::BeginRemoteExplosion(extraout_x0,aPStack_10);
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_041a9358:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_TargetPlant::~EffectObject_TargetPlant() */

void __thiscall EffectObject_TargetPlant::~EffectObject_TargetPlant(EffectObject_TargetPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_067fe6d0;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::SetGridSquareLocked
              (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x124),*(int *)(this + 0x128),false);
  }
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_TargetPlant::~EffectObject_TargetPlant() */

void __thiscall EffectObject_TargetPlant::~EffectObject_TargetPlant(EffectObject_TargetPlant *this)

{
  ~EffectObject_TargetPlant(this);
  AK::FreeHook(this);
  return;
}

