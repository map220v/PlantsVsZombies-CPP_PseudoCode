// Class: PlantDendrobiumguard


/* PlantDendrobiumguard::ApplyPlantfood() */

void __thiscall PlantDendrobiumguard::ApplyPlantfood(PlantDendrobiumguard *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::StaticClassInit() */

void PlantDendrobiumguard::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDendrobiumguard");
    (*pcVar2)(plVar1,asStack_10,FUN_04cedd30,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::StaticGetClass() */

long * PlantDendrobiumguard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDendrobiumguard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDendrobiumguard::GetClass() const */

long * PlantDendrobiumguard::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDendrobiumguard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDendrobiumguard::AddLeafLife(int) */

void __thiscall PlantDendrobiumguard::AddLeafLife(PlantDendrobiumguard *this,int param_1)

{
  int iVar1;
  char cVar2;
  Plant *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(this + 0x30);
  cVar2 = FUN_04ceb59c(iVar1);
  if (cVar2 == '\0') {
    return;
  }
  if (0 < param_1) {
    *(int *)(this + 0x30) = iVar1 + -1;
  }
  FUN_04ceb588(0x3f800000,*(long *)(this + 0x10) + 0x3c4);
  fVar3 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
  fVar5 = (float)param_1 * 0.25 + *(float *)(this + 0x34);
  *(float *)(this + 0x34) = fVar5;
  FUN_04ceb588(fVar5,*(long *)(this + 0x10) + 0x3c4);
  fVar5 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
  if (param_1 < 1) {
    if (param_1 == 0) {
      return;
    }
    this_00 = *(Plant **)(this + 0x10);
    fVar3 = (float)FUN_04ceb590(*(undefined4 *)(this_00 + 0xd8));
    if (fVar3 <= fVar5) {
      return;
    }
  }
  else {
    this_00 = *(Plant **)(this + 0x10);
    fVar4 = (float)FUN_04ceb590(*(undefined4 *)(this_00 + 0xd8));
    fVar4 = fVar4 + (float)param_1 * 0.25 * fVar3;
    if (fVar4 <= fVar5) goto LAB_04cebcac;
  }
  fVar4 = fVar5;
LAB_04cebcac:
  Plant::SetHealth(this_00,fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::GetThrowAnimName(int) */

void PlantDendrobiumguard::GetThrowAnimName(int param_1)

{
  long lVar1;
  int in_w1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (in_w1 == 3) {
    __s = "backward_1";
  }
  else if (in_w1 == 2) {
    __s = "backward_2";
  }
  else {
    __s = "backward";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantDendrobiumguard::GetMaxHitpoints() */

int __thiscall PlantDendrobiumguard::GetMaxHitpoints(PlantDendrobiumguard *this)

{
  int iVar1;
  
  iVar1 = PlantFramework::GetMaxHitpoints();
  return (int)((float)iVar1 * *(float *)(this + 0x34));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::JointDefencePlantfood(bool) */

void __thiscall PlantDendrobiumguard::JointDefencePlantfood(PlantDendrobiumguard *this,bool param_1)

{
  PopAnimRig *pPVar1;
  Plant *this_00;
  float fVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x2c);
  if (param_1) {
    this_00 = *(Plant **)(this + 0x10);
    fVar2 = (float)Plant::GetMaxHealth(this_00);
    Plant::SetHealth(this_00,fVar2);
  }
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_58,"plantfood_joint");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::onBeThrown() */

void __thiscall PlantDendrobiumguard::onBeThrown(PlantDendrobiumguard *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) < 1) {
    PlantFramework::onBeThrown((PlantFramework *)this);
  }
  else {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    if (*(int *)(this + 0x28) == 0) {
      std::string::string(asStack_58,"backward1");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x398);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      GetThrowAnimName((int)this);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x398);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
    }
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::BlowPlant() */

void __thiscall PlantDendrobiumguard::BlowPlant(PlantDendrobiumguard *this)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x28)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    if (*(int *)(this + 0x28) == 0) {
      __s = "backward1";
    }
    else {
      __s = "backward";
    }
    std::string::string(asStack_58,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::PlayLineEffect() */

void __thiscall PlantDendrobiumguard::PlayLineEffect(PlantDendrobiumguard *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  RtObject *pRVar6;
  Effect_PopAnim *pEVar7;
  int local_38;
  int local_34;
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  uVar5 = Board::MakeRenderOrder(0x64960,iVar4,iVar3);
  Sexy::Point::Point((Point *)&local_18,iVar3,iVar4);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  std::string::string(asStack_20,"POPANIM_EFFECTS_DENDROBIUMGUARD_EFFECT");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_38,(float)(local_34 + -0x14),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_30,local_18,local_14,local_10,asStack_20,uVar5,0,1);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30), cVar2 != '\0')) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pEVar7 = Sexy::RtObject::Cast<Effect_PopAnim>(pRVar6);
    Effect_PopAnim::SetCentered(pEVar7,true);
    std::string::string((string *)&local_18,"shine");
    Effect_PopAnim::PlaySingleAnimation(pEVar7,(Point *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  uVar5 = Board::MakeRenderOrder(0x493e2,iVar4,iVar3);
  std::string::string(asStack_20,"POPANIM_EFFECTS_DENDROBIUMGUARD_EFFECT");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_38,(float)(local_34 + -0x14),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar5,0,1);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pEVar7 = Sexy::RtObject::Cast<Effect_PopAnim>(pRVar6);
    Effect_PopAnim::SetCentered(pEVar7,true);
    std::string::string((string *)&local_18,"line");
    Effect_PopAnim::PlaySingleAnimation(pEVar7,(Point *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::PlayReviveEffect() */

void __thiscall PlantDendrobiumguard::PlayReviveEffect(PlantDendrobiumguard *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  RtObject *this_00;
  Effect_PopAnim *this_01;
  int local_30;
  int local_2c;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  uVar5 = Board::MakeRenderOrder(0x64960,iVar4,iVar3);
  Sexy::Point::Point((Point *)&local_18,iVar3,iVar4);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  std::string::string(asStack_20,"POPANIM_EFFECTS_DENDROBIUMGUARD_EFFECT");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_30,(float)(local_2c + -10),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar5,0,1);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
    Effect_PopAnim::SetCentered(this_01,true);
    std::string::string((string *)&local_18,"revive");
    Effect_PopAnim::PlaySingleAnimation(this_01,(Point *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::PlantDendrobiumguard() */

void __thiscall PlantDendrobiumguard::PlantDendrobiumguard(PlantDendrobiumguard *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a2f10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PlantDendrobiumguard::StaticNew() */

PlantDendrobiumguard * PlantDendrobiumguard::StaticNew(void)

{
  PlantDendrobiumguard *this;
  
  this = ::operator_new(0x60);
  PlantDendrobiumguard(this);
  return this;
}


/* PlantDendrobiumguard::CheckAttackZombie() */

byte __thiscall PlantDendrobiumguard::CheckAttackZombie(PlantDendrobiumguard *this)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = FUN_04ceb584(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  iVar2 = *(int *)(this + 0x28);
  fVar6 = (float)PVZ_T();
  fVar7 = *(float *)(this + 0x3c);
  lVar5 = FUN_04cecf54(*(undefined8 *)(this + 0x10));
  bVar3 = FUN_04ceb5d0(lVar5 + 0x2c8);
  bVar1 = 0;
  if (0 < iVar2 && iVar4 == 5) {
    bVar1 = bVar3 & fVar7 < fVar6;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::AttackZombie() */

void __thiscall PlantDendrobiumguard::AttackZombie(PlantDendrobiumguard *this)

{
  long lVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  lVar1 = FUN_04cecf54(*(undefined8 *)(this + 0x10));
  *(float *)(this + 0x3c) = fVar3 + *(float *)(lVar1 + 0x2c4);
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_58,"level5");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::GetReviveLeafTime() */

undefined4 __thiscall PlantDendrobiumguard::GetReviveLeafTime(PlantDendrobiumguard *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  iVar1 = FUN_04ceb584(*(undefined4 *)(lVar2 + 0x50));
  if (iVar1 < 3) {
    lVar2 = FUN_04cecf54(lVar2);
    return *(undefined4 *)(lVar2 + 0x2b8);
  }
  lVar2 = FUN_04cecf54(lVar2);
  return *(undefined4 *)(lVar2 + 700);
}


/* PlantDendrobiumguard::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantDendrobiumguard::onAnimStoppedCallback(PlantDendrobiumguard *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  UIEasyButtonWidget *this_00;
  long *plVar3;
  PlantAnimRig_Dendrobiumguard *pPVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_05474374(param_1,&DAT_05598570,0);
  if (lVar2 == -1) {
    lVar2 = FUN_05474374(param_1,"backward",0);
    if (lVar2 == -1) {
      bVar1 = std::operator==(param_1,"level5");
      if (!bVar1) {
        bVar1 = std::operator==(param_1,"plantfood");
        if ((bVar1) || (bVar1 = std::operator==(param_1,"plantfood_joint"), bVar1)) {
          pPVar4 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
          PlantAnimRig_Dendrobiumguard::SetLeafLayer(pPVar4,*(int *)(this + 0x28));
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
          return;
        }
        lVar2 = FUN_05474374(param_1,"joint_defence",0);
        if (lVar2 == -1) {
          return;
        }
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
        goto LAB_04ced26c;
      }
    }
    else {
      if (*(int *)(this + 0x28) < *(int *)(this + 0x2c)) {
        fVar6 = (float)PVZ_T();
        fVar5 = (float)GetReviveLeafTime(this);
        fVar5 = fVar5 + fVar6;
      }
      else {
        fVar5 = (float)PVZ_EOT();
      }
      *(float *)(this + 0x38) = fVar5;
      pPVar4 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Dendrobiumguard::SetLeafLayer(pPVar4,*(int *)(this + 0x28));
    }
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  else {
    if (*(int *)(this + 0x28) < *(int *)(this + 0x2c)) {
      fVar6 = (float)PVZ_T();
      fVar5 = (float)GetReviveLeafTime(this);
      fVar5 = fVar5 + fVar6;
    }
    else {
      fVar5 = (float)PVZ_EOT();
    }
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    *(float *)(this + 0x38) = fVar5;
  }
LAB_04ced26c:
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar3 + 0x118))();
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::ReviveLeaf() */

void __thiscall PlantDendrobiumguard::ReviveLeaf(PlantDendrobiumguard *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  PlantAnimRig_Dendrobiumguard *this_00;
  char *__s;
  float fVar3;
  undefined4 uVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04ceb584(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if (((iVar1 != 1) && (*(int *)(this + 0x28) < *(int *)(this + 0x2c))) &&
     (fVar3 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar3)) {
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    if (*(int *)(this + 0x28) == 0) {
      __s = "up0";
    }
    else {
      __s = "up";
    }
    std::string::string(asStack_58,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    PlayReviveEffect(this);
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x38) = uVar4;
    this_00 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Dendrobiumguard::SetLeafLayer(this_00,*(int *)(this + 0x28));
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::UpdateActions() */

void __thiscall PlantDendrobiumguard::UpdateActions(PlantDendrobiumguard *this)

{
  if (*(int *)(*(long *)(this + 0x10) + 200) != 10) {
    return;
  }
  ReviveLeaf(this);
  return;
}


/* PlantDendrobiumguard::CreateJointDefenceEffect() */

void __thiscall PlantDendrobiumguard::CreateJointDefenceEffect(PlantDendrobiumguard *this)

{
  PlantAnimRig_Dendrobiumguard *this_00;
  
  this_00 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Dendrobiumguard::SetJointDefenceStatus(this_00,true);
  return;
}


/* PlantDendrobiumguard::DestroyJointDefenceEffect() */

void __thiscall PlantDendrobiumguard::DestroyJointDefenceEffect(PlantDendrobiumguard *this)

{
  PlantAnimRig_Dendrobiumguard *this_00;
  
  this_00 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Dendrobiumguard::SetJointDefenceStatus(this_00,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::KnockBackZombie() */

void __thiscall PlantDendrobiumguard::KnockBackZombie(PlantDendrobiumguard *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  SexyVector3 *pSVar4;
  ZombieTosserSubSystem *pZVar5;
  undefined8 local_88;
  undefined8 local_80;
  float local_78 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  Sexy::Insets::Insets
            ((Insets *)local_78,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,(Insets *)local_78);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    DVec3::DVec3((DVec3 *)local_78);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    Sexy::SexyVector3::operator=((SexyVector3 *)local_78,pSVar4);
    local_78[0] = local_78[0] + 100.0;
    cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
    if ((cVar2 != '\0') &&
       (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)this_00),
       cVar2 != '\0')) {
      pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar5,this_00,(Insets *)local_78,
                 aRStack_50,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::DoPlantfood(bool) */

void __thiscall PlantDendrobiumguard::DoPlantfood(PlantDendrobiumguard *this,bool param_1)

{
  PlantAnimRig_Dendrobiumguard *this_00;
  Plant *this_01;
  float fVar1;
  
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x2c);
  this_00 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Dendrobiumguard::SetLeafLayer(this_00,*(int *)(this + 0x28));
  if (param_1) {
    this_01 = *(Plant **)(this + 0x10);
    fVar1 = (float)Plant::GetMaxHealth(this_01);
    Plant::SetHealth(this_01,fVar1);
  }
  KnockBackZombie(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::SpecialPlantfood(bool) */

void __thiscall PlantDendrobiumguard::SpecialPlantfood(PlantDendrobiumguard *this,bool param_1)

{
  bool bVar1;
  RtWeakPtr *this_00;
  RtObject *this_01;
  PlantDendrobiumguard *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DoPlantfood(this,param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::RtObject::Cast<Plant>(this_01);
      nop();
      if (this_02 != (PlantDendrobiumguard *)0x0) {
        JointDefencePlantfood(this_02,param_1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::OnAnimCommand(std::string const&, std::string const&) */

void PlantDendrobiumguard::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"plantfood_attack");
    if (bVar1) {
      bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      SpecialPlantfood((PlantDendrobiumguard *)param_1,bVar1);
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
    bVar1 = std::operator==(param_2,"plantfood_joint_attack");
    if ((bVar1) || (bVar1 = std::operator==(param_2,"level5_attack"), bVar1)) {
      KnockBackZombie((PlantDendrobiumguard *)param_1);
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* PlantDendrobiumguard::~PlantDendrobiumguard() */

void __thiscall PlantDendrobiumguard::~PlantDendrobiumguard(PlantDendrobiumguard *this)

{
  *(undefined ***)this = &PTR_GetClass_069a2f10;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDendrobiumguard::~PlantDendrobiumguard() */

void __thiscall PlantDendrobiumguard::~PlantDendrobiumguard(PlantDendrobiumguard *this)

{
  ~PlantDendrobiumguard(this);
  AK::FreeHook(this);
  return;
}


/* PlantDendrobiumguard::TakeDamage(DamageInfo const&) */

void __thiscall PlantDendrobiumguard::TakeDamage(PlantDendrobiumguard *this,DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = CheckAttackZombie(this);
  if (cVar1 != '\0') {
    AttackZombie(this);
  }
  PlantMagicbeans::TakeDamage((DamageInfo *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::RemoveJointDefence(PlantDendrobiumguard*) */

void PlantDendrobiumguard::RemoveJointDefence(PlantDendrobiumguard *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x48);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04ceb5b0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  ToolPacketData::GetProps();
  local_18 = std::
             remove<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar4,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::erase
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               this,local_10);
  }
  iVar3 = FUN_04ceb5b0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  if ((iVar3 < iVar2) && (AddLeafLife(param_1,-1), iVar3 == 0)) {
    DestroyJointDefenceEffect(param_1);
    plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    (**(code **)(*plVar6 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::RemoveJointDefence() */

void __thiscall PlantDendrobiumguard::RemoveJointDefence(PlantDendrobiumguard *this)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  PlantDendrobiumguard *extraout_x0;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtObject::Cast<Plant>(this_01);
    nop();
    RemoveJointDefence(extraout_x0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDendrobiumguard::onDestroy() */

void __thiscall PlantDendrobiumguard::onDestroy(PlantDendrobiumguard *this)

{
  RemoveJointDefence(this);
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::JointDefence(PlantDendrobiumguard*) */

void __thiscall
PlantDendrobiumguard::JointDefence(PlantDendrobiumguard *this,PlantDendrobiumguard *param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  PlantAnimRig_Dendrobiumguard *this_00;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0x10) == *(long *)(this + 0x10)) {
    iVar1 = FUN_04ceb5b0(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
    PlayLineEffect(this);
  }
  else {
    iVar1 = 1;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x48),(RtWeakPtr *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  std::string::string((string *)aRStack_58,"joint_defence2");
  nop();
  iVar3 = *(int *)(this + 0x28);
  if (iVar3 == 0) {
    std::string::append((string *)aRStack_58,"joint_defence0",0);
    iVar3 = *(int *)(this + 0x28);
  }
  else if (iVar3 == 1) {
    std::string::append((string *)aRStack_58,"joint_defence1",1);
    iVar3 = *(int *)(this + 0x28);
  }
  if (iVar1 + iVar3 < 5) {
    *(int *)(this + 0x28) = iVar1 + iVar3;
    iVar3 = *(int *)(this + 0x2c);
  }
  else {
    iVar3 = *(int *)(this + 0x2c);
    *(undefined4 *)(this + 0x28) = 4;
  }
  if (iVar1 + iVar3 < 5) {
    *(int *)(this + 0x2c) = iVar1 + iVar3;
  }
  else {
    *(undefined4 *)(this + 0x2c) = 4;
  }
  AddLeafLife(this,iVar1);
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantDendrobiumguard,void(PlantDendrobiumguard::*)(std::string_const&)>
            (aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar2,(string *)aRStack_58,0,aDStack_38);
  this_00 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Dendrobiumguard::SetLeafLayer(this_00,*(int *)(this + 0x28));
  CreateJointDefenceEffect(this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  std::string::~string((string *)aRStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::AddJointDefencePlantList(int, int) */

void __thiscall
PlantDendrobiumguard::AddJointDefencePlantList(PlantDendrobiumguard *this,int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,param_1,
             param_2);
  lVar2 = FUN_04ceb5bc(local_20,local_18);
  if (lVar2 != 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      Plant::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar1 = std::operator==((string *)(lVar2 + 8),"dendrobiumguard");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (bVar1) {
        Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,(RtWeakPtrBase *)aRStack_30);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(this + 0x48),(RtWeakPtr *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::MakeJointDefence() */

void __thiscall PlantDendrobiumguard::MakeJointDefence(PlantDendrobiumguard *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  PlantDendrobiumguard *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
  local_8 = ___stack_chk_guard;
  AddJointDefencePlantList(this,iVar2,iVar1 + -1);
  AddJointDefencePlantList(this,iVar2,iVar1 + 1);
  lVar4 = FUN_04ceb5b0(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
  if (lVar4 != 0) {
    JointDefence(this,this);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x48));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::RtObject::Cast<Plant>(this_01);
      nop();
      JointDefence(this_02,this);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDendrobiumguard::PostInitialize() */

void __thiscall PlantDendrobiumguard::PostInitialize(PlantDendrobiumguard *this)

{
  long lVar1;
  PlantAnimRig_DevilsFlower *pPVar2;
  PlantAnimRig_Dendrobiumguard *this_00;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x28) = 2;
  *(undefined4 *)(this + 0x2c) = 2;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04cecf54(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar1 + 0x2c0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = uVar3;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = uVar3;
  pPVar2 = (PlantAnimRig_DevilsFlower *)FUN_04ced208(*(undefined8 *)(this + 0x10));
  if (pPVar2 != (PlantAnimRig_DevilsFlower *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
    PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar2,a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  this_00 = (PlantAnimRig_Dendrobiumguard *)FUN_04ced208(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Dendrobiumguard::SetLeafLayer(this_00,*(int *)(this + 0x28));
  MakeJointDefence(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

