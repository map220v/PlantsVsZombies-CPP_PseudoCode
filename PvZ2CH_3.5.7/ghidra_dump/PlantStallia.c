// Class: PlantStallia


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::StaticClassInit() */

void PlantStallia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantStallia");
    (*pcVar2)(plVar1,asStack_10,FUN_0411ce28,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStallia::StaticGetClass() */

long * PlantStallia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantStallia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStallia::GetClass() const */

long * PlantStallia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantStallia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStallia::~PlantStallia() */

void __thiscall PlantStallia::~PlantStallia(PlantStallia *this)

{
  *(undefined ***)this = &PTR_GetClass_067e7eb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStallia::~PlantStallia() */

void __thiscall PlantStallia::~PlantStallia(PlantStallia *this)

{
  ~PlantStallia(this);
  AK::FreeHook(this);
  return;
}


/* PlantStallia::PlantStallia() */

void __thiscall PlantStallia::PlantStallia(PlantStallia *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantStallia)0x0;
  *(undefined ***)this = &PTR_GetClass_067e7eb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantStallia::StaticNew() */

PlantStallia * PlantStallia::StaticNew(void)

{
  PlantStallia *this;
  
  this = ::operator_new(0x38);
  PlantStallia(this);
  return this;
}


/* PlantStallia::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

undefined8 PlantStallia::CanTargetZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x330))();
  if (cVar1 == '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar3,1);
    if (cVar1 == '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar3,3);
      if (cVar1 == '\0') {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = Zombie::HasCondition(uVar3,4);
        if (cVar1 == '\0') {
          uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar3,0);
          if (cVar1 == '\0') {
            plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = (**(code **)(*plVar2 + 0x2a8))();
            if (cVar1 == '\0') {
              plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = (**(code **)(*plVar2 + 0x2b8))();
              if (cVar1 == '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantStallia::TakeSmashAttack(PlantStallia *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  long *plVar3;
  PlantAnimRig *pPVar4;
  UIEasyButtonWidget *this_01;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if ((cVar1 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
    if (cVar1 != '\0') {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
      if (bVar2) {
        this_01 = *(UIEasyButtonWidget **)(this + 0x10);
        cVar1 = FUN_0411cc3c(this_01[0x278]);
        if (cVar1 == '\0') {
          *(undefined4 *)(this_01 + 200) = 2;
          plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
          pcVar5 = *(code **)(*plVar3 + 0x130);
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          (*pcVar5)(plVar3,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          pPVar4 = (PlantAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          PlantAnimRig::SetState(pPVar4,0xe);
          goto LAB_0411d758;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)param_2);
    PlantTupistraStalker::TakeSmashAttack(this,aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
LAB_0411d758:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::explodeNormal() */

void __thiscall PlantStallia::explodeNormal(PlantStallia *this)

{
  long *plVar1;
  PlantAnimRig *pPVar2;
  UIEasyButtonWidget *this_00;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 2;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  pcVar3 = *(code **)(*plVar1 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar2,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::UpdateActions() */

void __thiscall PlantStallia::UpdateActions(PlantStallia *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    PlantFramework::FindTargetZombie(aRStack_10,this,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar2 != '\0') {
      explodeNormal(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else if (iVar1 == 2) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::ApplyPlantfood() */

void __thiscall PlantStallia::ApplyPlantfood(PlantStallia *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  RealObject *pRVar5;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  pRVar5 = *(RealObject **)(this + 0x10);
  *(undefined4 *)(pRVar5 + 200) = 5;
  std::string::string(asStack_18,"Play_IcebergLettuce_Freeze_PF");
  RealObject::PlayPositionalSound(pRVar5,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  uVar3 = Effect_ScreenFade::Create();
  if (((DAT_06aedb48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aedb48), iVar2 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06aedc00,0xfb,0x5a,0xfa,100);
    __cxa_guard_release(&DAT_06aedb48);
  }
  if (((DAT_06aedb50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aedb50), iVar2 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06aedbe8,0xff,0xff,0xff,200);
    __cxa_guard_release(&DAT_06aedb50);
  }
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&DAT_06aedc00);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar3,1,asStack_18,2);
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&DAT_06aedbe8);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar3,0,asStack_18,2);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar5 = *(RealObject **)(this + 0x10);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-50.0,0.0);
  StandaloneEffect::SetAttached((StandaloneEffect *)this_00,pRVar5,(SexyVector3 *)asStack_18,1);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    __s = "POPANIM_EFFECTS_STALLIA_PF_EFFECT";
  }
  else {
    __s = "POPANIM_EFFECTS_STALLIA_PF_EFFECT_GREEN";
  }
  std::string::string(asStack_20,__s);
  nop();
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Effect_PopAnim::SetCentered(this_00,true);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,false);
  std::string::string(asStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::TakeDamage(DamageInfo const&) */

void PlantStallia::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  long lVar3;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x40000);
  if (((bVar1) && (*(RtObject **)in_x1 != (RtObject *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1), bVar1)) {
    lVar3 = *(long *)(param_1 + 0x10);
    cVar2 = FUN_0411cc3c(*(undefined1 *)(lVar3 + 0x278));
    if (cVar2 == '\0') {
      if (*(int *)(lVar3 + 200) != 2) {
        explodeNormal((PlantStallia *)param_1);
      }
      Sexy::Point::Point(aPStack_18,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_10,local_c);
      goto LAB_0411e248;
    }
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
LAB_0411e248:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::createDamage(bool) */

void PlantStallia::createDamage(bool param_1)

{
  int iVar1;
  PlantFramework *this;
  long lVar2;
  RtObject *this_00;
  StalliaProps *pSVar3;
  undefined8 uVar4;
  char in_w1;
  long in_x8;
  float fVar5;
  DamageInfo *pDVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (PlantFramework *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_0411cc6c(*(undefined8 *)(lVar2 + 0x70),in_w1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::GetProps();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pSVar3 = Sexy::RtObject::Cast<StalliaProps>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar4 = PlantFramework::GetDamageFlags();
    operator|=(in_x8 + 0x10,uVar4);
    operator|=(in_x8 + 0x10,0x800000000000);
  }
  else {
    uVar4 = (**(code **)(*(long *)this + 0x198))(this,in_w1);
    operator|=(in_x8 + 0x10,uVar4);
    operator|=(in_x8 + 0x10,0x800000000000);
  }
  if (in_w1 == '\0') {
                    /* WARNING: Load size is inaccurate */
    DamageInfo::AddCondition(*(DamageInfo **)(pSVar3 + 0x2b8));
    iVar1 = FUN_0411cc38(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
                    /* WARNING: Load size is inaccurate */
    pDVar6._0_4_ = *(DamageInfo **)(pSVar3 + 0x2b8);
    if (((1 < iVar1) && (pDVar6._0_4_ = (DamageInfo *)((float)pDVar6._0_4_ + 2.0), iVar1 != 2)) &&
       (fVar5 = (float)PlantFramework::Rand(this,1.0), fVar5 <= 0.25)) {
                    /* WARNING: Load size is inaccurate */
      DamageInfo::AddCondition(*(DamageInfo **)(pSVar3 + 0x2c0));
    }
    DamageInfo::AddCondition(pDVar6._0_4_);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    DamageInfo::AddCondition(*(DamageInfo **)(pSVar3 + 700));
    operator|=(in_x8 + 0x10,0x2000);
    Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
    DamageInfo::AddCondition(*(DamageInfo **)(pSVar3 + 700));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStallia::OnAnimCommand(std::string const&, std::string const&) */

void PlantStallia::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [16];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  bVar1 = std::operator!=(param_2,"freeze");
  if (!bVar1) {
    param_1[0x28] = (string)0x1;
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 2) {
      createDamage(SUB81(param_1,0));
      FUN_0411cc44(aRStack_78,*(undefined8 *)(param_1 + 0x10));
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      lVar2 = FUN_0411cc6c(*(undefined8 *)(lVar2 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      puVar3 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(param_1 + 0x10));
      uVar4 = 1;
      PlantFramework::damageEntitiesInGridRadius
                (*(undefined4 *)(lVar2 + 0x14),*puVar3,puVar3[1],puVar3[2],param_1,aDStack_68,2,0);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    else if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
      createDamage(SUB81(param_1,0));
      (**(code **)(*(long *)param_1 + 0x2b8))(aRStack_78,param_1,1);
      uVar4 = 1;
      PlantFramework::damageEntitiesInBoardRect((PlantFramework *)param_1,aDStack_68,2,aRStack_78,0)
      ;
      DamageInfo::~DamageInfo(aDStack_68);
    }
    else {
      uVar4 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

