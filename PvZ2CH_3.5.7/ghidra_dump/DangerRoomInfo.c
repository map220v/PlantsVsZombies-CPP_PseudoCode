// Class: DangerRoomInfo


/* DangerRoomInfo::~DangerRoomInfo() */

void __thiscall DangerRoomInfo::~DangerRoomInfo(DangerRoomInfo *this)

{
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::~vector
            ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)(this + 0x90))
  ;
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::~vector
            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)(this + 0x58));
  std::vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>>::~vector
            ((vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>> *)(this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  std::string::~string((string *)this);
  return;
}


/* DangerRoomInfo::DangerRoomInfo(DangerRoomInfo const&) */

void __thiscall DangerRoomInfo::DangerRoomInfo(DangerRoomInfo *this,DangerRoomInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DangerRoomInfo DVar6;
  DangerRoomInfo DVar7;
  undefined8 uVar8;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x80) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  thunk_FUN_05475e00(this,param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  this[0x10] = param_1[0x10];
  *(undefined2 *)(this + 0x12) = *(undefined2 *)(param_1 + 0x12);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  DVar6 = param_1[0x3c];
  this[0x3d] = param_1[0x3d];
  *(undefined8 *)(this + 0x30) = uVar8;
  *(undefined4 *)(this + 0x38) = uVar1;
  this[0x3c] = DVar6;
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::operator=
            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  DVar6 = param_1[0x70];
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  uVar4 = *(undefined4 *)(param_1 + 0x84);
  uVar5 = *(undefined4 *)(param_1 + 0x88);
  DVar7 = param_1[0x8c];
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  this[0x70] = DVar6;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  *(undefined4 *)(this + 0x84) = uVar4;
  *(undefined4 *)(this + 0x88) = uVar5;
  this[0x8c] = DVar7;
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::operator=
            ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  return;
}


/* DangerRoomInfo::TEMPNAMEPLACEHOLDERVALUE(DangerRoomInfo const&) const */

undefined8 __thiscall DangerRoomInfo::operator==(DangerRoomInfo *this,DangerRoomInfo *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar10 = 0;
  iVar2 = FUN_054748a4();
  if (((iVar2 == 0) && (*(long *)(param_1 + 8) == *(long *)(this + 8))) &&
     ((*(uint *)(param_1 + 0x10) & 0xffff00ff) == (*(uint *)(this + 0x10) & 0xffff00ff))) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = FUN_032f3f00(uVar12,*(undefined8 *)(param_1 + 0x20));
    uVar13 = *(undefined8 *)(this + 0x18);
    lVar4 = FUN_032f3f00(uVar13,*(undefined8 *)(this + 0x20));
    if (((((lVar3 == lVar4) && (*(long *)(param_1 + 0x30) == *(long *)(this + 0x30))) &&
         (((*(ulong *)(param_1 + 0x38) & 0xffffffffffff) ==
           (*(ulong *)(this + 0x38) & 0xffffffffffff) &&
          (((*(ulong *)(param_1 + 0x70) & 0xffffffff000000ff) ==
            (*(ulong *)(this + 0x70) & 0xffffffff000000ff) &&
           (*(long *)(param_1 + 0x78) == *(long *)(this + 0x78))))))) &&
        (*(int *)(param_1 + 0x84) == *(int *)(this + 0x84))) &&
       (*(int *)(param_1 + 0x88) == *(int *)(this + 0x88))) {
      uVar14 = *(undefined8 *)(param_1 + 0x90);
      lVar4 = FUN_032f3f0c(uVar14,*(undefined8 *)(param_1 + 0x98));
      uVar15 = *(undefined8 *)(this + 0x90);
      lVar5 = FUN_032f3f0c(uVar15,*(undefined8 *)(this + 0x98));
      if ((lVar4 == lVar5) && (param_1[0x8c] == this[0x8c])) {
        lVar5 = 0;
        if (lVar3 != 0) {
          do {
            lVar11 = 0;
            do {
              if (lVar11 == lVar3) {
                return 0;
              }
              piVar6 = (int *)FUN_032f3f34(uVar12,lVar11);
              piVar7 = (int *)FUN_032f3f34(uVar13,lVar5);
              lVar11 = lVar11 + 1;
            } while (*piVar6 != *piVar7);
            lVar5 = lVar5 + 1;
          } while (lVar5 != lVar3);
        }
        lVar3 = 0;
        if (lVar4 != 0) {
          do {
            lVar5 = 0;
            do {
              if (lVar5 == lVar4) {
                return 0;
              }
              puVar8 = (undefined4 *)FUN_032f3f3c(uVar14,lVar5);
              puVar9 = (undefined4 *)FUN_032f3f3c(uVar15,lVar3);
              cVar1 = FUN_032f3cf8(*puVar8,puVar8[1],puVar8[3],*puVar9,puVar9[1],puVar9[3]);
              lVar5 = lVar5 + 1;
            } while (cVar1 == '\0');
            lVar3 = lVar3 + 1;
          } while (lVar3 != lVar4);
        }
        uVar10 = 1;
      }
    }
  }
  return uVar10;
}


/* DangerRoomInfo::DangerRoomInfo() */

void __thiscall DangerRoomInfo::DangerRoomInfo(DangerRoomInfo *this)

{
  byte bVar1;
  string *psVar2;
  wchar16 **extraout_x1;
  undefined1 in_w2;
  undefined7 in_register_00004011;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x80) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  psVar2 = std::string::append((string *)this,"",CONCAT71(in_register_00004011,in_w2));
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (DangerRoomInfo)0x0;
  bVar1 = EA::StdC::Spawn((wchar16 *)psVar2,extraout_x1,(bool)in_w2);
  *(ushort *)(this + 0x12) = (ushort)bVar1;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x18));
  this[0x3c] = (DangerRoomInfo)0x1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3d] = (DangerRoomInfo)0x0;
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::clear
            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)(this + 0x58));
  this[0x70] = (DangerRoomInfo)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x8c] = (DangerRoomInfo)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::clear
            ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)(this + 0x90))
  ;
  return;
}


/* DangerRoomInfo::TEMPNAMEPLACEHOLDERVALUE(DangerRoomInfo const&) */

DangerRoomInfo * __thiscall DangerRoomInfo::operator=(DangerRoomInfo *this,DangerRoomInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DangerRoomInfo DVar7;
  undefined8 uVar8;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  this[0x10] = param_1[0x10];
  *(undefined2 *)(this + 0x12) = *(undefined2 *)(param_1 + 0x12);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  DVar7 = param_1[0x3c];
  this[0x3d] = param_1[0x3d];
  *(undefined8 *)(this + 0x30) = uVar8;
  *(undefined4 *)(this + 0x38) = uVar1;
  this[0x3c] = DVar7;
  std::vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>>::operator=
            ((vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::operator=
            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  DVar7 = param_1[0x70];
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  uVar4 = *(undefined4 *)(param_1 + 0x80);
  uVar5 = *(undefined4 *)(param_1 + 0x84);
  uVar6 = *(undefined4 *)(param_1 + 0x88);
  this[0x8c] = param_1[0x8c];
  this[0x70] = DVar7;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar3;
  *(undefined4 *)(this + 0x80) = uVar4;
  *(undefined4 *)(this + 0x84) = uVar5;
  *(undefined4 *)(this + 0x88) = uVar6;
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::operator=
            ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  return this;
}


/* DangerRoomInfo::HasLostDangerRoom() const */

ushort __thiscall DangerRoomInfo::HasLostDangerRoom(DangerRoomInfo *this)

{
  return *(ushort *)(this + 0x12) & 1 ^ 1;
}


/* DangerRoomInfo::HasLawnMowerInRow(int) const */

uint __thiscall DangerRoomInfo::HasLawnMowerInRow(DangerRoomInfo *this,int param_1)

{
  return (int)(uint)*(ushort *)(this + 0x12) >> (param_1 + 1U & 0x1f) & 1;
}


/* DangerRoomInfo::GetLawnMowerCount() const */

int __thiscall DangerRoomInfo::GetLawnMowerCount(DangerRoomInfo *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    cVar2 = HasLawnMowerInRow(this,iVar3);
    if (cVar2 != '\0') {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar1;
  } while (iVar1 != 5);
  return iVar4;
}


/* DangerRoomInfo::SetHasLostDangerRoom(bool) */

void DangerRoomInfo::SetHasLostDangerRoom(bool param_1)

{
  ushort uVar1;
  wchar16 *pwVar2;
  byte in_w1;
  bool in_w2;
  
  pwVar2 = (wchar16 *)(ulong)param_1;
  if (in_w1 == 0) {
    pwVar2[9] = pwVar2[9] | 1;
    FUN_03ca7740(pwVar2 + 0x18);
    return;
  }
  uVar1 = EA::StdC::Spawn(pwVar2,(wchar16 **)(ulong)in_w1,in_w2);
  pwVar2[9] = uVar1 & 0xfe;
  FUN_03ca7740(pwVar2 + 0x18);
  return;
}


/* DangerRoomInfo::SetLawnMowerStatusInRows(std::vector<unsigned char, std::allocator<unsigned char>
   > const&) */

void __thiscall DangerRoomInfo::SetLawnMowerStatusInRows(DangerRoomInfo *this,vector *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = HasLostDangerRoom(this);
  uVar7 = 1;
  lVar6 = 0;
  uVar2 = uVar2 & 0xff ^ 1;
  uVar9 = *(undefined8 *)param_1;
  lVar3 = FUN_03ca7590(uVar9,*(undefined8 *)(param_1 + 8));
  while (uVar8 = (undefined2)uVar2, lVar5 = lVar6, lVar6 != lVar3) {
    while( true ) {
      lVar6 = lVar5 + 1;
      pcVar4 = (char *)FUN_03ca7598(uVar9,lVar5);
      uVar1 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      if (*pcVar4 == '\0') break;
      uVar2 = 1 << (ulong)uVar1 & 0xffffU | uVar2;
      uVar8 = (undefined2)uVar2;
      lVar5 = lVar6;
      if (lVar6 == lVar3) goto LAB_03ca7850;
    }
  }
LAB_03ca7850:
  *(undefined2 *)(this + 0x12) = uVar8;
  FUN_03ca7740(this + 0x30);
  return;
}


/* DangerRoomInfo::ClearImmediateRewards() */

void __thiscall DangerRoomInfo::ClearImmediateRewards(DangerRoomInfo *this)

{
  std::vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>>::clear
            ((vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>> *)(this + 0x40));
  return;
}


/* DangerRoomInfo::AddImmediateReward(DangerRoomRewardInfo) */

void __thiscall
DangerRoomInfo::AddImmediateReward(DangerRoomInfo *this,DangerRoomRewardInfo *param_2)

{
  std::vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>>::push_back
            ((vector<DangerRoomRewardInfo,std::allocator<DangerRoomRewardInfo>> *)(this + 0x40),
             param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomInfo::ApplyImmediateRewards() */

void __thiscall DangerRoomInfo::ApplyImmediateRewards(DangerRoomInfo *this)

{
  bool bVar1;
  Item *pIVar2;
  undefined8 local_28;
  undefined8 local_20;
  Item aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x40));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pIVar2 = (Item *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    EndurianGasSubsystem::Item::Item(aIStack_18,pIVar2);
    DangerRoomRewardInfo::ApplyReward((DangerRoomRewardInfo *)aIStack_18,this);
    WidgetImg::~WidgetImg((WidgetImg *)aIStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomInfo::RestartRoom() */

void DangerRoomInfo::RestartRoom(void)

{
  wchar16 *pwVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  DangerRoomModule *in_x0;
  long lVar5;
  undefined8 uVar6;
  wchar16 **in_x1;
  bool in_w2;
  int iVar7;
  undefined1 auVar8 [16];
  int local_3c;
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20 [3];
  wchar16 *local_8;
  
  pwVar1 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(in_x0 + 8) = 0;
  in_x0[0x10] = (DangerRoomModule)0x0;
  bVar2 = EA::StdC::Spawn(pwVar1,in_x1,in_w2);
  *(undefined4 *)(in_x0 + 0x38) = 0;
  *(ushort *)(in_x0 + 0x12) = (ushort)bVar2;
  in_x0[0x3d] = (DangerRoomModule)0x0;
  in_x0[0x3c] = (DangerRoomModule)0x1;
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::clear
            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)(in_x0 + 0x58));
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::clear
            ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)(in_x0 + 0x90)
            );
  *(undefined4 *)(in_x0 + 0x88) = 0;
  in_x0[0x8c] = (DangerRoomModule)0x0;
  *(undefined4 *)(in_x0 + 0x74) = 0;
  *(undefined4 *)(in_x0 + 0x78) = 0;
  auVar8 = PlantNameMapper::GetInstance();
  DangerRoomModule::GetWorldSpecificPropertySheetByWorldName(in_x0,auVar8._8_8_);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(in_x0 + 0x18));
  cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar3 != '\0') {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x10));
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar5 + 0x10));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)local_20), bVar4)
    {
      uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      FUN_05475d88(asStack_30,uVar6);
      local_3c = NameMapperBase::GetIdForName(auVar8._0_8_,asStack_30);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(in_x0 + 0x18),&local_3c);
      std::string::~string(asStack_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  iVar7 = 5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  do {
    local_28 = CONCAT71(local_28._1_7_,1);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)local_20,(uchar *)&local_28);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  SetHasLostDangerRoom(SUB81(in_x0,0));
  SetLawnMowerStatusInRows((DangerRoomInfo *)in_x0,(vector *)local_20);
  FUN_03ca7740(in_x0 + 0x30);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomInfo::EventRestartRoom() */

void DangerRoomInfo::EventRestartRoom(void)

{
  wchar16 *pwVar1;
  byte bVar2;
  bool bVar3;
  DangerRoomModule *in_x0;
  long lVar4;
  undefined8 uVar5;
  wchar16 **in_x1;
  bool in_w2;
  int iVar6;
  undefined1 auVar7 [16];
  int local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20 [3];
  wchar16 *local_8;
  
  pwVar1 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(in_x0 + 8) = 0;
  in_x0[0x10] = (DangerRoomModule)0x0;
  bVar2 = EA::StdC::Spawn(pwVar1,in_x1,in_w2);
  *(undefined4 *)(in_x0 + 0x38) = 0;
  *(ushort *)(in_x0 + 0x12) = (ushort)bVar2;
  in_x0[0x3d] = (DangerRoomModule)0x0;
  in_x0[0x3c] = (DangerRoomModule)0x1;
  std::vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>>::clear
            ((vector<DangerRoomPlantInfo,std::allocator<DangerRoomPlantInfo>> *)(in_x0 + 0x58));
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::clear
            ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)(in_x0 + 0x90)
            );
  in_x0[0x70] = (DangerRoomModule)0x0;
  in_x0[0x8c] = (DangerRoomModule)0x0;
  *(undefined4 *)(in_x0 + 0x74) = 0;
  *(undefined4 *)(in_x0 + 0x78) = 0;
  *(undefined4 *)(in_x0 + 0x7c) = 0;
  *(undefined4 *)(in_x0 + 0x84) = 0;
  *(undefined4 *)(in_x0 + 0x88) = 0;
  *(undefined4 *)(in_x0 + 0xc) = 0;
  auVar7 = PlantNameMapper::GetInstance();
  DangerRoomModule::GetWorldSpecificPropertySheetByWorldName(in_x0,auVar7._8_8_);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(in_x0 + 0x18));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar4 + 0x10));
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar4 + 0x10));
  while (bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20)
        , bVar3) {
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    FUN_05475d88(asStack_30,uVar5);
    local_3c = NameMapperBase::GetIdForName(auVar7._0_8_,asStack_30);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(in_x0 + 0x18),&local_3c);
    std::string::~string(asStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  iVar6 = 5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  do {
    local_28 = CONCAT71(local_28._1_7_,1);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)local_20,(uchar *)&local_28);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  SetHasLostDangerRoom(SUB81(in_x0,0));
  SetLawnMowerStatusInRows((DangerRoomInfo *)in_x0,(vector *)local_20);
  FUN_03ca7740(in_x0 + 0x30);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

