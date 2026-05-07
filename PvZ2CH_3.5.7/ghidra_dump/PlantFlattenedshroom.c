// Class: PlantFlattenedshroom


/* PlantFlattenedshroom::PlantFlattenedshroom() */

void __thiscall PlantFlattenedshroom::PlantFlattenedshroom(PlantFlattenedshroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067433e0;
  return;
}


/* PlantFlattenedshroom::StaticNew() */

PlantFlattenedshroom * PlantFlattenedshroom::StaticNew(void)

{
  PlantFlattenedshroom *this;
  
  this = ::operator_new(0x30);
  PlantFlattenedshroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlattenedshroom::StaticClassInit() */

void PlantFlattenedshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFlattenedshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03bff024,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFlattenedshroom::StaticGetClass() */

long * PlantFlattenedshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFlattenedshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFlattenedshroom::GetClass() const */

long * PlantFlattenedshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFlattenedshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFlattenedshroom::~PlantFlattenedshroom() */

void __thiscall PlantFlattenedshroom::~PlantFlattenedshroom(PlantFlattenedshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_067433e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFlattenedshroom::~PlantFlattenedshroom() */

void __thiscall PlantFlattenedshroom::~PlantFlattenedshroom(PlantFlattenedshroom *this)

{
  ~PlantFlattenedshroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantFlattenedshroom::UpdateActions() */

void __thiscall PlantFlattenedshroom::UpdateActions(PlantFlattenedshroom *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long *plVar2;
  UIEasyButtonWidget *this_01;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 0xb)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this_01 + 200) = 0xc;
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      (**(code **)(*plVar2 + 0x118))();
    }
  }
  return;
}


/* PlantFlattenedshroom::GetBlockTime() */

undefined4 __thiscall PlantFlattenedshroom::GetBlockTime(PlantFlattenedshroom *this)

{
  long lVar1;
  
  lVar1 = FUN_03bff9dc(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlattenedshroom::FlyThroughAir(Sexy::SexyVector2, Sexy::SexyVector2) */

void PlantFlattenedshroom::FlyThroughAir
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
  plVar1 = (long *)FUN_03bffad8(*(undefined8 *)(param_5 + 0x10));
  (**(code **)(*plVar1 + 0x268))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlattenedshroom::OnRelocationComplete() */

void __thiscall PlantFlattenedshroom::OnRelocationComplete(PlantFlattenedshroom *this)

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
    plVar1 = (long *)FUN_03bffad8(lVar2);
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


/* PlantFlattenedshroom::Initialize() */

void __thiscall PlantFlattenedshroom::Initialize(PlantFlattenedshroom *this)

{
  long *plVar1;
  UIEasyButtonWidget *this_00;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  this[0x28] = (PlantFlattenedshroom)0x1;
  *(undefined4 *)(this_00 + 200) = 0xc;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x118))();
  MessageRouter::Post<PlantFlattenedshroom*,PlantFlattenedshroom*>
            ((MessageRouter *)gMessageRouter,Message::BlockSmokeManhole,this);
  MessageRouter::Post<PlantFlattenedshroom*,PlantFlattenedshroom*>
            ((MessageRouter *)gMessageRouter,Message::BlockPipleline,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlattenedshroom::GetSplitLocations() */

void PlantFlattenedshroom::GetSplitLocations(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PlantFramework *in_x0;
  Point *pPVar4;
  int iVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar6;
  Board *pBVar7;
  Point aPStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  iVar6 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  if (0 < iVar6) {
    do {
      for (iVar2 = 0; pBVar7 = *(Board **)(gLawnApp + 0x9f0), iVar2 < *(int *)(pBVar7 + 0xf8);
          iVar2 = iVar2 + 1) {
        Sexy::Point::Point(aPStack_30,iVar2,iVar5);
        Plant::GetType();
        cVar1 = Board::CanPlantAt(pBVar7,aPStack_30,aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if (cVar1 != '\0') {
          Sexy::Point::Point((Point *)aRStack_28,iVar2,iVar5);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,
                     (Point *)aRStack_28);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar6);
  }
  cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (cVar1 == '\0') {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
    iVar5 = 2;
    if (cVar1 != '\0') {
      iVar5 = 3;
    }
    iVar2 = FUN_03bfea2c(local_20,local_18);
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      iVar3 = PlantFramework::Rand(in_x0,iVar2);
      pPVar4 = (Point *)FUN_03bfea38(local_20,(long)iVar3);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,pPVar4);
    } while (iVar6 != iVar5);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFlattenedshroom::DoDuplicate() */

void __thiscall PlantFlattenedshroom::DoDuplicate(PlantFlattenedshroom *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  Plant *this_00;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  GetSplitLocations();
  uVar9 = local_20;
  lVar4 = FUN_03bfea2c(local_20,local_18);
  if (lVar4 != 0) {
    do {
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      puVar5 = (undefined4 *)FUN_03bfea38(uVar9,uVar10);
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      Plant::GetType();
      this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar8,uVar1,uVar2,
                                         (RtWeakPtr<Sexy::ResourceInfo> *)&local_28,1,1,0xffffffff,0
                                         ,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(this_00,true);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_30);
        iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(this_00 + 0x114));
        local_30 = (float)iVar3;
        iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this_00 + 0x110));
        local_2c = (float)iVar3;
        uVar9 = *(undefined8 *)(this_00 + 0xa8);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,*pfVar6,pfVar6[1]);
        FlyThroughAir(local_28,local_24,local_30,local_2c,uVar9);
      }
      uVar9 = local_20;
      uVar10 = uVar10 + 1;
      uVar7 = FUN_03bfea2c(local_20,local_18);
    } while (uVar10 < uVar7);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PlantFlattenedshroom::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantFlattenedshroom::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator!=(param_2,"use_action");
  if (bVar1) {
    return 0;
  }
  uVar2 = DoDuplicate((PlantFlattenedshroom *)param_1);
  return uVar2;
}

