// Class: PlantPeach


/* PlantPeach::Initialize() */

void __thiscall PlantPeach::Initialize(PlantPeach *this)

{
  float fVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  fVar1 = *(float *)(*(long *)(this + 0x10) + 0xc0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(*(long *)(this + 0x10) + 0xb4),fVar1 * 0.125,fVar1 * 0.5);
  return;
}


/* PlantPeach::PlantPeach() */

void __thiscall PlantPeach::PlantPeach(PlantPeach *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067cb460;
  return;
}


/* PlantPeach::StaticNew() */

PlantPeach * PlantPeach::StaticNew(void)

{
  PlantPeach *this;
  
  this = ::operator_new(0x28);
  PlantPeach(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::StaticClassInit() */

void PlantPeach::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPeach");
    (*pcVar2)(plVar1,asStack_10,FUN_0408568c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeach::StaticGetClass() */

long * PlantPeach::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeach",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeach::GetClass() const */

long * PlantPeach::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeach",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeach::ShouldPlayAttactUpEffect() */

bool __thiscall PlantPeach::ShouldPlayAttactUpEffect(PlantPeach *this)

{
  int iVar1;
  
  iVar1 = FUN_04085444(*(undefined8 *)(this + 0x10));
  return 1 < iVar1;
}


/* PlantPeach::~PlantPeach() */

void __thiscall PlantPeach::~PlantPeach(PlantPeach *this)

{
  *(undefined ***)this = &PTR_GetClass_067cb460;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPeach::~PlantPeach() */

void __thiscall PlantPeach::~PlantPeach(PlantPeach *this)

{
  ~PlantPeach(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::PlantCanBeCured(Plant*) */

void PlantPeach::PlantCanBeCured(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  PlantVamporcini *this;
  undefined8 uVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==(asStack_18,"vamporcini");
  if ((bVar1) &&
     (this = Sexy::RtObject::Cast<PlantVamporcini>((RtObject *)param_1),
     this != (PlantVamporcini *)0x0)) {
    cVar2 = PlantVamporcini::GetHandleDeath(this);
    uVar4 = 0;
    if (cVar2 != '\0') goto LAB_040858d8;
  }
  bVar1 = std::operator==(asStack_18,"iceburg");
  if ((((bVar1) || (bVar1 = std::operator==(asStack_18,"cherry_bomb"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"coffeebean"), bVar1)) ||
     (((bVar1 = std::operator==(asStack_18,"squash"), bVar1 ||
       (bVar1 = std::operator==(asStack_18,"jalapeno"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"powerlily"), bVar1)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
LAB_040858d8:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantPeach::doTakeCure(Plant*) */

void __thiscall PlantPeach::doTakeCure(PlantPeach *this,Plant *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x1e0);
  lVar1 = FUN_04085a88(*(undefined8 *)(this + 0x10));
  (*pcVar2)(param_1,*(undefined4 *)(lVar1 + 0x2c4),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::ApplyPlantfood() */

void __thiscall PlantPeach::ApplyPlantfood(PlantPeach *this)

{
  long lVar1;
  Plant *pPVar2;
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  pPVar2 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodStartedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_f0,asStack_e8);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar2,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::IsPlantNeedCure() */

void __thiscall PlantPeach::IsPlantNeedCure(PlantPeach *this)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar2 = operator|(4,1);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2,
             auStack_30,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
  uVar7 = local_20;
  uVar3 = FUN_0408546c(local_20,local_18);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04085478(uVar7,uVar6);
      if ((RtObject *)*puVar4 != (RtObject *)0x0) {
        pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
        if (pPVar5 != (Plant *)0x0) {
          cVar1 = PlantCanBeCured(pPVar5);
          if (cVar1 != '\0') goto LAB_04085d40;
        }
        uVar7 = local_20;
        uVar3 = FUN_0408546c(local_20,local_18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  cVar1 = '\0';
LAB_04085d40:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::CurePlant(PlantAction const&) */

void PlantPeach::CurePlant(PlantAction *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Plant *pPVar6;
  GridItem *pGVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  RealObject *this;
  code *pcVar11;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  this = *(RealObject **)(param_1 + 0x10);
  std::string::string((string *)&local_20,"Play_Plant_Peach_Heal");
  RealObject::PlayPositionalSound(this,(string *)&local_20,0.0);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)param_1 + 0x2b8))(auStack_30,param_1,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = operator|(4,1);
  EntityFinder::GetEntitiesTouchingRectangle
            ((string *)&local_20,uVar3,auStack_30,*(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,
             *(int *)(*(long *)(param_1 + 0x10) + 0x110) + 1);
  uVar10 = local_20;
  uVar4 = FUN_0408546c(local_20,local_18);
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04085478(uVar10,uVar9);
      if ((RtObject *)*puVar5 != (RtObject *)0x0) {
        pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
        if ((pPVar6 == (Plant *)0x0) || (cVar1 = PlantCanBeCured(pPVar6), cVar1 == '\0')) {
          uVar10 = local_20;
          puVar5 = (undefined8 *)FUN_04085478(local_20,uVar9);
          if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
             (pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), uVar10 = local_20,
             pGVar7 != (GridItem *)0x0)) {
            GridItem::GetType();
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            FUN_05475d88(asStack_40,lVar8 + 8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            bVar2 = std::operator==(asStack_40,"lilypad");
            if (bVar2) {
              pcVar11 = *(code **)(*(long *)pGVar7 + 0x1e8);
              lVar8 = FUN_04085a88(*(undefined8 *)(param_1 + 0x10));
              (*pcVar11)(pGVar7,*(undefined4 *)(lVar8 + 0x2c4),1);
            }
            std::string::~string(asStack_40);
            uVar10 = local_20;
          }
        }
        else {
          doTakeCure((PlantPeach *)param_1,pPVar6);
          uVar10 = local_20;
        }
        uVar4 = FUN_0408546c(uVar10,local_18);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::setAroundInvincible(bool) */

void __thiscall PlantPeach::setAroundInvincible(PlantPeach *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar2 = operator|(4,1);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2,
             auStack_30,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
  uVar8 = local_20;
  uVar3 = FUN_0408546c(local_20,local_18);
  if (uVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04085478(uVar8,uVar7);
      if ((RtObject *)*puVar4 != (RtObject *)0x0) {
        pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
        if (((pPVar5 != (Plant *)0x0) && (pPVar5 != *(Plant **)(this + 0x10))) &&
           (cVar1 = PlantCanBeCured(pPVar5), cVar1 != '\0')) {
          if ((param_1) && (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0')
             ) {
            Plant::FullHealth(pPVar5);
          }
          lVar6 = FUN_04085a88(*(undefined8 *)(this + 0x10));
          fVar10 = *(float *)(lVar6 + 0x2b8);
          fVar9 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
          Plant::SetInvincible(pPVar5,param_1,true,fVar9 + fVar10);
        }
        uVar8 = local_20;
        uVar3 = FUN_0408546c(local_20,local_18);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  lVar6 = FUN_04085a88(*(undefined8 *)(this + 0x10));
  pPVar5 = *(Plant **)(this + 0x10);
  fVar10 = *(float *)(lVar6 + 0x2b8);
  fVar9 = (float)Plant::GetGeneSkillBoost(pPVar5);
  Plant::SetInvincible(pPVar5,param_1,false,fVar9 + fVar10);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeach::onPlantfoodStarted() */

void __thiscall PlantPeach::onPlantfoodStarted(PlantPeach *this)

{
  setAroundInvincible(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::PlayAttackUpEffect() */

void __thiscall PlantPeach::PlayAttackUpEffect(PlantPeach *this)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Plant *this_00;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ShouldPlayAttactUpEffect(this);
  if (cVar1 != '\0') {
    uVar5 = 0;
    (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar2 = operator|(4,1);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2,
               auStack_30,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
    uVar6 = local_20;
    uVar3 = FUN_0408546c(local_20,local_18);
    if (uVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04085478(uVar6,uVar5);
        if ((RtObject *)*puVar4 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
          if ((this_00 != (Plant *)0x0) && (cVar1 = PlantCanBeCured(this_00), cVar1 != '\0')) {
            Plant::PlayAttackUpEffect(this_00);
          }
          uVar6 = local_20;
          uVar3 = FUN_0408546c(local_20,local_18);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeach::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPeach::onAnimStoppedCallback(PlantPeach *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"special");
  if (!bVar1) {
    return;
  }
  PlayAttackUpEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::UpdateAttackUpValue() */

void __thiscall PlantPeach::UpdateAttackUpValue(PlantPeach *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Plant *this_00;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ShouldPlayAttactUpEffect(this);
  if (cVar1 != '\0') {
    uVar7 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_04085444(uVar7);
    if (iVar2 == 2) {
      lVar6 = FUN_04085a88(uVar7);
      fVar9 = *(float *)(lVar6 + 700);
    }
    else {
      fVar9 = 0.0;
      if (2 < iVar2) {
        lVar6 = FUN_04085a88(uVar7);
        fVar9 = *(float *)(lVar6 + 0x2c0);
      }
    }
    uVar8 = 0;
    (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar3 = operator|(4,1);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
               auStack_30,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
    uVar7 = local_20;
    uVar4 = FUN_0408546c(local_20,local_18);
    if (uVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_04085478(uVar7,uVar8);
        if ((RtObject *)*puVar5 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
          if ((this_00 != (Plant *)0x0) && (cVar1 = PlantCanBeCured(this_00), cVar1 != '\0')) {
            lVar6 = FUN_04085a88(*(undefined8 *)(this + 0x10));
            Plant::SetAttackUpValue(this_00,true,fVar9,*(float *)(lVar6 + 0x2c8));
          }
          uVar7 = local_20;
          uVar4 = FUN_0408546c(local_20,local_18);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeach::UpdateActions() */

void __thiscall PlantPeach::UpdateActions(PlantPeach *this)

{
  char cVar1;
  long *plVar2;
  Plant *this_00;
  code *pcVar3;
  float fVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
    fVar4 = (float)PVZ_T();
    this_00 = *(Plant **)(this + 0x10);
    if (*(float *)(this_00 + 300) < fVar4) {
      cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar1 != '\0') {
        cVar1 = IsPlantNeedCure(this);
        if (cVar1 == '\0') {
          this_00 = *(Plant **)(this + 0x10);
        }
        else {
          plVar2 = (long *)FUN_04085a00(*(undefined8 *)(this + 0x10));
          pcVar3 = *(code **)(*plVar2 + 600);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          (*pcVar3)(plVar2,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          UpdateAttackUpValue(this);
          this_00 = *(Plant **)(this + 0x10);
        }
      }
      Plant::ResetLaunchTimer(this_00,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

