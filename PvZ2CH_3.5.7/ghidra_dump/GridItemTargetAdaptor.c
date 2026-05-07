// Class: GridItemTargetAdaptor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTargetAdaptor::StaticClassInit() */

void GridItemTargetAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTargetAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_03604ea8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTargetAdaptor::StaticGetClass() */

long * GridItemTargetAdaptor::StaticGetClass(void)

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
  uVar2 = GridTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTargetAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTargetAdaptor::GridItemTargetAdaptor() */

void __thiscall GridItemTargetAdaptor::GridItemTargetAdaptor(GridItemTargetAdaptor *this)

{
  GridTargetAdaptor::GridTargetAdaptor((GridTargetAdaptor *)this);
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_06666d60;
  return;
}


/* GridItemTargetAdaptor::StaticNew() */

GridItemTargetAdaptor * GridItemTargetAdaptor::StaticNew(void)

{
  GridItemTargetAdaptor *this;
  
  this = ::operator_new(0x30);
  GridItemTargetAdaptor(this);
  return this;
}


/* GridItemTargetAdaptor::~GridItemTargetAdaptor() */

void __thiscall GridItemTargetAdaptor::~GridItemTargetAdaptor(GridItemTargetAdaptor *this)

{
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_06666d60;
  GridTargetAdaptor::~GridTargetAdaptor((GridTargetAdaptor *)this);
  return;
}


/* GridItemTargetAdaptor::~GridItemTargetAdaptor() */

void __thiscall GridItemTargetAdaptor::~GridItemTargetAdaptor(GridItemTargetAdaptor *this)

{
  ~GridItemTargetAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTargetAdaptor::isValidTargetPosition(Sexy::Point const&) */

void __thiscall
GridItemTargetAdaptor::isValidTargetPosition(GridItemTargetAdaptor *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  GridItemTargetProperty *pGVar3;
  CardUtils *this_00;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),
             (int)___stack_chk_guard);
  pGVar3 = CardTargetAdaptor::GetProps<GridItemTargetProperty>((CardTargetAdaptor *)this);
  if (pGVar3[0x34] != (GridItemTargetProperty)0x0) {
    uVar9 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    this_00 = (CardUtils *)
              Board::GetGridItemsAt
                        (*(Board **)(gLawnApp + 0x9f0),local_48,local_44,(vector *)&local_20);
    CardUtils::GetCardSettingProperty(this_00);
    while( true ) {
      uVar6 = local_20;
      uVar8 = FUN_03603c54(local_20,local_18);
      if (uVar8 <= uVar9) break;
      puVar4 = (undefined8 *)FUN_03603c60(uVar6,uVar9);
      cVar2 = (**(code **)(*(long *)*puVar4 + 0x1f8))((long *)*puVar4);
      if (cVar2 != '\0') {
LAB_03607dc8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                  ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
        bVar1 = false;
        goto LAB_03607c60;
      }
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar5 + 0x40));
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar5 + 0x40));
      FUN_03603c60(local_20,uVar9);
      GridItem::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar5 + 8);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x40));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if (bVar1) goto LAB_03607dc8;
      uVar9 = uVar9 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::vector<GridItem*,std::allocator<GridItem*>>::~vector
              ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
  }
  if (local_48 == -1) {
    bVar1 = false;
  }
  else {
    bVar1 = local_44 != -1;
  }
LAB_03607c60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

