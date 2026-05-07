// Class: EffectAnim_UIAnim


/* EffectAnim_UIAnim::EffectAnim_UIAnim() */

void __thiscall EffectAnim_UIAnim::EffectAnim_UIAnim(EffectAnim_UIAnim *this)

{
  size_t in_x2;
  undefined4 uVar1;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  *this = (EffectAnim_UIAnim)0x1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 4) = uVar1;
  std::string::append((string *)(this + 0x18),"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* EffectAnim_UIAnim::GetPopAnimRig() */

void __thiscall EffectAnim_UIAnim::GetPopAnimRig(EffectAnim_UIAnim *this)

{
  if (*(UIWidget **)(this + 0x20) != (UIWidget *)0x0) {
    UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x20));
    return;
  }
  return;
}


/* EffectAnim_UIAnim::IsValid() */

bool __thiscall EffectAnim_UIAnim::IsValid(EffectAnim_UIAnim *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    lVar1 = GetPopAnimRig(this);
    return lVar1 != 0;
  }
  return false;
}


/* EffectAnim_UIAnim::SetDrawScale(float) */

void __thiscall EffectAnim_UIAnim::SetDrawScale(EffectAnim_UIAnim *this,float param_1)

{
  char cVar1;
  undefined4 in_register_00005004;
  
  cVar1 = IsValid(this);
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(this + 0x20) + 0x80))
              (CONCAT44(in_register_00005004,param_1),*(long **)(this + 0x20));
  }
  return;
}


/* EffectAnim_UIAnim::OnDraw(Sexy::Graphics*) */

void __thiscall EffectAnim_UIAnim::OnDraw(EffectAnim_UIAnim *this,Graphics *param_1)

{
  char cVar1;
  
  if ((*this != (EffectAnim_UIAnim)0x0) && (cVar1 = IsValid(this), cVar1 != '\0')) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x20),param_1);
    return;
  }
  return;
}


/* EffectAnim_UIAnim::SetColor(Sexy::Color const&) */

void __thiscall EffectAnim_UIAnim::SetColor(EffectAnim_UIAnim *this,Color *param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::AndroidHttpTransaction::GetUserData((AndroidHttpTransaction *)this);
    (**(code **)(*plVar2 + 0x78))(plVar2,param_1);
  }
  return;
}


/* EffectAnim_UIAnim::PlayOnce(std::string) */

void __thiscall EffectAnim_UIAnim::PlayOnce(EffectAnim_UIAnim *this,undefined8 param_2)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  
  cVar1 = IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  pEVar2 = (Effect_PopAnim *)
           Sexy::AndroidHttpTransaction::GetUserData((AndroidHttpTransaction *)this);
  Effect_PopAnim::PlaySingleAnimation(pEVar2,param_2,0);
  return;
}


/* EffectAnim_UIAnim::PlayLoop(std::string) */

void __thiscall EffectAnim_UIAnim::PlayLoop(EffectAnim_UIAnim *this,undefined8 param_2)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  
  cVar1 = IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  pEVar2 = (Effect_PopAnim *)
           Sexy::AndroidHttpTransaction::GetUserData((AndroidHttpTransaction *)this);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,param_2,0);
  return;
}


/* EffectAnim_UIAnim::SafeRelease() */

void __thiscall EffectAnim_UIAnim::SafeRelease(EffectAnim_UIAnim *this)

{
  char cVar1;
  size_t in_x2;
  undefined4 uVar2;
  
  cVar1 = IsValid(this);
  if (cVar1 != '\0') {
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 0x18))();
      *(undefined8 *)(this + 0x20) = 0;
    }
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 4) = uVar2;
    std::string::append((string *)(this + 0x18),"",in_x2);
    std::string::append((string *)(this + 8),"",in_x2);
    std::string::append((string *)(this + 0x10),"",in_x2);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::OnUpdate() */

void __thiscall EffectAnim_UIAnim::OnUpdate(EffectAnim_UIAnim *this)

{
  string *this_00;
  bool bVar1;
  char cVar2;
  size_t in_x2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*this != (EffectAnim_UIAnim)0x0) {
    this_00 = (string *)(this + 0x18);
    bVar1 = std::operator!=("",this_00);
    if ((bVar1) && (fVar5 = *(float *)(this + 4), fVar3 = (float)PVZ_RealT(), fVar5 <= fVar3)) {
      FUN_05475d88(asStack_10,this_00);
      PlayLoop(this,asStack_10);
      std::string::~string(asStack_10);
      std::string::append(this_00,"",in_x2);
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 4) = uVar4;
    }
    cVar2 = IsValid(this);
    if (cVar2 != '\0') {
      StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x20));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnim_UIAnim::HideLayer(std::string) */

void __thiscall EffectAnim_UIAnim::HideLayer(EffectAnim_UIAnim *this,string *param_2)

{
  char cVar1;
  PopAnimRig *this_00;
  
  cVar1 = IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (PopAnimRig *)GetPopAnimRig(this);
  PopAnimRig::SetLayerVisibility(this_00,param_2,false);
  return;
}


/* EffectAnim_UIAnim::ShowLayer(std::string) */

void __thiscall EffectAnim_UIAnim::ShowLayer(EffectAnim_UIAnim *this,string *param_2)

{
  char cVar1;
  PopAnimRig *this_00;
  
  cVar1 = IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (PopAnimRig *)GetPopAnimRig(this);
  PopAnimRig::SetLayerVisibility(this_00,param_2,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::PlayOnceThen(std::string, Sexy::Delegate1<std::string const&>) */

void __thiscall
EffectAnim_UIAnim::PlayOnceThen(EffectAnim_UIAnim *this,undefined8 param_2,Delegate1 *param_3)

{
  char cVar1;
  PopAnimRig *pPVar2;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsValid(this);
  if (cVar1 != '\0') {
    pPVar2 = (PopAnimRig *)GetPopAnimRig(this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
    PopAnimRig::PlayAndStop(pPVar2,param_2,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnim_UIAnim::GetAnimTime(std::string) */

undefined1  [16] __thiscall EffectAnim_UIAnim::GetAnimTime(EffectAnim_UIAnim *this,string *param_2)

{
  char cVar1;
  PopAnimRig *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  cVar1 = IsValid(this);
  if (cVar1 == '\0') {
    return ZEXT816(0);
  }
  this_00 = (PopAnimRig *)GetPopAnimRig(this);
  PopAnimRig::CalcAnimLengthSeconds(this_00,param_2);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::PlayOnceThenLoop(std::string, std::string) */

void __thiscall
EffectAnim_UIAnim::PlayOnceThenLoop(EffectAnim_UIAnim *this,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  float fVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsValid(this);
  if (cVar1 != '\0') {
    pEVar2 = (Effect_PopAnim *)
             Sexy::AndroidHttpTransaction::GetUserData((AndroidHttpTransaction *)this);
    Effect_PopAnim::PlaySingleAnimation(pEVar2,param_2,0);
    fVar3 = (float)PVZ_RealT();
    FUN_05475d88(asStack_10,param_2);
    fVar4 = (float)GetAnimTime(this,asStack_10);
    *(float *)(this + 4) = fVar4 + fVar3;
    std::string::~string(asStack_10);
    thunk_FUN_05475e00(this + 0x18,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::InitUIAnim(std::string, float, Sexy::SexyVector2, bool) */

void EffectAnim_UIAnim::InitUIAnim
               (float param_1,undefined4 param_2,undefined4 param_3,EffectAnim_UIAnim *param_4,
               undefined8 param_5,char param_6)

{
  char *__s;
  ResourceInfo *pRVar1;
  Effect_PopAnim *this;
  undefined8 local_28 [2];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = CONCAT44(param_3,param_2);
  SafeRelease(param_4);
  __s = (char *)FUN_0547429c(param_5);
  std::string::string(asStack_10,__s);
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  *(ResourceInfo **)(param_4 + 0x28) = pRVar1;
  this = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(param_4 + 0x20) = this;
  Effect_PopAnim::CreatePopAnimRig(this,*(PopAnim **)(param_4 + 0x28),(RtClass *)0x0);
  StandaloneEffect::SetScreenSpaceOrigin
            (*(StandaloneEffect **)(param_4 + 0x20),(SexyVector2 *)local_28,900000);
  if (param_6 != '\0') {
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_4 + 0x20),true);
  }
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_4 + 0x20),true);
  SetDrawScale(param_4,param_1);
  *param_4 = (EffectAnim_UIAnim)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::~EffectAnim_UIAnim() */

void __thiscall EffectAnim_UIAnim::~EffectAnim_UIAnim(EffectAnim_UIAnim *this)

{
  string *this_00;
  bool bVar1;
  string *psVar2;
  long lVar3;
  size_t __n;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  size_t local_8;
  
  this_00 = (string *)(this + 8);
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  bVar1 = std::operator!=("",this_00);
  if (bVar1) {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    FUN_05475d88(asStack_10,lVar3 + 0x10);
    LawnApp::DeleteGroup(gLawnApp,asStack_10);
    std::string::append(this_00,"",__n);
    std::string::~string(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  SafeRelease(this);
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::InitPlantUIAnim(std::string, float, Sexy::SexyVector2, bool) */

void EffectAnim_UIAnim::InitPlantUIAnim
               (float param_1,undefined4 param_2,undefined4 param_3,EffectAnim_UIAnim *param_4,
               string *param_5,char param_6)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  char *__s;
  ResourceInfo *pRVar4;
  Effect_PopAnim *this;
  undefined8 local_38 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_38[0] = CONCAT44(param_3,param_2);
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("",param_5);
  if (!bVar1) {
    SafeRelease(param_4);
    thunk_FUN_05475e00(param_4 + 8,param_5);
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    FUN_05475d88(asStack_20,lVar3 + 0x10);
    LawnApp::LoadGroup(gLawnApp,asStack_20);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    __s = (char *)FUN_0547429c(lVar3 + 0x20);
    std::string::string(asStack_10,__s);
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    *(ResourceInfo **)(param_4 + 0x28) = pRVar4;
    this = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(param_4 + 0x20) = this;
    Effect_PopAnim::CreatePopAnimRig(this,*(PopAnim **)(param_4 + 0x28),(RtClass *)0x0);
    StandaloneEffect::SetScreenSpaceOrigin
              (*(StandaloneEffect **)(param_4 + 0x20),(SexyVector2 *)local_38,900000);
    if (param_6 != '\0') {
      Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_4 + 0x20),true);
    }
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_4 + 0x20),true);
    SetDrawScale(param_4,param_1);
    *param_4 = (EffectAnim_UIAnim)0x1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::GetIdleAnim() */

void EffectAnim_UIAnim::GetIdleAnim(void)

{
  string *psVar1;
  bool bVar2;
  long in_x0;
  string *psVar3;
  long lVar4;
  char *pcVar5;
  RtClass *pRVar6;
  ResourceInfo *pRVar7;
  RtObject *this;
  PlantAnimRig_IceShroom *this_00;
  PlantAnimRig_Sunshroom *this_01;
  PlantAnimRig_ElectricBlueberry *this_02;
  PlantAnimRig_GraveBuster *this_03;
  PlantAnimRig_Puffshroom *this_04;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator!=("",psVar1);
  if (bVar2) {
    FUN_05475d88();
  }
  else {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pcVar5 = (char *)FUN_0547429c(lVar4 + 0x18);
    pRVar6 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    GetPAMByName((string *)(lVar4 + 0x20));
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar7,pRVar6);
    nop();
    if (this == (RtObject *)0x0) {
      PlantAnimRig::GetIdleAnimName();
      FUN_05474278(psVar1,asStack_10);
      std::string::~string(asStack_10);
    }
    else {
      bVar2 = Sexy::RtObject::IsA<PlantAnimRig_IceShroom>(this);
      if (bVar2) {
        this_00 = Sexy::RtObject::Cast<PlantAnimRig_IceShroom>(this);
        PlantAnimRig_IceShroom::GetPriviewAnim(this_00);
      }
      else {
        bVar2 = Sexy::RtObject::IsA<PlantAnimRig_Sunshroom>(this);
        if (bVar2) {
          this_01 = Sexy::RtObject::Cast<PlantAnimRig_Sunshroom>(this);
          PlantAnimRig_Sunshroom::GetPriviewAnim(this_01);
        }
        else {
          bVar2 = Sexy::RtObject::IsA<PlantAnimRig_GraveBuster>(this);
          if (bVar2) {
            this_03 = Sexy::RtObject::Cast<PlantAnimRig_GraveBuster>(this);
            PlantAnimRig_Dartichoke::getAttackAnimationName((PlantAnimRig_Dartichoke *)this_03);
          }
          else {
            bVar2 = Sexy::RtObject::IsA<PlantAnimRig_ElectricBlueberry>(this);
            if (bVar2) {
              this_02 = Sexy::RtObject::Cast<PlantAnimRig_ElectricBlueberry>(this);
              PlantAnimRig_ElectricBlueberry::getPreviewAnimName(this_02);
            }
            else {
              bVar2 = Sexy::RtObject::IsA<PlantAnimRig_Puffshroom>(this);
              if (bVar2) {
                this_04 = Sexy::RtObject::Cast<PlantAnimRig_Puffshroom>(this);
                ZombieAnimRig_Explodenut::getIdleAnimationName((ZombieAnimRig_Explodenut *)this_04);
              }
              else {
                bVar2 = Sexy::RtObject::IsA<PlantAnimRig_Mangosteen>(this);
                if (bVar2) {
                  Sexy::RtObject::Cast<PlantAnimRig_Mangosteen>(this);
                  FUN_04a54d24(asStack_10);
                }
                else {
                  PlantAnimRig::GetIdleAnimName();
                }
              }
            }
          }
        }
      }
      FUN_05474278(psVar1,asStack_10);
      std::string::~string(asStack_10);
      (**(code **)(*(long *)this + 0x18))(this);
    }
    FUN_05475d88();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::PlayIdleLoop() */

void __thiscall EffectAnim_UIAnim::PlayIdleLoop(EffectAnim_UIAnim *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetIdleAnim();
  PlayLoop(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnim_UIAnim::HideAvatarLayer() */

void __thiscall EffectAnim_UIAnim::HideAvatarLayer(EffectAnim_UIAnim *this)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  char *pcVar4;
  RtClass *pRVar5;
  ResourceInfo *pRVar6;
  RtObject *this_00;
  undefined8 uVar7;
  PopAnimRig *this_01;
  PlantAnimRig_Oakshooter *this_02;
  PlantAnimRig_Peanut *this_03;
  PlantAnimRig_Magnetshroom *this_04;
  PlantAnimRig_Endurian *this_05;
  PlantAnimRig_Guacodile *this_06;
  PlantAnimRig_Pepperpult *this_07;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58;
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("",(string *)(this + 8));
  if (bVar1) goto LAB_04a55d40;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
  pRVar5 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar4);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  GetPAMByName((string *)(lVar3 + 0x20));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar6,pRVar5);
  nop();
  PlantAnimRig::GetAvatarLayers();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)avStack_38);
  if (this_00 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Oakshooter>(this_00);
    if (bVar1) {
      this_02 = Sexy::RtObject::Cast<PlantAnimRig_Oakshooter>(this_00);
      PlantAnimRig_Oakshooter::GetMiniGameLayers(this_02);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Wallnut>(this_00);
      if (bVar1) {
        Sexy::RtObject::Cast<PlantAnimRig_Wallnut>(this_00);
        PlantAnimRig_Wallnut::GetArmorLayers();
      }
      else {
        bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Tallnut>(this_00);
        if (bVar1) {
          Sexy::RtObject::Cast<PlantAnimRig_Tallnut>(this_00);
          PlantAnimRig_Tallnut::GetArmorLayers();
        }
        else {
          bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Peanut>(this_00);
          if (bVar1) {
            this_03 = Sexy::RtObject::Cast<PlantAnimRig_Peanut>(this_00);
            PlantAnimRig_Peanut::GetArmorLayers(this_03);
          }
          else {
            bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Endurian>(this_00);
            if (bVar1) {
              this_05 = Sexy::RtObject::Cast<PlantAnimRig_Endurian>(this_00);
              PlantAnimRig_Endurian::GetArmorLayers(this_05);
            }
            else {
              bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Magnetshroom>(this_00);
              if (bVar1) {
                this_04 = Sexy::RtObject::Cast<PlantAnimRig_Magnetshroom>(this_00);
                PlantAnimRig_Magnetshroom::GetMagnetLayers(this_04);
              }
              else {
                bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Guacodile>(this_00);
                if (bVar1) {
                  this_06 = Sexy::RtObject::Cast<PlantAnimRig_Guacodile>(this_00);
                  PlantAnimRig_Guacodile::GetHideLayers(this_06);
                }
                else {
                  bVar1 = Sexy::RtObject::IsA<PlantAnimRig_Pepperpult>(this_00);
                  if (!bVar1) goto LAB_04a55e38;
                  this_07 = Sexy::RtObject::Cast<PlantAnimRig_Pepperpult>(this_00);
                  PlantAnimRig_Pepperpult::GetGhostFireLayers(this_07);
                }
              }
            }
          }
        }
      }
    }
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)avStack_38,(vector *)local_20);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_20);
  }
LAB_04a55e38:
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_20)
        , bVar1) {
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    FUN_05475d88(asStack_60,uVar7);
    std::vector<std::string,std::allocator<std::string>>::push_back(avStack_50,asStack_60);
    std::string::~string(asStack_60);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_20)
        , bVar1) {
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    FUN_05475d88(asStack_60,uVar7);
    this_01 = (PopAnimRig *)GetPopAnimRig(this);
    PopAnimRig::SetLayerVisibility(this_01,asStack_60,false);
    std::string::~string(asStack_60);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  if (this_00 != (RtObject *)0x0) {
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_38);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
LAB_04a55d40:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

