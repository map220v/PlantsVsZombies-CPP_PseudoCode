// Class: EffectObject_StrawburstPlantfood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StrawburstPlantfood::StaticClassInit() */

void EffectObject_StrawburstPlantfood::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_StrawburstPlantfood");
    (*pcVar2)(plVar1,asStack_10,FUN_0426acd8,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_StrawburstPlantfood::StaticGetClass() */

long * EffectObject_StrawburstPlantfood::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_StrawburstPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StrawburstPlantfood::GetClass() const */

long * EffectObject_StrawburstPlantfood::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_StrawburstPlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StrawburstPlantfood::SetInstigator(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
EffectObject_StrawburstPlantfood::SetInstigator
          (EffectObject_StrawburstPlantfood *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined4 uVar1;
  long lVar2;
  RtObject *this_00;
  Plant *this_01;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar1 = FUN_04267b70(*(undefined4 *)(lVar2 + 0x24));
  *(undefined4 *)(this + 0x11c) = uVar1;
  *(undefined4 *)(this + 0x118) = 0x3f800000;
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this_01 = Sexy::RtObject::Cast<Plant>(this_00);
  if (this_01 != (Plant *)0x0) {
    uVar1 = Plant::GetTotalDamageRate(this_01);
    *(undefined4 *)(this + 0x118) = uVar1;
  }
  return;
}


/* EffectObject_StrawburstPlantfood::EffectObject_StrawburstPlantfood() */

void __thiscall
EffectObject_StrawburstPlantfood::EffectObject_StrawburstPlantfood
          (EffectObject_StrawburstPlantfood *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_0681ed10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  return;
}


/* EffectObject_StrawburstPlantfood::StaticNew() */

EffectObject_StrawburstPlantfood * EffectObject_StrawburstPlantfood::StaticNew(void)

{
  EffectObject_StrawburstPlantfood *this;
  
  this = ::operator_new(0x138);
  EffectObject_StrawburstPlantfood(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StrawburstPlantfood::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType
   const>, int, int) */

void EffectObject_StrawburstPlantfood::onEffectObjectInitialize
               (UIWidget *param_1,RtWeakPtrBase *param_2)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onPopAnimCommand");
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::RtReflectionDelegate(aRStack_50,aRStack_60,aRStack_58);
  PopAnimRig::SetPopAnimCommandDelegate(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_StrawburstPlantfood::~EffectObject_StrawburstPlantfood() */

void __thiscall
EffectObject_StrawburstPlantfood::~EffectObject_StrawburstPlantfood
          (EffectObject_StrawburstPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_0681ed10;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x120));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_StrawburstPlantfood::~EffectObject_StrawburstPlantfood() */

void __thiscall
EffectObject_StrawburstPlantfood::~EffectObject_StrawburstPlantfood
          (EffectObject_StrawburstPlantfood *this)

{
  ~EffectObject_StrawburstPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StrawburstPlantfood::takeListDamage(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >, float) */

void __thiscall
EffectObject_StrawburstPlantfood::takeListDamage
          (float param_1,EffectObject_StrawburstPlantfood *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  EffectObject_StrawburstPlantfoodProps *pEVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  Zombie *this_00;
  RtObject *this_01;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  pEVar4 = EffectObject::GetProps<EffectObject_StrawburstPlantfoodProps>();
  local_68 = 0;
  local_58 = 0x400;
  local_60 = *(float *)(this + 0x118) * *(float *)(pEVar4 + 0x30) * param_1;
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_3);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    this_01 = (RtObject *)*puVar5;
    cVar2 = RealObject::IsOnOpposingTeam(this_01,*(undefined4 *)(this + 0x11c));
    if (cVar2 != '\0') {
      pGVar6 = Sexy::RtObject::Cast<GridItem>(this_01);
      this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (((pGVar6 != (GridItem *)0x0) &&
          (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar2 != '\0')) ||
         ((this_00 != (Zombie *)0x0 &&
          ((cVar2 = Zombie::IsTargetable(this_00), cVar2 != '\0' &&
           (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)))))) {
        (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)&local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StrawburstPlantfood::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void EffectObject_StrawburstPlantfood::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EffectObject_StrawburstPlantfood *pEVar6;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_special");
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    uVar2 = operator|(2,4);
    EntityFinder::GetEntitiesOnBoard(avStack_38,uVar2);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
    pEVar6._0_4_ = (EffectObject_StrawburstPlantfood *)0x3f800000;
  }
  else {
    bVar1 = std::operator==(param_4,"use_special1");
    if (bVar1) {
      iVar4 = 3;
LAB_0426e4e0:
      iVar5 = 2;
      iVar3 = 3;
    }
    else {
      bVar1 = std::operator==(param_4,"use_special2");
      if (!bVar1) {
        bVar1 = std::operator==(param_4,"use_special3");
        if (!bVar1) goto LAB_0426e540;
        iVar4 = 0;
        goto LAB_0426e4e0;
      }
      iVar5 = 3;
      iVar3 = 5;
      iVar4 = 1;
    }
    Sexy::Insets::Insets(aIStack_48,iVar3,iVar4,3,iVar5);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    uVar2 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(avStack_38,uVar2,aIStack_48);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
    pEVar6._0_4_ = (EffectObject_StrawburstPlantfood *)0x3eaaaaab;
  }
  takeListDamage(pEVar6._0_4_,param_1,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
LAB_0426e540:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

