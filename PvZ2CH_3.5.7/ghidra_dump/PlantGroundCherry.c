// Class: PlantGroundCherry


/* PlantGroundCherry::onAnimStoppedCallback(std::string const&) */

void PlantGroundCherry::onAnimStoppedCallback(string *param_1)

{
  Plant::KillPlant(*(Plant **)(param_1 + 0x10),1,0,0x8000000000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroundCherry::ApplyPlantfood() */

void __thiscall PlantGroundCherry::ApplyPlantfood(PlantGroundCherry *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar3 = Effect_ScreenFade::Create();
  if (((DAT_06af4078 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af4078), iVar2 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06af40f8,0x46,0xb4,0xfa,100);
    __cxa_guard_release(&DAT_06af4078);
  }
  if (((DAT_06af40f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af40f0), iVar2 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06af4090,0xff,0xff,0xff,200);
    __cxa_guard_release(&DAT_06af40f0);
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06af40f8);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar3,1,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06af4090);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar3,0,aIStack_18,2);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroundCherry::StaticClassInit() */

void PlantGroundCherry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGroundCherry");
    (*pcVar2)(plVar1,asStack_10,FUN_0422c220,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroundCherry::StaticGetClass() */

long * PlantGroundCherry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGroundCherry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGroundCherry::GetClass() const */

long * PlantGroundCherry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGroundCherry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGroundCherry::PlantGroundCherry() */

void __thiscall PlantGroundCherry::PlantGroundCherry(PlantGroundCherry *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680fd40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantGroundCherry::StaticNew() */

PlantGroundCherry * PlantGroundCherry::StaticNew(void)

{
  PlantGroundCherry *this;
  
  this = ::operator_new(0x50);
  PlantGroundCherry(this);
  return this;
}


/* PlantGroundCherry::~PlantGroundCherry() */

void __thiscall PlantGroundCherry::~PlantGroundCherry(PlantGroundCherry *this)

{
  *(undefined ***)this = &PTR_GetClass_0680fd40;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGroundCherry::~PlantGroundCherry() */

void __thiscall PlantGroundCherry::~PlantGroundCherry(PlantGroundCherry *this)

{
  ~PlantGroundCherry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroundCherry::GetLightUpGrid() */

void __thiscall PlantGroundCherry::GetLightUpGrid(PlantGroundCherry *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30);
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    Sexy::Point::Point(aPStack_10,iVar3,iVar4);
    cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
  }
  if (this[0x28] == (PlantGroundCherry)0x0) {
    uVar7 = 0xfffffffe;
    iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    iVar3 = iVar3 + -2;
    do {
      iVar6 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
      if (iVar6 < 1) {
        if (cVar2 == '\0') {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 != '\0') goto LAB_0422cc74;
        }
        else {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 == '\0') {
LAB_0422cc74:
            Sexy::Point::Point(aPStack_10,iVar4 + -2,iVar3);
            cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
            if (cVar1 != '\0') goto LAB_0422cabc;
          }
        }
        Sexy::Point::Point(aPStack_10,iVar4 + -2,iVar3);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
      }
LAB_0422cabc:
      if (1 < iVar6) {
LAB_0422caf8:
        if (cVar2 == '\0') goto LAB_0422cc38;
        cVar1 = NewPVPUtils::IsPlayingNewPVP();
        if (cVar1 == '\0') goto LAB_0422cc44;
LAB_0422cb08:
        Sexy::Point::Point(aPStack_10,iVar4,iVar3);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
      }
      else {
        if (cVar2 != '\0') {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 == '\0') {
            Sexy::Point::Point(aPStack_10,iVar4 + -1,iVar3);
            cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
            if (cVar1 != '\0') goto LAB_0422caf8;
          }
LAB_0422cadc:
          Sexy::Point::Point(aPStack_10,iVar4 + -1,iVar3);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
          goto LAB_0422caf8;
        }
        cVar1 = NewPVPUtils::IsPlayingNewPVP();
        if (cVar1 == '\0') goto LAB_0422cadc;
        Sexy::Point::Point(aPStack_10,iVar4 + -1,iVar3);
        cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
        if (cVar1 == '\0') goto LAB_0422cadc;
LAB_0422cc38:
        cVar1 = NewPVPUtils::IsPlayingNewPVP();
        if (cVar1 == '\0') goto LAB_0422cb08;
LAB_0422cc44:
        Sexy::Point::Point(aPStack_10,iVar4,iVar3);
        cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
        if (cVar1 == '\0') goto LAB_0422cb08;
      }
      if (1 >= iVar6) {
        if (cVar2 == '\0') {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 != '\0') goto LAB_0422cbdc;
        }
        else {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 == '\0') {
LAB_0422cbdc:
            Sexy::Point::Point(aPStack_10,iVar4 + 1,iVar3);
            cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
            if (cVar1 != '\0') goto LAB_0422cb58;
          }
        }
        Sexy::Point::Point(aPStack_10,iVar4 + 1,iVar3);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
      }
LAB_0422cb58:
      if (iVar6 < 1) {
        if (cVar2 == '\0') {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 != '\0') goto LAB_0422cba8;
        }
        else {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 == '\0') {
LAB_0422cba8:
            Sexy::Point::Point(aPStack_10,iVar4 + 2,iVar3);
            cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
            if (cVar1 != '\0') goto LAB_0422cb88;
          }
        }
        Sexy::Point::Point(aPStack_10,iVar4 + 2,iVar3);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
      }
LAB_0422cb88:
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 1;
    } while (uVar7 != 3);
  }
  else {
    iVar3 = 0;
    lVar5 = *(long *)(gLawnApp + 0x9f0);
    if (0 < *(int *)(lVar5 + 0xf8)) {
      do {
        if (-2 < *(int *)(lVar5 + 0xfc)) {
          iVar4 = -1;
          if (cVar2 == '\0') {
            do {
              while (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0') {
LAB_0422c900:
                iVar6 = iVar4 + 1;
                Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
                lVar5 = *(long *)(gLawnApp + 0x9f0);
                iVar4 = iVar6;
                if (*(int *)(lVar5 + 0xfc) < iVar6) goto LAB_0422c980;
              }
              Sexy::Point::Point(aPStack_10,iVar3,iVar4);
              cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
              if (cVar1 == '\0') goto LAB_0422c900;
              iVar4 = iVar4 + 1;
              lVar5 = *(long *)(gLawnApp + 0x9f0);
            } while (iVar4 <= *(int *)(lVar5 + 0xfc));
          }
          else {
            do {
              cVar1 = NewPVPUtils::IsPlayingNewPVP();
              if (cVar1 == '\0') {
LAB_0422ca04:
                Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
              }
              else {
                Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
                if (cVar1 != '\0') goto LAB_0422ca04;
              }
              iVar4 = iVar4 + 1;
              lVar5 = *(long *)(gLawnApp + 0x9f0);
            } while (iVar4 <= *(int *)(lVar5 + 0xfc));
          }
        }
LAB_0422c980:
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar5 + 0xf8));
    }
  }
  cVar1 = FUN_0422bdf8(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
  if (cVar1 != '\0') {
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroundCherry::Initialize() */

void __thiscall PlantGroundCherry::Initialize(PlantGroundCherry *this)

{
  Plant *pPVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar3 = PVZ_EOT();
  this[0x28] = (PlantGroundCherry)0x0;
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = uVar3;
  GetLightUpGrid(this);
  MessageRouter::Post<PlantFramework*,int,PlantGroundCherry*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,0);
  pPVar1 = (Plant *)FUN_0422c064(*(undefined8 *)(this + 0x10));
  PlantAnimRig_GroundCherry::SetPlantGroundCherry(pPVar1);
  uVar2 = FUN_0422c064(*(undefined8 *)(this + 0x10));
  std::string::string(asStack_10,"idle");
  PlantAnimRig_GroundCherry::SetIdleLabel(uVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroundCherry::UpdateActions() */

void __thiscall PlantGroundCherry::UpdateActions(PlantGroundCherry *this)

{
  char cVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x2c) < fVar7) {
    uVar8 = PVZ_EOT();
    this[0x28] = (PlantGroundCherry)0x0;
    *(undefined4 *)(this + 0x2c) = uVar8;
    GetLightUpGrid(this);
    MessageRouter::Post<PlantFramework*,int,PlantGroundCherry*,StreetLampChangeState>
              ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,1);
  }
  pcVar6 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar6 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar6)();
  }
  if (cVar1 == '\0') {
    fVar7 = (float)PVZ_T();
    fVar9 = *(float *)(this + 0x48);
    lVar2 = FUN_0422c0ec(*(undefined8 *)(this + 0x10));
    if (fVar9 + *(float *)(lVar2 + 700) * 0.33333334 < fVar7) {
      fVar7 = (float)PVZ_T();
      fVar9 = *(float *)(this + 0x48);
      lVar2 = FUN_0422c0ec(*(undefined8 *)(this + 0x10));
      if (fVar7 < fVar9 + *(float *)(lVar2 + 700) * 0.6666667) {
        uVar4 = FUN_0422c064(*(undefined8 *)(this + 0x10));
        std::string::string(asStack_58,"idle01");
        PlantAnimRig_GroundCherry::SetIdleLabel(uVar4,asStack_58);
        std::string::~string(asStack_58);
        nop();
        if (*(int *)(this + 0x4c) == 0) {
          plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar5 + 0x118))();
          *(undefined4 *)(this + 0x4c) = 1;
        }
        goto LAB_0422ce2c;
      }
    }
    fVar7 = (float)PVZ_T();
    fVar9 = *(float *)(this + 0x48);
    lVar2 = FUN_0422c0ec(*(undefined8 *)(this + 0x10));
    if (fVar9 + *(float *)(lVar2 + 700) * 0.6666667 <= fVar7) {
      fVar7 = (float)PVZ_T();
      fVar9 = *(float *)(this + 0x48);
      lVar2 = FUN_0422c0ec(*(undefined8 *)(this + 0x10));
      if (fVar7 < fVar9 + *(float *)(lVar2 + 700)) {
        uVar4 = FUN_0422c064(*(undefined8 *)(this + 0x10));
        std::string::string(asStack_58,"idle02");
        PlantAnimRig_GroundCherry::SetIdleLabel(uVar4,asStack_58);
        std::string::~string(asStack_58);
        nop();
        if (*(int *)(this + 0x4c) == 1) {
          plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar5 + 0x118))();
          *(undefined4 *)(this + 0x4c) = 2;
        }
        goto LAB_0422ce2c;
      }
    }
    fVar7 = (float)PVZ_T();
    fVar9 = *(float *)(this + 0x48);
    lVar2 = FUN_0422c0ec(*(undefined8 *)(this + 0x10));
    if ((fVar9 + *(float *)(lVar2 + 700) <= fVar7) && (*(int *)(this + 0x4c) == 2)) {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"death02");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      *(undefined4 *)(this + 0x4c) = 3;
    }
  }
LAB_0422ce2c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantGroundCherry::DoPlantFoodEffect() */

void __thiscall PlantGroundCherry::DoPlantFoodEffect(PlantGroundCherry *this)

{
  long lVar1;
  float fVar2;
  
  this[0x28] = (PlantGroundCherry)0x1;
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_0422c0ec(*(undefined8 *)(this + 0x10));
  *(float *)(this + 0x2c) = fVar2 + *(float *)(lVar1 + 0x2b8);
  GetLightUpGrid(this);
  MessageRouter::Post<PlantFramework*,int,PlantGroundCherry*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,0);
  return;
}


/* PlantGroundCherry::CancelPlantfood() */

void __thiscall PlantGroundCherry::CancelPlantfood(PlantGroundCherry *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  DoPlantFoodEffect(this);
  return;
}


/* PlantGroundCherry::onKilled(bool) */

void PlantGroundCherry::onKilled(bool param_1)

{
  GetLightUpGrid((PlantGroundCherry *)(ulong)param_1);
  MessageRouter::Post<PlantFramework*,int,PlantGroundCherry*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,
             (PlantGroundCherry *)(ulong)param_1,2);
  return;
}


/* PlantGroundCherry::NotifySetHidden(bool, bool) */

void __thiscall
PlantGroundCherry::NotifySetHidden(PlantGroundCherry *this,bool param_1,bool param_2)

{
  undefined8 uVar1;
  
  GetLightUpGrid(this);
  if (param_1 < param_2) {
    uVar1 = 0;
  }
  else {
    if (param_1 <= param_2) {
      return;
    }
    uVar1 = 2;
  }
  MessageRouter::Post<PlantFramework*,int,PlantGroundCherry*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,uVar1);
  return;
}

