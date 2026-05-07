// Class: PlantPotatomine


/* PlantPotatomine::HasShadow() */

void __thiscall PlantPotatomine::HasShadow(PlantPotatomine *this)

{
  FUN_04058538(*(undefined4 *)(*(long *)(this + 0x10) + 0x1d0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::StaticClassInit() */

void PlantPotatomine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPotatomine");
    (*pcVar2)(plVar1,asStack_10,FUN_04059788,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPotatomine::StaticGetClass() */

long * PlantPotatomine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPotatomine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPotatomine::GetClass() const */

long * PlantPotatomine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPotatomine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPotatomine::PlantPotatomine() */

void __thiscall PlantPotatomine::PlantPotatomine(PlantPotatomine *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c1e50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantPotatomine::StaticNew() */

PlantPotatomine * PlantPotatomine::StaticNew(void)

{
  PlantPotatomine *this;
  
  this = ::operator_new(0x30);
  PlantPotatomine(this);
  return this;
}


/* PlantPotatomine::~PlantPotatomine() */

void __thiscall PlantPotatomine::~PlantPotatomine(PlantPotatomine *this)

{
  *(undefined ***)this = &PTR_GetClass_067c1e50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPotatomine::~PlantPotatomine() */

void __thiscall PlantPotatomine::~PlantPotatomine(PlantPotatomine *this)

{
  ~PlantPotatomine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::Explode() */

void __thiscall PlantPotatomine::Explode(PlantPotatomine *this)

{
  ComponentDamageRadius *this_00;
  RealObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Potato_Mine");
  RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  ComponentDamageRadius::StartApply(this_00);
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPotatomine::TryBlockPushOffBoard(Zombie*, int) */

char __thiscall
PlantPotatomine::TryBlockPushOffBoard(PlantPotatomine *this,Zombie *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = PlantEscapeRoot::shouldExplodeBecauseShovedOffBoard((PlantEscapeRoot *)this,param_2);
  if (cVar1 != '\0') {
    Explode(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantPotatomine::TakeSmashAttack(PlantPotatomine *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig *pPVar3;
  UIEasyButtonWidget *this_00;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    if (*(int *)(this_00 + 200) - 10U < 2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,param_2);
      PlantTupistraStalker::TakeSmashAttack(this,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
    else {
      cVar1 = FUN_04058538(*(undefined4 *)(this_00 + 0x1d0));
      if (cVar1 == '\0') {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
        pcVar4 = *(code **)(*plVar2 + 0x130);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar4)(plVar2,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        pPVar3 = (PlantAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PlantAnimRig::SetState(pPVar3,0xe);
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPotatomine::Idle() */

void __thiscall PlantPotatomine::Idle(PlantPotatomine *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x040590a0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPotatomine::Initialize() */

void __thiscall PlantPotatomine::Initialize(PlantPotatomine *this)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  BoardEntity *this_00;
  ComponentDamageRadius *this_01;
  Plant *this_02;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_04058efc(*(undefined8 *)(this + 0x10));
  this_02 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_02 + 200) = 10;
  uVar1 = Plant::IsOnBoard(this_02);
  if ((uVar1 & 0xff) == 0) {
    this_00 = *(BoardEntity **)(this + 0x10);
    *(undefined4 *)(this_00 + 200) = 0xc;
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    FUN_04058554(lVar4);
    if ((int)uVar1 < 2) {
      fVar6 = *(float *)(lVar2 + 0x2c0);
    }
    else {
      if (uVar1 == 2) {
        local_10[0] = (float)*(int *)(lVar2 + 700);
      }
      else {
        local_10[0] = (float)*(int *)(lVar2 + 700);
        local_10[0] = local_10[0] + local_10[0];
      }
      local_18[0] = 100.0;
      pfVar3 = eastl::min_alt<float>(local_18,local_10);
      fVar6 = *(float *)(lVar2 + 0x2c0) * 0.01 * (100.0 - *pfVar3);
    }
    fVar5 = (float)PVZ_T();
    this_00 = *(BoardEntity **)(this + 0x10);
    *(float *)(lVar4 + 0x128) = fVar5 + fVar6;
  }
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string((string *)local_18,"ExplodeRadius");
  ComponentRunner::Add<ComponentDamageRadius>
            ((ComponentRunner *)this_00,aRStack_20,(string *)local_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  std::string::~string((string *)local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  ComponentDamageRadius::SetRadiusProps(this_01,(ComponentDamageRadiusProps *)(lVar2 + 0x2e8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::FlyThroughAir(Sexy::SexyVector2, Sexy::SexyVector2) */

void PlantPotatomine::FlyThroughAir
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  *(undefined4 *)(*(long *)(param_5 + 0x10) + 200) = 0xe;
  local_8 = ___stack_chk_guard;
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_24 = PVZ_T();
  local_20 = (float)PVZ_T();
  local_20 = local_20 + 1.0;
  local_18 = 0;
  Plant::addRelocationEvent(*(Plant **)(param_5 + 0x10),(RelocationEvent *)&local_38);
  plVar1 = (long *)FUN_040591c4(*(undefined8 *)(param_5 + 0x10));
  (**(code **)(*plVar1 + 0x268))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPotatomine::SetIsFlying() */

void __thiscall PlantPotatomine::SetIsFlying(PlantPotatomine *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xe;
  plVar1 = (long *)FUN_040591c4(lVar2);
  (**(code **)(*plVar1 + 0x268))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::OnRelocationComplete() */

void __thiscall PlantPotatomine::OnRelocationComplete(PlantPotatomine *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar2 + 200) == 0xe) {
    *(undefined4 *)(lVar2 + 200) = 0xb;
    plVar1 = (long *)FUN_040591c4(lVar2);
    pcVar3 = *(code **)(*plVar1 + 0x260);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar3)(plVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::UpdateActions() */

void __thiscall PlantPotatomine::UpdateActions(PlantPotatomine *this)

{
  undefined4 uVar1;
  char cVar2;
  UIEasyButtonWidget *pUVar3;
  long *plVar4;
  PlantAnimRig *pPVar5;
  PopAnimRig *pPVar6;
  code *pcVar7;
  RealObject *this_00;
  float fVar8;
  UnchartedModePlantNumData aUStack_78 [8];
  RtMixedPtrBase aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  Insets aIStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    pUVar3 = *(UIEasyButtonWidget **)(this + 0x10);
    uVar1 = *(undefined4 *)(pUVar3 + 0x110);
    switch(*(undefined4 *)(pUVar3 + 200)) {
    case 10:
      fVar8 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar8) {
        plVar4 = (long *)FUN_040591c4();
        pcVar7 = *(code **)(*plVar4 + 600);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar7)(plVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        this_00 = *(RealObject **)(this + 0x10);
        *(undefined4 *)(this_00 + 200) = 0xb;
        std::string::string((string *)aIStack_60,"Play_Dirt_Rise");
        RealObject::PlayPositionalSound(this_00,(string *)aIStack_60,0.0);
        std::string::~string((string *)aIStack_60);
        nop();
      }
      break;
    case 0xb:
      pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar3);
      cVar2 = PopAnimRig::IsPlayingAnything(pPVar6);
      if (cVar2 == '\0') {
        pUVar3 = *(UIEasyButtonWidget **)(this + 0x10);
        *(undefined4 *)(pUVar3 + 200) = 0xc;
        plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar3);
        (**(code **)(*plVar4 + 0x118))();
      }
      break;
    case 0xc:
      cVar2 = FUN_04058538(*(undefined4 *)(pUVar3 + 0x1d0));
      if (cVar2 == '\0') {
        UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_78,1,1);
        (**(code **)(*(long *)this + 0xe0))(aRStack_70,this,uVar1,0,0,aUStack_78);
        Sexy::Insets::Insets
                  (aIStack_60,*(int *)(*(long *)(this + 0x10) + 0x114),
                   *(int *)(*(long *)(this + 0x10) + 0x110),1,1);
        (**(code **)(*(long *)this + 0x100))(aRStack_68,this,aIStack_60,0);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
        if ((cVar2 != '\0') ||
           (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68), cVar2 != '\0')) {
          plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          pcVar7 = *(code **)(*plVar4 + 0x130);
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          (*pcVar7)(plVar4,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          pPVar5 = (PlantAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          PlantAnimRig::SetState(pPVar5,0xe);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
      }
      break;
    case 0xd:
      pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar3);
      cVar2 = PopAnimRig::IsPlayingAnything(pPVar6);
      if (cVar2 == '\0') {
        Explode(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPotatomine::CancelPlantfood() */

void __thiscall PlantPotatomine::CancelPlantfood(PlantPotatomine *this)

{
  PlantAnimRig_Pinecone *this_00;
  long lVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  lVar1 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar1 + 200) = 0xc;
  this_00 = (PlantAnimRig_Pinecone *)FUN_040591c4(lVar1);
  PlantAnimRig_Pinecone::SetElec(this_00,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::ForceArming() */

void __thiscall PlantPotatomine::ForceArming(PlantPotatomine *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  RealObject *this_00;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Plant_Potato_Nitro_End");
  RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xb;
  plVar1 = (long *)FUN_040591c4(lVar2);
  pcVar3 = *(code **)(*plVar1 + 0x260);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPotatomine::DoDuplicate() */

void __thiscall PlantPotatomine::DoDuplicate(PlantPotatomine *this)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  Plant *this_00;
  float *pfVar10;
  int iVar11;
  Board *pBVar12;
  long lVar13;
  int local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_48 = 0.0;
  if (0 < iVar4) {
    do {
      pBVar12 = *(Board **)(gLawnApp + 0x9f0);
      if (0 < *(int *)(pBVar12 + 0xf8)) {
        iVar11 = 0;
        do {
          Sexy::Point::Point((Point *)&local_40,iVar11,(int)local_48);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar12,(Point *)&local_40,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
          if (cVar3 != '\0') {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_38,(int *)&local_48);
            break;
          }
          iVar11 = iVar11 + 1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar11 < *(int *)(pBVar12 + 0xf8));
      }
      local_48 = (float)((int)local_48 + 1);
    } while ((int)local_48 < iVar4);
  }
  cVar3 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_38);
  if (cVar3 == '\0') {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar6,uVar7);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    iVar4 = 2;
    if (cVar3 != '\0') {
      iVar4 = 3;
    }
    iVar11 = 0;
    do {
      lVar13 = (long)iVar11;
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)local_20);
      uVar6 = local_38;
      iVar5 = FUN_0405855c(local_38,local_30);
      if (iVar11 < iVar5) {
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        if (*(int *)(pBVar12 + 0xf8) < 7) goto LAB_04059d68;
LAB_04059b10:
        local_4c = 6;
        iVar5 = 0;
        do {
          iVar2 = local_4c;
          piVar8 = (int *)FUN_04058574(uVar6,lVar13);
          Sexy::Point::Point((Point *)&local_48,iVar2,*piVar8);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar12,(Point *)&local_48,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          if (cVar3 != '\0') {
            iVar5 = iVar5 + 1;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)local_20,&local_4c);
          }
          local_4c = local_4c + 1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          uVar6 = local_38;
        } while (local_4c < *(int *)(pBVar12 + 0xf8));
        if (iVar5 == 0) goto LAB_04059cc4;
        iVar5 = PlantFramework::Rand((PlantFramework *)this,iVar5);
        piVar8 = (int *)FUN_04058574(local_20[0],(long)iVar5);
        iVar5 = *piVar8;
        puVar9 = (undefined4 *)FUN_04058574(local_38,lVar13);
        uVar1 = *puVar9;
      }
      else {
        iVar5 = PlantFramework::Rand((PlantFramework *)this,iVar5);
        lVar13 = (long)iVar5;
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        uVar6 = local_38;
        if (6 < *(int *)(pBVar12 + 0xf8)) goto LAB_04059b10;
LAB_04059d68:
        local_4c = 6;
LAB_04059cc4:
        iVar5 = 5;
        while( true ) {
          piVar8 = (int *)FUN_04058574(uVar6,lVar13);
          Sexy::Point::Point((Point *)&local_48,iVar5,*piVar8);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar12,(Point *)&local_48,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          if (cVar3 != '\0') break;
          iVar5 = iVar5 + -1;
          if (iVar5 == -1) goto LAB_04059ca4;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          uVar6 = local_38;
        }
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        puVar9 = (undefined4 *)FUN_04058574(local_38,lVar13);
        uVar1 = *puVar9;
      }
      Plant::GetType();
      this_00 = (Plant *)Board::AddPlant((Board *)0x0,pBVar12,iVar5,uVar1,
                                         (RtWeakPtr<Sexy::ResourceInfo> *)&local_40,1,1,0xffffffff,0
                                         ,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(this_00,true);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_48);
        iVar5 = BoardTransforms::GridToBoardSpaceX(*(int *)(this_00 + 0x114));
        local_48 = (float)iVar5;
        iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(this_00 + 0x110));
        local_44 = (float)iVar5;
        uVar6 = *(undefined8 *)(this_00 + 0xa8);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(this + 0x10));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,*pfVar10,pfVar10[1]);
        FlyThroughAir(local_40,local_3c,local_48,local_44,uVar6);
      }
LAB_04059ca4:
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* PlantPotatomine::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantPotatomine::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator!=(param_2,"use_action");
  if (bVar1) {
    return 0;
  }
  uVar2 = DoDuplicate((PlantPotatomine *)param_1);
  return uVar2;
}

