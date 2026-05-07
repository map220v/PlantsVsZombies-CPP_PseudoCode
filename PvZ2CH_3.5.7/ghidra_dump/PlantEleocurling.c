// Class: PlantEleocurling


/* PlantEleocurling::GetTargetItem() */

RtWeakPtr<Sexy::SoundResource> * PlantEleocurling::GetTargetItem(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x30));
  return in_x8;
}


/* PlantEleocurling::CanBeWatered() */

undefined8 __thiscall PlantEleocurling::CanBeWatered(PlantEleocurling *this)

{
  undefined8 uVar1;
  
  if (1 < *(int *)(*(Plant **)(this + 0x10) + 200) - 0xfU) {
    uVar1 = Plant::CanApplyPlantfood(*(Plant **)(this + 0x10));
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEleocurling::StaticClassInit() */

void PlantEleocurling::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEleocurling");
    (*pcVar2)(plVar1,asStack_10,FUN_0423a7a0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEleocurling::StaticGetClass() */

long * PlantEleocurling::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEleocurling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEleocurling::GetClass() const */

long * PlantEleocurling::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEleocurling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEleocurling::~PlantEleocurling() */

void __thiscall PlantEleocurling::~PlantEleocurling(PlantEleocurling *this)

{
  *(undefined ***)this = &PTR_GetClass_068121a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEleocurling::~PlantEleocurling() */

void __thiscall PlantEleocurling::~PlantEleocurling(PlantEleocurling *this)

{
  ~PlantEleocurling(this);
  AK::FreeHook(this);
  return;
}


/* PlantEleocurling::PlantEleocurling() */

void __thiscall PlantEleocurling::PlantEleocurling(PlantEleocurling *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_068121a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantEleocurling::StaticNew() */

PlantEleocurling * PlantEleocurling::StaticNew(void)

{
  PlantEleocurling *this;
  
  this = ::operator_new(0x38);
  PlantEleocurling(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEleocurling::onWatered(bool) */

void PlantEleocurling::onWatered(bool param_1)

{
  PopAnimRig *this;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PopAnimRig *)
         UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)((ulong)param_1 + 0x10));
  Sexy::Color::Color(aCStack_18,1);
  PopAnimRig::SetPAMColor(this,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEleocurling::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantEleocurling::Fire(PlantFramework *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  RtObject *pRVar4;
  EleocurlingPlantfoodProjectile *pEVar5;
  CurlingProjectile *pCVar6;
  RtObject *pRVar7;
  EleocurlingProps *pEVar8;
  bool bVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  lVar10 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar10 + 200);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0xc) {
    cVar1 = FUN_04234ad4(lVar10);
    if (cVar1 == '\0') {
      *(undefined4 *)(lVar10 + 0x150) = 0;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar4 = (RtObject *)
               Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                           *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (pRVar4 != (RtObject *)0x0) {
        iVar3 = FUN_04234acc(*(undefined8 *)(param_1 + 0x10));
        if (iVar3 < 2) {
          Plant::GetProps();
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
          pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar7);
          fVar11 = *(float *)(pEVar8 + 0x2b8);
        }
        else {
          Plant::GetProps();
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
          pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar7);
          fVar11 = *(float *)(pEVar8 + 700);
        }
        fVar12 = (float)PlantFramework::Rand(param_1,1.0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        bVar9 = fVar12 < fVar11;
        pCVar6 = Sexy::RtObject::Cast<CurlingProjectile>(pRVar4);
        if (pCVar6 == (CurlingProjectile *)0x0) goto LAB_04237bd0;
        goto LAB_04237ce4;
      }
    }
    else {
      Plant::GetProps();
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
      ;
      pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar4);
      fVar12 = *(float *)(pEVar8 + 0x2d0);
      fVar11 = (float)PlantFramework::Rand(param_1,1.0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      lVar10 = *(long *)(param_1 + 0x10);
      uVar2 = 4;
      if (fVar11 < fVar12) {
LAB_04237d7c:
        *(undefined4 *)(lVar10 + 0x150) = uVar2;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_10);
        pRVar4 = (RtObject *)
                 Plant::Fire(*(Plant **)(param_1 + 0x10),(RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10
                             ,*(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
      }
      else {
        *(undefined4 *)(lVar10 + 0x150) = 3;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_10);
        pRVar4 = (RtObject *)
                 Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                             *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        Plant::GetProps();
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar7);
        fVar12 = *(float *)(pEVar8 + 700);
        fVar11 = (float)PlantFramework::Rand(param_1,1.0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        if (fVar12 <= fVar11) goto joined_r0x04237e7c;
      }
      if (pRVar4 != (RtObject *)0x0) {
        pCVar6 = Sexy::RtObject::Cast<CurlingProjectile>(pRVar4);
        if (pCVar6 == (CurlingProjectile *)0x0) goto LAB_04237bd0;
        bVar9 = true;
LAB_04237ce4:
        CurlingProjectile::SetIsGenerateIceLane(pCVar6,bVar9);
        Plant::GetProps();
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar7);
        PineconePlantfoodProjectile::SetKeepDown
                  ((PineconePlantfoodProjectile *)pCVar6,*(float *)(pEVar8 + 0x2c0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        goto LAB_04237bd0;
      }
    }
LAB_04237bfc:
    pRVar4 = (RtObject *)0x0;
  }
  else {
    if (iVar3 == 0xe) {
      cVar1 = FUN_04234ad4(lVar10);
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar10 + 0x150) = 1;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_10);
      }
      else {
        Plant::GetProps();
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar4);
        fVar12 = *(float *)(pEVar8 + 0x2d0);
        fVar11 = (float)PlantFramework::Rand(param_1,1.0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        lVar10 = *(long *)(param_1 + 0x10);
        if (fVar11 < fVar12) {
          uVar2 = 6;
          goto LAB_04237d7c;
        }
        *(undefined4 *)(lVar10 + 0x150) = 5;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_10);
      }
      pRVar4 = (RtObject *)
               Plant::Fire(*(Plant **)(param_1 + 0x10),(RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10,
                           *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
joined_r0x04237e7c:
      if (pRVar4 == (RtObject *)0x0) goto LAB_04237c00;
    }
    else {
      if (iVar3 != 5) goto LAB_04237bfc;
      *(undefined4 *)(lVar10 + 0x150) = 2;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar4 = (RtObject *)
               Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                           *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (pRVar4 == (RtObject *)0x0) goto LAB_04237c00;
      pEVar5 = Sexy::RtObject::Cast<EleocurlingPlantfoodProjectile>(pRVar4);
      if (pEVar5 != (EleocurlingPlantfoodProjectile *)0x0) {
        uVar2 = FUN_04234acc(*(undefined8 *)(param_1 + 0x10));
        FUN_04234af4(pEVar5 + 0x1d8,uVar2);
      }
      pCVar6 = Sexy::RtObject::Cast<CurlingProjectile>(pRVar4);
      if (pCVar6 != (CurlingProjectile *)0x0) {
        CurlingProjectile::SetIsSpeedUp(pCVar6,false);
        CurlingProjectile::SetIsGenerateIceLane(pCVar6,true);
        Plant::GetProps();
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar7);
        fVar11 = *(float *)(pEVar8 + 0x2c0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
        if (cVar1 != '\0') {
          Plant::GetProps();
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
          pEVar8 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar7);
          fVar11 = *(float *)(pEVar8 + 0x2c4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        }
        PineconePlantfoodProjectile::SetKeepDown((PineconePlantfoodProjectile *)pCVar6,fVar11);
      }
    }
LAB_04237bd0:
    pCVar6 = Sexy::RtObject::Cast<CurlingProjectile>(pRVar4);
    if (pCVar6 != (CurlingProjectile *)0x0) {
      iVar3 = FUN_04234a8c(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x294));
      EleocurlingPenetrateProjectile::SetAvatarIndex((EleocurlingPenetrateProjectile *)pCVar6,iVar3)
      ;
    }
  }
LAB_04237c00:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pRVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEleocurling::SetState(unsigned int) */

void __thiscall PlantEleocurling::SetState(PlantEleocurling *this,uint param_1)

{
  int iVar1;
  UIEasyButtonWidget *this_00;
  PlantAnimRig_Eagleclaw *this_01;
  RtObject *pRVar2;
  EleocurlingProps *pEVar3;
  PopAnimRig *pPVar4;
  PlantAnimRig *pPVar5;
  long *plVar6;
  PlantAnimRig_Eleocurling *pPVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 0xb:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar7 = Sexy::RtObject::Cast<PlantAnimRig_Eleocurling>(pRVar2);
    pcVar8 = "idle1";
    goto LAB_04238104;
  case 0xc:
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    pcVar8 = "attack1";
    goto LAB_0423815c;
  case 0xd:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar7 = Sexy::RtObject::Cast<PlantAnimRig_Eleocurling>(pRVar2);
    pcVar8 = "idle2";
LAB_04238104:
    std::string::string((string *)aRStack_50,pcVar8);
    PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar7);
    std::string::~string((string *)aRStack_50);
    nop();
    plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar6 + 0x118))();
    break;
  case 0xe:
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    pcVar8 = "attack2";
LAB_0423815c:
    std::string::string(asStack_58,pcVar8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantEleocurling,void(PlantEleocurling::*)(std::string_const&)>(aDStack_38,aRStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    break;
  case 0xf:
    this_01 = (PlantAnimRig_Eagleclaw *)FUN_04237950();
    PlantAnimRig_Eagleclaw::PlayRecoverLooped(this_01);
    FUN_04234aa8(aRStack_50,*(undefined8 *)(this + 0x10));
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    pEVar3 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar2);
    fVar13 = *(float *)(pEVar3 + 0x2c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    uVar10 = *(undefined8 *)(this + 0x10);
    iVar1 = FUN_04234acc(uVar10);
    if (2 < iVar1) {
      FUN_04234aa8(aRStack_50,uVar10);
      pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      pEVar3 = Sexy::RtObject::Cast<EleocurlingProps>(pRVar2);
      fVar13 = *(float *)(pEVar3 + 0x2cc);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    }
    fVar11 = (float)PVZ_T();
    lVar9 = *(long *)(this + 0x10);
    fVar12 = (float)FUN_04234a90(*(undefined4 *)(lVar9 + 0x420));
    *(float *)(lVar9 + 0x128) = fVar11 + fVar12 * (float)(int)fVar13;
    break;
  case 0x10:
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"recover_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantEleocurling,void(PlantEleocurling::*)(std::string_const&)>(aDStack_38,aRStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    pPVar5 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar5,0xe);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEleocurling::Initialize() */

void __thiscall PlantEleocurling::Initialize(PlantEleocurling *this)

{
  RtObject *this_00;
  PlantAnimRig_Eleocurling *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Eleocurling>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_Mandrake::SetPlant((PlantAnimRig_Mandrake *)pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  SetState(this,0xb);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEleocurling::ApplyPlantfood() */

void __thiscall PlantEleocurling::ApplyPlantfood(PlantEleocurling *this)

{
  PopAnimRig *this_00;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  SetState(this,5);
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::Color::Color(aCStack_18,1);
  PopAnimRig::SetPAMColor(this_00,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEleocurling::CancelPlantfood() */

void __thiscall PlantEleocurling::CancelPlantfood(PlantEleocurling *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetState(this,0xb);
  return;
}


/* PlantEleocurling::Idle() */

void __thiscall PlantEleocurling::Idle(PlantEleocurling *this)

{
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 0xb:
  case 0xc:
    SetState(this,0xb);
    return;
  case 0xd:
  case 0xe:
    SetState(this,0xd);
    return;
  default:
    return;
  }
}


/* PlantEleocurling::FindTargetAndFire(PlantWeapon) */

undefined8 PlantEleocurling::FindTargetAndFire(PlantEleocurling *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xb) {
      uVar2 = 1;
      SetState(param_1,0xc);
    }
    else {
      uVar2 = 1;
      if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xd) {
        SetState(param_1,0xe);
        return 1;
      }
    }
  }
  return uVar2;
}


/* PlantEleocurling::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEleocurling::onAnimStoppedCallback(PlantEleocurling *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack1");
  if (bVar1) {
    SetState(this,0xd);
    return;
  }
  bVar1 = std::operator==(param_1,"attack2");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"recover_off");
    if (!bVar1) {
      return;
    }
    SetState(this,0xb);
    return;
  }
  SetState(this,0xf);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04238648 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantEleocurling::UpdateActions() */

void __thiscall PlantEleocurling::UpdateActions(PlantEleocurling *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 extraout_var [12];
  float fVar8;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xf) {
    fVar6 = (float)PVZ_T();
    if (fVar6 <= *(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128)) {
      Plant::GetProps();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar5 = FUN_04234c1c(*(undefined8 *)(lVar5 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar8 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar6 = (float)PVZ_T();
      fVar7 = (float)FUN_04234a90(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
      fVar6 = 1.0 - (fVar8 - fVar6) / (fVar7 * *(float *)(lVar5 + 0x28));
      fVar6 = fVar6 * fVar6;
      fVar6 = fVar6 * fVar6 * 9.424778 + 3.1415927;
      cosf(fVar6);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar2._4_12_ = extraout_var;
      auVar2._0_4_ = fVar6;
      fVar6 = CurveEvaluate<float>
                        (auVar2,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar6 * 255.0);
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
      SetState(this,0x10);
    }
  }
  else if (iVar1 == 0x10) {
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar3 = PopAnimRig::IsPlayingAnything(pPVar4);
    if (cVar3 == '\0') {
      SetState(this,0xb);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

