// Class: AddConditionEffect


/* AddConditionEffect::AddConditionEffect() */

void __thiscall AddConditionEffect::AddConditionEffect(AddConditionEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_066676f0;
  return;
}


/* AddConditionEffect::StaticNew() */

AddConditionEffect * AddConditionEffect::StaticNew(void)

{
  AddConditionEffect *this;
  
  this = ::operator_new(0x28);
  AddConditionEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddConditionEffect::StaticClassInit() */

void AddConditionEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"AddConditionEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360c8d4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddConditionEffect::StaticGetClass() */

long * AddConditionEffect::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddConditionEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddConditionEffect::~AddConditionEffect() */

void __thiscall AddConditionEffect::~AddConditionEffect(AddConditionEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_066676f0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* AddConditionEffect::~AddConditionEffect() */

void __thiscall AddConditionEffect::~AddConditionEffect(AddConditionEffect *this)

{
  ~AddConditionEffect(this);
  AK::FreeHook(this);
  return;
}


/* AddConditionEffect::GetConditionDuration() */

void __thiscall AddConditionEffect::GetConditionDuration(AddConditionEffect *this)

{
  RtObject *this_00;
  AddConditionEffectProperty *pAVar1;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pAVar1 = Sexy::RtObject::Cast<AddConditionEffectProperty>(this_00);
  if (0.0 < *(float *)(pAVar1 + 0x10)) {
    return;
  }
  PVZ_EOT();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddConditionEffect::DoEffect() */

void __thiscall AddConditionEffect::DoEffect(AddConditionEffect *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RtObject *this_00;
  AddConditionEffectProperty *pAVar6;
  long lVar7;
  GridTargetAdaptor *pGVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  undefined1 auVar11 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x20) = 2;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pAVar6 = Sexy::RtObject::Cast<AddConditionEffectProperty>(this_00);
  if (pAVar6 != (AddConditionEffectProperty *)0x0) {
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar5 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Insets::Insets((Insets *)&local_30,0,0,iVar4,iVar5);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
    ;
    pGVar8 = Sexy::RtObject::Cast<GridTargetAdaptor>(*(RtObject **)(lVar7 + 0x18));
    if (pGVar8 != (GridTargetAdaptor *)0x0) {
      GridTargetAdaptor::GetTargetRect();
      local_30 = local_20;
      uStack_28 = uStack_18;
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               (Insets *)&local_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      if ((pZVar10 != (Zombie *)0x0) &&
         (cVar2 = RealObject::IsOnTeam(pZVar10,*(undefined4 *)(pAVar6 + 0x14)), cVar2 != '\0')) {
        uVar1 = *(undefined4 *)(pAVar6 + 0xc);
        auVar11 = GetConditionDuration(this);
        Zombie::ApplyCondition((Zombie *)auVar11,0,pZVar10,uVar1,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  *(undefined4 *)(this + 0x20) = 3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

