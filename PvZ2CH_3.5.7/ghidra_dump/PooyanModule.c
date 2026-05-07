// Class: PooyanModule


/* PooyanModule::GetPooyanProps() */

void PooyanModule::GetPooyanProps(void)

{
  BasePowerup *in_x0;
  
  BasePowerup::GetType(in_x0);
  nop();
  return;
}


/* PooyanModule::GetPooyanShooter() */

RtWeakPtr<Sexy::SoundResource> * PooyanModule::GetPooyanShooter(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x58));
  return in_x8;
}


/* PooyanModule::preventSave() */

undefined8 PooyanModule::preventSave(void)

{
  return 1;
}


/* PooyanModule::levelStarted() */

void PooyanModule::levelStarted(void)

{
  return;
}


/* PooyanModule::cancelTouch() */

void __thiscall PooyanModule::cancelTouch(PooyanModule *this)

{
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


/* PooyanModule::onReviveOK() */

void __thiscall PooyanModule::onReviveOK(PooyanModule *this)

{
  this[0x20] = (PooyanModule)0x0;
  this[0x1e] = (PooyanModule)0x1;
  this[0x22] = (PooyanModule)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::StaticClassInit() */

void PooyanModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PooyanModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04780bfc,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModule::StaticGetClass() */

long * PooyanModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanModule::setCanTouch(bool) */

void __thiscall PooyanModule::setCanTouch(PooyanModule *this,bool param_1)

{
  this[0x1e] = (PooyanModule)param_1;
  return;
}


/* PooyanModule::SetTutorial(bool) */

void __thiscall PooyanModule::SetTutorial(PooyanModule *this,bool param_1)

{
  this[0x21] = (PooyanModule)param_1;
  return;
}


/* PooyanModule::KillPooyanShooterChooseUI() */

void __thiscall PooyanModule::KillPooyanShooterChooseUI(PooyanModule *this)

{
  if (*(long *)(this + 0x50) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x50));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PooyanModule::CheckPooyanShooterKilled() */

void __thiscall PooyanModule::CheckPooyanShooterKilled(PooyanModule *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  PooyanShooter *pPVar4;
  long lVar5;
  
  if ((this[0x1c] == (PooyanModule)0x0) &&
     ((cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0' ||
      (this[0x20] == (PooyanModule)0x0)))) {
    this_00 = (RtWeakPtr *)(this + 0x58);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pPVar4 = (PooyanShooter *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar5 = PooyanShooter::GetPlantPtr(pPVar4);
      if ((lVar5 != 0) &&
         (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
        pPVar4 = (PooyanShooter *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        lVar5 = PooyanShooter::GetPlantPtr(pPVar4);
        iVar3 = FUN_0477b5a8(*(undefined1 *)(lVar5 + 0x299));
        if (iVar3 != 0) {
          pPVar4 = (PooyanShooter *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PooyanShooter::SetDead(pPVar4,true);
          this[0x22] = (PooyanModule)0x0;
          MessageRouter::Post((_func_void *)gMessageRouter);
          MessageRouter::Post((_func_void *)gMessageRouter);
          return;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::GetShooterPosition() */

void __thiscall PooyanModule::GetShooterPosition(PooyanModule *this)

{
  RtWeakPtr *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  PooyanShooter *pPVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar4) {
    pPVar5 = (PooyanShooter *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar6 = PooyanShooter::GetPlantPtr(pPVar5);
    if (lVar6 != 0) {
      pPVar5 = (PooyanShooter *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)PooyanShooter::GetPlantPtr(pPVar5);
      pSVar7 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar7);
    }
  }
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* PooyanModule::IsPooyanShooterAlive() */

undefined1 __thiscall PooyanModule::IsPooyanShooterAlive(PooyanModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  PooyanShooter *pPVar3;
  long lVar4;
  
  this_00 = (RtWeakPtr *)(this + 0x58);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pPVar3 = (PooyanShooter *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar4 = PooyanShooter::GetPlantPtr(pPVar3);
    if (lVar4 != 0) {
      pPVar3 = (PooyanShooter *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar4 = PooyanShooter::GetPlantPtr(pPVar3);
      iVar2 = FUN_0477b5a8(*(undefined1 *)(lVar4 + 0x299));
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* PooyanModule::OnShooterTakeDamage() */

void __thiscall PooyanModule::OnShooterTakeDamage(PooyanModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  PooyanShooter *pPVar2;
  Plant *this_01;
  long lVar3;
  Plant *this_02;
  float fVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  this_01 = (Plant *)PooyanShooter::GetPlantPtr(pPVar2);
  cVar1 = IsPooyanShooterAlive(this);
  if (cVar1 == '\0') {
    return;
  }
  pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = PooyanShooter::GetPlantPtr(pPVar2);
  *(int *)(this + 0x38) = (int)*(float *)(lVar3 + 0xd8);
  pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  this_02 = (Plant *)PooyanShooter::GetPlantPtr(pPVar2);
  fVar4 = (float)Plant::GetMaxHealth(this_02);
  Plant::SetUpgradePercent(this_01,(float)*(int *)(this + 0x38) / fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::handleTouch(Sexy::Touch const&) */

void __thiscall PooyanModule::handleTouch(PooyanModule *this,Touch *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PooyanShooter *pPVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  Point aPStack_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((this[0x1c] == (PooyanModule)0x0) && (this[0x1e] != (PooyanModule)0x0)) &&
      (cVar1 = IsPooyanShooterAlive(this), cVar1 != '\0')) &&
     ((cVar1 = ZombossFanPullActionHandler::IsPulling((ZombossFanPullActionHandler *)this),
      cVar1 != '\0' || (this[0x19] != (PooyanModule)0x0)))) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
    pPVar4 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = PooyanShooter::canMove(pPVar4);
    if (cVar1 != '\0') {
      Sexy::Touch::Touch(aTStack_40,param_1);
      Board::TranslateBoardPositionToScreenPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
      lVar7 = *(long *)(gLawnApp + 0x9f0);
      iVar2 = FUN_0477c088(*(int *)(lVar7 + 0x48) + local_30);
      iVar3 = FUN_0477c088(local_2c + *(int *)(lVar7 + 0x4c));
      if ((*(long *)(this + 0x40) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
        lVar7 = *(long *)param_1;
switchD_0477cfec_caseD_0:
        *(long *)(this + 0x40) = lVar7;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)iVar2,(float)iVar3);
        this[0x1d] = (PooyanModule)0x0;
        *(ulong *)(this + 0x48) = CONCAT44(uStack_4c,local_50);
        this[0x1b] = (PooyanModule)0x1;
      }
      else {
        lVar7 = *(long *)param_1;
        if (*(long *)(this + 0x40) != lVar7) goto switchD_0477cfec_caseD_2;
        switch(*(undefined4 *)(param_1 + 0x30)) {
        case 0:
          goto switchD_0477cfec_caseD_0;
        case 1:
          if ((this[0x1a] == (PooyanModule)0x0) && (this[0x1f] == (PooyanModule)0x0)) {
            fVar9 = (float)iVar3;
            fVar8 = fVar9;
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,(float)iVar2,fVar9);
            local_60 = Sexy::SexyVector2::operator-
                                 ((SexyVector2 *)&local_68,(SexyVector2 *)(this + 0x48));
            local_5c = fVar8;
            cVar1 = ZombossFanPullActionHandler::IsPulling((ZombossFanPullActionHandler *)this);
            if ((cVar1 == '\0') || (fVar8 = (float)VectorNorm((FPoint *)&local_60), fVar8 <= 625.0))
            {
              Sexy::Point::Point(aPStack_58,(int)local_68,(int)local_64);
              this[0x1d] = (PooyanModule)0x1;
              pPVar4 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
              this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)PooyanShooter::GetPlantPtr(pPVar4);
              pfVar5 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost(this_01);
              fVar8 = *(float *)(this + 0x48);
              fVar10 = *(float *)(this + 0x4c);
              fVar12 = *pfVar5;
              fVar11 = pfVar5[1];
              uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
              fVar8 = (float)NEON_fminnm((local_68 - fVar8) + fVar12,0x443c4000);
              fVar10 = (float)NEON_fminnm((local_64 - fVar10) + fVar11,0x440c4000);
              EATextSquish::Vec3::Vec3((Vec3 *)&local_50,fVar8,fVar10,0.0);
              PooyanShooter::MoveShooterTo(local_50,uStack_4c,local_48,uVar6);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)iVar2,fVar9);
              *(ulong *)(this + 0x48) = CONCAT44(uStack_4c,local_50);
            }
            else {
              MessageRouter::Post((_func_void *)gMessageRouter);
              cancelTouch(this);
            }
          }
          break;
        case 3:
          if (((this[0x1d] == (PooyanModule)0x0) || (this[0x1a] == (PooyanModule)0x0)) &&
             (this[0x1f] == (PooyanModule)0x0)) {
            this[0x1d] = (PooyanModule)0x0;
            this[0x1b] = (PooyanModule)0x0;
            cancelTouch(this);
            break;
          }
          goto LAB_0477cea8;
        case 4:
          cancelTouch(this);
        }
      }
      goto switchD_0477cfec_caseD_2;
    }
  }
LAB_0477cea8:
  this[0x1a] = (PooyanModule)0x0;
  this[0x1d] = (PooyanModule)0x0;
  cancelTouch(this);
switchD_0477cfec_caseD_2:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


/* PooyanModule::SetPooyanShooterInvincible(float) */

void __thiscall PooyanModule::SetPooyanShooterInvincible(PooyanModule *this,float param_1)

{
  char cVar1;
  PooyanShooter *this_00;
  Plant *this_01;
  
  cVar1 = IsPooyanShooterAlive(this);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (PooyanShooter *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  this_01 = (Plant *)PooyanShooter::GetPlantPtr(this_00);
  Plant::SetInvincible(this_01,true,true,param_1);
  return;
}


/* PooyanModule::checkWin() */

PooyanModule __thiscall PooyanModule::checkWin(PooyanModule *this)

{
  char cVar1;
  
  if ((((this[0x1c] == (PooyanModule)0x0) && (this[0x19] != (PooyanModule)0x0)) &&
      (this[0x22] != (PooyanModule)0x0)) && (*(int *)(this + 0x28) <= *(int *)(this + 0x24))) {
    cVar1 = PlantWarsZombiesDeadWinCon::Check();
    if (cVar1 != '\0') {
      if (*(int *)(this + 0x2c) < *(int *)(this + 0x30)) {
        this[0x18] = (PooyanModule)0x1;
        MessageRouter::Post((_func_void *)gMessageRouter);
        return this[0x1c];
      }
      Board::DestroyAllZombieProjectiles();
      this[0x1c] = (PooyanModule)0x1;
      SetPooyanShooterInvincible(this,20.0);
    }
    return this[0x1c];
  }
  return this[0x1c];
}


/* PooyanModule::KillPooyanShooter() */

void __thiscall PooyanModule::KillPooyanShooter(PooyanModule *this)

{
  char cVar1;
  PooyanShooter *pPVar2;
  
  cVar1 = IsPooyanShooterAlive(this);
  if (cVar1 == '\0') {
    return;
  }
  pPVar2 = (PooyanShooter *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  PooyanShooter::DeleteCurrentPlant(pPVar2);
  pPVar2 = (PooyanShooter *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  PooyanShooter::SetDead(pPVar2,true);
  this[0x22] = (PooyanModule)0x0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PooyanModule::onPooyanShooterKilled() */

void __thiscall PooyanModule::onPooyanShooterKilled(PooyanModule *this)

{
  char cVar1;
  bool bVar2;
  PooyanShooter *this_00;
  float fVar3;
  
  cVar1 = ZombossFanPullActionHandler::IsPulling((ZombossFanPullActionHandler *)this);
  if (cVar1 != '\0') {
    return;
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x58));
  if (bVar2) {
    this_00 = (PooyanShooter *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    PooyanShooter::DeleteCurrentPlant(this_00);
  }
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x3c) = fVar3 + 0.3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::onUpdate() */

void __thiscall PooyanModule::onUpdate(PooyanModule *this)

{
  PooyanModule PVar1;
  long *plVar2;
  float fVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1c] != (PooyanModule)0x0) ||
     (fVar3 = (float)PVZ_T(), fVar3 <= *(float *)(this + 0x3c))) {
    PVar1 = this[0x19];
  }
  else {
    uVar4 = PVZ_EOT();
    this[0x20] = (PooyanModule)0x1;
    *(undefined4 *)(this + 0x3c) = uVar4;
    LawnApp::ShowReviveUI(gLawnApp,8);
    PVar1 = this[0x19];
  }
  if (PVar1 != (PooyanModule)0x0) {
    CheckPooyanShooterKilled(this);
  }
  std::string::string(asStack_10,"UINextWaveButton");
  plVar2 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::GetBaseDamage() */

void __thiscall PooyanModule::GetBaseDamage(PooyanModule *this)

{
  bool bVar1;
  long lVar2;
  PooyanShooter *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
  bVar1 = std::operator!=("iceshroom",(string *)(lVar2 + 0x10));
  if (bVar1) {
    lVar2 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
    bVar1 = std::operator!=("fireshroom",(string *)(lVar2 + 0x10));
    if (bVar1) {
      this_00 = (PooyanShooter *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      PooyanShooter::GetPlantPtr(this_00);
      Plant::GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_0477be50(*(undefined8 *)(lVar2 + 0x70));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar2 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
      if (pRVar3 == (ResourceInfo *)0x0) {
        fVar4 = 0.0;
      }
      else {
        lVar2 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
        fVar4 = (float)*(int *)(lVar2 + 4);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_0477d5ec;
    }
  }
  fVar4 = 0.0;
LAB_0477d5ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}


/* PooyanModule::loadComplete() */

void __thiscall PooyanModule::loadComplete(PooyanModule *this)

{
  BasePowerup::GetType((BasePowerup *)this);
  nop();
  return;
}


/* PooyanModule::takeShoot() */

void __thiscall PooyanModule::takeShoot(PooyanModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  PooyanShooter *pPVar2;
  UIEasyButtonWidget *pUVar3;
  long lVar4;
  long *plVar5;
  Plant *this_01;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar1 = PooyanShooter::canMove(pPVar2);
  if (cVar1 != '\0') {
    LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar1 = IsPooyanShooterAlive(this);
    if (cVar1 != '\0') {
      pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pUVar3 = (UIEasyButtonWidget *)PooyanShooter::GetPlantPtr(pPVar2);
      lVar4 = UIEasyButtonWidget::GetImageNormal(pUVar3);
      if (lVar4 != 0) {
        pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pUVar3 = (UIEasyButtonWidget *)PooyanShooter::GetPlantPtr(pPVar2);
        plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar3);
        lVar4 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
        (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(lVar4 + 0xc),plVar5);
      }
      if (this[0x22] != (PooyanModule)0x0) {
        pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        this_01 = (Plant *)PooyanShooter::GetPlantPtr(pPVar2);
        Plant::PlayAttackAnimation(this_01);
        return;
      }
    }
  }
  return;
}


/* PooyanModule::onPlantFire() */

void __thiscall PooyanModule::onPlantFire(PooyanModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  PooyanShooter *pPVar2;
  UIEasyButtonWidget *pUVar3;
  long lVar4;
  long *plVar5;
  Plant *this_01;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar1 = PooyanShooter::canMove(pPVar2);
  if (cVar1 != '\0') {
    LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar1 = IsPooyanShooterAlive(this);
    if (cVar1 != '\0') {
      pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pUVar3 = (UIEasyButtonWidget *)PooyanShooter::GetPlantPtr(pPVar2);
      lVar4 = UIEasyButtonWidget::GetImageNormal(pUVar3);
      if (lVar4 != 0) {
        pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pUVar3 = (UIEasyButtonWidget *)PooyanShooter::GetPlantPtr(pPVar2);
        plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar3);
        lVar4 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
        (**(code **)(*plVar5 + 0x80))(*(undefined4 *)(lVar4 + 0xc),plVar5);
      }
      if (this[0x22] != (PooyanModule)0x0) {
        pPVar2 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        this_01 = (Plant *)PooyanShooter::GetPlantPtr(pPVar2);
        Plant::PlayAttackAnimation(this_01);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::gameplayStarted() */

void __thiscall PooyanModule::gameplayStarted(PooyanModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined4 uVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  UIWidget *pUVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ToxicWaterPerfumeBottleProjectile *this_03;
  GridItemWaterMist *this_04;
  Board *this_05;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_18,"UIShovel");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_18,"UISunBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_18,"UIPlantfood");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_18,"UISkyCannon");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  FUN_0477b5b0(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_18,"poweruptacticalcuke");
  cVar2 = PlayerInfo::GetPowerupUnlockState(this_02,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (cVar2 != '\0') {
    this_05 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"poweruptacticalcuke");
    Board::AddPowerup(this_05,asStack_18);
    std::string::~string(asStack_18);
    nop();
  }
  uVar1 = *(undefined4 *)(pRVar3 + 0x4c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(pRVar3 + 0x48);
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78);
  *(undefined4 *)(this + 0x28) = uVar1;
  Sexy::RtName::RtName((RtName *)asStack_18,L"UIPooyanScore");
  UIWidget::CreateWidget(asStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_03,*(int *)(this + 0x2c));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_04,*(int *)(this + 0x30));
  this[0x19] = (PooyanModule)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::onZombieSpawned(Zombie*) */

void __thiscall PooyanModule::onZombieSpawned(PooyanModule *this,Zombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string sVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  UIWidget *this_00;
  ResilienceTutorialIntroProperties *pRVar9;
  ZombieSkyCityBasic *this_01;
  ZombieAnimRig *pZVar10;
  long lVar11;
  Effect_Barrage *pEVar12;
  undefined8 uVar13;
  ZombieSkyCityElectric *this_02;
  ZombieSkyCityTwinsPlane *this_03;
  PooyanBossBarage *pPVar14;
  Effect_Barrage *pEVar15;
  ZombieSkyCityGargantuar *this_04;
  ZombieSkycityBattlePlane *this_05;
  ResilienceTutorialIntroProperties *pRVar16;
  undefined4 uVar17;
  ResilienceTutorialIntroProperties RVar18;
  code *pcVar19;
  ResilienceTutorialIntroProperties RVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  string local_28;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(&local_28,"UIProgressBar");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(&local_28);
  std::string::~string(&local_28);
  nop();
  if ((this_00 != (UIWidget *)0x0) && (cVar5 = UIWidget::IsVisible(this_00), cVar5 != '\0')) {
    UIWidget::SetVisible(this_00,false);
  }
  if ((param_1 == (Zombie *)0x0) || (this[0x20] != (PooyanModule)0x0)) goto LAB_0477ddb8;
  if (this[0x22] == (PooyanModule)0x0) {
    this[0x22] = (PooyanModule)0x1;
    takeShoot(this);
  }
  Zombie::SetHasDroppedLoot(param_1,false);
  pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  bVar6 = Sexy::RtObject::IsA<ZombieSkyCityBasic>((RtObject *)param_1);
  if (bVar6) {
    Zombie::SetZombieScale(param_1,0.8);
    this_01 = Sexy::RtObject::Cast<ZombieSkyCityBasic>((RtObject *)param_1);
    pZVar10 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this_01);
    if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
      fVar21 = (float)Zombie::GetWalkSpeed(param_1);
    }
    else {
      fVar21 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
    }
    ZombieAnimRig::SetDesiredWalkVelocity(pZVar10,fVar21 * 4.0);
    ZombieSkyCityBasic::GetPooyanPrepared(this_01);
    lVar11 = ZombieSkyCityBasic::GetBarragePtr(this_01);
    if (lVar11 == 0) goto LAB_0477ddb8;
    pEVar12 = (Effect_Barrage *)ZombieSkyCityBasic::GetBarragePtr(this_01);
    Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_01,-59.0,-43.0,false);
    uVar13 = ZombieSkyCityBasic::GetBarragePtr(this_01);
    RVar20 = pRVar9[0x98];
                    /* WARNING: Load size is inaccurate */
    pEVar12 = *(Effect_Barrage **)(pRVar9 + 0xa8);
    uVar1 = *(undefined4 *)(pRVar9 + 0x9c);
    uVar22 = *(undefined4 *)(pRVar9 + 0xac);
    uVar2 = *(undefined4 *)(pRVar9 + 0xa0);
    RVar18 = pRVar9[0x99];
    uVar17 = *(undefined4 *)(pRVar9 + 0xa4);
    pRVar16 = pRVar9 + 0xb0;
  }
  else {
    bVar7 = Sexy::RtObject::IsA<ZombieSkyCityElectric>((RtObject *)param_1);
    if (!bVar7) {
      bVar6 = Sexy::RtObject::IsA<ZombieSkyCityGargantuar>((RtObject *)param_1);
      if (bVar6) {
        this_04 = Sexy::RtObject::Cast<ZombieSkyCityGargantuar>((RtObject *)param_1);
        pZVar10 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this_04);
        if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
          fVar21 = (float)Zombie::GetWalkSpeed(param_1);
        }
        else {
          fVar21 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
        }
        ZombieAnimRig::SetDesiredWalkVelocity(pZVar10,fVar21 * 3.0);
        FUN_0477be54(this_04 + 0x54);
        Zombie::SetZombieScale(param_1,1.2);
      }
      else {
        bVar6 = Sexy::RtObject::IsA<ZombieSkycityBattlePlane>((RtObject *)param_1);
        if (bVar6) {
          this_05 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>((RtObject *)param_1);
          lVar11 = ZombieSkycityBattlePlane::GetBarragePtr(this_05);
          if (lVar11 != 0) {
            pEVar12 = (Effect_Barrage *)ZombieSkycityBattlePlane::GetBarragePtr(this_05);
            Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_05,-51.0,0.0,false);
            ZombieSkycityBattlePlane::SetPooyanBossHP(this_05,(float)*(int *)(pRVar9 + 0x68));
            local_40 = FUN_0477db60(*(undefined8 *)(pRVar9 + 0xf8));
            local_38 = FUN_0477dbb0(*(undefined8 *)(pRVar9 + 0x100));
            while (bVar6 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
                  , bVar6) {
              pPVar14 = (PooyanBossBarage *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
              PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)&local_28,pPVar14);
              uVar13 = ZombieSkycityBattlePlane::GetBarragePtr(this_05);
              uVar22 = local_18._4_4_;
              pEVar12 = (Effect_Barrage *)local_18;
              uVar17 = local_1c;
              uVar2 = local_20;
              uVar1 = local_24;
              uVar4 = local_27;
              sVar3 = local_28;
              FUN_05475d88(asStack_30,auStack_10);
              Effect_Barrage::AddBarrageWaveByProps
                        (pEVar12,uVar22,uVar13,sVar3,uVar4,uVar1,uVar2,uVar17,asStack_30);
              std::string::~string(asStack_30);
              Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_28);
              std::move_iterator<SexyURL::KeyedValue*>::operator++
                        ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
            }
          }
          FUN_0477be54(this_05 + 0x54);
          Zombie::SetZombieScale(param_1,1.2);
        }
        else {
          bVar6 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1);
          if (bVar6) {
            this_03 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)param_1);
            ZombieSkyCityTwinsPlane::SetPooyanBossHP(this_03,(float)*(int *)(pRVar9 + 0x6c));
            lVar11 = ZombieSkyCityTwinsPlane::GetBarragePtr(this_03);
            if (lVar11 != 0) {
              pEVar12 = (Effect_Barrage *)ZombieSkyCityTwinsPlane::GetBarragePtr(this_03);
              Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_03,-115.0,-88.0,false);
              local_40 = FUN_0477db60(*(undefined8 *)(pRVar9 + 0x110));
              local_38 = FUN_0477dbb0(*(undefined8 *)(pRVar9 + 0x118));
              while (bVar6 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_40,
                                        (__normal_iterator *)&local_38), bVar6) {
                pPVar14 = (PooyanBossBarage *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
                PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)&local_28,pPVar14);
                uVar13 = ZombieSkyCityTwinsPlane::GetBarragePtr(this_03);
                uVar22 = local_18._4_4_;
                pEVar12 = (Effect_Barrage *)local_18;
                uVar17 = local_1c;
                uVar2 = local_20;
                uVar1 = local_24;
                uVar4 = local_27;
                sVar3 = local_28;
                FUN_05475d88(asStack_30,auStack_10);
                Effect_Barrage::AddBarrageWaveByProps
                          (pEVar12,uVar22,uVar13,sVar3,uVar4,uVar1,uVar2,uVar17,asStack_30);
                std::string::~string(asStack_30);
                Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_28);
                std::move_iterator<SexyURL::KeyedValue*>::operator++
                          ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
              }
            }
            lVar11 = ZombieSkyCityTwinsPlane::GetBarragePtr2(this_03);
            if (lVar11 != 0) {
              pEVar12 = (Effect_Barrage *)ZombieSkyCityTwinsPlane::GetBarragePtr2(this_03);
              Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_03,-72.0,-60.0,true);
              local_40 = FUN_0477db60(*(undefined8 *)(pRVar9 + 0x110));
              local_38 = FUN_0477dbb0(*(undefined8 *)(pRVar9 + 0x118));
              while (bVar6 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_40,
                                        (__normal_iterator *)&local_38), bVar6) {
                pPVar14 = (PooyanBossBarage *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
                PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)&local_28,pPVar14);
                uVar13 = ZombieSkyCityTwinsPlane::GetBarragePtr2(this_03);
                uVar22 = local_18._4_4_;
                pEVar12 = (Effect_Barrage *)local_18;
                uVar17 = local_1c;
                uVar2 = local_20;
                uVar1 = local_24;
                uVar4 = local_27;
                sVar3 = local_28;
                FUN_05475d88(asStack_30,auStack_10);
                Effect_Barrage::AddBarrageWaveByProps
                          (pEVar12,uVar22,uVar13,sVar3,uVar4,uVar1,uVar2,uVar17,asStack_30);
                std::string::~string(asStack_30);
                Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_28);
                std::move_iterator<SexyURL::KeyedValue*>::operator++
                          ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
              }
            }
            pEVar12 = (Effect_Barrage *)ZombieSkyCityTwinsPlane::GetBarragePtr(this_03);
            pEVar15 = (Effect_Barrage *)ZombieSkyCityTwinsPlane::GetBarragePtr2(this_03);
          }
          else {
            bVar7 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1);
            if (!bVar7) goto LAB_0477ddb8;
            this_03 = (ZombieSkyCityTwinsPlane *)
                      Sexy::RtObject::Cast<ZombieInvisiblePlane>((RtObject *)param_1);
            ZombieInvisiblePlane::SetPooyanBossHP
                      ((ZombieInvisiblePlane *)this_03,(float)*(int *)(pRVar9 + 0x70));
            lVar11 = ZombieInvisiblePlane::GetBarragePtr((ZombieInvisiblePlane *)this_03);
            if (lVar11 != 0) {
              pEVar12 = (Effect_Barrage *)
                        ZombieInvisiblePlane::GetBarragePtr((ZombieInvisiblePlane *)this_03);
              Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_03,-53.0,-217.0,bVar6);
              local_40 = FUN_0477db60(*(undefined8 *)(pRVar9 + 0x128));
              local_38 = FUN_0477dbb0(*(undefined8 *)(pRVar9 + 0x130));
              while (bVar6 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_40,
                                        (__normal_iterator *)&local_38), bVar6) {
                pPVar14 = (PooyanBossBarage *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
                PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)&local_28,pPVar14);
                uVar13 = ZombieInvisiblePlane::GetBarragePtr((ZombieInvisiblePlane *)this_03);
                uVar22 = local_18._4_4_;
                pEVar12 = (Effect_Barrage *)local_18;
                uVar17 = local_1c;
                uVar2 = local_20;
                uVar1 = local_24;
                uVar4 = local_27;
                sVar3 = local_28;
                FUN_05475d88(asStack_30,auStack_10);
                Effect_Barrage::AddBarrageWaveByProps
                          (pEVar12,uVar22,uVar13,sVar3,uVar4,uVar1,uVar2,uVar17,asStack_30);
                std::string::~string(asStack_30);
                Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_28);
                std::move_iterator<SexyURL::KeyedValue*>::operator++
                          ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
              }
            }
            lVar11 = ZombieInvisiblePlane::GetBarragePtr2((ZombieInvisiblePlane *)this_03);
            if (lVar11 != 0) {
              pEVar12 = (Effect_Barrage *)
                        ZombieInvisiblePlane::GetBarragePtr2((ZombieInvisiblePlane *)this_03);
              Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_03,15.0,-45.0,true);
              local_40 = FUN_0477db60(*(undefined8 *)(pRVar9 + 0x128));
              local_38 = FUN_0477dbb0(*(undefined8 *)(pRVar9 + 0x130));
              while (bVar6 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_40,
                                        (__normal_iterator *)&local_38), bVar6) {
                pPVar14 = (PooyanBossBarage *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
                PooyanBossBarage::PooyanBossBarage((PooyanBossBarage *)&local_28,pPVar14);
                uVar13 = ZombieInvisiblePlane::GetBarragePtr2((ZombieInvisiblePlane *)this_03);
                uVar22 = local_18._4_4_;
                pEVar12 = (Effect_Barrage *)local_18;
                uVar17 = local_1c;
                uVar2 = local_20;
                uVar1 = local_24;
                uVar4 = local_27;
                sVar3 = local_28;
                FUN_05475d88(asStack_30,auStack_10);
                Effect_Barrage::AddBarrageWaveByProps
                          (pEVar12,uVar22,uVar13,sVar3,uVar4,uVar1,uVar2,uVar17,asStack_30);
                std::string::~string(asStack_30);
                Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_28);
                std::move_iterator<SexyURL::KeyedValue*>::operator++
                          ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
              }
            }
            pEVar12 = (Effect_Barrage *)
                      ZombieInvisiblePlane::GetBarragePtr((ZombieInvisiblePlane *)this_03);
            pEVar15 = (Effect_Barrage *)
                      ZombieInvisiblePlane::GetBarragePtr2((ZombieInvisiblePlane *)this_03);
          }
          Effect_Barrage::SetViceBarrage(pEVar12,pEVar15);
          FUN_0477be54(this_03 + 0x54);
          Zombie::SetZombieScale(param_1,1.2);
        }
      }
      goto LAB_0477ddb8;
    }
    this_02 = Sexy::RtObject::Cast<ZombieSkyCityElectric>((RtObject *)param_1);
    iVar8 = SharkMinion::getRow((SharkMinion *)this_02);
    Zombie::SetZombieScale(param_1,0.8);
    if (iVar8 == 0) {
      pcVar19 = *(code **)(*(long *)this_02 + 0x78);
      iVar8 = BoardTransforms::GridToBoardSpaceXUnbounded(8);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar8,0.0,0.0);
      (*pcVar19)(this_02,&local_28);
      Zombie::setZombieState((Zombie *)this_02,0x11,0);
      lVar11 = ZombieSkyCityElectric::GetBarragePtr(this_02);
      if (lVar11 == 0) goto LAB_0477ddb8;
      pEVar12 = (Effect_Barrage *)ZombieSkyCityElectric::GetBarragePtr(this_02);
      Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_02,-100.0,20.0,false);
      uVar13 = ZombieSkyCityElectric::GetBarragePtr(this_02);
      RVar20 = pRVar9[0xb8];
                    /* WARNING: Load size is inaccurate */
      pEVar12 = *(Effect_Barrage **)(pRVar9 + 200);
      uVar1 = *(undefined4 *)(pRVar9 + 0xbc);
      uVar22 = *(undefined4 *)(pRVar9 + 0xcc);
      uVar2 = *(undefined4 *)(pRVar9 + 0xc0);
      RVar18 = pRVar9[0xb9];
      pRVar16 = pRVar9 + 0xd0;
      uVar17 = *(undefined4 *)(pRVar9 + 0xc4);
    }
    else {
      iVar8 = SharkMinion::getRow((SharkMinion *)this_02);
      if (iVar8 != 4) goto LAB_0477ddb8;
      pcVar19 = *(code **)(*(long *)this_02 + 0x78);
      iVar8 = BoardTransforms::GridToBoardSpaceXUnbounded(8);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar8,760.0,0.0);
      (*pcVar19)(this_02,&local_28);
      Zombie::setZombieState((Zombie *)this_02,0x11,0);
      lVar11 = ZombieSkyCityElectric::GetBarragePtr(this_02);
      if (lVar11 == 0) goto LAB_0477ddb8;
      pEVar12 = (Effect_Barrage *)ZombieSkyCityElectric::GetBarragePtr(this_02);
      Effect_Barrage::InitBarrage(pEVar12,(BoardEntity *)this_02,-90.0,0.0,bVar6);
      uVar13 = ZombieSkyCityElectric::GetBarragePtr(this_02);
      RVar20 = pRVar9[0xd8];
                    /* WARNING: Load size is inaccurate */
      pEVar12 = *(Effect_Barrage **)(pRVar9 + 0xe8);
      uVar1 = *(undefined4 *)(pRVar9 + 0xdc);
      uVar22 = *(undefined4 *)(pRVar9 + 0xec);
      uVar2 = *(undefined4 *)(pRVar9 + 0xe0);
      RVar18 = pRVar9[0xd9];
      pRVar16 = pRVar9 + 0xf0;
      uVar17 = *(undefined4 *)(pRVar9 + 0xe4);
    }
  }
  FUN_05475d88(&local_28,pRVar16);
  Effect_Barrage::AddBarrageWaveByProps
            (pEVar12,uVar22,uVar13,RVar20,RVar18,uVar1,uVar2,uVar17,&local_28);
  std::string::~string(&local_28);
LAB_0477ddb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModule::PooyanModule() */

void __thiscall PooyanModule::PooyanModule(PooyanModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068d8260;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  this[0x21] = (PooyanModule)0x0;
  this[0x19] = (PooyanModule)0x0;
  this[0x1e] = (PooyanModule)0x1;
  this[0x1b] = (PooyanModule)0x0;
  this[0x1d] = (PooyanModule)0x0;
  this[0x1c] = (PooyanModule)0x0;
  this[0x20] = (PooyanModule)0x0;
  this[0x1a] = (PooyanModule)0x0;
  this[0x1f] = (PooyanModule)0x0;
  this[0x22] = (PooyanModule)0x0;
  this[0x18] = (PooyanModule)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = uVar1;
  LawnApp::AddModuleInfo(gLawnApp,1);
  return;
}


/* PooyanModule::StaticNew() */

PooyanModule * PooyanModule::StaticNew(void)

{
  PooyanModule *this;
  
  this = ::operator_new(0x80);
  PooyanModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::onReviveCancel() */

void __thiscall PooyanModule::onReviveCancel(PooyanModule *this)

{
  char cVar1;
  long *plVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x20] = (PooyanModule)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_0477ebb4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this[0x18] == (PooyanModule)0x0) {
      pwVar3 = L"[POOYAN_FAILED_TIP]";
    }
    else {
      pwVar3 = L"[POOYAN_FAILED_SCORE_TIP]";
    }
    pcVar4 = *(code **)(*plVar2 + 0xa0);
    FUN_05478178(auStack_10,pwVar3,auStack_18);
    (*pcVar4)(plVar2,auStack_10);
    FUN_05476c50(auStack_10);
    nop();
    this[0x19] = (PooyanModule)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModule::~PooyanModule() */

void __thiscall PooyanModule::~PooyanModule(PooyanModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068d8260;
  LawnApp::RemoveModuleInfo(gLawnApp,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  std::vector<PooyanShooterData,std::allocator<PooyanShooterData>>::~vector
            ((vector<PooyanShooterData,std::allocator<PooyanShooterData>> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PooyanModule::~PooyanModule() */

void __thiscall PooyanModule::~PooyanModule(PooyanModule *this)

{
  ~PooyanModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::GiveTutorialPooyanShooter() */

void __thiscall PooyanModule::GiveTutorialPooyanShooter(PooyanModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  string *psVar1;
  long lVar2;
  Plant *this_01;
  long *plVar3;
  PooyanShooter *this_02;
  ResourceInfo *pRVar4;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  Board *pBVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1c] == (PooyanModule)0x0) || (this[0x21] != (PooyanModule)0x0)) {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
    LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    GameObject::Create<PooyanShooter>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)aRStack_10,"sunflower");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
    std::string::~string((string *)aRStack_10);
    nop();
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Board::LoadResourceGroupForGameplay(pBVar7,(string *)(lVar2 + 0x10));
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Board::LoadResourceGroupsForGameplay(pBVar7,(vector *)(lVar2 + 0x80));
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
    this_01 = (Plant *)Board::AddPlant((Board *)0x0,uVar6,0,2,aRStack_10,0,0,0xffffffff,0,1,1,0,0,0,
                                       0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (this_01 != (Plant *)0x0) {
      Plant::SetTravellingOutsideGroup(this_01,true);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
      (**(code **)(*plVar3 + 0x78))(plVar3,uVar6);
      lVar2 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_01);
      if (lVar2 != 0) {
        plVar3 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_01);
        (**(code **)(*plVar3 + 0x80))(0x3f800000);
      }
      std::string::string((string *)aRStack_10,"POPANIM_POOYAN_POOYAN_SHOOTER");
      GetPAMByName((string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      std::string::string((string *)aRStack_10,"POPANIM_POOYAN_CORE");
      GetPAMByName((string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      this_02 = (PooyanShooter *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      PooyanShooter::PooyanShooterInitialize
                (this_02,(PopAnim *)pRVar4,(PopAnim *)pRVar5,this_01,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    FUN_0477b5b0(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
    this[0x1a] = (PooyanModule)0x0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::onSpawnPooyanShooter() */

void __thiscall PooyanModule::onSpawnPooyanShooter(PooyanModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  string *psVar5;
  long lVar6;
  Plant *this_01;
  long *plVar7;
  PooyanShooter *this_02;
  ResourceInfo *pRVar8;
  ResourceInfo *pRVar9;
  RtObject *this_03;
  PlantIceShroom *this_04;
  Board *pBVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1c] != (PooyanModule)0x0) goto LAB_04781c60;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
  GameObject::Create<PooyanShooter>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Board::LoadResourceGroupForGameplay(pBVar10,(string *)(lVar6 + 0x10));
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Board::LoadResourceGroupsForGameplay(pBVar10,(vector *)(lVar6 + 0x80));
  lVar6 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
  bVar3 = std::operator==("oakshooter",(string *)(lVar6 + 0x10));
  uVar12 = 2;
  if (!bVar3) {
    uVar12 = 1;
  }
  uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
  this_01 = (Plant *)Board::AddPlant((Board *)0x0,uVar11,0,2,aRStack_10,0,1,uVar12,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (this_01 != (Plant *)0x0) {
    Plant::SetTravellingOutsideGroup(this_01,true);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar11 = std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_01);
    (**(code **)(*plVar7 + 0x78))(plVar7,uVar11);
    lVar6 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_01);
    if (lVar6 != 0) {
      plVar7 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_01);
      lVar6 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
      (**(code **)(*plVar7 + 0x80))(*(undefined4 *)(lVar6 + 0xc),plVar7);
    }
    std::string::string((string *)aRStack_10,"POPANIM_POOYAN_POOYAN_SHOOTER");
    GetPAMByName((string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::string((string *)aRStack_10,"POPANIM_POOYAN_CORE");
    GetPAMByName((string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    this_02 = (PooyanShooter *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    PooyanShooter::PooyanShooterInitialize(this_02,(PopAnim *)pRVar8,(PopAnim *)pRVar9,this_01,true)
    ;
    iVar2 = *(int *)(this + 0x34);
    iVar1 = *(int *)(pRVar4 + 0x40);
    uVar11 = *(undefined8 *)(this + 0x60);
    *(int *)(this + 0x38) = iVar1;
    fVar13 = (float)iVar1;
    *(float *)(this_01 + 0xdc) = fVar13;
    *(float *)(this_01 + 0xd8) = fVar13;
    lVar6 = FUN_0477b5d0(uVar11,(long)iVar2);
    bVar3 = std::operator==("iceshroom",(string *)(lVar6 + 0x10));
    if (bVar3) {
LAB_04781f2c:
      nop();
      this_04 = Sexy::RtObject::Cast<PlantIceShroom>(this_03);
      if (this_04 != (PlantIceShroom *)0x0) {
        lVar6 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
        PlantIceShroom::InitPooyanShooter(this_04,(float)*(int *)(lVar6 + 4));
      }
    }
    else {
      lVar6 = FUN_0477b5d0(*(undefined8 *)(this + 0x60),(long)*(int *)(this + 0x34));
      bVar3 = std::operator==("fireshroom",(string *)(lVar6 + 0x10));
      if (bVar3) goto LAB_04781f2c;
    }
    Plant::SetShowUpgrade(this_01,true);
    takeShoot(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  SetPooyanShooterInvincible(this,3.0);
  FUN_0477b5b0(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0x1a] = (PooyanModule)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
LAB_04781c60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::ShooterLevelUp(std::string const&) */

void PooyanModule::ShooterLevelUp(string *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  int iVar1;
  char cVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  PooyanShooter *pPVar5;
  long lVar6;
  ulong uVar7;
  string *psVar8;
  Plant *this_00;
  long *plVar9;
  ResourceInfo *pRVar10;
  ResourceInfo *pRVar11;
  RtObject *this_01;
  PlantIceShroom *this_02;
  Effect_PopAnim *pEVar12;
  long lVar13;
  Board *pBVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28 [4];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsPooyanShooterAlive((PooyanModule *)param_1);
  if (cVar2 == '\0') goto LAB_04782040;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  local_28[0] = GetShooterPosition((PooyanModule *)param_1);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  pPVar5 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  lVar6 = PooyanShooter::GetPlantPtr(pPVar5);
  *(int *)(param_1 + 0x38) = (int)*(float *)(lVar6 + 0xd8);
  pPVar5 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  PooyanShooter::DeleteCurrentPlant(pPVar5);
  std::string::string(asStack_50,"");
  nop();
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x34);
  uVar7 = FUN_0477b5dc(uVar15,*(undefined8 *)(param_1 + 0x68));
  if ((ulong)(long)iVar1 < uVar7) {
    lVar6 = FUN_0477b5d0(uVar15,(long)iVar1);
    lVar13 = FUN_05474178(lVar6 + 0x10);
    if (lVar13 == 0) goto LAB_04782110;
    thunk_FUN_05475e00(asStack_50,lVar6 + 0x10);
  }
  else {
LAB_04782110:
    thunk_FUN_05475e00(asStack_50);
  }
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
  pBVar14 = *(Board **)(gLawnApp + 0x9f0);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  Board::LoadResourceGroupForGameplay(pBVar14,(string *)(lVar6 + 0x10));
  pBVar14 = *(Board **)(gLawnApp + 0x9f0);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  Board::LoadResourceGroupsForGameplay(pBVar14,(vector *)(lVar6 + 0x80));
  lVar6 = FUN_0477b5d0(*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x34));
  bVar3 = std::operator==("oakshooter",(string *)(lVar6 + 0x10));
  uVar16 = 2;
  if (!bVar3) {
    uVar16 = 1;
  }
  uVar15 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_48);
  this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar15,0,2,aRStack_18,0,1,uVar16,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (this_00 != (Plant *)0x0) {
    Plant::SetTravellingOutsideGroup(this_00,true);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,local_28);
    lVar6 = UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
    if (lVar6 != 0) {
      plVar9 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
      lVar6 = FUN_0477b5d0(*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x34));
      (**(code **)(*plVar9 + 0x80))(*(undefined4 *)(lVar6 + 0xc),plVar9);
    }
    iVar1 = *(int *)(pRVar4 + 0x40);
    *(float *)(this_00 + 0xd8) = (float)*(int *)(param_1 + 0x38);
    *(float *)(this_00 + 0xdc) = (float)iVar1;
    std::string::string((string *)aRStack_18,"POPANIM_POOYAN_POOYAN_SHOOTER");
    GetPAMByName((string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"POPANIM_POOYAN_CORE");
    GetPAMByName((string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    pPVar5 = (PooyanShooter *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
    PooyanShooter::PooyanShooterInitialize
              (pPVar5,(PopAnim *)pRVar10,(PopAnim *)pRVar11,this_00,false);
    lVar6 = FUN_0477b5d0(*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x34));
    bVar3 = std::operator==("iceshroom",(string *)(lVar6 + 0x10));
    if (bVar3) {
LAB_04782364:
      nop();
      this_02 = Sexy::RtObject::Cast<PlantIceShroom>(this_01);
      if (this_02 != (PlantIceShroom *)0x0) {
        lVar6 = FUN_0477b5d0(*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x34));
        PlantIceShroom::InitPooyanShooter(this_02,(float)*(int *)(lVar6 + 4));
      }
    }
    else {
      lVar6 = FUN_0477b5d0(*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x34));
      bVar3 = std::operator==("fireshroom",(string *)(lVar6 + 0x10));
      if (bVar3) goto LAB_04782364;
    }
    Plant::SetShowUpgrade(this_00,true);
    takeShoot((PooyanModule *)param_1);
    pEVar12 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_SINGLEHANDED_UP");
    GetPAMByName(asStack_30);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar12,(PopAnim *)pRVar10,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_30);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,-50.0,0.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)pEVar12,(RealObject *)this_00,(SexyVector3 *)aRStack_18,2);
    Effect_PopAnim::SetCentered(pEVar12,true);
    std::string::string((string *)aRStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar12,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    pEVar12 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_POOYAN_POOYANSHOOTER_LEVELUP_DES");
    GetPAMByName(asStack_30);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar12,(PopAnim *)pRVar10,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_30);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,-70.0,0.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)pEVar12,(RealObject *)this_00,(SexyVector3 *)aRStack_18,2);
    Effect_PopAnim::SetCentered(pEVar12,true);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(pEVar12,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
LAB_04782040:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PooyanModule::onZombieKilled(Zombie*, DamageInfo const*) */

void PooyanModule::onZombieKilled(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  ToxicWaterPerfumeBottleProjectile *this;
  ToxicWaterPerfumeBottleProjectile *this_00;
  ZombieAnimRig *pZVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((param_2 == (DamageInfo *)0x0) || (param_1[0x20] != (Zombie)0x0)) {
    return;
  }
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  bVar2 = Sexy::RtObject::IsA<ZombieSkycityBattlePlane>((RtObject *)param_2);
  if (bVar2) {
    iVar6 = *(int *)(pRVar3 + 0x74);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(pRVar3 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x2c) + iVar6;
    *(int *)(param_1 + 0x2c) = iVar6;
  }
  else {
    bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_2);
    if (bVar2) {
      iVar6 = *(int *)(pRVar3 + 0x78);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(pRVar3 + 0x60);
      iVar6 = *(int *)(param_1 + 0x2c) + iVar6;
      *(int *)(param_1 + 0x2c) = iVar6;
    }
    else {
      bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_2);
      if (bVar2) {
        iVar6 = *(int *)(pRVar3 + 0x7c);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(pRVar3 + 100);
        iVar6 = *(int *)(param_1 + 0x2c) + iVar6;
        *(int *)(param_1 + 0x2c) = iVar6;
      }
      else {
        bVar2 = Sexy::RtObject::IsA<ZombieSkyCityBasic>((RtObject *)param_2);
        if (bVar2) {
          pZVar5 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_2);
          if (*(code **)(*(long *)param_2 + 0x1d8) == Zombie::GetWalkSpeed) {
            fVar8 = (float)Zombie::GetWalkSpeed((Zombie *)param_2);
          }
          else {
            fVar8 = (float)(**(code **)(*(long *)param_2 + 0x1d8))();
          }
          ZombieAnimRig::SetDesiredWalkVelocity(pZVar5,fVar8);
          iVar6 = *(int *)(param_1 + 0x2c) + *(int *)(pRVar3 + 0x50);
          *(int *)(param_1 + 0x2c) = iVar6;
        }
        else {
          bVar2 = Sexy::RtObject::IsA<ZombieSkyCityElectric>((RtObject *)param_2);
          if (bVar2) {
            iVar6 = *(int *)(param_1 + 0x2c) + *(int *)(pRVar3 + 0x54);
            *(int *)(param_1 + 0x2c) = iVar6;
          }
          else {
            bVar2 = Sexy::RtObject::IsA<ZombieSkyCityGargantuar>((RtObject *)param_2);
            if (bVar2) {
              pZVar5 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_2);
              fVar8 = (float)(**(code **)(*(long *)param_2 + 0x1d8))(param_2);
              ZombieAnimRig::SetDesiredWalkVelocity(pZVar5,fVar8);
              iVar6 = *(int *)(param_1 + 0x2c) + *(int *)(pRVar3 + 0x58);
              *(int *)(param_1 + 0x2c) = iVar6;
            }
            else {
              iVar6 = *(int *)(param_1 + 0x2c);
            }
          }
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x34);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  lVar4 = FUN_0477b5d0(uVar7,(long)iVar1);
  if (iVar6 < *(int *)(lVar4 + 8)) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x78));
    nop();
    ToxicWaterPerfumeBottleProjectile::SetType(this,*(int *)(param_1 + 0x2c));
    return;
  }
  FUN_0477b5d0(uVar7,(long)(iVar1 + 1));
  ShooterLevelUp((string *)param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x78));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(param_1 + 0x2c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall PooyanModule::AddResourceRequirements(PooyanModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"ZombieSkyCityBattlePlaneGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"RiverCrossing");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Pooyan");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::SetShooterGroup(int) */

void __thiscall PooyanModule::SetShooterGroup(PooyanModule *this,int param_1)

{
  bool bVar1;
  long lVar2;
  PooyanShooterData *pPVar3;
  undefined8 local_30;
  undefined8 local_28;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetPooyanProps();
  local_30 = FUN_0477e6f4(*(undefined8 *)(lVar2 + 0x80));
  local_28 = FUN_0477e744(*(undefined8 *)(lVar2 + 0x88));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pPVar3 = (PooyanShooterData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    PooyanShooterData::PooyanShooterData((PooyanShooterData *)local_20,pPVar3);
    if (local_20[0] == param_1) {
      std::vector<PooyanShooterData,std::allocator<PooyanShooterData>>::push_back
                ((vector<PooyanShooterData,std::allocator<PooyanShooterData>> *)(this + 0x60),
                 (PooyanShooterData *)local_20);
    }
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModule::ShowPooyanShooterChooseUI() */

void __thiscall PooyanModule::ShowPooyanShooterChooseUI(PooyanModule *this)

{
  PooyanShooterChooseUI *this_00;
  
  if (*(long *)(this + 0x50) != 0) {
    return;
  }
  this_00 = ::operator_new(0x1a8);
  PooyanShooterChooseUI::PooyanShooterChooseUI(this_00);
  *(PooyanShooterChooseUI **)(this + 0x50) = this_00;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x50));
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x50))
  ;
  LawnApp::PushOverlaysToTop(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModule::registerForEvents() */

void __thiscall PooyanModule::registerForEvents(PooyanModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PooyanModule,bool(PooyanModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,loadComplete);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PooyanModule,bool(PooyanModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PooyanModule,bool(PooyanModule::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,4,a_Stack_b0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieKilled);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<PooyanModule,void(PooyanModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPooyanShooterKilled);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::PooyanShooterKilled,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PooyanModule,void(PooyanModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantFire);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantFire,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSpawnPooyanShooter);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::SpawnPooyanShooter,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShooterTakeDamage);
  Sexy::Delegate0::Delegate0<PooyanModule,void(PooyanModule::*)()>
            ((Delegate0 *)aDStack_38,a_Stack_b0);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::PooyanShooterTakeDamage,(Delegate0 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

