// Class: PlantDracaena


/* PlantDracaena::SetTargetZombie(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantDracaena::SetTargetZombie(PlantDracaena *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::StaticClassInit() */

void PlantDracaena::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DracaenaPlantgfood");
    (*pcVar3)(plVar2,asStack_10,FUN_04e397a8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantDracaena");
    (*pcVar3)(plVar2,asStack_10,FUN_04e3c6dc,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDracaena::StaticGetClass() */

long * PlantDracaena::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDracaena",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDracaena::GetClass() const */

long * PlantDracaena::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDracaena",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDracaena::isViableTarget(Zombie*) */

undefined8 __thiscall PlantDracaena::isViableTarget(PlantDracaena *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if (param_1 != (Zombie *)0x0) {
    uVar4 = operator|(1,8);
    cVar1 = Zombie::MatchesAny(param_1,uVar4);
    if (cVar1 == '\0') {
      bVar2 = Zombie::IsTargetable(param_1);
      bVar3 = RealObject::IsOnOpposingTeam(param_1,1);
      if (((bVar2 ^ 1) < bVar3) &&
         (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) {
        return 1;
      }
    }
    else {
      RealObject::IsOnOpposingTeam(param_1,1);
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::pfSwords() */

void __thiscall PlantDracaena::pfSwords(PlantDracaena *this)

{
  char cVar1;
  RealObject *this_00;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    fVar2 = (float)Sexy::SexyMath::DegToRad(15.0);
    GatlingPeaPlantfood::SetRotation((GatlingPeaPlantfood *)(this + 0x68),fVar2);
    GatlingPeaPlantfood::Start((GatlingPeaPlantfood *)(this + 0x68),1.0,0x14,1.0);
    fVar2 = (float)Sexy::SexyMath::DegToRad(-15.0);
    GatlingPeaPlantfood::SetRotation((GatlingPeaPlantfood *)(this + 0x90),fVar2);
    GatlingPeaPlantfood::Start((GatlingPeaPlantfood *)(this + 0x90),1.0,0x14,1.0);
  }
  GatlingPeaPlantfood::Start((GatlingPeaPlantfood *)(this + 0x40),1.0,0x32,1.0);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Plant_Dracaena_Pf_Sword");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDracaena::PlantDracaena() */

void __thiscall PlantDracaena::PlantDracaena(PlantDracaena *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069dcb50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  DracaenaPlantgfood::DracaenaPlantgfood((DracaenaPlantgfood *)(this + 0x40));
  DracaenaPlantgfood::DracaenaPlantgfood((DracaenaPlantgfood *)(this + 0x68));
  DracaenaPlantgfood::DracaenaPlantgfood((DracaenaPlantgfood *)(this + 0x90));
  return;
}


/* PlantDracaena::StaticNew() */

PlantDracaena * PlantDracaena::StaticNew(void)

{
  PlantDracaena *this;
  
  this = ::operator_new(0xb8);
  PlantDracaena(this);
  return this;
}


/* PlantDracaena::~PlantDracaena() */

void __thiscall PlantDracaena::~PlantDracaena(PlantDracaena *this)

{
  *(undefined ***)this = &PTR_GetClass_069dcb50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDracaena::~PlantDracaena() */

void __thiscall PlantDracaena::~PlantDracaena(PlantDracaena *this)

{
  ~PlantDracaena(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::UpdatePlantfood() */

void __thiscall PlantDracaena::UpdatePlantfood(PlantDracaena *this)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  PlantAction *pPVar4;
  Plant *pPVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],0.0);
  pPVar5 = *(Plant **)(this + 0x10);
  fVar6 = *(float *)(pPVar5 + 0xc4);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar4 = (PlantAction *)FUN_04e39a4c(*(undefined8 *)(lVar3 + 0x70),2);
  DracaenaPlantgfood::Update
            ((DracaenaPlantgfood *)(this + 0x40),pPVar5,(SexyVector3 *)aVStack_18,fVar6,pPVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    pPVar5 = *(Plant **)(this + 0x10);
    fVar6 = *(float *)(pPVar5 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pPVar4 = (PlantAction *)FUN_04e39a4c(*(undefined8 *)(lVar3 + 0x70),3);
    DracaenaPlantgfood::Update
              ((DracaenaPlantgfood *)(this + 0x68),pPVar5,(SexyVector3 *)aVStack_18,fVar6,pPVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    pPVar5 = *(Plant **)(this + 0x10);
    fVar6 = *(float *)(pPVar5 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pPVar4 = (PlantAction *)FUN_04e39a4c(*(undefined8 *)(lVar3 + 0x70),3);
    DracaenaPlantgfood::Update
              ((DracaenaPlantgfood *)(this + 0x90),pPVar5,(SexyVector3 *)aVStack_18,fVar6,pPVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::swordAttack() */

void __thiscall PlantDracaena::swordAttack(PlantDracaena *this)

{
  Projectile *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_00 = (Projectile *)
            Plant::Fire(*(Plant **)(this + 0x10),a_Stack_10,
                        *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Projectile::SetInstigator(this_00,*(BoardEntity **)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::findAttackTarget() */

void PlantDracaena::findAttackTarget(void)

{
  char cVar1;
  PlantDracaena *in_x0;
  Zombie *pZVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  UnchartedModePlantNumData aUStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_30,1,0);
  (**(code **)(*(long *)in_x0 + 0xe0))(aRStack_28);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  cVar1 = isViableTarget(in_x0,pZVar2);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)in_x0 + 0x2b0))(auStack_18);
    (**(code **)(*(long *)in_x0 + 0x100))(aRStack_20);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 == '\0') {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::flySwordInOne() */

void __thiscall PlantDracaena::flySwordInOne(PlantDracaena *this)

{
  RtObject *this_00;
  Lv5DracaenaSwordProjectile *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  Plant::Fire(*(Plant **)(this + 0x10),a_Stack_18,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),
              1);
  ToolPacketData::GetProps();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<Lv5DracaenaSwordProjectile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  Projectile::SetInstigator((Projectile *)this_01,*(BoardEntity **)(this + 0x10));
  Lv5DracaenaSwordProjectile::InitBackPos(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDracaena::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantDracaena::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action1");
  if (bVar1) {
    swordAttack((PlantDracaena *)param_1);
    return 1;
  }
  bVar1 = std::operator==(param_2,"use_action2");
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"use_action3");
    if (bVar1) {
      pfSwords((PlantDracaena *)param_1);
    }
    return 1;
  }
  flySwordInOne((PlantDracaena *)param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::setState(DracaenaState) */

void __thiscall PlantDracaena::setState(PlantDracaena *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  long *plVar2;
  char *__s;
  RealObject *this_00;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x38) = param_2;
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 10:
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
    goto switchD_04e3b994_default;
  case 0xb:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_68,"prepare");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Plant_Dracaena_Show_Sword");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    goto switchD_04e3b994_default;
  case 0xc:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_58,"idle_ready");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    goto switchD_04e3b994_default;
  case 0xd:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    __s = "attack1";
    break;
  case 0xe:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    __s = "attack2";
    break;
  case 0xf:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    __s = "attack_start_lv5";
    break;
  case 0x10:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    __s = "attack_lv5_end";
    break;
  case 0x11:
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    __s = "plantfood_start";
    break;
  default:
    goto switchD_04e3b994_default;
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
switchD_04e3b994_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantDracaena::Initialize() */

void __thiscall PlantDracaena::Initialize(PlantDracaena *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,10);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::UpdateActions() */

void __thiscall PlantDracaena::UpdateActions(PlantDracaena *this)

{
  bool bVar1;
  int iVar2;
  RealObject *this_00;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x38) == 10) {
    findAttackTarget();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) {
      setState(this,0xb);
    }
  }
  else if ((*(int *)(this + 0x38) == 0xc) &&
          (fVar3 = (float)PVZ_T(), *(float *)(this + 0x28) < fVar3)) {
    fVar3 = (float)Sexy::Rand(1.0);
    iVar2 = FUN_04e39790(*(undefined8 *)(this + 0x10));
    if ((iVar2 != 5) || (0.3 <= fVar3)) {
      setState(this,0xd);
    }
    else {
      setState(this,0xf);
    }
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Plant_Dracaena_Sword_Attack");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDracaena::ApplyPlantfood() */

void __thiscall PlantDracaena::ApplyPlantfood(PlantDracaena *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0x11);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::CancelPlantfood() */

void __thiscall PlantDracaena::CancelPlantfood(PlantDracaena *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  findAttackTarget();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (bVar1) {
    setState(this,0xc);
  }
  else {
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_68,"over");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::flySwordAttack() */

void __thiscall PlantDracaena::flySwordAttack(PlantDracaena *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  GridItem *pGVar6;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  SexyVector3 *pSVar9;
  long lVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  float *pfVar12;
  BoardTransforms *this_02;
  Point *extraout_x1;
  DamageInfo *__n;
  RtObject *pRVar13;
  RealObject *pRVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 local_b0;
  undefined8 local_a8;
  string asStack_a0 [8];
  Point aPStack_98 [8];
  undefined8 local_90;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    iVar4 = FUN_04e39790(*(undefined8 *)(this + 0x10));
  }
  else {
    local_68 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80,
               (BoardEntity **)&local_68);
    pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_90,"POPANIM_EFFECTS_DRACAENA_PROJECTILE02_HIT01");
    GetPAMByName((string *)&local_90);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string((string *)&local_90);
    nop();
    Effect_PopAnim::SetCentered(pEVar7,true);
    p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var11);
    uVar21 = 0;
    uVar20 = 0xc1c80000;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_90,0.0,-25.0,0.0);
    uVar19 = Sexy::SexyVector3::operator+(pSVar9,(SexyVector3 *)&local_90);
    local_68 = CONCAT44(uVar20,uVar19);
    local_60 = uVar21;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,(SexyVector3 *)&local_68,-1);
    FUN_04e39a80(pEVar7 + 0x1c);
    std::string::string((string *)&local_68,"animation01");
    Effect_PopAnim::PlaySingleAnimation(pEVar7,(RtWeakPtr *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    pRVar14 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_68,"Plant_Dracaena_Fly_Sword");
    RealObject::PlayPositionalSound(pRVar14,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
    iVar4 = FUN_04e39790(*(undefined8 *)(this + 0x10));
  }
  if (iVar4 < 2) {
    fVar18 = 0.4;
  }
  else {
    if ((iVar4 != 2) && (cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00), cVar1 != '\0')) {
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pfVar12 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var11);
      fVar18 = *pfVar12;
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_02 = (BoardTransforms *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var11);
      BoardTransforms::BoardSpaceToGrid(this_02,fVar18,*(float *)(this_02 + 4));
      BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)aPStack_98,extraout_x1);
      EntityFinder::GetEntitiesInRectangle
                (avStack_80,2,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68);
      pRVar13 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar13);
      if (bVar3) {
        local_90 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_80);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,(__normal_iterator *)&local_90);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80,local_68);
      }
    }
    fVar18 = 0.5;
  }
  bVar3 = false;
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
  if (bVar2) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0)
      ;
      pRVar13 = (RtObject *)*puVar5;
      if (pRVar13 != (RtObject *)0x0) {
        this_01 = Sexy::RtObject::Cast<Zombie>(pRVar13);
        pGVar6 = Sexy::RtObject::Cast<GridItem>(pRVar13);
        if (((this_01 == (Zombie *)0x0) || (cVar1 = Zombie::IsTargetable(this_01), cVar1 == '\0'))
           || (cVar1 = RealObject::IsOnOpposingTeam(this_01,1), cVar1 == '\0')) {
          if (((pGVar6 != (GridItem *)0x0) &&
              (cVar1 = RealObject::IsOnOpposingTeam(pGVar6,1), cVar1 != '\0')) &&
             (cVar1 = (**(code **)(*(long *)pGVar6 + 0x1f8))(pGVar6), cVar1 != '\0')) {
            lVar10 = FUN_04e3b8d4(*(undefined8 *)(this + 0x10));
            fVar22 = *(float *)(lVar10 + 0x2b8);
            fVar16 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
            fVar17 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
            pcVar15 = *(code **)(*(long *)pRVar13 + 0x110);
            Sexy::Point::Point(aPStack_98,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar17 + fVar22 * fVar16),(undefined4)local_90,local_90._4_4_,
                       (DamageInfo *)&local_68,aPStack_98,0);
            (*pcVar15)(pRVar13,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
        else {
          __n = (DamageInfo *)&local_68;
          std::string::string(asStack_a0,"animation01");
          nop();
          fVar16 = (float)Zombie::getLeftHitPer(this_01,true);
          if (((fVar18 <= fVar16) || (cVar1 = Zombie::IsBoss(this_01), cVar1 != '\0')) ||
             ((cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 != '\0' ||
              ((cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 != '\0' ||
               (cVar1 = Zombie::CanTakeFatalDamage(this_01), cVar1 == '\0')))))) {
            lVar10 = FUN_04e3b8d4(*(undefined8 *)(this + 0x10));
            fVar22 = *(float *)(lVar10 + 0x2b8);
            fVar16 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
            fVar17 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
            pcVar15 = *(code **)(*(long *)pRVar13 + 0x110);
            Sexy::Point::Point(aPStack_98,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar17 + fVar22 * fVar16),(undefined4)local_90,local_90._4_4_,
                       (DamageInfo *)&local_68,aPStack_98,0);
            (*pcVar15)(pRVar13,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          else {
            std::string::append(asStack_a0,"animation02",(size_t)__n);
            bVar3 = true;
            pcVar15 = *(code **)(*(long *)this_01 + 0x120);
            Sexy::Point::Point(aPStack_98,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68
                       ,4,0,aPStack_98,0);
            (*pcVar15)(this_01,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string((string *)&local_90,"POPANIM_EFFECTS_DRACAENA_PROJECTILE02_HIT02");
          GetPAMByName((string *)&local_90);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
          Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          std::string::~string((string *)&local_90);
          nop();
          Effect_PopAnim::SetCentered(pEVar7,true);
          pSVar9 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_01);
          StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,pSVar9,-1);
          Effect_PopAnim::PlaySingleAnimation(pEVar7,asStack_a0,0);
          std::string::~string(asStack_a0);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    } while (bVar2);
  }
  if (bVar3) {
    pRVar14 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_68,"Plant_Dracaena_Kill");
    RealObject::PlayPositionalSound(pRVar14,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDracaena::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantDracaena::onAnimStoppedCallback(PlantDracaena *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  PlantAnimRig_Dracaena *extraout_x0;
  PlantAnimRig_Dracaena *extraout_x0_00;
  PlantAnimRig_Dracaena *this_00;
  PlantAnimRig_Dracaena *this_01;
  float fVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack2");
  if (bVar1) {
    flySwordAttack(this);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_68);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)aRStack_58);
    PlantAnimRig_Dracaena::PlayAttack2Loop
              (extraout_x0_00,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  }
  else {
    bVar1 = std::operator==(param_1,"attack2_loop");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"attack2_end");
      if ((bVar1) || (bVar1 = std::operator==(param_1,"attack_lv5_end"), bVar1)) {
        findAttackTarget();
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        if (bVar1) {
          setState(this,0xc);
        }
        else {
          pPVar2 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string(asStack_68,"over");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,aRStack_58);
          PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)aRStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          std::string::~string(asStack_68);
          nop();
        }
        bVar1 = std::operator==(param_1,"attack2_end");
        if (bVar1) {
          fVar3 = (float)PVZ_T();
          *(float *)(this + 0x28) = fVar3 + 3.0;
        }
      }
      else {
        bVar1 = std::operator==(param_1,"prepare");
        if (bVar1) {
          setState(this,0xc);
        }
        else {
          bVar1 = std::operator==(param_1,"attack_start_lv5");
          if (bVar1) {
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
            nop();
            PlantAnimRig_Dracaena::PlayLv5AttackLoop(this_01);
          }
          else {
            bVar1 = std::operator==(param_1,"over");
            if (bVar1) {
              setState(this,10);
            }
            else {
              bVar1 = std::operator==(param_1,"attack1");
              if (bVar1) {
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
                nop();
                PlantAnimRig_Dracaena::PlayIdleReady(this_00);
              }
            }
          }
        }
      }
      goto LAB_04e3dbb8;
    }
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_68);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)aRStack_58);
    PlantAnimRig_Dracaena::PlayAttack2End
              (extraout_x0,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
LAB_04e3dbb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

