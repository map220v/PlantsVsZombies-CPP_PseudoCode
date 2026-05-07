// Class: PlantDragonBabyBruit


/* PlantDragonBabyBruit::BurnZombie(Zombie*, float, float) */

void __thiscall
PlantDragonBabyBruit::BurnZombie
          (PlantDragonBabyBruit *this,Zombie *param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(int *)(param_1 + 0x34) = (int)param_2;
  *(float *)(param_1 + 0x3c) = fVar1 + param_3;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::StaticClassInit() */

void PlantDragonBabyBruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDragonBabyBruit");
    (*pcVar2)(plVar1,asStack_10,FUN_04d7f968,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBabyBruit::StaticGetClass() */

long * PlantDragonBabyBruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonBabyBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonBabyBruit::GetClass() const */

long * PlantDragonBabyBruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonBabyBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantDragonBabyBruit::CanTargetZombie
               (TextureInfo *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 == '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = FUN_04d8034c(*(undefined4 *)(lVar5 + 0xcc));
      if (cVar1 == '\0') {
        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        uVar3 = FUN_04d7f650(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
        cVar1 = RealObject::IsOnTeam(uVar6,uVar3);
        if (cVar1 == '\0') {
          uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar6,0x19);
          if (cVar1 == '\0') {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            pcVar7 = *(code **)(*plVar4 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
            cVar1 = (*pcVar7)(plVar4,aRStack_10,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            uVar2 = 0;
            if (cVar1 != '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
              uVar2 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            }
            goto LAB_04d803ac;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_04d803ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::ApplyPlantfood() */

void __thiscall PlantDragonBabyBruit::ApplyPlantfood(PlantDragonBabyBruit *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  char *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x34);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_pf_dark");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    pcVar3 = "babybruit_pf_dark_1";
LAB_04d806c4:
    std::string::string(asStack_10,pcVar3);
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    pcVar3 = "babybruit_pf_dark_3";
  }
  else {
    if (iVar1 == 2) {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar3 = "babybruit_pf_dark";
LAB_04d80684:
      std::string::string(asStack_10,pcVar3);
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar3 = "babybruit_pf_dark_2";
      goto LAB_04d806c4;
    }
    if (iVar1 != 3) {
      if (this[0x29] == (PlantDragonBabyBruit)0x0) {
        pPVar2 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string(asStack_10,"babybruit_pf_dark");
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar2 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string(asStack_10,"babybruit_pf_dark_1");
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar2 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string(asStack_10,"babybruit_pf_dark_2");
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        pPVar2 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string(asStack_10,"babybruit_pf_dark_3");
        goto LAB_04d80628;
      }
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar3 = "babybruit_pf_dark_1";
      goto LAB_04d80684;
    }
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_pf_dark");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_pf_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    pcVar3 = "babybruit_pf_dark_2";
  }
  std::string::string(asStack_10,pcVar3);
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"babybruit_pf_normal");
LAB_04d80628:
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::getTargetInRow(int) */

void PlantDragonBabyBruit::getTargetInRow(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  RtObject *this;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  undefined8 local_30;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  plVar4 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  local_30 = (**(code **)(*plVar4 + 0x3f8))(plVar4,0);
  (**(code **)(*plVar4 + 0x2b0))(&local_18,plVar4,0);
  if (in_w1 != 0) {
    iVar1 = in_w1 + local_14;
    if ((iVar1 < 0) || (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 <= iVar1)) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      goto LAB_04d80d9c;
    }
    local_14 = local_14 + in_w1;
  }
  local_18 = *(int *)(plVar4[2] + 0x114) + 1;
  (**(code **)(*plVar4 + 0xd8))(aRStack_28,plVar4,&local_18,0,&local_30);
  (**(code **)(*plVar4 + 0x100))(aRStack_20,plVar4,&local_18,0);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar2 == '\0') {
    if (this != (RtObject *)0x0) goto LAB_04d80e60;
  }
  else {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_04d80e60:
    Sexy::RtObject::Cast<BoardEntity>(this);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_38,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_04d80d9c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantDragonBabyBruit::FindTargetAndFire(PlantDragonBabyBruit *this,int param_2)

{
  int iVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  bool bVar4;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x34);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_normal");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    goto LAB_04d81044;
  }
  if (iVar1 == 2) {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_1");
    bVar4 = true;
LAB_04d81114:
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,bVar4);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_3");
    bVar4 = false;
LAB_04d81194:
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,bVar4);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_normal");
    bVar4 = false;
  }
  else {
    if (iVar1 == 3) {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark");
      PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_1");
      PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_2");
      PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_3");
      bVar4 = true;
      goto LAB_04d81194;
    }
    if (this[0x29] != (PlantDragonBabyBruit)0x0) {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark");
      PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_1");
      bVar4 = false;
      goto LAB_04d81114;
    }
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_attack_normal");
    bVar4 = true;
  }
  PopAnimRig::SetLayerVisibility(pPVar3,asStack_10,bVar4);
  std::string::~string(asStack_10);
  nop();
LAB_04d81044:
  if (param_2 == 1) {
    cVar2 = PlantFramework::FindTargetAndFire(this,1);
  }
  else {
    getTargetInRow((int)this);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if ((cVar2 != '\0') && (this[0x38] == (PlantDragonBabyBruit)0x0)) {
      (**(code **)(*(long *)this + 0x1a0))(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlantDragonBabyBruit::PlantDragonBabyBruit() */

void __thiscall PlantDragonBabyBruit::PlantDragonBabyBruit(PlantDragonBabyBruit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantDragonBabyBruit)0x1;
  this[0x29] = (PlantDragonBabyBruit)0x0;
  *(undefined ***)this = &PTR_GetClass_069b7d30;
  this[0x38] = (PlantDragonBabyBruit)0x0;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  return;
}


/* PlantDragonBabyBruit::StaticNew() */

PlantDragonBabyBruit * PlantDragonBabyBruit::StaticNew(void)

{
  PlantDragonBabyBruit *this;
  
  this = ::operator_new(0xa8);
  PlantDragonBabyBruit(this);
  return this;
}


/* PlantDragonBabyBruit::GetLaunchDelayMultiplier() */

undefined1  [16] __thiscall
PlantDragonBabyBruit::GetLaunchDelayMultiplier(PlantDragonBabyBruit *this)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_04d815b0(*(undefined8 *)(this + 0x10));
  if (this[0x28] != (PlantDragonBabyBruit)0x0) {
    this[0x28] = (PlantDragonBabyBruit)0x0;
    PlantFramework::GetLaunchDelayMultiplier();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT416(*(uint *)(lVar1 + 0x2f8));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::setTransformState(DragonBruitState) */

void __thiscall PlantDragonBabyBruit::setTransformState(PlantDragonBabyBruit *this,int param_2)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  PlantAnimRig_DragonBabyBruit *pPVar2;
  bool bVar3;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x34) = param_2;
  local_8 = ___stack_chk_guard;
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  if (param_2 == 1) {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_10,"babybruit_plant_dark");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_normal");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    goto LAB_04d81878;
  }
  if (param_2 == 2) {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_10,"babybruit_plant_dark");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_3");
    bVar3 = false;
LAB_04d81998:
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,bVar3);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_normal");
    bVar3 = false;
  }
  else {
    if (param_2 == 3) {
      pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      std::string::string(asStack_10,"babybruit_plant_dark");
      PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_plant_dark_1");
      PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_plant_dark_2");
      PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_plant_dark_3");
      bVar3 = true;
      goto LAB_04d81998;
    }
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_10,"babybruit_plant_dark");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_plant_normal");
    bVar3 = true;
  }
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,bVar3);
  std::string::~string(asStack_10);
  nop();
LAB_04d81878:
  pPVar2 = (PlantAnimRig_DragonBabyBruit *)FUN_04d816d4(*(undefined8 *)(this + 0x10));
  PlantAnimRig_DragonBabyBruit::setTranformStatus(pPVar2,*(undefined4 *)(this + 0x34));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::updateRigLayers() */

void __thiscall PlantDragonBabyBruit::updateRigLayers(PlantDragonBabyBruit *this)

{
  PlantDragonBabyBruit PVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  if (fVar6 <= *(float *)(this + 0x2c) + *(float *)(this + 0x30)) {
LAB_04d81f88:
    if (*(int *)(this + 0x34) != 0) goto LAB_04d81dd4;
    if (this[0x29] != (PlantDragonBabyBruit)0x0) goto LAB_04d81c8c;
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_normal");
    bVar5 = true;
  }
  else {
    if (*(int *)(this + 0x34) != 0) goto LAB_04d81dd4;
    PVar1 = (PlantDragonBabyBruit)Plant::HasCondition(*(undefined8 *)(this + 0x10),0x13);
    this[0x29] = PVar1;
    if (PVar1 == (PlantDragonBabyBruit)0x0) {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_1");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_2");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_3");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_normal");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      goto LAB_04d81f88;
    }
    if (*(int *)(this + 0x34) != 0) goto LAB_04d81dd4;
LAB_04d81c8c:
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_normal");
    bVar5 = false;
  }
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,bVar5);
  std::string::~string(asStack_10);
  nop();
LAB_04d81dd4:
  lVar3 = FUN_04d816d4(*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    if (this[0x29] == (PlantDragonBabyBruit)0x0) {
      puVar4 = &k_boostedOffLayerSetName;
    }
    else {
      puVar4 = &k_boostedOnLayerSetName;
    }
    FUN_05475d88(asStack_10,puVar4);
    PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(lVar3,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBabyBruit::Initialize() */

void __thiscall PlantDragonBabyBruit::Initialize(PlantDragonBabyBruit *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  updateRigLayers(this);
  this[0x28] = (PlantDragonBabyBruit)0x1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::UpdateActions() */

void __thiscall PlantDragonBabyBruit::UpdateActions(PlantDragonBabyBruit *this)

{
  PlantDragonBabyBruit PVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  float fVar6;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  if (fVar6 <= *(float *)(this + 0x2c) + *(float *)(this + 0x30)) {
LAB_04d81f88:
    if (*(int *)(this + 0x34) != 0) goto LAB_04d81dd4;
    if (this[0x29] != (PlantDragonBabyBruit)0x0) goto LAB_04d81c8c;
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_normal");
    bVar5 = true;
  }
  else {
    if (*(int *)(this + 0x34) != 0) goto LAB_04d81dd4;
    PVar1 = (PlantDragonBabyBruit)Plant::HasCondition(*(undefined8 *)(this + 0x10),0x13);
    this[0x29] = PVar1;
    if (PVar1 == (PlantDragonBabyBruit)0x0) {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_1");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_2");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_dark_3");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_10,"babybruit_attack_normal");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      goto LAB_04d81f88;
    }
    if (*(int *)(this + 0x34) != 0) goto LAB_04d81dd4;
LAB_04d81c8c:
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_1");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_2");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_dark_3");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_10,"babybruit_idle_normal");
    bVar5 = false;
  }
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,bVar5);
  std::string::~string(asStack_10);
  nop();
LAB_04d81dd4:
  lVar3 = FUN_04d816d4(*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    if (this[0x29] == (PlantDragonBabyBruit)0x0) {
      puVar4 = &k_boostedOffLayerSetName;
    }
    else {
      puVar4 = &k_boostedOnLayerSetName;
    }
    FUN_05475d88(asStack_10,puVar4);
    PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(lVar3,asStack_10);
    std::string::~string(asStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantDragonBabyBruit::Fire
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4,
               RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  RtObject *pRVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Projectile *this;
  long lVar10;
  Zombie *pZVar11;
  Projectile *this_00;
  GridItem *pGVar12;
  PlantAction *pPVar13;
  Projectile *this_01;
  code *pcVar14;
  Board *pBVar22;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  RtMixedPtrBase aRStack_c0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  string asStack_b0 [8];
  wstring awStack_a8 [8];
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  float local_7c;
  float local_78 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((char)param_4[7] == '\0') {
    cVar1 = (**(code **)(*param_4 + 0x180))();
    if (cVar1 == '\0') {
      lVar5 = FUN_04d815b0(param_4[2]);
      if (lVar5 != 0) {
        this_01 = (Projectile *)0x0;
        getTargetInRow((int)param_4);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_c0);
        if (cVar1 != '\0') {
          DVec3::DVec3((DVec3 *)&local_a0);
          pRVar6 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
          bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar6);
          if (bVar2) {
            pcVar14 = *(code **)(*param_4 + 0x3e0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
            nop();
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)&local_90);
            cVar1 = (*pcVar14)(param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_80,param_7);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
            if (cVar1 == '\0') goto LAB_04d82230;
            local_7c = param_2;
            local_78[0] = param_3;
            pRVar6 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
            pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar6);
            pcVar14 = *(code **)(*(long *)pZVar11 + 0x3b0);
            lVar10 = FUN_04d815b0(param_4[2]);
            local_80 = (*pcVar14)(*(undefined4 *)(lVar10 + 0x2c8),pZVar11);
            fVar17 = local_7c;
            param_3 = local_78[0];
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_a0,(SexyVector3 *)&local_80);
            fVar15 = local_a0;
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_4[2]);
            fVar19 = *pfVar7;
            if (fVar15 < fVar19) {
              iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
              fVar17 = 0.5;
              local_a0 = fVar19 + (float)iVar4 * 0.5;
            }
          }
          else {
LAB_04d82230:
            pRVar6 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
            bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar6);
            if (bVar2) {
              pRVar6 = (RtObject *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
              pGVar12 = Sexy::RtObject::Cast<GridItem>(pRVar6);
              cVar1 = (**(code **)(*(long *)pGVar12 + 0x200))();
              if ((cVar1 == '\0') ||
                 (cVar1 = (**(code **)(*(long *)pGVar12 + 0x218))(pGVar12,param_4[2]), cVar1 == '\0'
                 )) {
                this_01 = (Projectile *)0x0;
                goto LAB_04d821b0;
              }
              pcVar14 = *(code **)(*(long *)pGVar12 + 0x238);
              local_7c = param_2;
              local_78[0] = param_3;
              lVar10 = FUN_04d815b0(param_4[2]);
              local_80 = (*pcVar14)(*(undefined4 *)(lVar10 + 0x2c8),pGVar12);
              fVar17 = local_7c;
              param_3 = local_78[0];
              Sexy::SexyVector3::operator=((SexyVector3 *)&local_a0,(SexyVector3 *)&local_80);
            }
            else {
              pfVar7 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)param_4[2]);
              fVar17 = 600.0;
              local_9c = pfVar7[1];
              local_a0 = *pfVar7 + 600.0;
              local_98 = 0;
            }
          }
          iVar4 = *(int *)((long)param_4 + 0x34);
          if (iVar4 == 1) {
            lVar5 = param_4[2];
            uVar16 = 2;
LAB_04d82630:
            *(undefined4 *)(lVar5 + 0x150) = uVar16;
            lVar5 = FUN_04d815b0(lVar5);
            pPVar13 = (PlantAction *)
                      FUN_04d7f6e8(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(param_4[2] + 0x150))
            ;
            PlantAction::PlantAction((PlantAction *)&local_80,pPVar13);
            fVar15 = (float)(**(code **)(*param_4 + 0x110))
                                      (*(undefined4 *)(param_4[2] + 0xc4),param_4,
                                       (RtName *)&local_80);
            local_90 = fVar15;
            local_8c = fVar17;
            local_88 = param_3;
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_4[2]);
            fVar20 = *pfVar7;
            fVar21 = pfVar7[1];
            fVar19 = pfVar7[2];
            uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)awStack_a8,(RtWeakPtrBase *)local_78);
            this_01 = (Projectile *)
                      Board::AddProjectile
                                ((Board *)(fVar15 + fVar20),fVar17 + fVar21,param_3 + fVar19,uVar8,
                                 (RtWeakPtr<Sexy::SoundResource> *)awStack_a8,param_4[2],0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_a8);
            lVar5 = FUN_04d815b0(param_4[2]);
            Projectile::LaunchAtFromProps
                      (this_01,(SexyVector3 *)&local_a0,(PultProjectileProps *)(lVar5 + 0x2b8));
            PlantAction::~PlantAction((PlantAction *)&local_80);
          }
          else if (iVar4 == 2) {
            uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
            std::string::string(asStack_b0,"DragonBabyBruitIceDefault");
            Sexy::ToWString(asStack_b0);
            Sexy::RtName::RtName((RtName *)&local_80,awStack_a8);
            PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90,uVar8,0xc,(RtName *)&local_80);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)&local_90);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
            Sexy::RtName::~RtName((RtName *)&local_80);
            FUN_05476c50(awStack_a8);
            std::string::~string(asStack_b0);
            nop();
            puVar9 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_4[2]);
                    /* WARNING: Load size is inaccurate */
            pBVar22._0_4_ = *puVar9;
            uVar16 = *(undefined4 *)((long)puVar9 + 4);
            uVar18 = *(undefined4 *)(puVar9 + 1);
            uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_b8);
            this_01 = (Projectile *)
                      Board::AddProjectile
                                (pBVar22._0_4_,uVar16,uVar18,uVar8,(RtName *)&local_80,param_4[2],0)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            lVar5 = FUN_04d815b0(param_4[2]);
            Projectile::LaunchAtFromProps
                      (this_01,(SexyVector3 *)&local_a0,(PultProjectileProps *)(lVar5 + 0x2b8));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
          }
          else {
            if (iVar4 == 3) {
              lVar5 = param_4[2];
              uVar16 = 4;
              goto LAB_04d82630;
            }
            if (*(char *)((long)param_4 + 0x29) == '\0') {
              *(undefined4 *)(param_4[2] + 0x150) = 0;
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_80,param_5);
              Plant::Fire((Plant *)param_4[2],(RtName *)&local_80,
                          *(undefined4 *)((Plant *)param_4[2] + 0x110),param_7);
              nop();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
              lVar10 = FUN_04d815b0(param_4[2]);
              Projectile::LaunchAtFromProps
                        (this_00,(SexyVector3 *)&local_a0,(PultProjectileProps *)(lVar10 + 0x2b8));
              this_01 = this_00;
            }
            else {
              uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
              std::string::string(asStack_b0,"DragonBabyBruitPoisonDefault");
              Sexy::ToWString(asStack_b0);
              Sexy::RtName::RtName((RtName *)&local_80,awStack_a8);
              PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90,uVar8,0xc,(RtName *)&local_80);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)&local_90)
              ;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
              Sexy::RtName::~RtName((RtName *)&local_80);
              FUN_05476c50(awStack_a8);
              std::string::~string(asStack_b0);
              nop();
              puVar9 = (undefined8 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)param_4[2]);
                    /* WARNING: Load size is inaccurate */
              pBVar22._0_4_ = *puVar9;
              uVar16 = *(undefined4 *)((long)puVar9 + 4);
              uVar18 = *(undefined4 *)(puVar9 + 1);
              uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_b8);
              Board::AddProjectile
                        (pBVar22._0_4_,uVar16,uVar18,uVar8,(RtName *)&local_80,param_4[2],0);
              nop();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
              lVar10 = FUN_04d815b0(param_4[2]);
              Projectile::LaunchAtFromProps
                        (this,(SexyVector3 *)&local_a0,(PultProjectileProps *)(lVar10 + 0x2b8));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
              this_01 = this;
            }
            FUN_04d7f6b4((RtName *)&local_80,param_4[2]);
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            iVar4 = FUN_04d7f6d8(param_4[2]);
            pfVar7 = (float *)FUN_04d7f6f8(*(undefined8 *)(lVar10 + 0x208),(long)(iVar4 + -1));
            fVar21 = *pfVar7;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            bVar2 = *(bool *)((long)param_4 + 0x29);
            fVar17 = *(float *)(lVar5 + 0x2e0);
            fVar15 = *(float *)(lVar5 + 0x2e8);
            iVar4 = FUN_04d7f6d8(param_4[2]);
            fVar19 = *(float *)(lVar5 + 0x2e4);
            bVar3 = (bool)(**(code **)(*param_4 + 0x180))(param_4);
            DragonBruitProjectile::SetData
                      ((DragonBruitProjectile *)this_01,bVar2,fVar15,fVar21 * fVar17,fVar19,false,
                       iVar4,bVar3);
          }
        }
LAB_04d821b0:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
        goto LAB_04d821b8;
      }
    }
    else if (*(code **)(*param_4 + 0xa8) != PlantFramework::DoSpecial) {
      this_01 = (Projectile *)0x0;
      (**(code **)(*param_4 + 0xa8))(param_4,0);
      goto LAB_04d821b8;
    }
  }
  this_01 = (Projectile *)0x0;
LAB_04d821b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* PlantDragonBabyBruit::~PlantDragonBabyBruit() */

void __thiscall PlantDragonBabyBruit::~PlantDragonBabyBruit(PlantDragonBabyBruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069b7d30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDragonBabyBruit::~PlantDragonBabyBruit() */

void __thiscall PlantDragonBabyBruit::~PlantDragonBabyBruit(PlantDragonBabyBruit *this)

{
  ~PlantDragonBabyBruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::deathAttack() */

void __thiscall PlantDragonBabyBruit::deathAttack(PlantDragonBabyBruit *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  Zombie *extraout_x0;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int in_w4;
  RealObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  DamageInfo *pDVar17;
  undefined8 local_b0;
  undefined8 local_a8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04d815b0(*(undefined8 *)(this + 0x10));
  if (*(int *)(this + 0x34) != 0) {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_68,"Play_CherryBomb");
    RealObject::PlayPositionalSound(this_00,asStack_68,0.0);
    std::string::~string(asStack_68);
    nop();
    Plant::GetProps();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    lVar6 = FUN_04d7f6e8(*(undefined8 *)(lVar6 + 0x70),5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    pDVar17._0_4_ = (DamageInfo *)(float)*(int *)(lVar6 + 0x2c);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)(ulong)*(uint *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),2,1,in_w4);
    EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while( true ) {
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
      if (!bVar3) break;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      nop();
      if (extraout_x0 != (Zombie *)0x0) {
        cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))();
        if (cVar2 == '\0') {
          iVar1 = *(int *)(this + 0x34);
          if (iVar1 == 1) {
            pcVar13 = *(code **)(*(long *)extraout_x0 + 0x110);
            uVar10 = operator|(0x20,0x400);
            uVar11 = *(undefined8 *)(this + 0x10);
            Sexy::Point::Point((Point *)aRStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar17._0_4_,local_98,local_94,asStack_68,uVar10,uVar11,aRStack_a0,0);
            (*pcVar13)(extraout_x0,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0);
            if ((cVar2 == '\0') &&
               (cVar2 = (**(code **)(*(long *)extraout_x0 + 0x330))(extraout_x0), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
              Zombie::ApplyCondition(*(Zombie **)(lVar5 + 0x2f4),0,extraout_x0,0x35,1);
              BurnZombie(this,extraout_x0,*(float *)(lVar5 + 0x2f0),*(float *)(lVar5 + 0x2f4));
            }
          }
          else if (iVar1 == 2) {
            pcVar13 = *(code **)(*(long *)extraout_x0 + 0x110);
            uVar10 = operator|(0x20,0x1000000000000);
            uVar11 = *(undefined8 *)(this + 0x10);
            Sexy::Point::Point((Point *)aRStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar17._0_4_,local_98,local_94,asStack_68,uVar10,uVar11,aRStack_a0,0);
            (*pcVar13)(extraout_x0,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0);
            if ((cVar2 == '\0') &&
               (cVar2 = (**(code **)(*(long *)extraout_x0 + 0x330))(extraout_x0), cVar2 == '\0')) {
              Zombie::ApplyCondition((Zombie *)0x40a00000,0,extraout_x0,1,1);
            }
          }
          else if (iVar1 == 3) {
            pcVar13 = *(code **)(*(long *)extraout_x0 + 0x110);
            uVar10 = operator|(0x20,0x80);
            uVar11 = *(undefined8 *)(this + 0x10);
            Sexy::Point::Point((Point *)aRStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar17._0_4_,local_98,local_94,asStack_68,uVar10,uVar11,aRStack_a0,0);
            (*pcVar13)(extraout_x0,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0);
            if ((cVar2 == '\0') &&
               (cVar2 = (**(code **)(*(long *)extraout_x0 + 0x330))(extraout_x0), cVar2 == '\0')) {
              Zombie::ApplyCondition((Zombie *)0x40000000,0,extraout_x0,6,1);
              Zombie::ApplyCondition((Zombie *)0x40000000,0,extraout_x0,0x18,1);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
    }
    pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_98,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
    GetPAMByName((string *)&local_98);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)&local_98);
    nop();
    (**(code **)(*(long *)pEVar7 + 0x80))(0x3f800000,pEVar7);
    p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar9 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var12);
    fVar15 = *pfVar9;
    FUN_04d7f6b4(aRStack_a0,p_Var12);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
    p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    fVar14 = *(float *)(lVar5 + 0x9c);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var12);
    fVar16 = *(float *)(lVar5 + 4);
    FUN_04d7f6b4((string *)&local_98,p_Var12);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_68,fVar15 - fVar14,(fVar16 - *(float *)(lVar5 + 0xa0)) - 70.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,(SexyVector3 *)asStack_68,-1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    uVar4 = Board::MakeRenderOrder(500000,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    FUN_04d7f6a4(pEVar7 + 0x1c,uVar4);
    std::string::string(asStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar7,asStack_68,bVar3);
    std::string::~string(asStack_68);
    nop();
    pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_98,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_REAR");
    GetPAMByName((string *)&local_98);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)&local_98);
    nop();
    (**(code **)(*(long *)pEVar7 + 0x80))(0x3f800000,pEVar7);
    p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar9 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var12);
    fVar15 = *pfVar9;
    FUN_04d7f6b4(aRStack_a0,p_Var12);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
    p_Var12 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    fVar14 = *(float *)(lVar5 + 0x9c);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var12);
    fVar16 = *(float *)(lVar5 + 4);
    FUN_04d7f6b4((string *)&local_98,p_Var12);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_68,fVar15 - fVar14,(fVar16 - *(float *)(lVar5 + 0xa0)) - 70.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,(SexyVector3 *)asStack_68,-1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    uVar4 = Board::MakeRenderOrder(300000,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),bVar3);
    FUN_04d7f6a4(pEVar7 + 0x1c,uVar4);
    std::string::string(asStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar7,asStack_68,bVar3);
    std::string::~string(asStack_68);
    nop();
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::spawnDragonBruit() */

void __thiscall PlantDragonBabyBruit::spawnDragonBruit(PlantDragonBabyBruit *this)

{
  int iVar1;
  BoardTransforms *this_00;
  string *psVar2;
  Plant *pPVar3;
  Board *this_01;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  pPVar3 = *(Plant **)(this + 0x10);
  iVar1 = FUN_04d7f6d8(pPVar3);
  Plant::KillPlant(pPVar3,1,0,1);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"dragonbruit");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"dragonbruit");
  Board::AddPlant(this_01,local_20,local_1c,asStack_10,iVar1,false,false,true,false);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBabyBruit::OnAnimCommand(std::string const&, std::string const&) */

bool PlantDragonBabyBruit::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    spawnDragonBruit((PlantDragonBabyBruit *)param_1);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::handleDeathAttack(DamageInfo const&) */

void PlantDragonBabyBruit::handleDeathAttack(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  Plant *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(in_x8,in_x1);
  fVar2 = (float)FUN_04d7f6b0(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xd8));
  if ((fVar2 - *(float *)(in_x8 + 8) <= 0.0) || (*(long *)(in_x8 + 0x10) == 0x10000000000)) {
    DamageInfo::operator=(param_1 + 0x40,in_x1);
    param_1[0x38] = (DamageInfo)0x1;
    deathAttack((PlantDragonBabyBruit *)param_1);
    if (*(long *)(in_x8 + 0x10) == 0x10000000000) {
      pPVar1 = *(Plant **)(param_1 + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0xa0));
      Plant::TakeSmashAttack(pPVar1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::TakeDamage(DamageInfo const&) */

void PlantDragonBabyBruit::TakeDamage(DamageInfo *param_1)

{
  long in_x1;
  DamageInfo *pDVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x38] == (DamageInfo)0x0) {
                    /* WARNING: Load size is inaccurate */
    pDVar1._0_4_ = *(DamageInfo **)(in_x1 + 8);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar1._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
    handleDeathAttack(param_1);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    PlantMagicbeans::TakeDamage(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBabyBruit::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantDragonBabyBruit::TakeSmashAttack(PlantDragonBabyBruit *this,RtWeakPtr *param_2)

{
  int iVar1;
  ResourceInfo *pRVar2;
  Point aPStack_d0 [8];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa0),param_2);
  if (this[0x38] == (PlantDragonBabyBruit)0x0) {
    iVar1 = (**(code **)(*(long *)this + 0x120))(this);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    Sexy::Point::Point(aPStack_d0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(float)iVar1,local_68,local_64,aDStack_c8,0x10000000000,pRVar2,
               aPStack_d0,0);
    handleDeathAttack((DamageInfo *)this);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)param_2);
    PlantTupistraStalker::TakeSmashAttack(this,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

