// Class: UnchartedSeedChooser


/* UnchartedSeedChooser::onMessageBoxCallback(UIMessageBox*, int) */

UIMessageBox * UnchartedSeedChooser::onMessageBoxCallback(UIMessageBox *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(ulong)(uint)param_2;
  if (plVar1 != (long *)0x0) {
    param_1 = (UIMessageBox *)(**(code **)(*plVar1 + 0x318))(plVar1);
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::SetSeedBankProperties(SeedBankProperties const*) */

void __thiscall
UnchartedSeedChooser::SetSeedBankProperties(UnchartedSeedChooser *this,SeedBankProperties *param_1)

{
  char cVar1;
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  *(SeedBankProperties **)(this + 0x298) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 != (SeedBankProperties *)0x0) {
    cVar1 = FUN_0547419c((Sexy *)(param_1 + 0x48));
    if (cVar1 == '\0') {
      Sexy::StringToWString((Sexy *)(param_1 + 0x48),(string *)aRStack_18);
      Sexy::RtName::RtName(aRStack_28,(wstring *)aRStack_18);
      FUN_05476c50(aRStack_18);
      Sexy::RtName::RtName(aRStack_18,aRStack_28);
      SeedChooser::SetSeedPacketType(this,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
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
/* UnchartedSeedChooser::StaticClassInit() */

void UnchartedSeedChooser::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedSeedChooser");
    (*pcVar2)(plVar1,asStack_10,FUN_034116c8,0x368,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedSeedChooser::StaticGetClass() */

long * UnchartedSeedChooser::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedSeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedSeedChooser::GetClass() const */

long * UnchartedSeedChooser::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedSeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedSeedChooser::movePacket(SeedPacket_Uncharted*, SeedPacket_Uncharted*) */

void __thiscall
UnchartedSeedChooser::movePacket
          (UnchartedSeedChooser *this,SeedPacket_Uncharted *param_1,SeedPacket_Uncharted *param_2)

{
  int iVar1;
  
  if ((param_1 != (SeedPacket_Uncharted *)0x0) && (param_2 != (SeedPacket_Uncharted *)0x0)) {
    iVar1 = FUN_03410de0(*(undefined4 *)(param_2 + 0x200));
    SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)param_2,iVar1);
    SeedPacket::SetDisabled((SeedPacket *)param_2,false);
    SeedPacket::SetDisabled((SeedPacket *)param_1,true);
    return;
  }
  return;
}


/* UnchartedSeedChooser::ResetPlantNumList() */

void __thiscall UnchartedSeedChooser::ResetPlantNumList(UnchartedSeedChooser *this)

{
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::clear
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x350));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::getBankPacket(std::string const&) */

void __thiscall UnchartedSeedChooser::getBankPacket(UnchartedSeedChooser *this,string *param_1)

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
    uVar2 = FUN_03410df8(uVar6,*(undefined8 *)(this + 0x1d0));
    if (uVar2 != 0) {
      do {
        lVar3 = FUN_03410e04(uVar6,uVar5);
        if (*(int *)(lVar3 + 0x30) == 5) goto LAB_03411c70;
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
              lVar3 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),uVar5);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              goto LAB_03411c70;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          uVar6 = *(undefined8 *)(this + 0x1c8);
          uVar2 = FUN_03410df8(uVar6,*(undefined8 *)(this + 0x1d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  lVar3 = 0;
LAB_03411c70:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* UnchartedSeedChooser::InitRecordPacket(Sexy::RtWeakPtr<SeedPacket>, Sexy::RtWeakPtr<SeedPacket>)
    */

void __thiscall
UnchartedSeedChooser::InitRecordPacket(undefined8 param_1,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  bool bVar1;
  long *plVar2;
  ResourceInfo *pRVar3;
  code *pcVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if ((bVar1) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3), bVar1)) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pcVar4 = *(code **)(*plVar2 + 0x1d0);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
    (*pcVar4)(plVar2,pRVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::startMovingPacket(ChooserPacketData&) */

void __thiscall
UnchartedSeedChooser::startMovingPacket(UnchartedSeedChooser *this,ChooserPacketData *param_1)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  SeedPacket *pSVar6;
  PVPManager *this_02;
  string *psVar7;
  undefined8 *puVar8;
  long *plVar9;
  ResourceInfo *pRVar10;
  UIWidget *this_03;
  undefined8 *puVar11;
  RtObject *pRVar12;
  SeedPacket_Uncharted *pSVar13;
  SeedPacket_Uncharted *pSVar14;
  SexyVector2 *pSVar15;
  undefined4 *puVar16;
  ChooserPacketData *this_04;
  ChooserPacketData *pCVar17;
  UnchartedSeedChooser UVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  code *pcVar22;
  undefined4 uVar23;
  float fVar24;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f8))();
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28);
    this_02 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    psVar7 = (string *)PVPManager::GetPVPMapDataList(this_02);
    puVar8 = (undefined8 *)getBankPacket(this,psVar7);
    if ((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 6) != 5)) goto LAB_03411fc4;
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(puVar8 + 5);
    UVar18 = this[0x1e4];
    *(ChooserPacketData *)((long)puVar8 + 0x34) = param_1[0x34];
    pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    SeedPacket::SetIsImitater(pSVar6,(bool)param_1[0x34]);
    if (param_1[0x34] == (ChooserPacketData)0x0) {
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      pcVar22 = *(code **)(*plVar9 + 0x1d0);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      (*pcVar22)(plVar9,pRVar10);
    }
    else {
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      pcVar22 = *(code **)(*plVar9 + 0x1d0);
      lVar4 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),(long)(int)((byte)UVar18 - 1));
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar4 + 0x28));
      (*pcVar22)(plVar9,pRVar10);
    }
    this_03 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    puVar11 = (undefined8 *)UIWidget::GetPositionOffset(this_03);
    *puVar8 = *puVar11;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    UIWidget::SetPositionOffset(*(undefined4 *)puVar8,*(undefined4 *)((long)puVar8 + 4));
    UVar18 = this[0x1e4];
    uVar23 = *(undefined4 *)(param_1 + 0x20);
    *(uint *)((long)puVar8 + 0x24) = (uint)(byte)UVar18;
    *(undefined4 *)(puVar8 + 4) = uVar23;
    SeedChooser::calcPacketPositionInBank
              ((SeedChooser *)this,(uint)(byte)UVar18,(SexyVector2 *)(puVar8 + 3));
    this[0x1e4] = (UnchartedSeedChooser)((char)this[0x1e4] + '\x01');
    pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    SeedPacket::SetDisabled(pSVar6,false);
    puVar8[2] = *puVar8;
    uVar23 = PVZ_T();
    *(undefined4 *)(puVar8 + 1) = uVar23;
    fVar24 = (float)PVZ_T();
    *(undefined4 *)(puVar8 + 6) = 1;
    *(float *)((long)puVar8 + 0xc) = fVar24 + 0.5;
    pRVar12 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pSVar13 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(pRVar12);
    pRVar12 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    pSVar14 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(pRVar12);
    movePacket(this,pSVar13,pSVar14);
    *(undefined4 *)(param_1 + 0x30) = 5;
LAB_03411f14:
    if (-1 < *(int *)(this + 0x1e0)) {
      iVar21 = -1;
      lVar4 = FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(this + 0x1e0));
      if (*(int *)(lVar4 + 0x30) != 4) goto LAB_03411f3c;
    }
    DangerRoomSeedChooser::checkButtons((DangerRoomSeedChooser *)this);
  }
  else {
    if (*(int *)(param_1 + 0x30) != 2) goto LAB_03411f14;
    lVar4 = FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
    pSVar6 = (SeedPacket *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x28));
    SeedPacket::SetDisabled(pSVar6,false);
    lVar4 = FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
    *(undefined4 *)(lVar4 + 0x30) = 0;
    pRVar12 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    pSVar13 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(pRVar12);
    lVar4 = FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
    pRVar12 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x28));
    pSVar14 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(pRVar12);
    movePacket(this,pSVar13,pSVar14);
    iVar21 = *(int *)(param_1 + 0x24);
    iVar19 = iVar21 + 1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x28));
    UVar18 = this[0x1e4];
    if (iVar19 < (int)(uint)(byte)UVar18) {
      uVar20 = *(undefined8 *)(this + 0x1c8);
      lVar4 = (long)iVar19;
      pSVar15 = (SexyVector2 *)FUN_03410e04(uVar20,lVar4);
      if (pSVar15[0x34] == (SexyVector2)0x0) {
        iVar21 = -1;
        pSVar15 = (SexyVector2 *)FUN_03410e04(uVar20,lVar4);
      }
      while( true ) {
        iVar2 = *(int *)(pSVar15 + 0x24) + -1;
        *(int *)(pSVar15 + 0x24) = iVar2;
        if (*(int *)(pSVar15 + 0x30) == 1) {
          SeedChooser::calcPacketPositionInBank((SeedChooser *)this,iVar2,pSVar15 + 0x18);
        }
        else {
          SeedChooser::calcPacketPositionInBank((SeedChooser *)this,iVar2,pSVar15);
          lVar5 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar4);
          uVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x28));
          puVar16 = (undefined4 *)FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar4);
          UIWidget::SetPositionOffset(*puVar16,puVar16[1],uVar20);
        }
        uVar20 = *(undefined8 *)(this + 0x1c8);
        iVar19 = iVar19 + 1;
        this_04 = (ChooserPacketData *)FUN_03410e04(uVar20,lVar4 + -1);
        pCVar17 = (ChooserPacketData *)FUN_03410e04(uVar20,lVar4);
        ChooserPacketData::operator=(this_04,pCVar17);
        UVar18 = this[0x1e4];
        if ((int)(uint)(byte)UVar18 <= iVar19) break;
        pSVar15 = (SexyVector2 *)FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar4 + 1);
        lVar4 = lVar4 + 1;
      }
      uVar20 = *(undefined8 *)(this + 0x1c8);
    }
    else {
      uVar20 = *(undefined8 *)(this + 0x1c8);
      iVar21 = -1;
    }
    this[0x1e4] = (UnchartedSeedChooser)((char)UVar18 - 1U);
    lVar4 = FUN_03410e04(uVar20,(char)UVar18 - 1U);
    *(undefined4 *)(lVar4 + 0x30) = 5;
    UVar18 = this[0x1e4];
    lVar4 = FUN_03410e04(uVar20,UVar18);
    *(uint *)(lVar4 + 0x24) = (uint)(byte)UVar18;
    lVar4 = FUN_03410e04(uVar20,this[0x1e4]);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(lVar4 + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if ((-1 < *(int *)(this + 0x1e0)) &&
       (lVar4 = FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(this + 0x1e0)),
       *(int *)(lVar4 + 0x30) != 4)) {
LAB_03411f3c:
      UVar18 = this[0x1e4];
      bVar3 = UVar18 != (UnchartedSeedChooser)0x0;
      if (UVar18 != (UnchartedSeedChooser)0x0) {
        uVar20 = *(undefined8 *)(this + 0x1c8);
        lVar5 = 0;
        do {
          lVar1 = lVar5 + 1;
          lVar5 = FUN_03410e04(uVar20,lVar5);
          if (*(char *)(lVar5 + 0x34) != '\0') {
            bVar3 = false;
          }
          lVar5 = lVar1;
        } while ((int)lVar1 < (int)(uint)(byte)UVar18);
      }
      uVar23 = 0;
      if (!bVar3) {
        uVar23 = 5;
      }
      *(undefined4 *)(lVar4 + 0x30) = uVar23;
      pSVar6 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x28));
      SeedPacket::SetDisabled(pSVar6,(bool)(bVar3 ^ 1));
    }
    DangerRoomSeedChooser::checkButtons((DangerRoomSeedChooser *)this);
    if (-1 < iVar21) {
      uVar20 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),(long)iVar21);
      (**(code **)(*(long *)this + 0x1e0))(this,uVar20);
    }
  }
LAB_03411fc4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::GetSeedChooserWarnings(std::vector<Sexy::RtWeakPtr<PlantType const>,
   std::allocator<Sexy::RtWeakPtr<PlantType const> > > const&) */

void UnchartedSeedChooser::GetSeedChooserWarnings(vector *param_1)

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
  local_18 = FUN_03412384(*in_x1);
  bVar3 = false;
  local_10 = FUN_034123d4(in_x1[1]);
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


/* UnchartedSeedChooser::UnchartedSeedChooser() */

void __thiscall UnchartedSeedChooser::UnchartedSeedChooser(UnchartedSeedChooser *this)

{
  SeedChooser::SeedChooser((SeedChooser *)this);
  *(undefined ***)this = &PTR_GetClass_06620230;
  *(undefined ***)(this + 0x10) = &PTR__UnchartedSeedChooser_06620470;
  *(undefined **)(this + 0x1a0) = &DAT_066204a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x350));
  return;
}


/* UnchartedSeedChooser::StaticNew() */

UnchartedSeedChooser * UnchartedSeedChooser::StaticNew(void)

{
  UnchartedSeedChooser *this;
  
  this = ::operator_new(0x368);
  UnchartedSeedChooser(this);
  return this;
}


/* UnchartedSeedChooser::~UnchartedSeedChooser() */

void __thiscall UnchartedSeedChooser::~UnchartedSeedChooser(UnchartedSeedChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_06620230;
  *(undefined ***)(this + 0x10) = &PTR__UnchartedSeedChooser_06620470;
  *(undefined **)(this + 0x1a0) = &DAT_066204a0;
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x350));
  SeedChooser::~SeedChooser((SeedChooser *)this);
  return;
}


/* non-virtual thunk to UnchartedSeedChooser::~UnchartedSeedChooser() */

void __thiscall UnchartedSeedChooser::~UnchartedSeedChooser(UnchartedSeedChooser *this)

{
  ~UnchartedSeedChooser(this + -0x10);
  return;
}


/* UnchartedSeedChooser::~UnchartedSeedChooser() */

void __thiscall UnchartedSeedChooser::~UnchartedSeedChooser(UnchartedSeedChooser *this)

{
  ~UnchartedSeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UnchartedSeedChooser::~UnchartedSeedChooser() */

void __thiscall UnchartedSeedChooser::~UnchartedSeedChooser(UnchartedSeedChooser *this)

{
  ~UnchartedSeedChooser(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::VerifyAndSelectSeeds() */

void __thiscall UnchartedSeedChooser::VerifyAndSelectSeeds(UnchartedSeedChooser *this)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *this_01;
  long lVar2;
  ChooserPacketData *pCVar3;
  long *plVar4;
  ResourceInfo *pRVar5;
  SeedPacket *this_02;
  int iVar6;
  long lVar7;
  code *pcVar8;
  int local_74;
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
  cVar1 = FUN_03410ddc(this_00[0x199]);
  iVar6 = (int)cVar1;
  if (0 < iVar6) {
    do {
      lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar7);
      if ((-1 < *(int *)(lVar2 + 0x20)) && (*(int *)(lVar2 + 0x30) != 5)) {
        UINewPVPTopZombieQueue::gettItem(this_00,(int)lVar7);
        lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar7);
        pCVar3 = (ChooserPacketData *)
                 FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar2 + 0x20));
        ChooserPacketData::ChooserPacketData(aCStack_48,pCVar3);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        pcVar8 = *(code **)(*plVar4 + 0x1d0);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
        (*pcVar8)(plVar4,pRVar5);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        FUN_03410e7c(lVar2 + 0x198);
        lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar7);
        if (*(char *)(lVar2 + 0x34) != '\0') {
          this_02 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
          SeedPacket::SetIsImitater(this_02,true);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
          pcVar8 = *(code **)(*plVar4 + 0x198);
          lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar7);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x28));
          SeedPacket::GetPlantType();
          (*pcVar8)(plVar4,aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        }
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar4 + 0x1b8))(aRStack_68);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        local_74 = NameMapperBase::GetIdForName(this_01,(string *)(lVar2 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_60,&local_74);
        ChooserPacketData::~ChooserPacketData(aCStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        cVar1 = FUN_03410ddc(this_00[0x199]);
        iVar6 = (int)cVar1;
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar6);
  }
  lVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aCStack_48);
  if (this[0x1e7] != (UnchartedSeedChooser)0x0) {
    do {
      lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar7);
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
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::finalizeSelection() */

void __thiscall UnchartedSeedChooser::finalizeSelection(UnchartedSeedChooser *this)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *this_01;
  long lVar2;
  ChooserPacketData *pCVar3;
  long *plVar4;
  UIWidget *this_02;
  long lVar5;
  int iVar6;
  int local_74;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_60 [24];
  ChooserPacketData aCStack_48 [40];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  lVar5 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_60);
  this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
  cVar1 = FUN_03410ddc(this_00[0x199]);
  iVar6 = (int)cVar1;
  if (0 < iVar6) {
    do {
      lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar5);
      if ((-1 < *(int *)(lVar2 + 0x20)) && (*(int *)(lVar2 + 0x30) != 5)) {
        UINewPVPTopZombieQueue::gettItem(this_00,(int)lVar5);
        lVar2 = FUN_03410e04(*(undefined8 *)(this + 0x1c8),lVar5);
        pCVar3 = (ChooserPacketData *)
                 FUN_03410e04(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar2 + 0x20));
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
        cVar1 = FUN_03410ddc(this_00[0x199]);
        iVar6 = (int)cVar1;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar6);
  }
  SlidingWidget::SlideOut((SlidingWidget *)this);
  UIWidget::SetVisible((UIWidget *)this_00,true);
  std::string::string((string *)aCStack_48,"UIViewBoardOrZombies");
  this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aCStack_48);
  UIWidget::SetVisible(this_02,false);
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
/* UnchartedSeedChooser::rebuildValidPlantTypeList() */

void __thiscall UnchartedSeedChooser::rebuildValidPlantTypeList(UnchartedSeedChooser *this)

{
  int iVar1;
  bool bVar2;
  ProfileMgr *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  LineBreakCategory *pLVar3;
  wchar16 *pwVar4;
  RtObject *this_02;
  string *psVar5;
  SeedPacket_Uncharted *this_03;
  int *piVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x4;
  code *pcVar8;
  LineBreakCategory aLStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20 [2];
  uint local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::deleteChooserPackets((SeedChooser *)this);
  ResetPlantNumList(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)PVZ2UnchartedModeUtils::GetPlantNumList();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    pLVar3 = (LineBreakCategory *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *(int *)(pLVar3 + 4);
    ServerPlantID::ServerPlantID((ServerPlantID *)local_18,*(int *)pLVar3);
    ServerPlantID::ToString();
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = aLStack_38;
    std::string::string((string *)local_18,"FreePlanting");
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              (pwVar4,(wchar16 *)local_18,pLVar7,pLVar3,in_x4);
    std::string::~string((string *)local_18);
    nop();
    Sexy::RtName::RtName((RtName *)local_18,(RtName *)(this + 800));
    UIWidget::CreateWidget((ServerPlantID *)local_18,1);
    nop();
    Sexy::RtName::~RtName((RtName *)local_18);
    pcVar8 = *(code **)(*(long *)this_02 + 0x198);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    (*pcVar8)(this_02,(ServerPlantID *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    in_x4 = (LineBreakCategory *)0x0;
    SeedChooser::initializeSeedPacket((SeedChooser *)this,this_02,0,(ServerPlantID *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    bVar2 = Sexy::RtObject::IsA<SeedPacket_Uncharted>(this_02);
    if (bVar2) {
      this_03 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(this_02);
      SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this_03,iVar1);
      SeedPacket::SetDisabled((SeedPacket *)this_03,false);
    }
    std::string::~string((string *)local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  local_20[0] = FUN_03410df8(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
  local_18[0] = (uint)(byte)this[0x1e6];
  piVar6 = eastl::min_alt<int>((int *)local_20,(int *)local_18);
  this[0x1e7] = SUB41(*piVar6,0);
  SeedChooser::initChooserPackets((SeedChooser *)this);
  SeedChooser::updateFavoriteSorting((SeedChooser *)this);
  DangerRoomSeedChooser::checkButtons((DangerRoomSeedChooser *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::drawArtifact(Sexy::Graphics*, Sexy::Point const&) const */

void __thiscall
UnchartedSeedChooser::drawArtifact(UnchartedSeedChooser *this,Graphics *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = FUN_0441bf40(0x14);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0xf);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(100);
  iVar4 = FUN_0441bf40(0x82);
  Sexy::Insets::Insets(aIStack_18,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar4);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07588);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  TodStringTranslate(L"[ARTIFACT]");
  iVar1 = FUN_0441bf40(0x14);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0x11);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(0x5f);
  iVar4 = FUN_0441bf40(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,(Insets *)&iStack_38,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50((Insets *)&iStack_38);
  iVar1 = FUN_0441bf40(0x22);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0x3c);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(0x46);
  Sexy::Insets::Insets((Insets *)&iStack_38,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&iStack_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070b8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  iVar5 = iStack_38;
  if (*(long *)(this + 0x250) == 0) goto LAB_04420974;
  iVar2 = FUN_0441bf40(7);
  iVar1 = iStack_30;
  iVar6 = iVar2 + iStack_34;
  iVar3 = FUN_0441bf40(0xe);
  Sexy::Insets::Insets(aIStack_18,iVar5 + iVar2,iVar6,iVar1 - iVar3,iStack_2c - iVar3);
  DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x250));
  iVar5 = *(int *)(this + 0x25c);
  if (iVar5 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07538;
LAB_044209c8:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar5 = iStack_38 + iStack_30;
    iVar1 = FUN_0441bf40(0x18);
    iVar6 = iStack_34;
    iVar2 = FUN_0441bf40(5);
    iVar3 = FUN_0441bf40(0x14);
    iVar4 = FUN_0441bf40(0x17);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 - iVar1,iVar6 + iVar2,iVar3,iVar4);
  }
  else {
    if (iVar5 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070e0;
      goto LAB_044209c8;
    }
    if (iVar5 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07600;
      goto LAB_044209c8;
    }
    if (iVar5 == 4) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07170;
      goto LAB_044209c8;
    }
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 600));
  Sexy::ToWString(asStack_48);
  iVar5 = FUN_0441bf40(0x20);
  iVar6 = FUN_0441bf40(0x19);
  iVar1 = FUN_0441bf40(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,(iStack_38 + iStack_30) - iVar5,(iStack_34 + iStack_2c) - iVar6,iVar1,iVar6)
  ;
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
LAB_04420974:
  SeedChooser::drawTranslatedWidget((SeedChooser *)this,param_1,*(Widget **)(this + 0x218));
  SeedChooser::drawTranslatedWidget((SeedChooser *)this,param_1,*(Widget **)(this + 0x220));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::initPlantFromRecord() */

void __thiscall UnchartedSeedChooser::initPlantFromRecord(UnchartedSeedChooser *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  UnchartedSeedChooser UVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_01;
  PlayerInfo *pPVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  string *psVar10;
  PVPManager *pPVar11;
  undefined8 uVar12;
  SexyVector2 *pSVar13;
  SeedPacket *pSVar14;
  long *plVar15;
  UnchartedModeBoardRecord *pUVar16;
  ulong uVar17;
  NameMapperBase *this_02;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  string asStack_b0 [8];
  string asStack_a8 [8];
  undefined8 uStack_a0;
  string asStack_98 [8];
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar4 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
  if (0 < iVar4) {
    BoardHelpers::ApplyLevelOverride_RiftTimedToolList((vector *)avStack_80);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_68);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x3e);
  if ((cVar2 != '\0') && ((byte)this[0x1e4] < (byte)this[0x1e7])) {
    SeedChooser::getBattleArrayType((SeedChooser *)this);
    lVar7 = PlayerInfo::GetBattleArrayRecord(pPVar6,*(undefined4 *)(this + 0x300));
    if (lVar7 != 0) {
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)&uStack_68,(vector *)(lVar7 + 8));
    }
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&uStack_68)
  ;
  if (cVar2 == '\0') {
    cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
    if (cVar2 != '\0') {
      iVar4 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
      if (iVar4 == 3) {
        pUVar16 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
        UnchartedModeBoardRecord::UnchartedModeBoardRecord
                  ((UnchartedModeBoardRecord *)auStack_50,pUVar16);
        lVar7 = FUN_0441b318(uStack_38,uStack_30);
        if (lVar7 != 0) {
          uVar20 = 0;
          std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)&uStack_68)
          ;
          iVar4 = 0;
          while( true ) {
            uVar21 = uStack_38;
            uVar17 = FUN_0441b318(uStack_38,uStack_30);
            if (uVar17 <= uVar20) break;
            piVar8 = (int *)FUN_0441b3d4(uVar21,uVar20);
            iVar5 = *piVar8;
            if (iVar5 == iVar4) {
              this_02 = (NameMapperBase *)PlantNameMapper::GetInstance();
              std::string::string((string *)auStack_88,"imitater");
              uVar22 = NameMapperBase::GetIdForName(this_02,(string *)auStack_88);
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar22);
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)&uStack_68,(int *)&uStack_90);
              std::string::~string((string *)auStack_88);
              nop();
            }
            else {
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)&uStack_68,piVar8);
            }
            uVar20 = uVar20 + 1;
            iVar4 = iVar5;
          }
        }
        UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)auStack_50);
      }
    }
    auStack_88[0] = FUN_0441b318(uStack_68,uStack_60);
    auStack_50[0] = CONCAT44(auStack_50[0]._4_4_,(uint)(byte)this[0x1e7]);
    piVar8 = eastl::min_alt<int>((int *)auStack_88,(int *)auStack_50);
    iVar4 = *piVar8;
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        iVar5 = PlantNameMapper::GetInstance();
        FUN_0441b3d4(uStack_68,lVar7);
        NameMapperBase::GetNameForId(iVar5);
        uVar21 = *(undefined8 *)(*(long *)(this + 0x298) + 0x60);
        lVar9 = FUN_0441b344(uVar21,*(undefined8 *)(*(long *)(this + 0x298) + 0x68));
        lVar19 = 0;
        do {
          if (lVar19 == lVar9) {
            lVar19 = 0;
            goto LAB_0442c378;
          }
          psVar10 = (string *)FUN_0441b3cc(uVar21,lVar19);
          cVar2 = std::operator==(asStack_b0,psVar10);
          lVar19 = lVar19 + 1;
        } while (cVar2 == '\0');
LAB_0442c6e0:
        std::string::~string(asStack_b0);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < iVar4);
    }
    if (*(long *)(this + 0x200) != 0) {
      *(undefined1 *)(*(long *)(this + 0x200) + 0x6e) = 0;
    }
  }
LAB_0442c51c:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&uStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_80);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0442c378:
  uVar21 = *(undefined8 *)(this + 0x1b0);
  iVar5 = FUN_0441b350(uVar21,*(undefined8 *)(this + 0x1b8));
  if (iVar5 <= (int)lVar19) goto LAB_0442c6e0;
  lVar9 = FUN_0441b35c(uVar21,lVar19);
  pPVar11 = (PVPManager *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x28));
  uVar21 = PVPManager::GetPVPMapDataList(pPVar11);
  FUN_05475d88(asStack_a8,uVar21);
  uVar21 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_80);
  uStack_a0 = FUN_044225c8(uVar21,uVar12,asStack_a8);
  auStack_50[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)avStack_80);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_a0,(__normal_iterator *)auStack_50);
  if (!bVar3) {
    lVar9 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar19);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x28));
    SeedPacket::GetPlantType();
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
    cVar2 = std::operator==((string *)(lVar9 + 8),asStack_b0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
    if (cVar2 != '\0') {
      lVar9 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar19);
      if (*(int *)(lVar9 + 0x30) == 3) {
LAB_0442c6d8:
        std::string::~string(asStack_a8);
        goto LAB_0442c6e0;
      }
      pSVar13 = (SexyVector2 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),this[0x1e4]);
      this_00 = (RtMixedPtr<Sexy::Image> *)(pSVar13 + 0x28);
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
      if (cVar2 == '\0') {
        pPVar11 = (PVPManager *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        uVar21 = PVPManager::GetPVPMapDataList(pPVar11);
        FUN_05475d88(asStack_98,uVar21);
        uVar21 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
        uVar12 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
        uStack_90 = FUN_0442279c(uVar21,uVar12,asStack_98);
        auStack_50[0] =
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&uStack_90,(__normal_iterator *)auStack_50);
        if (!bVar3) {
          pSVar13[0x34] = *(SexyVector2 *)(lVar9 + 0x34);
          pSVar14 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          SeedPacket::SetIsImitater(pSVar14,*(bool *)(lVar9 + 0x34));
          pcVar18 = *(code **)(*(long *)this + 0x1b8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)auStack_88,(RtWeakPtrBase *)this_00);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)auStack_50,(RtWeakPtrBase *)(lVar9 + 0x28));
          (*pcVar18)(this,(RtWeakPtr<Sexy::SoundResource> *)auStack_88,
                     (RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)auStack_88);
          if (*(char *)(lVar9 + 0x34) == '\0') {
            plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pcVar18 = *(code **)(*plVar15 + 0x198);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x28));
            SeedPacket::GetPlantType();
            (*pcVar18)(plVar15,(RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
LAB_0442c63c:
            *(undefined4 *)(pSVar13 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
            *(undefined4 *)(pSVar13 + 0x30) = 2;
            uVar22 = PVZ_T();
            *(undefined4 *)(pSVar13 + 8) = uVar22;
            fVar23 = (float)PVZ_T();
            *(float *)(pSVar13 + 0xc) = fVar23 + 0.5;
            SeedChooser::calcPacketPositionInBank
                      ((SeedChooser *)this,(uint)(byte)this[0x1e4],pSVar13);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            UIWidget::SetPositionOffset(*(undefined4 *)pSVar13,*(undefined4 *)(pSVar13 + 4));
            pSVar14 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            SeedPacket::setIsNeedShowExpTip(pSVar14,true);
            *(undefined8 *)(pSVar13 + 0x10) = *(undefined8 *)pSVar13;
            *(undefined8 *)(pSVar13 + 0x18) = *(undefined8 *)pSVar13;
            *(uint *)(pSVar13 + 0x24) = (uint)(byte)this[0x1e4];
            *(undefined4 *)(lVar9 + 0x30) = 5;
            UVar1 = this[0x1e4];
            this[0x1e4] = (UnchartedSeedChooser)((char)UVar1 + '\x01');
            if (this[0x1e7] == (UnchartedSeedChooser)((char)UVar1 + '\x01')) {
              if (*(long *)(this + 0x1f8) != 0) {
                *(undefined1 *)(*(long *)(this + 0x1f8) + 0x6e) = 0;
              }
              if (*(long *)(this + 0x200) != 0) {
                *(undefined1 *)(*(long *)(this + 0x200) + 0x6e) = 0;
              }
              std::string::~string(asStack_98);
              std::string::~string(asStack_a8);
              std::string::~string(asStack_b0);
              goto LAB_0442c51c;
            }
          }
          else {
            UVar1 = this[0x1e4];
            if ((byte)UVar1 != 0) {
              plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              pcVar18 = *(code **)(*plVar15 + 0x198);
              lVar19 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),(long)(int)((byte)UVar1 - 1));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar19 + 0x28));
              SeedPacket::GetPlantType();
              (*pcVar18)(plVar15,(RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)auStack_50);
              goto LAB_0442c63c;
            }
          }
          std::string::~string(asStack_98);
          goto LAB_0442c6d8;
        }
        std::string::~string(asStack_98);
      }
    }
  }
  lVar19 = lVar19 + 1;
  std::string::~string(asStack_a8);
  goto LAB_0442c378;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedSeedChooser::onSlideInFinished() */

void __thiscall UnchartedSeedChooser::onSlideInFinished(UnchartedSeedChooser *this)

{
  bool bVar1;
  vector *pvVar2;
  long lVar3;
  UIMessageBox *this_00;
  undefined8 local_70;
  vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> avStack_68 [24];
  undefined8 local_50 [3];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::onSlideInFinished((SeedChooser *)this);
  pvVar2 = (vector *)PVZ2UnchartedModeUtils::GetPlantNumList();
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::vector
            (avStack_68,pvVar2);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_50[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_50)
        , bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    if (0 < *(int *)(lVar3 + 4)) goto LAB_034134f4;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,2);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onMessageBoxCallback);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UnchartedSeedChooser,void(UnchartedSeedChooser::*)(UIMessageBox*,int)>
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
LAB_034134f4:
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
            (avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

