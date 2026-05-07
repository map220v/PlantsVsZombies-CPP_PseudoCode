// Class: DangerRoomSeedChooser


/* DangerRoomSeedChooser::refreshValidPlantTypeList() */

void __thiscall DangerRoomSeedChooser::refreshValidPlantTypeList(DangerRoomSeedChooser *this)

{
  (**(code **)(*(long *)this + 0x200))();
  this[0x1e4] = (DangerRoomSeedChooser)0x0;
  (**(code **)(*(long *)this + 0x220))(this);
  return;
}


/* DangerRoomSeedChooser::checkButtons() */

void __thiscall DangerRoomSeedChooser::checkButtons(DangerRoomSeedChooser *this)

{
  if (*(long *)(this + 0x1f8) != 0) {
    *(undefined1 *)(*(long *)(this + 0x1f8) + 0x6e) = 0;
  }
  if (*(long *)(this + 0x200) != 0) {
    *(bool *)(*(long *)(this + 0x200) + 0x6e) = this[0x1e4] == (DangerRoomSeedChooser)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::SetSeedBankProperties(SeedBankProperties const*) */

void __thiscall
DangerRoomSeedChooser::SetSeedBankProperties
          (DangerRoomSeedChooser *this,SeedBankProperties *param_1)

{
  char cVar1;
  string *extraout_x1;
  undefined1 auStack_30 [8];
  RtName aRStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  *(SeedBankProperties **)(this + 0x298) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 != (SeedBankProperties *)0x0) {
    cVar1 = FUN_0547419c((Sexy *)(param_1 + 0x48));
    if (cVar1 == '\0') {
      if (this[0x34c] == (DangerRoomSeedChooser)0x0) {
        Sexy::StringToWString((Sexy *)(param_1 + 0x48),extraout_x1);
        Sexy::RtName::RtName(aRStack_28,awStack_18);
        FUN_05476c50(awStack_18);
      }
      else {
        FUN_05478178(awStack_18,L"UIDangerRoomTrainingSeedPacket",auStack_30);
        Sexy::RtName::RtName(aRStack_28,awStack_18);
        FUN_05476c50(awStack_18);
        nop();
      }
      Sexy::RtName::RtName((RtName *)awStack_18,aRStack_28);
      SeedChooser::SetSeedPacketType(this,(RtName *)awStack_18);
      Sexy::RtName::~RtName((RtName *)awStack_18);
      Sexy::RtName::~RtName(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::StaticClassInit() */

void DangerRoomSeedChooser::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomSeedChooser");
    (*pcVar2)(plVar1,asStack_10,FUN_04a87aec,0x368,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSeedChooser::StaticGetClass() */

long * DangerRoomSeedChooser::StaticGetClass(void)

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
  uVar2 = SeedChooser::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSeedChooser::GetClass() const */

long * DangerRoomSeedChooser::GetClass(void)

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
  uVar2 = SeedChooser::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSeedChooser::movePacket(SeedPacket_DangerRoom*, SeedPacket_DangerRoom*) */

void __thiscall
DangerRoomSeedChooser::movePacket
          (DangerRoomSeedChooser *this,SeedPacket_DangerRoom *param_1,SeedPacket_DangerRoom *param_2
          )

{
  int iVar1;
  
  if ((param_1 != (SeedPacket_DangerRoom *)0x0) && (param_2 != (SeedPacket_DangerRoom *)0x0)) {
    iVar1 = FUN_04a87778(*(undefined4 *)(param_2 + 0x200));
    SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)param_2,iVar1);
    SeedPacket::SetDisabled((SeedPacket *)param_2,false);
    SeedPacket::SetDisabled((SeedPacket *)param_1,true);
    return;
  }
  return;
}


/* DangerRoomSeedChooser::onMessageBoxCallback(UIMessageBox*, int) */

UIMessageBox * DangerRoomSeedChooser::onMessageBoxCallback(UIMessageBox *param_1,int param_2)

{
  long lVar1;
  UIMessageBox *pUVar2;
  long *plVar3;
  
  plVar3 = (long *)(ulong)(uint)param_2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x318))(plVar3);
    lVar1 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    FUN_04a877a4(lVar1 + 0x100);
    param_1 = (UIMessageBox *)0x0;
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      pUVar2 = (UIMessageBox *)Board::Quit(*(Board **)(gLawnApp + 0x9f0));
      return pUVar2;
    }
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::getBankPacket(std::string const&) */

void __thiscall DangerRoomSeedChooser::getBankPacket(DangerRoomSeedChooser *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(this + 0x1c8);
    uVar5 = 0;
    uVar2 = FUN_04a87788(uVar6,*(undefined8 *)(this + 0x1d0));
    if (uVar2 != 0) {
      do {
        lVar3 = FUN_04a87794(uVar6,uVar5);
        if (*(int *)(lVar3 + 0x30) == 5) goto LAB_04a87d94;
        if (*(int *)(lVar3 + 0x30) - 1U < 2) {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
          (**(code **)(*plVar4 + 0x1b8))(aRStack_10);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
          if (cVar1 != '\0') {
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            cVar1 = std::operator==((string *)(lVar3 + 8),param_1);
            if (cVar1 != '\0') {
              lVar3 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),uVar5);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              goto LAB_04a87d94;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          uVar6 = *(undefined8 *)(this + 0x1c8);
          uVar2 = FUN_04a87788(uVar6,*(undefined8 *)(this + 0x1d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  lVar3 = 0;
LAB_04a87d94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::startMovingPacket(ChooserPacketData&) */

void __thiscall
DangerRoomSeedChooser::startMovingPacket(DangerRoomSeedChooser *this,ChooserPacketData *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  int iVar1;
  byte bVar2;
  long lVar3;
  SeedPacket *pSVar4;
  PVPManager *this_02;
  string *psVar5;
  undefined8 *puVar6;
  long *plVar7;
  ResourceInfo *pRVar8;
  UIWidget *this_03;
  undefined8 *puVar9;
  DangerRoomManager *this_04;
  long lVar10;
  RtObject *pRVar11;
  SeedPacket_DangerRoom *pSVar12;
  SeedPacket_DangerRoom *pSVar13;
  SexyVector2 *pSVar14;
  undefined4 *puVar15;
  ChooserPacketData *this_05;
  ChooserPacketData *pCVar16;
  DangerRoomSeedChooser DVar17;
  uint uVar18;
  undefined8 uVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  code *pcVar23;
  undefined4 uVar24;
  float fVar25;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f8))();
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28);
    this_02 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    psVar5 = (string *)PVPManager::GetPVPMapDataList(this_02);
    puVar6 = (undefined8 *)getBankPacket(this,psVar5);
    if ((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 6) != 5)) goto LAB_04a880a4;
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(puVar6 + 5);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    pcVar23 = *(code **)(*plVar7 + 0x1d0);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    (*pcVar23)(plVar7,pRVar8);
    this_03 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    puVar9 = (undefined8 *)UIWidget::GetPositionOffset(this_03);
    *puVar6 = *puVar9;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    UIWidget::SetPositionOffset(*(undefined4 *)puVar6,*(undefined4 *)((long)puVar6 + 4));
    DVar17 = this[0x1e4];
    uVar24 = *(undefined4 *)(param_1 + 0x20);
    *(uint *)((long)puVar6 + 0x24) = (uint)(byte)DVar17;
    *(undefined4 *)(puVar6 + 4) = uVar24;
    SeedChooser::calcPacketPositionInBank
              ((SeedChooser *)this,(uint)(byte)DVar17,(SexyVector2 *)(puVar6 + 3));
    this[0x1e4] = (DangerRoomSeedChooser)((char)this[0x1e4] + '\x01');
    pSVar4 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    SeedPacket::SetDisabled(pSVar4,false);
    puVar6[2] = *puVar6;
    uVar24 = PVZ_T();
    *(undefined4 *)(puVar6 + 1) = uVar24;
    fVar25 = (float)PVZ_T();
    *(undefined4 *)(puVar6 + 6) = 1;
    *(float *)((long)puVar6 + 0xc) = fVar25 + 0.5;
    pRVar11 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pSVar12 = Sexy::RtObject::Cast<SeedPacket_DangerRoom>(pRVar11);
    pRVar11 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    pSVar13 = Sexy::RtObject::Cast<SeedPacket_DangerRoom>(pRVar11);
    movePacket(this,pSVar12,pSVar13);
    *(undefined4 *)(param_1 + 0x30) = 5;
LAB_04a88020:
    if (-1 < *(int *)(this + 0x1e0)) {
      uVar19 = *(undefined8 *)(this + 0x1b0);
      iVar22 = -1;
      lVar3 = FUN_04a87794(uVar19,(long)*(int *)(this + 0x1e0));
      if (*(int *)(lVar3 + 0x30) != 4) goto LAB_04a88048;
    }
    checkButtons(this);
  }
  else {
    if (*(int *)(param_1 + 0x30) != 2) goto LAB_04a88020;
    lVar3 = FUN_04a87794(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
    pSVar4 = (SeedPacket *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
    SeedPacket::SetDisabled(pSVar4,false);
    lVar3 = FUN_04a87794(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
    *(undefined4 *)(lVar3 + 0x30) = 0;
    pRVar11 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    pSVar12 = Sexy::RtObject::Cast<SeedPacket_DangerRoom>(pRVar11);
    lVar3 = FUN_04a87794(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
    pRVar11 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
    pSVar13 = Sexy::RtObject::Cast<SeedPacket_DangerRoom>(pRVar11);
    movePacket(this,pSVar12,pSVar13);
    iVar22 = *(int *)(param_1 + 0x24);
    iVar21 = iVar22 + 1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x28));
    DVar17 = this[0x1e4];
    if (iVar21 < (int)(uint)(byte)DVar17) {
      lVar3 = (long)iVar21;
      pSVar14 = (SexyVector2 *)FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar3);
      if (pSVar14[0x34] == (SexyVector2)0x0) {
        iVar22 = -1;
      }
      while( true ) {
        iVar1 = *(int *)(pSVar14 + 0x24) + -1;
        *(int *)(pSVar14 + 0x24) = iVar1;
        if (*(int *)(pSVar14 + 0x30) == 1) {
          SeedChooser::calcPacketPositionInBank((SeedChooser *)this,iVar1,pSVar14 + 0x18);
        }
        else {
          SeedChooser::calcPacketPositionInBank((SeedChooser *)this,iVar1,pSVar14);
          lVar10 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar3);
          uVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
          puVar15 = (undefined4 *)FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar3);
          UIWidget::SetPositionOffset(*puVar15,puVar15[1],uVar19);
        }
        uVar19 = *(undefined8 *)(this + 0x1c8);
        iVar21 = iVar21 + 1;
        this_05 = (ChooserPacketData *)FUN_04a87794(uVar19,lVar3 + -1);
        pCVar16 = (ChooserPacketData *)FUN_04a87794(uVar19,lVar3);
        ChooserPacketData::operator=(this_05,pCVar16);
        DVar17 = this[0x1e4];
        if ((int)(uint)(byte)DVar17 <= iVar21) break;
        pSVar14 = (SexyVector2 *)FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar3 + 1);
        lVar3 = lVar3 + 1;
      }
    }
    else {
      iVar22 = -1;
    }
    uVar19 = *(undefined8 *)(this + 0x1c8);
    this[0x1e4] = (DangerRoomSeedChooser)((char)DVar17 - 1U);
    lVar3 = FUN_04a87794(uVar19,(char)DVar17 - 1U);
    *(undefined4 *)(lVar3 + 0x30) = 5;
    DVar17 = this[0x1e4];
    lVar3 = FUN_04a87794(uVar19,DVar17);
    *(uint *)(lVar3 + 0x24) = (uint)(byte)DVar17;
    lVar3 = FUN_04a87794(uVar19,this[0x1e4]);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(lVar3 + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (-1 < *(int *)(this + 0x1e0)) {
      uVar19 = *(undefined8 *)(this + 0x1b0);
      lVar3 = FUN_04a87794(uVar19,(long)*(int *)(this + 0x1e0));
      if (*(int *)(lVar3 + 0x30) == 4) goto LAB_04a88078;
LAB_04a88048:
      if (this[0x1e4] == (DangerRoomSeedChooser)0x0) {
        bVar2 = true;
        lVar3 = FUN_04a87794(uVar19,(long)*(int *)(this + 0x1e0));
        uVar24 = 5;
      }
      else {
        this_04 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        bVar2 = DangerRoomManager::IsTrainingMode(this_04);
        DVar17 = this[0x1e4];
        bVar20 = bVar2 ^ 1;
        if ((byte)DVar17 == 0) {
          uVar19 = *(undefined8 *)(this + 0x1b0);
        }
        else {
          uVar19 = *(undefined8 *)(this + 0x1c8);
          lVar3 = 0;
          do {
            lVar10 = FUN_04a87794(uVar19,lVar3);
            if (*(char *)(lVar10 + 0x34) != '\0') {
              bVar20 = 0;
            }
            uVar18 = (uint)(lVar3 + 1);
            lVar3 = lVar3 + 1;
          } while ((byte)DVar17 != uVar18 && (int)uVar18 <= (int)(uint)(byte)DVar17);
          bVar2 = bVar20 ^ 1;
          uVar19 = *(undefined8 *)(this + 0x1b0);
        }
        lVar3 = FUN_04a87794(uVar19,(long)*(int *)(this + 0x1e0));
        uVar24 = 5;
        if (bVar20 != 0) {
          uVar24 = 0;
        }
      }
      *(undefined4 *)(lVar3 + 0x30) = uVar24;
      pSVar4 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
      SeedPacket::SetDisabled(pSVar4,(bool)bVar2);
    }
LAB_04a88078:
    checkButtons(this);
    if (-1 < iVar22) {
      uVar19 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),(long)iVar22);
      (**(code **)(*(long *)this + 0x1e0))(this,uVar19);
    }
  }
LAB_04a880a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::GetSeedChooserWarnings(std::vector<Sexy::RtWeakPtr<PlantType const>,
   std::allocator<Sexy::RtWeakPtr<PlantType const> > > const&) */

void DangerRoomSeedChooser::GetSeedChooserWarnings(vector *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  RtMixedPtrBase *this;
  long lVar5;
  undefined8 *in_x1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar4 = false;
  local_18 = FUN_04a88458(*in_x1);
  bVar3 = false;
  local_10 = FUN_04a884a8(in_x1[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    do {
      this = (RtMixedPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar2 != '\0') {
        if (!bVar3) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          bVar3 = std::operator==("cobcannon",(string *)(lVar5 + 8));
        }
        if (!bVar4) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          bVar4 = std::operator==("kernelpult",(string *)(lVar5 + 8));
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (bVar1);
  }
  if (bVar4 < bVar3) {
    FUN_05478178();
    nop();
  }
  else {
    FUN_05478178();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::DangerRoomSeedChooser() */

void __thiscall DangerRoomSeedChooser::DangerRoomSeedChooser(DangerRoomSeedChooser *this)

{
  undefined *this_00;
  int iVar1;
  long lVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::SeedChooser((SeedChooser *)this);
  *(undefined ***)this = &PTR_GetClass_0693f3d0;
  *(undefined ***)(this + 0x10) = &PTR__DangerRoomSeedChooser_0693f610;
  *(undefined **)(this + 0x1a0) = &DAT_0693f640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x350));
  lVar2 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = FUN_04a87774(*(undefined4 *)(lVar2 + 0x2b8));
  this[0x34c] = (DangerRoomSeedChooser)(iVar1 == 1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<DangerRoomSeedChooser,void(DangerRoomSeedChooser::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::DangerRoomBoostEnd,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSeedChooser::StaticNew() */

DangerRoomSeedChooser * DangerRoomSeedChooser::StaticNew(void)

{
  DangerRoomSeedChooser *this;
  
  this = ::operator_new(0x368);
  DangerRoomSeedChooser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::initPlantFromRecord() */

void __thiscall DangerRoomSeedChooser::initPlantFromRecord(DangerRoomSeedChooser *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  UIWidget *this_01;
  ProfileMgr *this_02;
  PlayerInfo *pPVar4;
  int *piVar5;
  DangerRoomManager *this_03;
  long lVar6;
  SexyVector2 *pSVar7;
  SeedPacket *this_04;
  long *plVar8;
  ResourceInfo *pRVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_30 [2];
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar14 = 5;
  if (this[0x34c] == (DangerRoomSeedChooser)0x0) {
    uVar14 = 4;
  }
  *(undefined4 *)(this + 0x300) = uVar14;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UISunBank");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,true);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if (((byte)this[0x1e4] < (byte)this[0x1e7]) &&
     (lVar13 = PlayerInfo::GetBattleArrayRecord(pPVar4,*(undefined4 *)(this + 0x300)), lVar13 != 0))
  {
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)&local_20,(vector *)(lVar13 + 8));
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_20);
  if (cVar2 == '\0') {
    lVar13 = 0;
    local_30[0] = FUN_04a8777c(local_20,local_18);
    local_28[0] = (uint)(byte)this[0x1e7];
    piVar5 = eastl::min_alt<int>((int *)local_30,(int *)local_28);
    iVar1 = *piVar5;
    if (0 < iVar1) {
      do {
        while( true ) {
          this_03 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
          piVar5 = (int *)FUN_04a8779c(local_20,lVar13);
          cVar2 = DangerRoomManager::IsHavePlant(this_03,*piVar5);
          if (cVar2 == '\0') break;
          iVar3 = PlantNameMapper::GetInstance();
          FUN_04a8779c(local_20,lVar13);
          NameMapperBase::GetNameForId(iVar3);
          lVar6 = 0;
          do {
            lVar11 = lVar6;
            uVar12 = *(undefined8 *)(this + 0x1b0);
            iVar3 = FUN_04a87788(uVar12,*(undefined8 *)(this + 0x1b8));
            if (iVar3 <= (int)lVar11) goto LAB_04a88a80;
            lVar6 = FUN_04a87794(uVar12,lVar11);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
            SeedPacket::GetPlantType();
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
            cVar2 = std::operator==((string *)(lVar6 + 8),(string *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
            lVar6 = lVar11 + 1;
          } while (cVar2 == '\0');
          lVar6 = FUN_04a87794(*(undefined8 *)(this + 0x1b0),lVar11);
          if (*(int *)(lVar6 + 0x30) == 3) {
LAB_04a88a80:
            std::string::~string((string *)local_30);
          }
          else {
            pSVar7 = (SexyVector2 *)FUN_04a87794(*(undefined8 *)(this + 0x1c8),this[0x1e4]);
            this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(pSVar7 + 0x28);
            pSVar7[0x34] = *(SexyVector2 *)(lVar6 + 0x34);
            this_04 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            SeedPacket::SetIsImitater(this_04,*(bool *)(lVar6 + 0x34));
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            pcVar10 = *(code **)(*plVar8 + 0x1d0);
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 0x28));
            (*pcVar10)(plVar8,pRVar9);
            *(undefined4 *)(pSVar7 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
            *(undefined4 *)(pSVar7 + 0x30) = 2;
            uVar14 = PVZ_T();
            *(undefined4 *)(pSVar7 + 8) = uVar14;
            fVar15 = (float)PVZ_T();
            *(float *)(pSVar7 + 0xc) = fVar15 + 0.5;
            SeedChooser::calcPacketPositionInBank
                      ((SeedChooser *)this,(uint)(byte)this[0x1e4],pSVar7);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            UIWidget::SetPositionOffset(*(undefined4 *)pSVar7,*(undefined4 *)(pSVar7 + 4));
            *(undefined8 *)(pSVar7 + 0x10) = *(undefined8 *)pSVar7;
            *(undefined8 *)(pSVar7 + 0x18) = *(undefined8 *)pSVar7;
            *(uint *)(pSVar7 + 0x24) = (uint)(byte)this[0x1e4];
            *(undefined4 *)(lVar6 + 0x30) = 5;
            this[0x1e4] = (DangerRoomSeedChooser)((char)this[0x1e4] + '\x01');
            std::string::~string((string *)local_30);
          }
          lVar13 = lVar13 + 1;
          if (iVar1 <= (int)lVar13) goto LAB_04a88a94;
        }
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < iVar1);
    }
  }
LAB_04a88a94:
  checkButtons(this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DangerRoomSeedChooser::ResetTrainingPlantNumList() */

void __thiscall DangerRoomSeedChooser::ResetTrainingPlantNumList(DangerRoomSeedChooser *this)

{
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::clear
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x350)
            );
  return;
}


/* DangerRoomSeedChooser::~DangerRoomSeedChooser() */

void __thiscall DangerRoomSeedChooser::~DangerRoomSeedChooser(DangerRoomSeedChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_0693f3d0;
  *(undefined ***)(this + 0x10) = &PTR__DangerRoomSeedChooser_0693f610;
  *(undefined **)(this + 0x1a0) = &DAT_0693f640;
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x350)
            );
  SeedChooser::~SeedChooser((SeedChooser *)this);
  return;
}


/* non-virtual thunk to DangerRoomSeedChooser::~DangerRoomSeedChooser() */

void __thiscall DangerRoomSeedChooser::~DangerRoomSeedChooser(DangerRoomSeedChooser *this)

{
  ~DangerRoomSeedChooser(this + -0x10);
  return;
}


/* DangerRoomSeedChooser::~DangerRoomSeedChooser() */

void __thiscall DangerRoomSeedChooser::~DangerRoomSeedChooser(DangerRoomSeedChooser *this)

{
  ~DangerRoomSeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DangerRoomSeedChooser::~DangerRoomSeedChooser() */

void __thiscall DangerRoomSeedChooser::~DangerRoomSeedChooser(DangerRoomSeedChooser *this)

{
  ~DangerRoomSeedChooser(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::VerifyAndSelectSeeds() */

void __thiscall DangerRoomSeedChooser::VerifyAndSelectSeeds(DangerRoomSeedChooser *this)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *this_01;
  long lVar2;
  ChooserPacketData *pCVar3;
  long *plVar4;
  ResourceInfo *pRVar5;
  DangerRoomManager *this_02;
  UIMessageBox *this_03;
  int iVar6;
  long lVar7;
  code *pcVar8;
  int local_78 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_60 [24];
  ChooserPacketData aCStack_48 [40];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  lVar7 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)this_00 + 0x1c0))(this_00,this[0x1e7],1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_60);
  this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
  cVar1 = FUN_04a87770(this_00[0x199]);
  iVar6 = (int)cVar1;
  if (0 < iVar6) {
    do {
      lVar2 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar7);
      if ((-1 < *(int *)(lVar2 + 0x20)) && (*(int *)(lVar2 + 0x30) != 5)) {
        UINewPVPTopZombieQueue::gettItem(this_00,(int)lVar7);
        lVar2 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar7);
        pCVar3 = (ChooserPacketData *)
                 FUN_04a87794(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar2 + 0x20));
        ChooserPacketData::ChooserPacketData(aCStack_48,pCVar3);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        pcVar8 = *(code **)(*plVar4 + 0x1d0);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
        (*pcVar8)(plVar4,pRVar5);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        FUN_04a877b0(lVar2 + 0x198);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar4 + 0x1b8))(aRStack_68);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        local_78[0] = NameMapperBase::GetIdForName(this_01,(string *)(lVar2 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_60,local_78);
        ChooserPacketData::~ChooserPacketData(aCStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        cVar1 = FUN_04a87770(this_00[0x199]);
        iVar6 = (int)cVar1;
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar6);
  }
  cVar1 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)avStack_60)
  ;
  if (cVar1 != '\0') {
    this_02 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    lVar7 = DangerRoomManager::GetDangerRoomInfo(this_02,(bool)this[0x34c]);
    cVar1 = std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::empty
                      ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)
                       (lVar7 + 0x90));
    if (cVar1 != '\0') {
      this_03 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_03 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_03,2);
        std::string::string((string *)aRStack_68,"[DANGERROOM_NO_PLANT_TIP]");
        std::string::string((string *)aCStack_48,"[REVIVE_TIP]");
        UIMessageBox::SetMessage(this_03,(string *)aRStack_68,(string *)aCStack_48);
        std::string::~string((string *)aCStack_48);
        nop();
        std::string::~string((string *)aRStack_68);
        nop();
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_60);
      goto LAB_04a88ea8;
    }
  }
  lVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aCStack_48);
  if (this[0x1e7] != (DangerRoomSeedChooser)0x0) {
    do {
      lVar2 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x28));
      SeedPacket::GetPlantType();
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)aCStack_48,(RtWeakPtr *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (iVar6 + 1 < (int)(uint)(byte)this[0x1e7]);
  }
  (**(code **)(*(long *)this + 0x1e8))(this);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)aCStack_48);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_60);
LAB_04a88ea8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::finalizeSelection() */

void __thiscall DangerRoomSeedChooser::finalizeSelection(DangerRoomSeedChooser *this)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *this_01;
  long lVar2;
  ChooserPacketData *pCVar3;
  long *plVar4;
  ProfileMgr *this_02;
  PlayerInfo *pPVar5;
  UIWidget *this_03;
  long lVar6;
  int iVar7;
  int local_74;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_60 [24];
  ChooserPacketData aCStack_48 [40];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  lVar6 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_60);
  this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
  cVar1 = FUN_04a87770(this_00[0x199]);
  iVar7 = (int)cVar1;
  if (0 < iVar7) {
    do {
      lVar2 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar6);
      if ((-1 < *(int *)(lVar2 + 0x20)) && (*(int *)(lVar2 + 0x30) != 5)) {
        UINewPVPTopZombieQueue::gettItem(this_00,(int)lVar6);
        lVar2 = FUN_04a87794(*(undefined8 *)(this + 0x1c8),lVar6);
        pCVar3 = (ChooserPacketData *)
                 FUN_04a87794(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar2 + 0x20));
        ChooserPacketData::ChooserPacketData(aCStack_48,pCVar3);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        (**(code **)(*plVar4 + 0x1b8))(aRStack_68);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        local_74 = NameMapperBase::GetIdForName(this_01,(string *)(lVar2 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_60,&local_74);
        ChooserPacketData::~ChooserPacketData(aCStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        cVar1 = FUN_04a87770(this_00[0x199]);
        iVar7 = (int)cVar1;
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar7);
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::SetBattleArrayRecord(pPVar5,*(undefined4 *)(this + 0x300),avStack_60);
  SlidingWidget::SlideOut((SlidingWidget *)this);
  UIWidget::SetVisible((UIWidget *)this_00,true);
  std::string::string((string *)aCStack_48,"UIViewBoardOrZombies");
  this_03 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aCStack_48);
  UIWidget::SetVisible(this_03,false);
  std::string::~string((string *)aCStack_48);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::GetTrainingPlantNumList() */

void __thiscall DangerRoomSeedChooser::GetTrainingPlantNumList(DangerRoomSeedChooser *this)

{
  vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  ProfileMgr *this_01;
  WorldMap *this_02;
  vector *pvVar4;
  int *piVar5;
  undefined8 local_50;
  undefined8 local_48;
  vector<int,std::allocator<int>> avStack_40 [24];
  S2C_DangerRoomPlantNum aSStack_28 [20];
  int local_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x350);
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::empty(this_00)
  ;
  if (cVar2 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (WorldMap *)ProfileMgr::GetCurrentProfile(this_01);
    pvVar4 = (vector *)WorldMap::GetActionsMgr(this_02);
    std::vector<int,std::allocator<int>>::vector(avStack_40,pvVar4);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_40);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar3)
    {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      iVar1 = *piVar5;
      if (iVar1 != -1) {
        S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum(aSStack_28);
        local_10 = 99;
        local_14 = iVar1;
        std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::push_back
                  (this_00,aSStack_28);
        S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum(aSStack_28);
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_50);
    }
    std::vector<int,std::allocator<int>>::~vector(avStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* DangerRoomSeedChooser::GetPlantNumList() */

void __thiscall DangerRoomSeedChooser::GetPlantNumList(DangerRoomSeedChooser *this)

{
  RechargeRewardConfig *this_00;
  
  if (this[0x34c] == (DangerRoomSeedChooser)0x0) {
    this_00 = (RechargeRewardConfig *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    RechargeRewardConfig::getDefaultBanner(this_00);
    return;
  }
  GetTrainingPlantNumList(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::rebuildValidPlantTypeList() */

void DangerRoomSeedChooser::rebuildValidPlantTypeList(void)

{
  bool bVar1;
  undefined4 uVar2;
  SeedChooser *in_x0;
  ProfileMgr *this;
  undefined8 *puVar3;
  S2C_DangerRoomPlantNum *pSVar4;
  wchar16 *pwVar5;
  DangerRoomManager *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  RtObject *this_01;
  string *psVar8;
  SeedPacket_DangerRoom *this_02;
  int *piVar9;
  __normal_iterator *p_Var10;
  ServerPlantID *in_x3;
  LineBreakCategory *in_x4;
  code *pcVar11;
  undefined8 local_58;
  undefined8 local_50;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38 [2];
  uint local_28 [5];
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::deleteChooserPackets(in_x0);
  if (in_x0[0x34c] != (SeedChooser)0x0) {
    ResetTrainingPlantNumList((DangerRoomSeedChooser *)in_x0);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  puVar3 = (undefined8 *)GetPlantNumList((DangerRoomSeedChooser *)in_x0);
  local_58 = FUN_04a87e90(*puVar3);
  local_50 = FUN_04a87ee0(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    pSVar4 = (S2C_DangerRoomPlantNum *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28,pSVar4);
    ServerPlantID::ServerPlantID((ServerPlantID *)local_38,local_14);
    ServerPlantID::ToString();
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    p_Var10 = (__normal_iterator *)&local_40;
    std::string::string((string *)local_38,"FreePlanting");
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              (pwVar5,(wchar16 *)local_38,(LineBreakCategory *)p_Var10,(LineBreakCategory *)in_x3,
               in_x4);
    std::string::~string((string *)local_38);
    nop();
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    puVar3 = (undefined8 *)DangerRoomManager::GetServerPlantBanList(this_00);
    uVar6 = FUN_04a87f30(*puVar3);
    uVar7 = FUN_04a87f80(puVar3[1]);
    local_40 = std::
               find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                         (uVar6,uVar7,&local_14);
    local_38[0] = FUN_04a87f80(puVar3[1]);
    __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_38);
    Sexy::RtName::RtName((RtName *)local_38,(RtName *)(in_x0 + 800));
    UIWidget::CreateWidget((ServerPlantID *)local_38,1);
    nop();
    Sexy::RtName::~RtName((RtName *)local_38);
    pcVar11 = *(code **)(*(long *)this_01 + 0x198);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    (*pcVar11)(this_01,(ServerPlantID *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_38);
    in_x4 = (LineBreakCategory *)0x0;
    in_x3 = (ServerPlantID *)local_38;
    SeedChooser::initializeSeedPacket();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    bVar1 = Sexy::RtObject::IsA<SeedPacket_DangerRoom>(this_01);
    if (bVar1) {
      this_02 = Sexy::RtObject::Cast<SeedPacket_DangerRoom>(this_01);
      SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this_02,local_10);
      SeedPacket::SetDisabled((SeedPacket *)this_02,local_10 == 0);
    }
    std::string::~string(asStack_48);
    S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_58);
  }
  uVar2 = FUN_04a87788(*(undefined8 *)(in_x0 + 0x1b0),*(undefined8 *)(in_x0 + 0x1b8));
  local_38[0] = CONCAT44(local_38[0]._4_4_,uVar2);
  local_28[0] = (uint)(byte)in_x0[0x1e6];
  piVar9 = eastl::min_alt<int>((int *)local_38,(int *)local_28);
  in_x0[0x1e7] = SUB41(*piVar9,0);
  SeedChooser::initChooserPackets(in_x0);
  SeedChooser::updateFavoriteSorting(in_x0);
  checkButtons((DangerRoomSeedChooser *)in_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::drawArtifact(Sexy::Graphics*, Sexy::Point const&) const */

void __thiscall
DangerRoomSeedChooser::drawArtifact(DangerRoomSeedChooser *this,Graphics *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  DangerRoomManager *pDVar8;
  Image *pIVar9;
  undefined8 uVar10;
  undefined4 local_3c;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::drawArtifact((SeedChooser *)this,param_1,param_2);
  pDVar8 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar3 = DangerRoomManager::IsTrainingMode(pDVar8);
  if (cVar3 == '\0') {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7eba8);
    iVar4 = FUN_04a879a4(0xe);
    iVar1 = *(int *)param_2;
    iVar5 = FUN_04a879a4(0xa0);
    iVar2 = *(int *)(param_2 + 4);
    iVar6 = FUN_04a879a4(0x28);
    iVar7 = FUN_04a879a4(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    pDVar8 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    local_3c = DangerRoomManager::GetArtifactLeftTimes(pDVar8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
    Sexy::ToWString(asStack_38);
    iVar4 = FUN_04a879a4(0xe);
    iVar1 = *(int *)param_2;
    iVar5 = FUN_04a879a4(0xa3);
    iVar2 = *(int *)(param_2 + 4);
    iVar6 = FUN_04a879a4(0x28);
    iVar7 = FUN_04a879a4(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar10,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedChooser::onSlideInFinished() */

void __thiscall DangerRoomSeedChooser::onSlideInFinished(DangerRoomSeedChooser *this)

{
  bool bVar1;
  char cVar2;
  vector *pvVar3;
  DangerRoomManager *pDVar4;
  long lVar5;
  UIMessageBox *this_00;
  undefined8 local_70;
  vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> avStack_68 [24];
  undefined8 local_50 [3];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::onSlideInFinished((SeedChooser *)this);
  pvVar3 = (vector *)GetPlantNumList(this);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::vector
            (avStack_68,pvVar3);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_50[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_68);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_50);
    if (!bVar1) {
      pDVar4 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      lVar5 = DangerRoomManager::GetDangerRoomInfo(pDVar4,(bool)this[0x34c]);
      cVar2 = std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::empty
                        ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)
                         (lVar5 + 0x90));
      if ((cVar2 != '\0') &&
         (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
         this_00 != (UIMessageBox *)0x0)) {
        UIMessageBox::SetShowType(this_00,2);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onMessageBoxCallback);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<DangerRoomSeedChooser,void(DangerRoomSeedChooser::*)(UIMessageBox*,int)>
                  (aDStack_38,(string *)local_50);
        UIMessageBox::SetCallback(this_00,aDStack_38);
        std::string::string((string *)&local_70,"[DANGERROOM_NO_PLANT_TIP]");
        std::string::string((string *)local_50,"[REVIVE_TIP]");
        UIMessageBox::SetMessage(this_00,(string *)&local_70,(string *)local_50);
        std::string::~string((string *)local_50);
        nop();
        std::string::~string((string *)&local_70);
        nop();
      }
LAB_04a89810:
      std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
                (avStack_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    if (0 < *(int *)(lVar5 + 0x18)) {
      pDVar4 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      lVar5 = DangerRoomManager::GetDangerRoomInfo(pDVar4,(bool)this[0x34c]);
      std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::empty
                ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)
                 (lVar5 + 0x90));
      goto LAB_04a89810;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
  } while( true );
}

